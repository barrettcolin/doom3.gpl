#include "../../idlib/precompiled.h"
#pragma hdrstop

#include "../../sound/snd_local.h"
#include "win_local.h"
#include "win_snd.h"

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
    Shutdown();
}

bool idAudioHardwareXAudio2::Initialize()
{
    Shutdown();

    return (1 == Init() ? true : false);
}

bool idAudioHardwareXAudio2::Flush()
{
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

    m_CurrentMixBuffer = (m_CurrentMixBuffer + 1) % kNumBuffers;
}

short *idAudioHardwareXAudio2::GetMixBuffer()
{
    return reinterpret_cast<short *>(m_MixBuffers[m_CurrentMixBuffer]);
}

int idAudioHardwareXAudio2::Init()
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

        if(FAILED(m_XAudio2->CreateSourceVoice(&m_SourceVoice, &wave_format)))
            break;

        if(FAILED(m_SourceVoice->Start(0)))
            break;

        int const buffer_size = GetMixBufferSize();
        for(int i = 0; i < kNumBuffers; i++)
        {
            m_MixBuffers[i] = static_cast<BYTE *>(Mem_Alloc(buffer_size));
        }

        return 1;
    }

    Shutdown();
    return 0;
}

void idAudioHardwareXAudio2::Shutdown()
{
    if(m_SourceVoice)
    {
        m_SourceVoice->FlushSourceBuffers();
        m_SourceVoice->DestroyVoice();
        m_SourceVoice = NULL;

        for(int i = 0; i < kNumBuffers; i++)
        {
            Mem_Free(m_MixBuffers[i]);
            m_MixBuffers[i] = NULL;
        }
    }

    if(m_MasteringVoice)
    {
        m_MasteringVoice->DestroyVoice();
        m_MasteringVoice = NULL;
    }

    if(m_XAudio2)
    {
        m_XAudio2->Release();
        m_XAudio2 = NULL;
    }
}
