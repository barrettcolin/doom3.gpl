#include "../../idlib/precompiled.h"
#pragma hdrstop

#include "../../sound/snd_local.h"
#include "win_local.h"
#include "win_snd.h"

#define SAFE_RELEASE(p)      { if(p) { (p)->Release(); (p)=NULL; } }

namespace
{
    class BufferCallback : public IXAudio2VoiceCallback
    {
        HANDLE m_BufferEvent;

    public:
        BufferCallback()
            : m_BufferEvent(::CreateEvent(NULL, FALSE, FALSE, NULL))
        {
        }

        ~BufferCallback()
        {
            ::CloseHandle(m_BufferEvent);
        }

        void WaitBuffer(IXAudio2SourceVoice *voice)
        {
            XAUDIO2_VOICE_STATE state;
            voice->GetState(&state);

            if(state.BuffersQueued >= idAudioHardwareXAudio2Settings::kNumBuffers)
            {
                ::WaitForSingleObject(m_BufferEvent, INFINITE);
            }
        }

        void WaitAllBuffers(IXAudio2SourceVoice *voice)
        {
            XAUDIO2_VOICE_STATE state;
            while(voice->GetState(&state), state.BuffersQueued > 0)
            {
                ::WaitForSingleObjectEx(m_BufferEvent, INFINITE, TRUE);
            }
        }

    protected:
        STDMETHOD_(void, OnVoiceProcessingPassStart)(UINT32) {}

        STDMETHOD_(void, OnVoiceProcessingPassEnd)() {}

        STDMETHOD_(void, OnStreamEnd)() {}

        STDMETHOD_(void, OnBufferStart)(void*) {}

        STDMETHOD_(void, OnBufferEnd)(void*)
        {
            ::SetEvent(m_BufferEvent);
        }

        STDMETHOD_(void, OnLoopEnd)(void*) {}

        STDMETHOD_(void, OnVoiceError)(void*, HRESULT) {}

    } s_BufferCallback;
}

idAudioHardwareXAudio2::idAudioHardwareXAudio2() 
    : m_XAudio2(NULL),
    m_MasteringVoice(NULL),
    m_NumSpeakers(0),
    m_CurrentMixBuffer(0),
    m_SourceVoice(NULL)
{
    ::ZeroMemory(m_MixBuffers, sizeof(m_MixBuffers));
}

idAudioHardwareXAudio2::~idAudioHardwareXAudio2()
{
    Destroy();
}

bool idAudioHardwareXAudio2::Initialize()
{
    Destroy();

    return (1 == TryCreate() ? true : false);
}

bool idAudioHardwareXAudio2::Flush()
{
    // Contrary to idAudioHardware::Flush, this will block until a buffer is available
    //s_BufferCallback.WaitBuffer(m_SourceVoice);
    return true;
}

void idAudioHardwareXAudio2::Write(bool flush)
{
    XAUDIO2_BUFFER buf = { 0 };
    {
        buf.AudioBytes = GetMixBufferSize();
        buf.pAudioData = m_MixBuffers[m_CurrentMixBuffer];
    }
    m_SourceVoice->SubmitSourceBuffer(&buf);

    m_CurrentMixBuffer = (m_CurrentMixBuffer + 1) % idAudioHardwareXAudio2Settings::kNumBuffers;
}

short *idAudioHardwareXAudio2::GetMixBuffer()
{
    return reinterpret_cast<short *>(m_MixBuffers[m_CurrentMixBuffer]);
}

int idAudioHardwareXAudio2::TryCreate()
{
    for(;;)
    {
        if(FAILED(XAudio2Create(&m_XAudio2)))
            break;

        if(FAILED(m_XAudio2->CreateMasteringVoice(&m_MasteringVoice)))
            break;

        XAUDIO2_VOICE_DETAILS mastering_voice_details;
        m_MasteringVoice->GetVoiceDetails(&mastering_voice_details);
        m_NumSpeakers = Min<int>(mastering_voice_details.InputChannels, 6);

        WAVEFORMATEX wave_format = { 0 };
        {
            wave_format.cbSize = sizeof(wave_format);
            wave_format.wFormatTag = WAVE_FORMAT_PCM;
            wave_format.nChannels = m_NumSpeakers;
            wave_format.nSamplesPerSec = PRIMARYFREQ;
            wave_format.wBitsPerSample = 16;
            wave_format.nBlockAlign = wave_format.wBitsPerSample / 8 * wave_format.nChannels;
            wave_format.nAvgBytesPerSec = wave_format.nSamplesPerSec * wave_format.nBlockAlign;
        }

        if(FAILED(m_XAudio2->CreateSourceVoice(&m_SourceVoice, &wave_format, 0, 2.0f, &s_BufferCallback)))
            break;

        if(FAILED(m_SourceVoice->Start(0)))
            break;

        int const buffer_size = GetMixBufferSize();
        for(int i = 0; i < idAudioHardwareXAudio2Settings::kNumBuffers; i++)
        {
            m_MixBuffers[i] = static_cast<BYTE *>(Mem_Alloc(buffer_size));
        }

        return 1;
    }

    Destroy();
    return 0;
}

void idAudioHardwareXAudio2::Destroy()
{
    if(m_SourceVoice)
    {
        m_SourceVoice->Stop(0);

        s_BufferCallback.WaitAllBuffers(m_SourceVoice);
        for(int i = 0; i < idAudioHardwareXAudio2Settings::kNumBuffers; i++)
        {
            Mem_Free(m_MixBuffers[i]);
            m_MixBuffers[i] = NULL;
        }

        m_SourceVoice->DestroyVoice();
        m_SourceVoice = NULL;
    }

    if(m_MasteringVoice)
    {
        m_MasteringVoice->DestroyVoice();
        m_MasteringVoice = NULL;
    }

    SAFE_RELEASE(m_XAudio2);
}
