/* sound.c: the host's mixer. Voices play 16-bit PCM at their own rate with a volume and a pan; the ADX player (adx.c)
   and the sound effects feed them. SDL's audio thread pulls the mix (platform.c, port_mix); the game's thread starts and
   stops voices, under a lock. */
#include <SDL3/SDL.h>
#include <string.h>

#include "port.h"
#include "sound.h"

void aica_render(int32_t *out, int frames); /* aica.c */

static struct voice voices[VOICES];
static SDL_Mutex *lock;

static void ensure_lock(void)
{
    if (!lock)
        lock = SDL_CreateMutex();
}

void sound_lock(void)
{
    ensure_lock();
    SDL_LockMutex(lock);
}

void sound_unlock(void)
{
    SDL_UnlockMutex(lock);
}

struct voice *sound_voice(int i)
{
    return i >= 0 && i < VOICES ? &voices[i] : 0;
}

/* a free voice, or 0 */
struct voice *sound_voice_alloc(void)
{
    for (int i = 0; i < VOICES; i++)
        if (!voices[i].active) {
            memset(&voices[i], 0, sizeof voices[i]);
            return &voices[i];
        }
    return 0;
}

void port_mix(int16_t *out, int frames)
{
    static int32_t acc[8192 * 2];
    if (frames > 8192)
        frames = 8192;
    memset(acc, 0, sizeof(int32_t) * frames * 2);
    sound_lock();
    for (int i = 0; i < VOICES; i++) {
        struct voice *v = &voices[i];
        if (!v->active)
            continue;
        int32_t lv = (int32_t)(v->volume * (1.0f - (v->pan > 0 ? v->pan : 0)) * 256);
        int32_t rv = (int32_t)(v->volume * (1.0f + (v->pan < 0 ? v->pan : 0)) * 256);
        uint32_t step = (uint32_t)((double)v->rate / 44100.0 * 65536.0);
        for (int f = 0; f < frames && v->active; f++) {
            int16_t l, r;
            if (!v->fetch(v, &l, &r)) {
                v->active = 0;
                break;
            }
            acc[f * 2] += (l * lv) >> 8;
            acc[f * 2 + 1] += (r * rv) >> 8;
            v->phase += step;
            while (v->phase >= 65536) {
                v->phase -= 65536;
                v->advance(v);
            }
        }
    }
    sound_unlock();
    aica_render(acc, frames);
    for (int i = 0; i < frames * 2; i++)
        out[i] = (int16_t)(acc[i] > 32767 ? 32767 : acc[i] < -32768 ? -32768 : acc[i]);
}
