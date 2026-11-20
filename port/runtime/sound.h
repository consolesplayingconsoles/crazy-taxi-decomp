/* sound.h: the mixer's voices (sound.c) */
#ifndef SOUND_H
#define SOUND_H
#include <stdint.h>

#define VOICES 64

/* a voice: fetch gives the current sample pair (0 when the voice is done), advance steps to the next one. The mixer
   steps it at rate samples a second */
struct voice {
    int active;
    float volume;   /* 0..1 */
    float pan;      /* -1 left .. 1 right */
    uint32_t rate;
    uint32_t phase; /* 16.16 */
    int (*fetch)(struct voice *v, int16_t *l, int16_t *r);
    void (*advance)(struct voice *v);
    void *data;     /* the owner's state */
    int tag;        /* the owner's number for it */
};

void sound_lock(void);
void sound_unlock(void);
struct voice *sound_voice(int i);
struct voice *sound_voice_alloc(void);
#endif
