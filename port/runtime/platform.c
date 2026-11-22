/* platform.c: the host's window, controller and sound output (SDL3), standing in for the Dreamcast's video output,
   Maple bus and audio.

   - the frame: the PowerVR's render start (pvr.c) ends a frame. The renderer (render.c, draw.c) draws what the TA
     recorded, the window shows it and the controller is read. The game paces itself on the V-blank interrupts (hw.c).
   - the controller: SDL's gamepad API (XInput and other pads), or the keyboard, as a Dreamcast standard controller in
     port A (pdGetPeripheral).
   - sound: a thread that runs the AICA (aica.c) and the mixer (sound.c) in real time and feeds an SDL audio stream. */
#define _GNU_SOURCE
#include <SDL3/SDL.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <xmmintrin.h>
#include <stdlib.h>
#ifdef __APPLE__                 /* macOS: its OpenGL header (the C tests run there, tests/c) */
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl3.h>
#else
#include <GL/gl.h>
#endif

#include "port.h"
#include "game.h"

int port_headless;
int port_fast;
static SDL_Window *window;
static SDL_GLContext gl;
static SDL_Gamepad *pad;
static SDL_AudioStream *audio;

/* the host's own float rules while host code runs (SDL, OpenGL, the mixer); the game's are restored after */
/* host code that the game's interrupts must not run inside (hw.c holds them until it leaves) */
extern volatile int port_host_depth;
void hw_deliver(void);

unsigned port_host_fp_enter(void)
{
    unsigned game = _mm_getcsr();
    port_host_depth++;
    _mm_setcsr(0x1F80);
    return game;
}
void port_host_fp_leave(unsigned game)
{
    _mm_setcsr(game);
    if (--port_host_depth == 0)
        hw_deliver();
}

unsigned port_host_fp_enter(void);
void port_host_fp_leave(unsigned game);

/* --- the controller --------------------------------------------------------------------------------------------------- */

/* Katana's PDS_PERIPHERAL; the game reads support, on, r, l, x1 and y1 */
struct pds_peripheral {
    uint32_t id, support, on, off, press, release;
    uint16_t r, l;
    int16_t x1, y1, x2, y2;
    uint32_t name, extend, old, info;
};
static struct pds_peripheral peripheral[4];

/* the standard controller's buttons as Katana numbers them (on: set while held) */
static uint32_t port_keys_held(unsigned long frame);
#define PDD_DGT_TB (1u << 1)
#define PDD_DGT_TA (1u << 2)
#define PDD_DGT_ST (1u << 3)
#define PDD_DGT_KU (1u << 4)
#define PDD_DGT_KD (1u << 5)
#define PDD_DGT_KL (1u << 6)
#define PDD_DGT_KR (1u << 7)
#define PDD_DGT_TY (1u << 9)
#define PDD_DGT_TX (1u << 10)
#define PAD_SUPPORT 0x000F06FEu

static void read_controller(void)
{
    struct pds_peripheral *p = &peripheral[0];
    uint32_t on = 0;
    int x = 0, y = 0, l = 0, r = 0;
    if (!pad) {
        int n;
        SDL_JoystickID *ids = SDL_GetGamepads(&n);
        if (ids && n > 0)
            pad = SDL_OpenGamepad(ids[0]);
        SDL_free(ids);
    }
    if (pad) {
        static const struct { SDL_GamepadButton b; uint32_t dc; } map[] = {
            {SDL_GAMEPAD_BUTTON_SOUTH, PDD_DGT_TA}, {SDL_GAMEPAD_BUTTON_EAST, PDD_DGT_TB},
            {SDL_GAMEPAD_BUTTON_WEST, PDD_DGT_TX}, {SDL_GAMEPAD_BUTTON_NORTH, PDD_DGT_TY},
            {SDL_GAMEPAD_BUTTON_START, PDD_DGT_ST}, {SDL_GAMEPAD_BUTTON_DPAD_UP, PDD_DGT_KU},
            {SDL_GAMEPAD_BUTTON_DPAD_DOWN, PDD_DGT_KD}, {SDL_GAMEPAD_BUTTON_DPAD_LEFT, PDD_DGT_KL},
            {SDL_GAMEPAD_BUTTON_DPAD_RIGHT, PDD_DGT_KR},
        };
        for (unsigned i = 0; i < sizeof map / sizeof map[0]; i++)
            if (SDL_GetGamepadButton(pad, map[i].b))
                on |= map[i].dc;
        x = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX) / 256;
        y = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY) / 256;
        l = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) / 128;
        r = SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) / 128;
        if (SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_LEFT_SHOULDER))
            l = 255;
        if (SDL_GetGamepadButton(pad, SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER))
            r = 255;
    }
    /* the keyboard: arrows, Z X C V for A B X Y, Enter for Start, A and S for the triggers */
    const bool *k = SDL_GetKeyboardState(0);
    if (k[SDL_SCANCODE_UP]) on |= PDD_DGT_KU;
    if (k[SDL_SCANCODE_DOWN]) on |= PDD_DGT_KD;
    if (k[SDL_SCANCODE_LEFT]) on |= PDD_DGT_KL;
    if (k[SDL_SCANCODE_RIGHT]) on |= PDD_DGT_KR;
    if (k[SDL_SCANCODE_Z]) on |= PDD_DGT_TA;
    if (k[SDL_SCANCODE_X]) on |= PDD_DGT_TB;
    if (k[SDL_SCANCODE_C]) on |= PDD_DGT_TX;
    if (k[SDL_SCANCODE_V]) on |= PDD_DGT_TY;
    if (k[SDL_SCANCODE_RETURN]) on |= PDD_DGT_ST;
    if (k[SDL_SCANCODE_A]) l = 255;
    if (k[SDL_SCANCODE_S]) r = 255;
    if (x == 0 && y == 0) {
        if (on & PDD_DGT_KL) x = -128;
        if (on & PDD_DGT_KR) x = 127;
        if (on & PDD_DGT_KU) y = -128;
        if (on & PDD_DGT_KD) y = 127;
    }
    /* --press N: Start held for 10 frames from frame N (A from N + 120, Start again from N + 900 for the pause menu, then down), to test the input path unattended */
    extern unsigned long port_press_frame, port_frames;
    on |= port_keys_held(port_frames);
    if (port_press_frame) {
        if (port_frames >= port_press_frame && port_frames < port_press_frame + 10)
            on |= PDD_DGT_ST;
        if (port_frames >= port_press_frame + 120 && port_frames < port_press_frame + 130)
            on |= PDD_DGT_TA;
        if (port_frames >= port_press_frame + 900 && port_frames < port_press_frame + 910) /* Start in the fight: the pause menu */
            on |= PDD_DGT_ST;
        if (port_frames >= port_press_frame + 1000 && port_frames < port_press_frame + 1010)
            on |= PDD_DGT_KD;
    }
    x = x < -128 ? -128 : x > 127 ? 127 : x;
    y = y < -128 ? -128 : y > 127 ? 127 : y;
    p->id = 1;                 /* the device type, nonzero while connected: padUnplugCheck pauses the match when it reads 0 */
    p->support = PAD_SUPPORT;
    p->press = on & ~p->on;
    p->release = p->on & ~on;
    p->on = on;
    p->off = ~on;
    p->x1 = (int16_t)x;
    p->y1 = (int16_t)y;
    p->l = (uint16_t)(l > 255 ? 255 : l);
    p->r = (uint16_t)(r > 255 ? 255 : r);
}

/* pdGetPeripheral(port): pdGetPeripheral. Port A (0) holds the controller; the others are empty */
struct pds_peripheral *pdGetPeripheral(uint32_t port) __asm__("pdGetPeripheral");
/* PDS_PERIPHERALINFO: the device's function bits first (1 controller, 0x100 vibration), its product name at +0x14 */
struct pds_peripheral_info {
    uint32_t type, reserved[3];
    uint8_t is_root, area_code, connector_dir[2];
    char product_name[32];
    char license[64];
    uint16_t stdby_pow, max_pow;
};
struct pds_peripheral_info *pd_get_peripheral_info(uint32_t port) __asm__("pdGetPeripheralInfo");
struct pds_peripheral *pdGetPeripheral(uint32_t port)
{
    struct pds_peripheral *p = &peripheral[(port / 6) & 3];
    /* .info points at the device's record (PDS_PERIPHERALINFO): its function bits say what the device has (0x100: vibration) */
    struct pds_peripheral_info *info = pd_get_peripheral_info(((port / 6) & 3) * 6);
    p->info = (uint32_t)(uintptr_t)info;
    /* .name points at the device's product name, in the same record */
    p->name = (uint32_t)(uintptr_t)info->product_name;
    if (p == &peripheral[0]) {
        p->id = 1;
        p->support = PAD_SUPPORT;
    }
    return p;
}

/* the rest of Katana's peripheral API (pd*) as the game uses it. The Maple bus's driver (mpdrv_*, kd*) has no C; the
   controller is read once a frame (port_frame_end) */
#define NOOP(sym, fn)                                                                                                  \
    int32_t fn(void) __asm__(sym);                                                                                     \
    int32_t fn(void) { return 0; }
NOOP("pdInitPeripheral", pd_init_peripheral)
NOOP("pdExecPeripheralServer", pd_exec_server)
NOOP("pdExitPeripheral", pd_exit_peripheral)
NOOP("pdVmsLcdWrite1", pd_vms_lcd_write)          /* the memory card's screen */
NOOP("pdTmrAlarm", pd_tmr_alarm)                  /* the memory card's beeper */

static struct pds_peripheral_info peripheral_info[24];

static int rumble_ok(uint32_t h);

/* pdGetPeripheralInfo(port): port * 6 + socket; A0 the controller, A2 its vibration pack when the host pad rumbles */
struct pds_peripheral_info *pd_get_peripheral_info(uint32_t port) __asm__("pdGetPeripheralInfo");
struct pds_peripheral_info *pd_get_peripheral_info(uint32_t port)
{
    struct pds_peripheral_info *i = &peripheral_info[port % 24];
    memset(i, 0, sizeof *i);
    if (port == 0) {
        i->type = 1;
        i->is_root = 1;
        snprintf(i->product_name, sizeof i->product_name, "Dreamcast Controller");
    } else if (port == 1) {               /* A1: the memory card (vmu.c): storage, screen, timer */
        i->type = 0x0E;
        snprintf(i->product_name, sizeof i->product_name, "Visual Memory");
    } else if (rumble_ok(port)) {
        i->type = 0x100;
        snprintf(i->product_name, sizeof i->product_name, "Puru Puru Pack");
    }
    return i;
}

/* pdVibMxStart(port, pattern) / pdVibMxStop(port): the pattern's first byte holds the power (0-7 in its low bits) */
int32_t pd_vib_start(uint32_t h, uint32_t param) __asm__("pdVibMxStart");
int32_t pd_vib_start(uint32_t h, uint32_t param)
{
    if (!rumble_ok(h) || !param)
        return 0;
    int power = *(uint8_t *)(uintptr_t)param & 7;
    uint16_t strength = (uint16_t)(power ? 0x3000 + power * 0x1800 : 0x8000);
    unsigned game = port_host_fp_enter();
    SDL_RumbleGamepad(pad, strength, strength, 500);
    port_host_fp_leave(game);
    return 0;
}

int32_t pd_vib_stop(uint32_t h) __asm__("pdVibMxStop");
int32_t pd_vib_stop(uint32_t h)
{
    if (rumble_ok(h)) {
        unsigned game = port_host_fp_enter();
        SDL_RumbleGamepad(pad, 0, 0, 0);
        port_host_fp_leave(game);
    }
    return 0;
}

/* --- vibration (the Puru Puru pack): the game's handles are Maple port * 6 + expansion socket; port A's first socket
   is the host pad's rumble. The game times each pattern itself and stops it with pdVibMxStop ---------------------- */

static int rumble_ok(uint32_t h)
{
    if (!pad || h / 6 != 0 || h % 6 != 1)
        return 0;
    SDL_PropertiesID props = SDL_GetGamepadProperties(pad);
    return SDL_GetBooleanProperty(props, SDL_PROP_GAMEPAD_CAP_RUMBLE_BOOLEAN, false);
}

/* --- sound output ----------------------------------------------------------------------------------------------------- */

void port_mix(int16_t *out, int frames); /* sound.c */

/* the sound thread: the mix (with the AICA's ARM7 and channels) is made in real time, 256 frames at a time, and goes
   to the audio device when there is one; without one the AICA still runs, at the same pace */
static int SDLCALL sound_thread(void *arg)
{
    (void)arg;
    static int16_t buf[256 * 2];
    uint64_t start = SDL_GetTicksNS(), made = 0;
    for (;;) {
        port_mix(buf, 256);
        made += 256;
        if (getenv("PORT_DEBUG_AUDIO")) {
            static double energy;
            static unsigned long n;
            for (int i = 0; i < 512; i++)
                energy += (double)buf[i] * buf[i];
            n += 512;
            if (made % 44032 == 0) {
                extern unsigned long aica_key_ons(void);
                extern uint32_t aica_arm_pc(void);
                extern int aica_arm_running(void);
                fprintf(stderr, "audio %.1fs rms %.0f  arm %s pc %06X key-ons %lu ready %X\n", made / 44100.0,
                        n ? sqrt(energy / n) : 0.0, aica_arm_running() ? "on" : "off", aica_arm_pc(), aica_key_ons(),
                        *(volatile uint32_t *)(uintptr_t)0xA080005Cu);
                energy = 0;
                n = 0;
            }
        }
        if (audio)
            SDL_PutAudioStreamData(audio, buf, sizeof buf);
        /* stay about 50 ms ahead of real time */
        uint64_t due = start + made * 1000000000ull / 44100;
        uint64_t now = SDL_GetTicksNS();
        if (due > now + 50000000ull)
            SDL_DelayNS(due - now - 50000000ull);
    }
    return 0;
}

/* --- the window ------------------------------------------------------------------------------------------------------- */

void port_render_init(void);           /* render.c */
void port_render_frame(int w, int h);  /* render.c: draws the frame's records, then clears them */

int port_platform_init(void)
{
    if (!SDL_Init(SDL_INIT_GAMEPAD | SDL_INIT_AUDIO | (port_headless ? 0 : SDL_INIT_VIDEO))) {
        fprintf(stderr, PORT_NAME ": SDL: %s\n", SDL_GetError());
        return 0;
    }
    if (!port_headless) {
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
        window = SDL_CreateWindow(PORT_TITLE, 1280, 1280 * PORT_ASPECT_H / PORT_ASPECT_W, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);   /* the picture's shape (PORT_WIDESCREEN) */
        if (!window || !(gl = SDL_GL_CreateContext(window))) {
            fprintf(stderr, PORT_NAME ": window: %s\n", SDL_GetError());
            return 0;
        }
        SDL_GL_SetSwapInterval(0);
        port_render_init();
    }
    SDL_AudioSpec spec = {SDL_AUDIO_S16, 2, 44100};
    audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, 0, 0);
    if (audio)
        SDL_ResumeAudioStreamDevice(audio);
    else
        fprintf(stderr, PORT_NAME ": no sound output: %s\n", SDL_GetError());
    SDL_CreateThread(sound_thread, "sound", 0);
    return 1;
}

unsigned long port_frames, port_press_frame;

/* --keys FRAME:BUTTON[,FRAME:BUTTON...]: each button held for 10 frames from its frame, to play a path through the menus
   unattended (A B X Y, S Start, U D L R the pad's directions). An unknown button stops the run */
const char *port_keys;
static uint32_t port_keys_held(unsigned long frame)
{
    static struct { unsigned long at; uint32_t bits; } k[64];
    static int n = -1;
    if (n < 0) {
        n = 0;
        for (const char *s = port_keys; s && *s && n < 64;) {
            char *end;
            unsigned long at = strtoul(s, &end, 10);
            if (*end != ':') { fprintf(stderr, PORT_NAME ": --keys: expected FRAME:BUTTON at \"%s\"\n", s); exit(2); }
            s = end + 1;
            uint32_t bits = 0;
            switch (*s) {
            case 'A': bits = PDD_DGT_TA; break;
            case 'B': bits = PDD_DGT_TB; break;
            case 'X': bits = PDD_DGT_TX; break;
            case 'Y': bits = PDD_DGT_TY; break;
            case 'S': bits = PDD_DGT_ST; break;
            case 'U': bits = PDD_DGT_KU; break;
            case 'D': bits = PDD_DGT_KD; break;
            case 'L': bits = PDD_DGT_KL; break;
            case 'R': bits = PDD_DGT_KR; break;
            default: fprintf(stderr, PORT_NAME ": --keys: unknown button '%c' (A B X Y S U D L R)\n", *s); exit(2);
            }
            k[n].at = at;
            k[n++].bits = bits;
            s++;
            if (*s == ',')
                s++;
        }
    }
    uint32_t on = 0;
    for (int i = 0; i < n; i++)
        if (frame >= k[i].at && frame < k[i].at + 10)
            on |= k[i].bits;
    return on;
}
unsigned long port_shot_frame;
const char *port_shot_file;

/* the window's picture as a PPM file (--screenshot) */
unsigned long port_shot_every;

static void screenshot(int w, int h)
{
    char name[1024];
    if (port_shot_every)
        snprintf(name, sizeof name, "%s%06lu.ppm", port_shot_file, port_frames);
    else
        snprintf(name, sizeof name, "%s", port_shot_file);
    unsigned char *px = malloc((size_t)w * h * 3);
    FILE *f = fopen(name, "wb");
    if (!px || !f)
        return;
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(0, 0, w, h, GL_RGB, GL_UNSIGNED_BYTE, px);
    fprintf(f, "P6\n%d %d\n255\n", w, h);
    for (int y = h - 1; y >= 0; y--)
        fwrite(px + (size_t)y * w * 3, 1, (size_t)w * 3, f);
    fclose(f);
    free(px);
    fprintf(stderr, PORT_NAME ": frame %lu saved to %s\n", port_frames, name);
}

/* the end of a frame (pvr.c's render start): draw, show, read the controller */
void port_boot_step(void) __attribute__((weak));   /* boot.c, where a game has one: its debug step, once a frame */

void port_frame_end(void)
{
    unsigned game = port_host_fp_enter();
    if (port_boot_step)
        port_boot_step();
    {
        /* PORT_DEBUG_LISTS: each list's lowest and highest pointer at frame ends, every 600 frames (a buffer that is not
           reset each scene shows as a lowest value that climbs) */
        static int on = -1;
        static uint32_t lo[5], hi[5];
        if (on < 0)
            on = getenv("PORT_DEBUG_LISTS") != 0;
        uint32_t arr = *(volatile uint32_t *)(uintptr_t)GAME_NL_LIST_PTRS;
        if (on && (arr >> 24 == 0x0C || arr >> 24 == 0x8C)) {
            for (int k = 0; k < 5; k++) {
                uint32_t v = *(volatile uint32_t *)(uintptr_t)(arr + 4u * (uint32_t)k);
                if (!lo[k] || v < lo[k])
                    lo[k] = v;
                if (v > hi[k])
                    hi[k] = v;
            }
            if (port_frames % 600 == 0) {
                fprintf(stderr, "lists f%lu:", port_frames);
                for (int k = 0; k < 5; k++)
                    fprintf(stderr, " %d:%08X-%08X", k, lo[k], hi[k]), lo[k] = hi[k] = 0;
                fprintf(stderr, "\n");
            }
        }
    }
    SDL_Event e;
    extern int port_dump_polys;
    while (SDL_PollEvent(&e))
        if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_F12)
        {
            extern int port_dump_models;
            port_dump_polys = 1;           /* F12: the next frame's polygons to polys.txt (pvr.c), models to models.txt */
            port_dump_models = 1;
        }
        else if (e.type == SDL_EVENT_QUIT) {
            fprintf(stderr, PORT_NAME ": window closed after %lu frames\n", port_frames);
            exit(0);
        }
    if (window) {
        int w, h;
        SDL_GetWindowSizeInPixels(window, &w, &h);
        port_render_frame(w, h);
        if (port_shot_file && port_shot_every && port_frames % port_shot_every == 0)
            screenshot(w, h);
        else if (port_shot_file && !port_shot_every && port_frames == port_shot_frame) {
            screenshot(w, h);
            exit(0);
        }
        SDL_GL_SwapWindow(window);
    }
    read_controller();
    extern void port_models_frame_end(void);
    port_models_frame_end();
    port_frames++;
    port_host_fp_leave(game);
    extern void port_vmu_deliver(void);
    port_vmu_deliver();
}
