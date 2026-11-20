/* adx.c: CRI's ADX player (ADXT) on the host. The game streams its music, crowd and announcer from AFS archives
   (strmBgmPlay, strmVoicePlay: ADXT_StartAfs on handles strmInit creates); these host functions take the places of
   ADXT's: the whole ADX file is read into memory and decoded on the mixer's thread (sound.c). CRI's stream, RNA and
   AICA-stream code never runs.

   ADX: a big-endian header (0x80 0x00, the copyright's offset at +2: the data starts 4 bytes after it; encoding 3 at
   +4, block size 18 at +5, 4 bits at +6, channels at +7, sample rate at +8, samples at +12, the high-pass cut-off at
   +16, the version at +18; loop points at +0x18 (version 3) or +0x24 (version 4)), then 18-byte blocks interleaved by
   channel: a 16-bit scale and 32 signed nibbles; s = nibble * scale + (c1 * s1 + c2 * s2) >> 12 with coefficients
   from the cut-off. */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "port.h"
#include "sound.h"

int port_data_path(const char *name, char *out, size_t size);
int port_afs_entry(int id, int file, const char **path, uint32_t *offset, uint32_t *size);

#define ADXT_STAT_STOP 0
#define ADXT_STAT_PLAYING 3
#define ADXT_STAT_PLAYEND 5
#define ADXT_STAT_ERROR 6
#define HANDLES 8

struct adxt {
    uint32_t h;              /* the handle the game holds: its work area in console memory */
    int used, stat, paused;
    int vol;                 /* 0.1 dB, 0 the loudest */
    int pan[2];              /* -15 left .. 15 right, per channel; -128 unset */
    unsigned char *file;
    size_t size;
    int channels, data, total, rate;
    int c1, c2;
    int loop_start, loop_end, has_loop;
    int pos;                 /* the next sample */
    int played;              /* samples played since the start, for ADXT_GetTime */
    int16_t hist[2][2];
    int16_t loop_hist[2][2]; /* the predictor as it stood at the loop start, the first time through */
    int16_t cur[2];
    struct voice *voice;
};
static struct adxt players[HANDLES];
static int adx_debug;

static uint32_t be16(const unsigned char *p) { return (uint32_t)p[0] << 8 | p[1]; }
static uint32_t be32(const unsigned char *p) { return be16(p) << 16 | be16(p + 2); }

static struct adxt *player(uint32_t h)
{
    for (int i = 0; i < HANDLES; i++)
        if (players[i].used && players[i].h == h)
            return &players[i];
    return 0;
}

static float gain(int vol)
{
    if (vol > 0)
        vol = 0;
    if (vol <= -960)
        return 0.0f;
    return powf(10.0f, (float)vol / 200.0f);
}

/* the sample at pos of channel ch, decoded in order (pos only moves forward, or back to the loop start) */
static int16_t decode_at(struct adxt *a, int ch, int pos)
{
    int block = pos / 32, nib = pos % 32;
    size_t at = (size_t)a->data + ((size_t)block * (size_t)a->channels + (size_t)ch) * 18;
    if (at + 18 > a->size)
        return 0;
    const unsigned char *b = a->file + at;
    int scale = (int)be16(b) & 0x1FFF;
    int v = b[2 + nib / 2];
    int n = nib & 1 ? v & 15 : v >> 4;
    if (n & 8)
        n -= 16;
    int s = n * scale + ((a->c1 * a->hist[ch][0] + a->c2 * a->hist[ch][1]) >> 12);
    s = s > 32767 ? 32767 : s < -32768 ? -32768 : s;
    a->hist[ch][1] = a->hist[ch][0];
    a->hist[ch][0] = (int16_t)s;
    return (int16_t)s;
}

static void step(struct voice *v)
{
    struct adxt *a = v->data;
    if (a->paused)
        return;
    a->pos++;
    a->played++;
    int end = a->has_loop ? a->loop_end : a->total;
    if (a->pos >= end) {
        if (a->has_loop) {
            memcpy(a->hist, a->loop_hist, sizeof a->hist);
            a->pos = a->loop_start;
        } else {
            a->stat = ADXT_STAT_PLAYEND;
            v->active = 0;
            return;
        }
    }
    if (a->pos == a->loop_start && a->has_loop)
        memcpy(a->loop_hist, a->hist, sizeof a->hist);
    for (int ch = 0; ch < a->channels && ch < 2; ch++)
        a->cur[ch] = decode_at(a, ch, a->pos);
}

static int fetch(struct voice *v, int16_t *l, int16_t *r)
{
    struct adxt *a = v->data;
    if (a->stat != ADXT_STAT_PLAYING)
        return 0;
    v->volume = gain(a->vol);
    if (a->paused) {
        *l = *r = 0;
        return 1;
    }
    if (a->channels > 1) {
        *l = a->cur[0];
        *r = a->cur[1];
        v->pan = 0;
    } else {
        *l = *r = a->cur[0];
        v->pan = a->pan[0] == -128 ? 0.0f : (float)a->pan[0] / 15.0f;
    }
    return 1;
}

static void stop(struct adxt *a)
{
    sound_lock();
    if (a->voice && a->voice->data == a)
        a->voice->active = 0;
    a->voice = 0;
    a->stat = ADXT_STAT_STOP;
    unsigned char *f = a->file;
    a->file = 0;
    sound_unlock();
    free(f);
}

/* start playing the ADX file in buf (taken over) */
static void start(struct adxt *a, unsigned char *buf, size_t size, const char *what)
{
    stop(a);
    if (size < 0x20 || buf[0] != 0x80 || buf[4] != 3 || buf[5] != 18 || buf[6] != 4) {
        fprintf(stderr, PORT_NAME ": %s is not a 4-bit ADX stream\n", what);
        free(buf);
        a->stat = ADXT_STAT_ERROR;
        return;
    }
    a->file = buf;
    a->size = size;
    a->data = (int)be16(buf + 2) + 4;
    a->channels = buf[7] ? buf[7] : 1;
    a->rate = (int)be32(buf + 8);
    a->total = (int)be32(buf + 12);
    double fc = be16(buf + 16), fs = a->rate ? a->rate : 44100;
    double x = sqrt(2.0) - cos(2.0 * M_PI * fc / fs), y = sqrt(2.0) - 1.0, z = (x - sqrt((x + y) * (x - y))) / y;
    a->c1 = (int)floor(z * 8192.0);
    a->c2 = (int)floor(-z * z * 4096.0);
    a->has_loop = 0;
    int version = buf[18];
    uint32_t lp = version == 4 ? 0x24 : 0x18;
    if ((version == 3 || version == 4) && (size_t)a->data >= lp + 20 && be32(buf + lp)) {
        a->loop_start = (int)be32(buf + lp + 4);
        a->loop_end = (int)be32(buf + lp + 12);
        a->has_loop = a->loop_end > a->loop_start && a->loop_end <= a->total;
    }
    memset(a->hist, 0, sizeof a->hist);
    memset(a->loop_hist, 0, sizeof a->loop_hist);
    a->pos = 0;
    a->played = 0;
    a->paused = 0;
    for (int ch = 0; ch < a->channels && ch < 2; ch++)
        a->cur[ch] = decode_at(a, ch, 0);
    if (a->has_loop && a->loop_start == 0)
        memcpy(a->loop_hist, a->hist, sizeof a->hist);
    sound_lock();
    a->voice = sound_voice_alloc();
    if (a->voice) {
        a->voice->rate = (uint32_t)a->rate;
        a->voice->volume = gain(a->vol);
        a->voice->pan = 0;
        a->voice->fetch = fetch;
        a->voice->advance = step;
        a->voice->data = a;
        a->voice->active = 1;
    }
    a->stat = ADXT_STAT_PLAYING;
    sound_unlock();
    if (adx_debug)
        fprintf(stderr, "adx: %s: %d ch, %d Hz, %d samples%s\n", what, a->channels, a->rate, a->total, a->has_loop ? ", loops" : "");
}

static unsigned char *read_range(const char *path, uint32_t off, uint32_t size, size_t *got)
{
    FILE *f = fopen(path, "rb");
    if (!f)
        return 0;
    if (size == (uint32_t)-1) {
        fseek(f, 0, SEEK_END);
        size = (uint32_t)ftell(f);
    }
    unsigned char *buf = malloc(size ? size : 1);
    fseek(f, (long)off, SEEK_SET);
    *got = fread(buf, 1, size, f);
    fclose(f);
    return buf;
}

/* --- the API ----------------------------------------------------------------------------------------------------- */

void adxt_init(void) __asm__("ADXT_Init");
void adxt_init(void) { adx_debug = getenv("PORT_DEBUG_ADX") != 0; }
void adxt_finish(void) __asm__("ADXT_Finish");
void adxt_finish(void)
{
    for (int i = 0; i < HANDLES; i++)
        if (players[i].used)
            stop(&players[i]);
}

/* ADXT_Create(channels, work, size): the handle is the work area */
uint32_t adxt_create(int32_t maxnch, uint32_t work, int32_t worksize) __asm__("ADXT_Create");
uint32_t adxt_create(int32_t maxnch, uint32_t work, int32_t worksize)
{
    (void)maxnch;
    (void)worksize;
    for (int i = 0; i < HANDLES; i++)
        if (!players[i].used) {
            memset(&players[i], 0, sizeof players[i]);
            players[i].used = 1;
            players[i].h = work;
            players[i].pan[0] = players[i].pan[1] = -128;
            return work;
        }
    return 0;
}

void adxt_destroy(uint32_t h) __asm__("ADXT_Destroy");
void adxt_destroy(uint32_t h)
{
    struct adxt *a = player(h);
    if (a) {
        stop(a);
        a->used = 0;
    }
}

/* ADXT_StartAfs(handle, partition, file) */
void adxt_start_afs(uint32_t h, int32_t pt, int32_t file) __asm__("ADXT_StartAfs");
void adxt_start_afs(uint32_t h, int32_t pt, int32_t file)
{
    struct adxt *a = player(h);
    const char *path;
    uint32_t off, size;
    char what[64];
    if (!a)
        return;
    snprintf(what, sizeof what, "AFS %d:%d", pt, file);
    if (!port_afs_entry(pt, file, &path, &off, &size)) {
        fprintf(stderr, PORT_NAME ": no AFS entry %d of partition %d to play\n", file, pt);
        a->stat = ADXT_STAT_ERROR;
        return;
    }
    size_t got = 0;
    unsigned char *buf = read_range(path, off, size, &got);
    if (!buf) {
        a->stat = ADXT_STAT_ERROR;
        return;
    }
    start(a, buf, got, what);
}

/* ADXT_StartFname(handle, name) */
void adxt_start_fname(uint32_t h, uint32_t name) __asm__("ADXT_StartFname");
void adxt_start_fname(uint32_t h, uint32_t name)
{
    struct adxt *a = player(h);
    char path[1024];
    if (!a)
        return;
    const char *n = (const char *)(uintptr_t)name;
    if (!port_data_path(n, path, sizeof path)) {
        fprintf(stderr, PORT_NAME ": %s is not in the data folder\n", n);
        a->stat = ADXT_STAT_ERROR;
        return;
    }
    size_t got = 0;
    unsigned char *buf = read_range(path, 0, (uint32_t)-1, &got);
    if (buf)
        start(a, buf, got, n);
}

/* ADXT_StartMem(handle, data) / ADXT_StartMemIdx: an ADX file in console memory */
void adxt_start_mem(uint32_t h, uint32_t data) __asm__("ADXT_StartMem");
void adxt_start_mem(uint32_t h, uint32_t data)
{
    struct adxt *a = player(h);
    if (!a || !data)
        return;
    const unsigned char *p = (const unsigned char *)(uintptr_t)data;
    size_t size = (size_t)be16(p + 2) + 4 + (size_t)be32(p + 12) / 32 * 18 * (p[7] ? p[7] : 1) + 18 * 2;
    unsigned char *buf = malloc(size);
    memcpy(buf, p, size);
    start(a, buf, size, "memory");
}

void adxt_stop(uint32_t h) __asm__("ADXT_Stop");
void adxt_stop(uint32_t h)
{
    struct adxt *a = player(h);
    if (a)
        stop(a);
}

int32_t adxt_get_stat(uint32_t h) __asm__("ADXT_GetStat");
int32_t adxt_get_stat(uint32_t h)
{
    struct adxt *a = player(h);
    return a ? a->stat : ADXT_STAT_STOP;
}

void adxt_pause(uint32_t h, int32_t sw) __asm__("ADXT_Pause");
void adxt_pause(uint32_t h, int32_t sw)
{
    struct adxt *a = player(h);
    if (a)
        a->paused = sw != 0;
}

void adxt_set_out_vol(uint32_t h, int32_t vol) __asm__("ADXT_SetOutVol");
void adxt_set_out_vol(uint32_t h, int32_t vol)
{
    struct adxt *a = player(h);
    if (a)
        a->vol = vol;
}

int32_t adxt_get_out_vol(uint32_t h) __asm__("ADXT_GetOutVol");
int32_t adxt_get_out_vol(uint32_t h)
{
    struct adxt *a = player(h);
    return a ? a->vol : 0;
}

void adxt_set_out_pan(uint32_t h, int32_t ch, int32_t pan) __asm__("ADXT_SetOutPan");
void adxt_set_out_pan(uint32_t h, int32_t ch, int32_t pan)
{
    struct adxt *a = player(h);
    if (a && ch >= 0 && ch < 2)
        a->pan[ch] = pan;
}

int32_t adxt_get_out_pan(uint32_t h, int32_t ch) __asm__("ADXT_GetOutPan");
int32_t adxt_get_out_pan(uint32_t h, int32_t ch)
{
    struct adxt *a = player(h);
    return a && ch >= 0 && ch < 2 && a->pan[ch] != -128 ? a->pan[ch] : 0;
}

/* ADXT_GetTime(handle, out count, out scale): the time played as count / scale seconds */
void adxt_get_time(uint32_t h, uint32_t ncount, uint32_t tscale) __asm__("ADXT_GetTime");
void adxt_get_time(uint32_t h, uint32_t ncount, uint32_t tscale)
{
    struct adxt *a = player(h);
    if (ncount)
        *(int32_t *)(uintptr_t)ncount = a ? a->played : 0;
    if (tscale)
        *(int32_t *)(uintptr_t)tscale = a && a->rate ? a->rate : 44100;
}

int32_t adxt_get_num_smpl(uint32_t h) __asm__("ADXT_GetNumSmpl");
int32_t adxt_get_num_smpl(uint32_t h)
{
    struct adxt *a = player(h);
    return a ? a->total : 0;
}

int32_t adxt_get_sfreq(uint32_t h) __asm__("ADXT_GetSfreq");
int32_t adxt_get_sfreq(uint32_t h)
{
    struct adxt *a = player(h);
    return a ? a->rate : 0;
}

int32_t adxt_get_num_chan(uint32_t h) __asm__("ADXT_GetNumChan");
int32_t adxt_get_num_chan(uint32_t h)
{
    struct adxt *a = player(h);
    return a ? a->channels : 0;
}

#define NOOP(sym, fn)                                                                                                  \
    int32_t fn(void) __asm__(sym);                                                                                     \
    int32_t fn(void) { return 0; }
NOOP("ADXT_SetAutoRcvr", adxt_set_auto_rcvr)
NOOP("ADXT_SetReloadSct", adxt_set_reload_sct)
NOOP("ADXT_ExecServer", adxt_exec_server)
NOOP("ADXT_DiscardSmpl", adxt_discard_smpl)
NOOP("ADXT_InsertSilence", adxt_insert_silence)
