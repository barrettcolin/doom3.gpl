#ifndef __WIN_SND_H__
#define __WIN_SND_H__

#include <xaudio2.h>

namespace idAudioHardwareXAudio2Settings
{
    enum
    {
        // TODO ensure this doesn't go under 3
        kNumBuffers = 3
    };
}

class idAudioHardwareXAudio2 : public idAudioHardware
{
public:
    idAudioHardwareXAudio2();

    ~idAudioHardwareXAudio2();

    bool Initialize();

    // XAudio2 is not memory mapped
    bool Lock(void **pDSLockedBuffer, ulong *dwDSLockedBufferSize) { return false; }
    bool Unlock(void *pDSLockedBuffer, dword dwDSLockedBufferSize) { return false; }
    bool GetCurrentPosition(ulong *pdwCurrentWriteCursor) { return false; }
	
    int GetNumberOfSpeakers()
    {
        return m_NumSpeakers;
    }

    int GetMixBufferSize()
    {
        return sizeof(short) * m_NumSpeakers * MIXBUFFER_SAMPLES;
    }

    bool Flush();

    void Write(bool flush);

    short *GetMixBuffer();

private:
    int TryCreate();

    void Destroy();

private:
    IXAudio2 *m_XAudio2;

    IXAudio2MasteringVoice *m_MasteringVoice;
    int m_NumSpeakers;

    int m_CurrentMixBuffer;
    BYTE *m_MixBuffers[idAudioHardwareXAudio2Settings::kNumBuffers];

    IXAudio2SourceVoice *m_SourceVoice;
};

#endif
