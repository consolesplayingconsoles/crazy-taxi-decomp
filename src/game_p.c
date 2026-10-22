/* Game-side loops: sound channel resets, setup tables, decimal digit strings. */

extern void FUN_0c05ea98(int i);
extern void FUN_0c02e71e(int ch, int vol);
extern void FUN_0c02e75a(int ch, int x);
extern void gdc_StopStreamVoiceAll(void);

/* Reset the 20 entries through FUN_0c05ea98, then the view block at 0C2A9C10. */
void FUN_0c05e8c8(void)
{
    float *v = (float *)0x0C2A9C10;
    int i;

    for (i = 0; i < 20; i++) {
        FUN_0c05ea98(i);
    }
    *(int *)0x0C1319F8 = 20;
    v[1] = 320.0f;
    v[2] = 240.0f;
    v[3] = 0.19999999f;
    v[4] = 1.0f;
    v[5] = 1.0f;
    v[6] = 0.0f;
    v[7] = 0.0f;
    v[8] = 1.0f;
    v[9] = 1.0f;
    ((int *)v)[10] = 0;
    ((int *)v)[13] = 0x200A;
    v[11] = 1.0f;
    ((int *)v)[12] = 2;
}

/* Reset the four voice channels to volume 75, then stop every streamed voice. */
void FUN_0c072dd4(void)
{
    int i;
    int *a;
    int *b;

    for (i = 0; i < 4; i++) {
        a = (int *)(0x0C2AEBC0 + i * 8);
        a[0] = 75;
        a[1] = 0;
        b = (int *)(0x0C2AEBE0 + i * 16);
        b[0] = 0;
        b[1] = 75;
        b[2] = 0;
        b[3] = 0;
        FUN_0c02e71e(i, 75);
        FUN_0c02e75a(i, 0);
    }
    gdc_StopStreamVoiceAll();
}

/* Round an ASCII decimal string at digit n: when s[n] > '4' it becomes '0', the digit before it goes
   up by one, and carries ripple left (s[0] last). */
void FUN_0c0886cc(char *s, int n)
{
    char *q;
    int k;

    if (s[n] > '4') {
        s[n] = '0';
        s[n - 1] += 1;
        q = s + n - 1;
        for (k = n - 1; k > 0; k--, q--) {
            if (*q > '9') {
                *q -= 10;
                q[-1] += 1;
            }
        }
        if (s[1] > '9') {
            s[1] -= 10;
            s[0] += 1;
        }
    }
}

/* a -= b over n bytes, most significant first. Returns -1 when it underflows and sign is 0,
   otherwise 0 for a zero result and 1 for a nonzero one. */
int FUN_0c08933c(int sign, unsigned char *a, unsigned char *b, int n)
{
    int borrow = 0;
    int zero = 1;
    int d;
    int i;

    for (i = n - 1; i >= 0; i--) {
        d = a[i] - b[i] - borrow;
        if (d < 0) {
            d += 256;
            borrow = 1;
        } else {
            borrow = 0;
        }
        if (d != 0) {
            zero = 0;
        }
        a[i] = d;
    }
    if (borrow == 1 && sign == 0) {
        return -1;
    }
    if (zero == 1) {
        return 0;
    }
    return 1;
}

extern void FUN_0c074990(int color);
extern void FUN_0c0749b0(int color);
extern void thunk_kmSetFogTable(float *table);
extern void kmSetFogDensity(int density);
extern void njSetRenderWidth(int w);

/* The fog set-ups: white fog, then a 129-entry table (fog/0C1EE360) of base / d, where d starts at
   1.1 and grows by a step that starts at 0.005 and, past entry 32, by 0.0015 more each entry. */
#define FOG_TABLE(base, first)                          \
    do {                                                \
        float d = 1.0999999f;                           \
        float step = 0.005f;                            \
        float *t = (float *)0x0C1EE360;                 \
        int i;                                          \
        FUN_0c074990(first);                            \
        FUN_0c0749b0(0xFFFFFF);                         \
        for (i = 0; i <= 128; i++) {                    \
            t[i] = *(float *)(base) / d;                \
            d += step;                                  \
            if (i > 32) {                               \
                step += 0.0014999999f;                  \
            }                                           \
        }                                               \
        thunk_kmSetFogTable(t);                         \
    } while (0)

void FUN_0c050c0a(void)
{
    FOG_TABLE(0x0C12FFC8, 0xFFFFFF);
    kmSetFogDensity(0x808F);
}

void FUN_0c0519de(void)
{
    FOG_TABLE(0x0C130624, 0xFFFFFF);
    kmSetFogDensity(0x808F);
}

/* This one clears its base value first, so its table is all zeros, and passes its own argument as the
   first colour. */
void FUN_0c058f38(int color)
{
    *(float *)0x0C130DB8 = 0.0f;
    FOG_TABLE(0x0C130DB8, color);
    kmSetFogDensity(0x808F);
}

void FUN_0c05b044(void)
{
    FOG_TABLE(0x0C130E14, 0xFFFFFF);
    njSetRenderWidth(0x808F);
}

extern void nlSprPut(void *spr);

/* Set up the eight 80-byte view records at 0C2A89CC (their first word from the list at 0C0D0858),
   then clear the three words after them. */
void FUN_0c052d7e(void)
{
    int *src = (int *)0x0C0D0858;
    float *v = (float *)0x0C2A89CC;
    int i;

    for (i = 0; i < 8; i++) {
        ((int *)v)[0] = *src++;
        v[1] = 320.0f;
        v[2] = 240.0f;
        v[3] = 2.0f;
        v[4] = 0.0f;
        v[5] = 0.0f;
        v[6] = 0.0f;
        v[7] = 0.0f;
        v[8] = 1.0f;
        v[9] = 1.0f;
        ((int *)v)[13] = 0x200A;
        v[11] = 0.0f;
        ((int *)v)[10] = 0;
        ((int *)v)[12] = 2;
        v += 20;
    }
    *(int *)0x0C2A8FCC = 0;
    *(int *)0x0C2A8FD0 = 0;
    *(int *)0x0C2A8FD4 = 0;
}

/* Once the counter at 0C2A96F4 passes 88, draw a row of sprite 93: 21 copies 17 apart from x 64,
   at y = 0C2A9748 + 250. */
void FUN_0c059eb0(void)
{
    float *s = (float *)0x0C2A96F8;
    int x;
    int i;

    if (*(int *)0x0C2A96F4 > 88) {
        ((int *)s)[0] = 93;
        s[2] = (float)(*(int *)0x0C2A9748 + 250);
        s[4] = *(float *)0x0C2A9758 + 1.0f;
        s[5] = *(float *)0x0C2A9758 + 1.0f;
        s[7] = 0.0f;
        s[9] = 1.0f;
        ((int *)s)[13] = 10;
        ((int *)s)[10] = 0;
        x = 64;
        for (i = 0; i < 21; i++) {
            s[1] = (float)x;
            nlSprPut(s);
            x += 17;
        }
    }
}

/* The same row, 13 copies from x 366 at y = 0C2A9748 + 444. */
void FUN_0c05ac4c(void)
{
    float *s = (float *)0x0C2A96F8;
    int x;
    int i;

    if (*(int *)0x0C2A96F4 > 88) {
        ((int *)s)[0] = 93;
        s[2] = (float)(*(int *)0x0C2A9748 + 444);
        s[4] = *(float *)0x0C2A9758 + 1.0f;
        s[5] = *(float *)0x0C2A9758 + 1.0f;
        s[7] = 0.0f;
        s[9] = 1.0f;
        ((int *)s)[13] = 10;
        ((int *)s)[10] = 0;
        x = 366;
        for (i = 0; i < 13; i++) {
            s[1] = (float)x;
            nlSprPut(s);
            x += 17;
        }
    }
}

extern void FUN_0c04eb4a(void);
extern void PC_RenderSimpleTaxiShadow(void);
extern void Put_Transporter(void);
extern void Put_Course_Obj_Dist(void);
extern void FUN_0c03b698(int v);
extern void FUN_0c03df1a(void);

/* Shadows (not in course mode 2), then the transporters and course objects (course mode 0 only). */
void SetMVShadow(void)
{
    if (*(int *)0x0C1EE20C != 2) {
        FUN_0c04eb4a();
        PC_RenderSimpleTaxiShadow();
    }
    if (*(int *)0x0C1EE20C == 0) {
        Put_Transporter();
        Put_Course_Obj_Dist();
    }
}

/* Clamp x to 0..1 into 0C0EE904; when it had to be clamped and the flag at 0C0EE900 is set, the flag
   becomes -1. */
void FUN_0c03934e(float x)
{
    int *flag = (int *)0x0C0EE900;
    int f = *flag;

    if (x > 0.0f) {
        if (x > 1.0f) {
            x = 1.0f;
            if (f) {
                *flag = -1;
            }
        }
    } else {
        x = 0.0f;
        if (f) {
            *flag = -1;
        }
    }
    *(float *)0x0C0EE904 = x;
}

/* A pending request (0C2A1218) is handed to FUN_0c03b698 and cleared; otherwise the counter at
   0C2A11F4 counts down by 2, and once it is 1 or less FUN_0c03df1a runs. */
void FUN_0c03dfc8(void)
{
    int *count = (int *)0x0C2A11F4;
    int v = *(int *)0x0C2A1218;

    if (v != 0) {
        FUN_0c03b698(v);
        *(int *)0x0C2A1218 = 0;
        return;
    }
    if (*count > 1) {
        *count -= 2;
        return;
    }
    FUN_0c03df1a();
}

extern int GetMenuMode(int which);
extern void FUN_0c053dec(void);
extern void FUN_0c053b76(void);
extern void Put_GearBox(void);
extern void FUN_0c02ea04(void);
extern void frameFlip(void);
extern int pdGetPeripheral(int port);
extern void FUN_0c039434(int mode);
extern void FUN_0c076f70(void);

/* Game 2, or menu mode 1 set: FUN_0c053dec; otherwise FUN_0c053b76; the gear box either way. */
void FUN_0c053ac0(void)
{
    if (*(int *)0x0C1EE210 == 2 || GetMenuMode(1) != 0) {
        FUN_0c053dec();
    } else {
        FUN_0c053b76();
    }
    Put_GearBox();
}

/* Run frames (FUN_0c02ea04, then a flip) until the busy flag at 0C26E0F8 drops; at least one. */
void gdc_CourseLoadWait(void)
{
    do {
        FUN_0c02ea04();
        frameFlip();
    } while (*(int *)0x0C26E0F8 != 0);
}

/* Read one controller slot's peripheral into the table at 0C1EE12C: slot 1 is port 18 (+4), slot 2
   port 12 (+8), anything else port 0 (+0). */
void padReadSlot(int slot)
{
    int *t = (int *)0x0C1EE12C;

    if (slot == 1) {
        t[1] = pdGetPeripheral(18);
    } else if (slot == 2) {
        t[2] = pdGetPeripheral(12);
    } else {
        t[0] = pdGetPeripheral(0);
    }
}

/* The flag at 0C0EE900 (set by FUN_0c03934e on a clamp): -1 resets it, 1 moves it to 2, 2 runs mode
   2; then FUN_0c076f70 and mode 0. Nothing while it is 0. */
void FUN_0c039560(void)
{
    int *flag = (int *)0x0C0EE900;
    int v = *flag;

    if (v == 0) {
        return;
    }
    if (v == -1) {
        *flag = 0;
    } else if (v == 1) {
        *flag = 2;
    } else if (v == 2) {
        FUN_0c039434(2);
    }
    FUN_0c076f70();
    FUN_0c039434(0);
}

/* Is pos (x at +0, z at +8) inside the convex quad of four (x, z) pairs? Each edge, from the last
   corner round, must turn the same way (cross product not negative). */
int isPosInArea(float *pos, float *quad)
{
    float px = quad[6] - pos[0];
    float pz = quad[7] - pos[2];
    float cx;
    float cz;
    int n = 4;

    while (n != 0) {
        cx = quad[0] - pos[0];
        cz = quad[1] - pos[2];
        if (0.0f > px * cz - pz * cx) {
            return 0;
        }
        quad += 2;
        px = cx;
        pz = cz;
        n--;
    }
    return 1;
}

/* Queue a voice on channel ch (16-byte slots at 0C2AEBE0) when the slot is free. Outside main mode 1
   only channel 0 plays, and only while 0C1EE220 is set; in mode 1 the ending (EndingFlag) also keeps
   to channel 0. */
void Voice_Request(int voice, int ch, int a, int b)
{
    int *slot = (int *)(0x0C2AEBE0 + ch * 16);

    if (*(int *)0x0C1EE234 == 1) {
        if (*(int *)0x0C2A4E50 != 0 && ch != 0) {
            return;
        }
    } else {
        if (*(int *)0x0C1EE220 == 0) {
            return;
        }
        if (ch != 0) {
            return;
        }
    }
    if (slot[0] == 0) {
        slot[0] = voice;
        slot[1] = a;
        slot[2] = b;
        slot[3] = 0;
    }
}

extern void FUN_0c074680(int a, int b, int c);
extern void FUN_0c05c8e8(void);
extern void FUN_0c05ca3e(void);
extern void FUN_0c05c81c(void);
extern int FUN_0c038ee6(void);
extern void FUN_0c05bb24(void);
extern void FUN_0c05bb76(int on);

/* One of four colours by (*(*0C2A751C)) % 4, the same for all three arguments. */
void CarSel_SetBackColor(void)
{
    int c;

    switch (**(int **)0x0C2A751C % 4) {
    case 0:
        c = 0xFFE64023;
        break;
    case 1:
        c = 0xFF8AA028;
        break;
    case 2:
        c = 0xFF762075;
        break;
    case 3:
        c = 0xFFF3A028;
        break;
    default:
        return;
    }
    FUN_0c074680(c, c, c);
}

/* For kinds 3-7, is any of the flags from that kind's word (+12 for 3 ... +28 for 7) up to +28 set?
   Kinds 0-2 always count; any other kind is returned as it is. */
int FUN_0c058968(int *t, int kind)
{
    switch (kind) {
    case 0:
    case 1:
    case 2:
        return 1;
    case 3:
        if (t[3]) return 1;
    case 4:
        if (t[4]) return 1;
    case 5:
        if (t[5]) return 1;
    case 6:
        if (t[6]) return 1;
    case 7:
        if (t[7]) return 1;
        return 0;
    }
    return kind;
}

/* Per-frame step: three updates, then until 0C2A991C is set: FUN_0c05bb24 while FUN_0c038ee6 gives
   nothing; once it does and 0C1EE794 is clear, switch FUN_0c05bb76 on, set 0C2A991C and clear
   Car_Data +84. */
void FUN_0c05c7ac(void)
{
    FUN_0c05c8e8();
    FUN_0c05ca3e();
    FUN_0c05c81c();
    if (*(int *)0x0C2A991C == 0) {
        if (FUN_0c038ee6() <= 0) {
            FUN_0c05bb24();
            return;
        }
        if (*(int *)0x0C1EE794 == 0) {
            FUN_0c05bb76(1);
            *(int *)0x0C2A991C = 1;
            *(int *)(0x0C1790CC + 84) = 0;
        }
    }
}

extern void FUN_0c07bde0(float *a, float *b, float *c);
extern void camSave(void);
extern int FUN_0c07dcf0(int *tbl, int x, int i, int one);
extern char *GetCollision2D(float *pos, float h);
extern int FUN_0c0321c2(float *p, float *b, float *a);

/* Against the plane z at 0C2B7BDC (z at +8 of each point): both below it, 0; otherwise 1, after
   FUN_0c07bde0 with the point that is below (if any) as the third argument. */
int FUN_0c07c100(float *a, float *b)
{
    float z = *(float *)0x0C2B7BDC;

    if (z > a[2]) {
        if (z > b[2]) {
            return 0;
        }
        FUN_0c07bde0(a, b, a);
    } else if (z > b[2]) {
        FUN_0c07bde0(a, b, b);
    }
    return 1;
}

/* Start a camera script: save the camera, VR mode 10 (mode 0) or 11, the script and the taxi driver
   as its target, its three counters cleared. */
void camPlayScript(int script, int mode)
{
    camSave();
    *(int *)0x0C179860 = (mode == 0) ? 10 : 11;
    *(int *)0x0C2AD548 = 0x0C2AD000;
    *(int *)0x0C2AD54C = script;
    *(int *)0x0C2AD578 = 0;
    *(int *)0x0C2AD57C = 0;
    *(int *)0x0C2AD580 = 0;
}

/* Free each texture of a 16-byte-entry list (ends at word +4 == -1); returns the OR of the results. */
int nlSpriteFreeTextureGI(int *tbl, int x)
{
    int *p = tbl;
    int acc = 0;
    int i = 0;

    while (p[1] != -1) {
        acc |= FUN_0c07dcf0(tbl, x, i, 1);
        i++;
        p += 4;
    }
    return acc;
}

/* Copy the area state (0C2A9FA4) to 0C2A9D60 after checking the ground under the camera: kind 17+
   (except area 21) takes SubwayFlag; below that, a camera above the ground's +24 height clears it. */
void FUN_0c0603a2(void)
{
    int *area = (int *)0x0C2A9FA4;
    int v = *area;
    char *g = GetCollision2D((float *)0x0C179840, 5.0f);

    if (*(int *)(g + 28) != -1) {
        if (*(int *)(g + 28) >= 17) {
            if (*area != 21) {
                v = *(int *)0x0C2A6FD8;
                *area = v;
            }
        } else if (*area >= 1) {
            if (*(float *)0x0C179844 > *(float *)(g + 24)) {
                v = 0;
                *area = 0;
            }
        }
    }
    *(int *)0x0C2A9D60 = v;
}

/* Point in polygon (n points of 12 bytes): sum the edge tests; a 2 from any edge means on it (1). */
int Check2DAreaDX(float *p, float *pts, unsigned int n)
{
    float *q = pts;
    int sum = 0;
    int r;

    while (--n != 0) {
        r = FUN_0c0321c2(p, q + 3, q);
        q += 3;
        if (r == 2) {
            return 1;
        }
        sum += r;
    }
    r = FUN_0c0321c2(p, pts, q);
    if (r == 2) {
        return 1;
    }
    sum += r;
    return (sum & 1) ? 1 : 0;
}

/* Font index to ASCII: 0-25 'A'-'Z', 26-35 '0'-'9', then . & ! ? @ *; anything else a space. */
int FUN_0c039680(int c)
{
    if (c < 26) {
        return c + 65;
    }
    if (c < 36) {
        return c + 22;
    }
    switch (c) {
    case 36:
        return 46;
    case 37:
        return 38;
    case 38:
        return 33;
    case 39:
        return 63;
    case 40:
        return 64;
    case 41:
        return 42;
    }
    return 32;
}

extern void FUN_0c05778a(float *spr, int id, float x, float y);

/* FUN_0c058968 for the table at 0C2A97AC, with entry k of 0C2A982C clear meaning 1 at once. */
int FUN_0c05a350(int k)
{
    int *t = (int *)0x0C2A97AC;

    if (((int *)0x0C2A982C)[k] == 0) {
        return 1;
    }
    switch (k) {
    case 0:
    case 1:
    case 2:
        return 1;
    case 3:
        if (t[3]) return 1;
    case 4:
        if (t[4]) return 1;
    case 5:
        if (t[5]) return 1;
    case 6:
        if (t[6]) return 1;
    case 7:
        if (t[7]) return 1;
        return 0;
    }
    return k;
}

/* A sprite that blinks once a second (counter at 0C2A8FB0 over 120 frames, shown for the first 60)
   at (320, 180): sprite 460, or 471 while 0C2A8FBC is set. */
void FUN_0c0572de(void)
{
    float *s = (float *)0x0C2A7EDC;
    int v;

    s[4] = 1.0f;
    s[5] = 1.0f;
    ((int *)s)[13] = 10;
    ((int *)s)[10] = 0;
    v = (*(int *)0x0C2A8FB0 + 1) % 120;
    *(int *)0x0C2A8FB0 = v;
    if (v >= 60) {
        return;
    }
    if (*(int *)0x0C2A8FBC == 0) {
        FUN_0c05778a(s, 460, 320.0f, 180.0f);
    } else {
        FUN_0c05778a(s, 471, 320.0f, 180.0f);
    }
}

/* The same blink on counter 0C2A8FB8 with sprite 461 (471 while 0C2A8FBC is set). */
void FUN_0c05741c(void)
{
    float *s = (float *)0x0C2A7EDC;
    int v;

    s[4] = 1.0f;
    s[5] = 1.0f;
    ((int *)s)[13] = 10;
    ((int *)s)[10] = 0;
    v = (*(int *)0x0C2A8FB8 + 1) % 120;
    *(int *)0x0C2A8FB8 = v;
    if (v >= 60) {
        return;
    }
    if (*(int *)0x0C2A8FBC == 0) {
        FUN_0c05778a(s, 461, 320.0f, 180.0f);
    } else {
        FUN_0c05778a(s, 471, 320.0f, 180.0f);
    }
}

typedef struct {
    short x;
    short y;
    short z;
} Short3;

/* Store three shorts at dst (the fifth argument). */
void FUN_0c04d30a(short x, short y, short z, int unused, Short3 *dst)
{
    Short3 v;

    v.x = x;
    v.y = y;
    v.z = z;
    *dst = v;
}

extern void nlRenderTextureBegin(int n);
extern void FUN_0c028908(float scale);
extern void FUN_0c070ede(void *p);
extern void nlCloseEvent(void *e);
extern void Drv_StartAction(int action, int a, int b);
extern void Chat_PickSomeoneUp(int n);

/* While the clamp flag (0C0EE900) is set, draw with scale 16/15. */
void FUN_0c039540(void)
{
    if (*(int *)0x0C0EE900 != 0) {
        nlRenderTextureBegin(0);
        FUN_0c028908(1.0666666f);
    }
}

/* Close an event (its sub-object at +28 first). */
void FUN_0c071d98(char *e)
{
    if (e) {
        FUN_0c070ede(e + 28);
        nlCloseEvent(e);
    }
}

/* After 600 frames (0C1EE794), start action 5 and the pick-up chat. */
void Drv_PickSomeoneUp(void)
{
    if (*(int *)0x0C1EE794 > 600) {
        Drv_StartAction(5, 0, 0);
        Chat_PickSomeoneUp(0);
    }
}

extern void FUN_0c05fd70(int i);
extern void FUN_0c07d450(int a, int b, int c);
extern void FcvStoreBuffer(int id, void *buf, float v);
extern void nlObjPutSetFadeColorOffset(float r, float g, float b);

/* Play the voice for the current entry of 0C2A98EC (also entry 0 in mini game 14). */
void FUN_0c05d6e0(void)
{
    int v = *(int *)0x0C2A98EC;

    if (v != 0 || *(int *)0x0C1EE214 == 14) {
        FUN_0c05fd70(((int *)0x0C131180)[v]);
    }
}

/* FUN_0c07d450 over the three consecutive pairs of four points (b-c, c-d, d-e). */
void FUN_0c07d510(int a, int b, int c, int d, int e)
{
    FUN_0c07d450(a, b, c);
    FUN_0c07d450(a, c, d);
    FUN_0c07d450(a, d, e);
}

/* Store a new driver value (TaxiDriver +252 id, +256 value) and buffer it, unless it is unchanged. */
void FUN_0c0630a2(int id, float v)
{
    char *td = (char *)0x0C2AD000;

    if (*(int *)(td + 252) == id && *(float *)(td + 256) == v) {
        return;
    }
    *(int *)(td + 252) = id;
    *(float *)(td + 256) = v;
    FcvStoreBuffer(*(int *)(td + 252), td + 260, *(float *)(td + 256));
}

/* Fade colour offset scaled per channel by the offsets at 0C0EA5C8. */
void SetFadeColorOffsetMulti(float r, float g, float b)
{
    nlObjPutSetFadeColorOffset(*(float *)0x0C0EA5C8 * r, *(float *)0x0C0EA5CC * g, *(float *)0x0C0EA5D0 * b);
}

extern void ADXT_GetTime(int h, int *t, int *f);

/* A stream channel's play time in frames: samples / 735 (44100 Hz at 60 frames a second). */
int FUN_0c02e682(int ch)
{
    int t;
    int f;

    ADXT_GetTime(((int *)0x0C1EE810)[ch], &t, &f);
    return (int)((float)t * 0.0013605441199615598f);
}

/* Step the 4-frame cycle at 0C2A8F90 unless both words at 0C2A8F84 are set. */
void FUN_0c055cf4(void)
{
    int *p = (int *)0x0C2A8F84;

    if (p[1] == 0 || p[0] == 0) {
        *(int *)0x0C2A8F90 = (*(int *)0x0C2A8F90 + 1) % 4;
    }
}

extern int CheckAreaGrid(void *pos, int grid);
extern void KillColliObj(void *o);
extern void SetObjFly(void *o);
extern void Voice_ShutUp(int ch);
extern void FUN_0c05765c(void);
extern void FUN_0c041ce2(int n);
extern void FUN_0c040a50(void);

typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

/* Point the guide arrow at pos: copy it, reset the arrow state (distance 100) and look up its grid. */
void InitArrow(Vec3f *pos)
{
    *(Vec3f *)0x0C274234 = *pos;
    *(int *)0x0C274240 = 0;
    *(float *)0x0C274248 = 0.0f;
    *(float *)0x0C27424C = 100.0f;
    *(int *)0x0C274250 = 0;
    *(int *)0x0C274244 = CheckAreaGrid(pos, *(int *)(0x0C1790CC + 100));
}

/* A flying object piece (at +20 of the event): past height 1800 (+24 of the piece) it is removed,
   otherwise it keeps flying. */
void setObjPieceExec(char *e)
{
    char *o = e + 20;

    if (*(float *)(o + 24) > 1800.0f) {
        KillColliObj(o);
        nlCloseEvent(e);
    } else {
        SetObjFly(o);
    }
}

/* Unless the driver is busy (flag 2 at TaxiDriver +0x1DF), stop voice 1 and play the pick-up line of
   the current driver (24-byte entries at 0C0D4298, one per cab driver). */
void Chat_PickSomeoneUp(int n)
{
    if (!(*(signed char *)0x0C2AD1DF & 2)) {
        Voice_ShutUp(1);
        Voice_Request(0x0C0D4298 + (signed char)((*(signed char *)0x0C2AD000 - 1) * 24), 1, 110, 0);
    }
}

/* Count frames (0C1EE240) with FUN_0c05765c each; after 120 go to main mode 3. */
void gameState3(void)
{
    (*(int *)0x0C1EE240)++;
    FUN_0c05765c();
    if (*(int *)0x0C1EE240 > 120) {
        *(int *)0x0C1EE234 = 3;
        *(int *)0x0C1EE238 = 0;
        FUN_0c041ce2(0);
        FUN_0c040a50();
    }
}

extern void FUN_0c072e90(int ch);
extern void gdc_StopStreamVoice(int ch);
extern void Sound_Request(int id, int a);

/* Mark the round counter state (0C2A8EB0 = 3, 0C2A8E98 = 1) and round the counter at *0C2A8C78 up
   to the end of its minute (x % 60 == 59). */
void Pass_Rideoff(void)
{
    int *p;

    *(int *)0x0C2A8EB0 = 3;
    *(int *)0x0C2A8E98 = 1;
    p = *(int **)0x0C2A8C78;
    if (*p % 60 != 59) {
        *p = *p - *p % 60 + 59;
    }
}

/* Service the voice channels: channel 0 always, the others only in main mode 1; a busy slot
   (0C2AEBE0) gets FUN_0c072e90. */
int FUN_0c072e52(void)
{
    int i;

    for (i = 0; i < 4; i++) {
        if (i == 0 || *(int *)0x0C1EE234 == 1) {
            if (*(int *)(0x0C2AEBE0 + i * 16)) {
                FUN_0c072e90(i);
            }
        }
    }
    return 0;
}

/* Is p inside customer area k? The area tables (0C0ED974) give the point count under the course mode
   and the points under the game number, both per mini game, 8 bytes per area. */
int CheckKyakuArea(float *p, int k)
{
    int *a = ((int **)0x0C0ED974)[*(int *)0x0C1EE20C];
    int *b = ((int **)0x0C0ED974)[*(int *)0x0C1EE210];
    int mg = *(int *)0x0C1EE214;
    unsigned int n = *(unsigned int *)(a[mg] + k * 8);
    float *pts = *(float **)(b[mg] + k * 8 + 4);

    return Check2DAreaDX(p, pts, n);
}

/* Once (0C2A9934 and 0C2A9930 both clear): flag 16 at 0C2A992C, state 2, 0C2A9904 set if the timer
   has started, and stop voice channel 0. */
void FUN_0c05bb24(void)
{
    if (*(int *)0x0C2A9934 == 0 && *(int *)0x0C2A9930 == 0) {
        *(short *)0x0C2A992C |= 16;
        *(int *)0x0C2A9934 = 1;
        *(int *)0x0C2A760C = 2;
        *(int *)0x0C2A9938 = 0;
        if (*(int *)0x0C1EE794 > 0) {
            *(int *)0x0C2A9904 = 1;
        }
        gdc_StopStreamVoice(0);
    }
}

/* A customer dropped since last time (kyakuDropCount moved): count down 0C2A98EC, clear gRideOnA,
   catch up the seen count, and play the next voice if any are left. */
void FUN_0c05d662(void)
{
    int *left = (int *)0x0C2A98EC;

    if (*(int *)0x0C1794D0 != *(int *)0x0C2A98FC && *left != 0) {
        (*left)--;
        *(int *)0x0C2A9968 = 0;
        (*(int *)0x0C2A98FC)++;
        if (*left != 0) {
            FUN_0c05fd70(((int *)0x0C131180)[*left]);
        }
    }
}

/* Start a HUD message (not in game 2): flag 0x400, its value, the counters reset, scale 0.5, and its
   sound. */
void Start_Pass_Judgement(int v)
{
    if (*(int *)0x0C1EE210 != 2) {
        *(int *)0x0C2A75E0 |= 0x400;
        *(int *)0x0C2A760C = v;
        *(int *)0x0C2A8F94 = 0;
        *(short *)0x0C2A8FA0 = 0;
        *(int *)0x0C2A8FA4 = 1;
        *(float *)0x0C2A8FA8 = 0.5f;
        *(float *)0x0C2A8FAC = 0.0f;
        Sound_Request(0x405A9, 0);
    }
}

extern void pdVmsLcdWrite1(unsigned int port, void *img, int c, int d);
extern void FUN_0c03b698(int v);
extern void FUN_0c03bf42(int n);
extern void FUN_0c03b674(int n);
extern void PutVM_Message(int a, int b, int c, float x, float y);
extern void FUN_0c03bf76(int n);
extern float nlLog10(float x);
extern int gdFsSearchName(char *name, int dir, int c);
extern void pfCleanString(int x, int y, char *s);
extern float pfLength(char *s);
extern void pfLocate(float x, float y);
extern void pfPuts(char *s);

/* Show picture n on the VMU screen of port p: 6 ports in 3 pairs, 1536-byte images at 0C2A9FF8. */
void FUN_0c060692(unsigned int p, int b, int c, int d)
{
    int n = (p / 6) * 2 + p % 6 - 1;

    pdVmsLcdWrite1(p, (char *)0x0C2A9FF8 + (short)(n * 1536), c, d);
}

/* Pause request: with no argument it also arms the pause flag (0C2A121C); when armed, save the main
   and sub mode, switch to main mode 3 and run FUN_0c03b698(4). */
void FUN_0c040b54(int keep)
{
    *(int *)0x0C2A1224 = 0;
    if (keep == 0 && *(int *)0x0C2A121C == 0) {
        *(int *)0x0C2A121C = 1;
    }
    if (*(int *)0x0C2A121C != 0) {
        *(int *)0x0C2A1228 = *(int *)0x0C1EE234;
        *(int *)0x0C2A122C = *(int *)0x0C1EE238;
        if (*(int *)0x0C1EE234 != 3) {
            *(int *)0x0C1EE234 = 3;
            *(int *)0x0C1EE238 = 0;
        }
        FUN_0c03b698(4);
    }
}

/* The VM message screen 20: flag 8 when flag 4 is up and 0C2A11CC has bit 1 or 2, then message 32
   (22) at (149, 240). */
void FUN_0c03f3ac(void)
{
    int *p = (int *)0x0C2A11F4;

    FUN_0c03bf42(20);
    if (p[5] & 4) {
        if ((*(int *)0x0C2A11CC & 2) || (*(int *)0x0C2A11CC & 4)) {
            p[5] |= 8;
        }
    }
    FUN_0c03b674(13);
    PutVM_Message(32, 22, 0, 149.0f, 240.0f);
    FUN_0c03bf76(20);
}

/* A volume step (0-127, capped at 30 in mode 1 of 0C2A11B0) in decibels: 200 * log10(v / 127), and
   -999 for silence. */
int FUN_0c02e282(int v)
{
    if (*(int *)0x0C2A11B0 == 1 && (signed char)v > 30) {
        v = 30;
    }
    if ((signed char)v == 0) {
        return -999;
    }
    return (int)(nlLog10((float)(signed char)v * 0.007874015718698502f) * 200.0f);
}

/* Look a name up in the current directory (0C177A8C) and copy its 44-byte entry's sector (+150),
   size and flags into info; -8 when it is not there. */
int gdFsGetDirInfoG(char *name, int *info)
{
    char *dir = *(char **)(*(int *)0x0C177A8C + 16);
    int *e;
    int n;

    n = gdFsSearchName(name, (int)dir, 0);
    if (n == 0) {
        return -8;
    }
    e = (int *)(dir + 16 + (n - 1) * 44);
    info[0] = e[0] + 150;
    info[1] = e[1];
    ((char *)info)[8] = ((char *)e)[8];
    return 0;
}

/* Camera angles (+24..+32 of g_camHV3): mode 1 also takes the default eye (0C0965FC) at +12, mode 0
   copies the angles to +0 with scale 1 and roll 0. */
void camSetAngles(int a, int b, int c, int mode)
{
    char *g = (char *)0x0C179928;

    ((int *)g)[6] = a;
    ((int *)g)[7] = b;
    ((int *)g)[8] = c;
    if (mode == 1) {
        *(Vec3f *)(g + 12) = *(Vec3f *)0x0C0965FC;
    }
    if (mode == 0) {
        *(Vec3f *)g = *(Vec3f *)(g + 24);
        ((float *)g)[9] = 1.0f;
        ((float *)g)[10] = 0.0f;
    }
}

/* Print s centred on (x, y). */
void FUN_0c0608de(int x, int y, char *s)
{
    float half;

    pfCleanString(x, y, s);
    half = pfLength(s) * 0.5f;
    pfLocate((float)x - half, (float)y);
    pfPuts(s);
}

extern float FUN_0c089de0(unsigned int a);
extern void *set_event(int pri, void *func);
extern void FUN_0c0563f8(void *e, int a, int b);
extern float nlFloor(float x);
extern float nlCeil(float x);
extern float nlFraction(float x);
extern void SklIpPlay(int a, int f0, int b, int f1, int c, int d, float t);
extern float nlSin(int a);
extern float nlTan(int a);

/* A decaying wobble: while 0C2A8FA4 is 1 the angle (0C2A8FA0) turns a quarter each frame and the
   amplitude (0C2A8FA8) shrinks by 0.9; the offset (0C2A8FAC) is -amplitude * FUN_0c089de0(angle),
   0 once the amplitude is under 0.1. */
void FUN_0c055aca(void)
{
    float v;

    if (*(int *)0x0C2A8FA4 == 1) {
        *(short *)0x0C2A8FA0 += 0x4000;
        v = *(float *)0x0C2A8FA8 * 0.9f;
        *(float *)0x0C2A8FA8 = v;
        if (0.09999999403953552f > v) {
            *(float *)0x0C2A8FAC = 0.0f;
        } else {
            *(float *)0x0C2A8FAC = -(v * FUN_0c089de0(*(unsigned short *)0x0C2A8FA0));
        }
    }
}

/* The same wobble on 0C2A9940..0C2A994C. */
void FUN_0c05e2fa(void)
{
    float v;

    if (*(int *)0x0C2A9944 == 1) {
        *(short *)0x0C2A9940 += 0x4000;
        v = *(float *)0x0C2A9948 * 0.9f;
        *(float *)0x0C2A9948 = v;
        if (0.09999999403953552f > v) {
            *(float *)0x0C2A994C = 0.0f;
        } else {
            *(float *)0x0C2A994C = -(v * FUN_0c089de0(*(unsigned short *)0x0C2A9940));
        }
    }
}

/* Place the car at the mini game's start (16-byte entries at 0C0D0E10: position, heading): position
   at Car_Data +120 and +140, heading at +134, and a copy at 0C2A9B80. */
void FUN_0c05b88a(void)
{
    char *car = (char *)0x0C1790CC;

    *(Vec3f *)(car + 120) = *(Vec3f *)(0x0C0D0E10 + *(int *)0x0C1EE214 * 16);
    *(short *)(car + 134) = *(short *)(0x0C0D0E10 + *(int *)0x0C1EE214 * 16 + 12);
    *(Vec3f *)(car + 140) = *(Vec3f *)(car + 120);
    *(Vec3f *)0x0C2A9B80 = *(Vec3f *)(0x0C0D0E10 + *(int *)0x0C1EE214 * 16);
}

/* Show a combo: close the one on screen (keeping its +24 in 0C2A91B8), start a new event and fill it. */
void Put_Combo_Entry(int a, int b)
{
    void *e;

    if (*(int *)0x0C2A91B4 == 1) {
        *(int *)0x0C2A91B8 = *(int *)(*(int *)0x0C2A91CC + 24);
        nlCloseEvent(*(void **)0x0C2A91CC);
        *(int *)0x0C2A91B4 = 0;
    }
    e = set_event(36, (void *)0x0C056460);
    FUN_0c0563f8(e, a, b);
    *(int *)0x0C2A91B4 = 1;
    *(void **)0x0C2A91CC = e;
}

/* Play a skeleton motion at a fractional frame: the two frames around t and the blend between them. */
void SklSfPlay(int a, int b, int c, float t)
{
    int f0 = (int)nlFloor(t);
    int f1 = (int)nlCeil(t);

    SklIpPlay(a, f0, a, f1, b, c, nlFraction(t));
}

/* Field of view in degrees to the projection scales: 1 / sin and 1 / tan of the angle in 64K units. */
void FUN_0c06b028(float deg)
{
    int a = ((int)(deg * 32768.0f / 360.0f + 0.5f) & 0xFFFF) - 1;

    *(float *)0x0C13EEC0 = 1.0f / nlSin(a);
    *(float *)0x0C13EEC4 = 1.0f / nlTan(a);
}

extern void FUN_0c0630d2(void);
extern void Chat_Execute(void);
extern void LetsPlayTennis(void);
extern void HesLate(void);
extern void FUN_0c057fe2(void);
extern float nlScalor(float *v);
extern void ChangeColliObj(void *o, int kind);
extern void nlScaleUnitVector(float *dst, float *src, float s);

/* Per-frame driver step: at 600 and 300 frames left (not in game 2, driver not busy) start the
   pick-up action and chat; then the driver, chat, tennis and lateness updates. */
void Act_Execute(void)
{
    if (*(int *)0x0C1EE210 != 2
        && (*(int *)0x0C1EE794 == 600 || *(int *)0x0C1EE794 == 300)
        && !(*(signed char *)0x0C2AD1DF & 2)) {
        Drv_StartAction(5, 1, 0);
        Chat_PickSomeoneUp(0);
    }
    FUN_0c0630d2();
    Chat_Execute();
    LetsPlayTennis();
    HesLate();
}

/* In states 2-5 (0C2A8EB0), step the 4-frame cycle (0C2A8E8C) while any of the seven flags at
   0C2A8E6C is clear. */
void FUN_0c055310(void)
{
    int s = *(int *)0x0C2A8EB0;
    int *f = (int *)0x0C2A8E6C;

    if (s >= 2 && s <= 5) {
        if (f[6] == 0 || f[5] == 0 || f[4] == 0 || f[3] == 0 || f[2] == 0 || f[1] == 0 || f[0] == 0) {
            *(int *)0x0C2A8E8C = (*(int *)0x0C2A8E8C + 1) % 4;
        }
    }
}

/* The advertise blink: a reset request (bit 0 of gPlayerAdv) restarts the counter (0C0E5340); unless
   x is 1, FUN_0c057fe2 runs for the first 50 frames of each second. Counts on; returns 1. */
int FUN_0c02dc84(int x)
{
    int *q = (int *)0x0C0E5340;

    if (*(int *)0x0C1EE334 & 1) {
        *q = 0;
        *(int *)0x0C1EE334 &= ~1;
    }
    if (x != 1) {
        if (*q % 60 < 50) {
            FUN_0c057fe2();
        }
    }
    (*q)++;
    return 1;
}

/* A sleeping object piece: removed past height 1800; a kind-5 piece slowed under 0.02 becomes kind 21;
   otherwise it flies on. */
void setObjPieceExecSleep(char *e)
{
    char *o = e + 20;

    if (*(float *)(o + 24) > 1800.0f) {
        KillColliObj(o);
        nlCloseEvent(e);
        return;
    }
    if (*(int *)(o + 104) == 5) {
        if (0.02f > nlScalor((float *)(o + 72))) {
            ChangeColliObj(o, 21);
        }
    }
    SetObjFly(o);
}

/* The shadow direction for a ground normal: flat ground (y > 0.999999) gives (1, 0, 0); otherwise
   the normal's x and z with y = -(x*x + z*z) / y, scaled to a unit vector. */
void CalcShadow4Normal(float *out, float *n)
{
    float inv;

    if (n[1] > 0.9999989867210388f) {
        out[0] = 1.0f;
        out[1] = 0.0f;
        out[2] = 0.0f;
        return;
    }
    inv = 1.0f / n[1];
    out[0] = n[0];
    out[2] = n[2];
    out[1] = (-(n[0] * n[0]) - n[2] * n[2]) * inv;
    nlScaleUnitVector(out, out, inv);
}

extern float FUN_0c089de8(unsigned int a);
extern void nlObjPutSetLightDirectionV(float *v);
extern void FUN_0c053292(void);
extern void FUN_0c057080(int n);
extern void pfAddNumber(char *s, int n);
extern void pfAddString(void *p);
extern int FUN_0c041016(int n);
extern void menuPutSprites(int spr, void *pos, int x, int y);

/* Light direction from two angles (64K units, kept at 0C0EA5B0/0C0EA5B4): (FUN_0c089de8(a) *
   FUN_0c089de0(b), FUN_0c089de0(a), FUN_0c089de8(a) * FUN_0c089de8(b)). */
void SetLight(int a, int b)
{
    float *v = (float *)0x0C26E1D8;
    float t;

    *(int *)0x0C0EA5B0 = a;
    *(int *)0x0C0EA5B4 = b;
    t = FUN_0c089de8(a);
    v[0] = t * FUN_0c089de0(b);
    v[1] = FUN_0c089de0(a);
    t = FUN_0c089de8(a);
    v[2] = t * FUN_0c089de8(b);
    nlObjPutSetLightDirectionV(v);
}

/* Count the clock (0C2A8E30) down half a second per call (29 on the 59th frame of a second), with
   FUN_0c053292 once at the start (0C2A8F64) and FUN_0c057080 every third call (0C2A8F60). */
void FUN_0c056e80(void)
{
    int *t = (int *)0x0C2A8E30;
    int *c = (int *)0x0C2A8F60;

    if (*t > 0) {
        if (*(int *)0x0C2A8F64 == 0) {
            *(int *)0x0C2A8F64 = 1;
            FUN_0c053292();
        }
        (*c)++;
        if (*c == 3) {
            FUN_0c057080(0);
            *c = 0;
        }
        if (*t % 60 == 59) {
            *t -= 29;
        } else {
            *t -= 30;
        }
    }
}

/* Print the string at *0C08D678 centred on (x, y), after pfAddNumber(s, 0) and, when flag is set,
   pfAddString(0C0D303C). */
void pfCrazyBoxRecordComboPut(int x, int y, char *s, int flag)
{
    float half;

    pfCleanString(x, y, s);
    pfAddNumber(s, 0);
    if (flag) {
        pfAddString((void *)0x0C0D303C);
    }
    half = pfLength(*(char **)0x0C08D678) * 0.5f;
    pfLocate((float)x - half, (float)y);
    pfPuts(*(char **)0x0C08D678);
}

/* Draw help bar k at (x, y): the sprite for the current language row (0C2A123C) and FUN_0c041016(1). */
void menuPutHelpBar(int k, float x, float y)
{
    int *row = (int *)(0x0C0EF658 + k * 16 + *(int *)0x0C2A123C * 8);
    int ix = (int)x;
    int iy = (int)y;

    menuPutSprites(row[FUN_0c041016(1)], (void *)0x0C2A1A84, ix, iy);
}

extern int nlArcTan2(float y, float x);
extern int CourseSplineGet(int n);
extern int CourseSplineNumGet(int n);
extern void getNearLineIndex(int a, int n, int spline, int *index, float *pos);
extern void CourseObj_Init(void);
extern void nlSubVector3op(float *out, float *a, float *b);
extern void nlGetAverageVector(float *out, float *a, float *b, float wa, float wb);
extern void nlAddVector(float *a, float *b);
extern int volumeToDb(int level);
extern void ADXT_SetOutVol(int h, int db);
extern void nlPushUnitMatrix(void);
extern void FUN_0c077f70(void);
extern void FUN_0c077210(void *a, void *b);
extern void nlGetPushedMatrix(int n);
extern void FUN_0c07c740(int obj, void *m);
extern void nlPopMatrix(int n);

/* Heading (64K units) from b to a on the ground plane; 0 when a is at the origin. */
int FUN_0c04d3ee(Vec3f a, Vec3f b)
{
    float dx = a.x - b.x;
    float dz = a.z - b.z;

    if (a.x == 0.0f && a.z == 0.0f) {
        dx = 0.0f;
        dz = 0.0f;
    }
    return nlArcTan2(dx, dz);
}

/* Course start: course x, angle 0, camera area 0, the camera's spline index from its position, then
   the course objects. */
void PutCourse_Init(int course)
{
    int spline;
    int n;

    *(int *)0x0C118670 = course;
    *(float *)0x0C2A6AC8 = 0.0f;
    *(int *)0x0C2A6EBC = 0;
    spline = CourseSplineGet(0);
    n = CourseSplineNumGet(0);
    getNearLineIndex(0, n, spline, (int *)0x0C2A6EC0, (float *)0x0C179840);
    CourseObj_Init();
}

/* Pass the 32-bit fog table colour to the kit split into its parts as well. */
void nlFogTableColor(int c)
{
    kmSetFogTableColor(c, (short)((unsigned int)c >> 16), c >> 8, (signed char)((unsigned int)c >> 24), c);
}

/* Steer a homing object: its velocity (+12) is blended toward the offset from it to its target (+24)
   with the weights at +40 and +36, then added to its position. */
void CalcHomingVector(float *o)
{
    float d[3];

    nlSubVector3op(d, o + 6, o);
    nlGetAverageVector(o + 3, d, o + 3, o[10], o[9]);
    nlAddVector(o, o + 3);
}

/* A stream channel's volume: level (-128..127) times the master volume (byte at 0C28A4ED) / 8, in
   decibels. */
void FUN_0c02e71e(int ch, int level)
{
    int v = (int)((float)(signed char)level * ((float)*(unsigned char *)0x0C28A4ED / 8.0f));

    ADXT_SetOutVol(((int *)0x0C1EE810)[ch], volumeToDb(v));
}

/* Draw object i (table at 0C0EE7CC) in its own matrix set up from 0C286410 / 0C286404. */
void FUN_0c0391fc(int i)
{
    nlPushUnitMatrix();
    FUN_0c077f70();
    FUN_0c077210((void *)0x0C286410, (void *)0x0C286404);
    nlGetPushedMatrix(0);
    FUN_0c077f70();
    FUN_0c07c740(((int *)0x0C0EE7CC)[i], (void *)0x0C2863EC);
    nlPopMatrix(1);
}

extern void nlGetMatrix(float *m);
extern void nlLoadMatrix(float *m);

/* Driver animation set i (three entries at 0C0D5178): both slots (+464, +468) to 0C0D3080, the new
   value with weight 0, and the blend speed (+248) to 15. */
void FUN_0c062ff4(int i)
{
    char *td = (char *)0x0C2AD000;

    *(int *)(td + 464) = 0x0C0D3080;
    *(int *)(td + 468) = 0x0C0D3080;
    FUN_0c0630a2(((int *)0x0C0D5178)[i], 0.0f);
    *(float *)(td + 248) = 15.0f;
}

/* Replace each row's third element of the current matrix with its fourth. */
void FUN_0c07c830(void)
{
    float m[16];

    nlGetMatrix(m);
    m[2] = m[3];
    m[6] = m[7];
    m[10] = m[11];
    m[14] = m[15];
    nlLoadMatrix(m);
}

extern float nlInnerProduct(float *a, float *b);
extern void nlUnitVector(float *v);

typedef struct {
    int w[3];
} Mat12;

/* Switch to matrix slot i (12-byte slots at 0C2B31DC, the current one at slot 0, its index at
   0C2B31D8): save slot 0 back to the old index, take slot i, and load its matrix (+8). */
void FUN_0c077df0(int i)
{
    Mat12 *slot = (Mat12 *)0x0C2B31DC;
    signed char *cur = (signed char *)0x0C2B31D8;

    nlGetMatrix(0);
    slot[*cur] = slot[0];
    *cur = i;
    slot[0] = slot[*cur];
    nlLoadMatrix((float *)slot[0].w[2]);
}

/* Is p ahead of the box (within about 20 degrees of its facing, +40)? Then set that bit of +36. */
void colliBoxAhead(float *o, float *p, int bit)
{
    float d[3];
    float *dir = *(float **)(o + 10);

    nlSubVector3op(d, p, o);
    nlUnitVector(d);
    if (nlInnerProduct(d, dir) > 0.9389999508857727f) {
        ((int *)o)[9] |= 1 << bit;
    }
}

extern void nlRotateAY(unsigned int a);
extern void nlRotateAX(unsigned int a);
extern void nlSqrt(Vec3f *v, void *light);
extern void nlObjPutSetGlobalAmbience(float a);
extern void nlSetFontSize(int w, int h);
extern void nlLocate(int x, int y);
extern void nlPrintf(char *fmt, ...);
extern void InitRenderTexture1st(void);
extern void nlScaleVector(float *out, float *v, float s);
extern float nlLength(void *a, float *b);

/* Set a scene's light: the base direction rotated by the light's angles (+18 yaw, +16 pitch) into
   its direction, then its ambience (+12). */
#define SET_LIGHT(base, light)                                      \
    do {                                                            \
        Vec3f v;                                                    \
        char *l = (char *)(light);                                  \
        v = *(Vec3f *)(base);                                       \
        nlPushUnitMatrix();                                         \
        nlRotateAY(*(unsigned short *)(l + 18));                    \
        nlRotateAX(*(unsigned short *)(l + 16));                    \
        nlSqrt(&v, l);                                        \
        nlPopMatrix(1);                                             \
        nlObjPutSetLightDirectionV((float *)l);                     \
        nlObjPutSetGlobalAmbience(*(float *)(l + 12));              \
    } while (0)

void FUN_0c050bbe(void)
{
    SET_LIGHT(0x0C0CF6FC, 0x0C2A72F4);
}

void FUN_0c051992(void)
{
    SET_LIGHT(0x0C0D07E8, 0x0C2A755C);
}

void FUN_0c05af8e(void)
{
    SET_LIGHT(0x0C0D0DC0, 0x0C2A9768);
}

/* The "loading" screen: a big message (two texts by 0C1EE228), two flips, then back to small type. */
void InitNaolib3(void)
{
    *(int *)0x0C1EE220 = 1;
    nlSetFontSize(16, 16);
    nlLocate(10, 12);
    if (*(int *)0x0C1EE228 == 1) {
        nlPrintf((char *)0x0C08AAB8);
    } else {
        nlPrintf((char *)0x0C08AAD4);
    }
    frameFlip();
    frameFlip();
    nlSetFontSize(8, 8);
    InitRenderTexture1st();
}

/* Move a walker (+28) by 5/8 of its step (+40) and count it (+24) once it is within 3 of its target
   (12-byte points at 0C131B10, index +20). */
void FUN_0c05fcc6(char *o)
{
    float d[3];

    nlScaleVector(d, (float *)(o + 40), 0.625f);
    nlAddVector((float *)(o + 28), d);
    if (3.0f > nlLength((char *)0x0C131B10 + (signed char)(*(int *)(o + 20) * 12), (float *)(o + 28))) {
        (*(int *)(o + 24))++;
    }
}

extern int nlRand(void);
extern void FUN_0c057130(void *e, int i);

/* Spawn 0-3 sparkle events (at most 10) through FUN_0c057130; the argument is unused. */
void FUN_0c057080(int unused)
{
    void *ev[10];
    int n = nlRand() % 4;
    int i;

    for (i = 0; i < n; i++) {
        if (i >= 10) {
            break;
        }
        ev[i] = set_event(64, (void *)0x0C0571F0);
        FUN_0c057130(ev[i], i);
    }
}

extern int ADXT_GetStat(int h);
extern int ADXT_GetNumSmpl(int h);

/* Frames left on a voice stream (samples / 735); 0x58764 while it is not playing yet. */
int FUN_0c02e1ce(int ch)
{
    int *h = (int *)0x0C1EE820 + ch;
    int t;
    int f;

    if (ADXT_GetStat(*h) < 2) {
        return 0x58764;
    }
    ADXT_GetTime(*h, &t, &f);
    return (int)((float)(ADXT_GetNumSmpl(*h) - t) * 0.0013605441199615598f);
}

extern void FUN_0c0523f8(void);
extern int CheckClipping(float *p, float r);
extern void FUN_0c072348(int which);
extern void nlInitEvent(void);
extern void Sound_Init(void);
extern void FUN_0c02e494(void);
extern void FUN_0c041b04(void);
extern void FUN_0c040b98(int n);

/* Reset the HUD: the second HUD on (0C2A7618) in game 2 or with menu mode 1 off; flags, scroll
   positions (-320, -320, 320) and combo state cleared, combo count 99. */
void hudInit(void)
{
    if (*(int *)0x0C1EE210 == 2 || GetMenuMode(1) == 0) {
        *(int *)0x0C2A7618 = 1;
        FUN_0c0523f8();
    } else {
        *(int *)0x0C2A7618 = 0;
    }
    *(int *)0x0C2A75E0 = 0;
    *(int *)0x0C2A8C94 = 0;
    *(float *)0x0C2A8C98 = -320.0f;
    *(float *)0x0C2A8C9C = -320.0f;
    *(float *)0x0C2A8CA0 = 320.0f;
    *(int *)0x0C2A8CA4 = 0;
    *(int *)0x0C2A8CA8 = 0;
    *(int *)0x0C2A8CB0 = 0;
    *(int *)0x0C2A91B4 = 0;
    *(int *)0x0C2A91B8 = 99;
}

/* The tennis court voices: each of the two points (0C0D60E0) within 750 of the camera and on screen
   (radius 200) plays its line; counts frames at 0C13F4BC. */
void LetsPlayTennis(void)
{
    float *p = (float *)0x0C0D60E0;

    if (750.0f > nlLength(p, (float *)0x0C179840)) {
        if (CheckClipping(p, 200.0f)) {
            FUN_0c072348(0);
        }
    }
    if (750.0f > nlLength(p + 3, (float *)0x0C179840)) {
        if (CheckClipping(p + 3, 200.0f)) {
            FUN_0c072348(1);
        }
    }
    (*(int *)0x0C13F4BC)++;
}

/* Game state 2 (round start): events, sound and voices reset; menu mode 2 goes back to the menu
   (main mode 3), otherwise the next sub mode with the view records set up. */
void gameState2(void)
{
    nlInitEvent();
    Sound_Init();
    gdc_StopStreamVoiceAll();
    FUN_0c02e494();
    if (GetMenuMode(0) == 2) {
        *(int *)0x0C1EE234 = 3;
        *(int *)0x0C1EE238 = 0;
        FUN_0c041ce2(1);
        FUN_0c041b04();
        FUN_0c040b98(1);
        return;
    }
    (*(int *)0x0C1EE238)++;
    *(int *)0x0C1EE240 = 0;
    *(int *)0x0C2A4E50 = 0;
    FUN_0c052d7e();
}

/* Is this model id one of the special ones (ranges 486-490, 502-504, 630-639, 733-736, 786-788 and
   ids 590, 591, 687, 752)? */
int FUN_0c0500d8(int id)
{
    if ((id >= 486 && id <= 490) || (id >= 502 && id <= 504) || (id >= 630 && id <= 639)
        || (id >= 733 && id <= 736) || (id >= 786 && id <= 788)
        || id == 590 || id == 591 || id == 687 || id == 752) {
        return 1;
    }
    return 0;
}

extern void FUN_0c057930(void);
extern void nlRenderTextureFree(int i);
extern int FUN_0c02dd3a(int n);
extern void FUN_0c041ce8(void);
extern void FUN_0c02c094(int n);
extern void FUN_0c07aad0(int n);
extern void FUN_0c07ab30(int obj);
extern void FUN_0c0532de(void);
extern void ResetSpark(void);
extern int acSystemGetSystemFlag(void);
extern void Start_Fog(int kind);

/* Show an advertise message k (value v): grey fog colour, FUN_0c057930, flag bit 0 of 0C2A9228; k 0
   also plays its voice, k -1 raises the sprite flag. */
void FUN_0c057bdc(int k, int v)
{
    FUN_0c074680(0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
    FUN_0c057930();
    *(int *)0x0C2A9324 = v;
    *(short *)0x0C2A9228 |= 1;
    if (k == 0) {
        Voice_Request(0x0C130DC0, 0, 127, 0);
    } else if (k == -1) {
        *(int *)0x0C2A931C = 1;
        *(int *)0x0C2A9320 = 0;
    }
    *(int *)0x0C2A9328 = k;
}

/* Free every render texture (count at 0C2B31BC +4). */
void nlRenderTextureFreeAll(void)
{
    int i;

    for (i = 0; i < ((int *)0x0C2B31BC)[1]; i++) {
        nlRenderTextureFree(i);
    }
}

/* The advertise screen step: once it is done (1), sub modes 7 and 9 wait 5 frames and leave through
   FUN_0c041ce8; any other goes to sub mode 8. 0 while it runs. */
int FUN_0c02dcd8(int a)
{
    int s;

    if (*(int *)0x0C1EE338) {
        FUN_0c02dc84(a);
        if (FUN_0c02dd3a(0) != 1) {
            return 0;
        }
    } else if (FUN_0c02dc84(a) == 0) {
        return 0;
    }
    s = *(int *)0x0C1EE238;
    if (s == 7 || s == 9) {
        if (*(int *)0x0C1EE240 < 5) {
            return 0;
        }
        FUN_0c041ce8();
        return 1;
    }
    *(int *)0x0C1EE238 = 8;
    FUN_0c02c094(1);
    return 1;
}

/* Draw the course objects of the current range (0C2A6EE0..0C2A6EE4, table at 0C1188F8) within 3000
   of the camera. */
void FUN_0c04eb4a(void)
{
    int i = *(int *)0x0C2A6EE0;
    int *p = (int *)0x0C1188F8 + i;

    FUN_0c07aad0(-1);
    while (i < *(int *)0x0C2A6EE4) {
        if (3000.0f > nlLength((char *)*p + 8, (float *)0x0C179840)) {
            FUN_0c07ab30(*p);
        }
        p++;
        i++;
    }
}

/* Draw the "combo" sprite for the current level (-1..2, sprites at 0C130B0C) at (320, 430); after 180
   frames, FUN_0c0532de. */
void FUN_0c0558a2(void)
{
    int v = *(int *)0x0C2A760C;
    float *s = (float *)0x0C2A7EDC;

    if (v > -2 && v <= 2) {
        ((int *)s)[0] = ((int *)0x0C130B0C)[v];
        s[1] = 320.0f;
        s[2] = 430.0f;
        s[4] = 1.0f;
        s[5] = 1.0f;
        s[11] = 1.0f;
        ((int *)s)[10] = 0;
        ((int *)s)[13] = 10;
        nlSprPut(s);
        if (++*(int *)0x0C2A8F94 > 180) {
            FUN_0c0532de();
        }
    }
}

/* Underground fog: with the camera below -30 and no subway flag, sparks are reset and, unless the
   system flag is up, fog 3 starts when one of the car's four wheels (132 bytes from +416) is on
   surface 14; above ground the system flag starts fog 0. */
void FUN_0c060334(void)
{
    char *w = (char *)0x0C1790CC + 416;
    int i;

    if (!(*(float *)0x0C179844 > -30.0f) && *(int *)0x0C2A9D60 == 0) {
        ResetSpark();
        if (acSystemGetSystemFlag() == 0) {
            for (i = 0; i < 4; i++) {
                if (*(int *)w == 14) {
                    Start_Fog(3);
                    return;
                }
                w += 132;
            }
        }
        return;
    }
    if (acSystemGetSystemFlag()) {
        Start_Fog(0);
    }
}

extern void gdc_StopStreamSongAll(void);
extern void nlSetCommonTextureOffset(int off);
extern void nlSpriteFreeTexture(void *tbl, int n);

/* Song fade-out: wait out the delay (0C26A0BC), then step the volume down over 0C26A0C0 of
   0C26A0C4 frames from the master song volume (0C1EE80C); at the end stop every song. */
void FUN_0c02e3c0(void)
{
    int t;

    if (*(int *)0x0C26A0B8) {
        if (*(int *)0x0C26A0BC > 0) {
            (*(int *)0x0C26A0BC)--;
            return;
        }
        t = *(int *)0x0C26A0C0;
        if (t > 0) {
            ADXT_SetOutVol(*(int *)0x0C1EE820,
                volumeToDb((int)((float)t / (float)*(int *)0x0C26A0C4 * (float)*(signed char *)0x0C1EE80C)));
            (*(int *)0x0C26A0C0)--;
            return;
        }
        *(int *)0x0C26A0B8 = 0;
        gdc_StopStreamSongAll();
    }
}

/* Free the PAL sprite textures: the common set, then the one for the language (2-4 have their own,
   others share the English one). */
void PAL_FreeTexture(void)
{
    int off;
    void *tbl;

    nlSetCommonTextureOffset(190);
    nlSpriteFreeTexture((void *)0x0C146C48, 0);
    switch (*(int *)0x0C2A11C0) {
    case 2:
        off = 215;
        tbl = (void *)0x0C146DF8;
        break;
    case 3:
        off = 210;
        tbl = (void *)0x0C146D98;
        break;
    case 4:
        off = 220;
        tbl = (void *)0x0C146E58;
        break;
    default:
        off = 205;
        tbl = (void *)0x0C146D38;
        break;
    }
    nlSetCommonTextureOffset(off);
    nlSpriteFreeTexture(tbl, 0);
}

extern void FUN_0c059866(void);
extern void FUN_0c059d9c(void);
extern void FUN_0c05a3ae(void);
extern void FUN_0c05ab80(void);
extern void FUN_0c059f44(void);
extern void FUN_0c05a460(void);
extern void FUN_0c05a5e0(void);
extern void FUN_0c05acc8(void);
extern void nlRotateV(float *out, float *v);
extern void nlUnitMatrix(void);
extern void menuOpenStep(void);
extern void menuCursor(int a, int n, int c);
extern void menuPutFrame(void);
extern void putLevelCTFontAssist(int id, void *tbl, int n, int v, int e);
extern void menuEnterStep(void);

/* Draw the result screen layers up to its stage (0C2A9788): base, then rows 1, 2 and 3 (the last two
   steps only with the second HUD). */
void FUN_0c0597fc(void)
{
    int *s = (int *)0x0C2A9788;

    if (*s >= 0) {
        FUN_0c059866();
        FUN_0c059d9c();
        FUN_0c05a3ae();
        if (*(int *)0x0C2A7618) {
            FUN_0c05ab80();
        }
    }
    if (*s >= 1) {
        FUN_0c059eb0();
        FUN_0c059f44();
    }
    if (*s >= 2) {
        FUN_0c05a460();
        FUN_0c05a5e0();
    }
    if (*s >= 3 && *(int *)0x0C2A7618) {
        FUN_0c05ac4c();
        FUN_0c05acc8();
    }
}

/* Bounce a car off a wall: its up vector (+236) applied to the velocity (+152), the vertical speed
   (+156) reversed at 30%, and the inverse rotation applied back. */
void carColliReflection(char *c)
{
    float v[3];

    nlPushUnitMatrix();
    v[2] = 0.0f;
    v[0] = 0.0f;
    v[1] = 1.0f;
    nlRotateV((float *)(c + 236), v);
    FUN_0c077210(c + 152, c + 152);
    *(float *)(c + 156) = -(*(float *)(c + 156) * 0.29999998211860657f);
    nlUnitMatrix();
    nlRotateV(v, (float *)(c + 236));
    FUN_0c077210(c + 152, c + 152);
    nlPopMatrix(1);
}

/* The combo meter sprite (0C2A801C): off, or in mode 1 scaled by the meter (0C2A8C8C) and placed
   under the combo count (0C2A8D78 + 12). */
void FUN_0c054a38(void)
{
    float *s = (float *)0x0C2A801C;
    int m = *(int *)0x0C2A8CBC;
    float v;

    if (m == 0) {
        s[5] = 0.0f;
        return;
    }
    if (m == 1) {
        v = *(float *)0x0C2A8C8C;
        if (0.0f > v) {
            s[6] = 0.0f;
            s[7] = 0.0f;
            s[8] = 0.0f;
            s[9] = 0.0f;
            s[5] = 0.0f;
            return;
        }
        s[5] = v;
        s[8] = 0.0f;
        s[9] = 0.0f;
        s[6] = -1.0f;
        s[7] = -v;
        ((int *)s)[13] = 0x2006;
        s[2] = (float)(*(int *)0x0C2A8D78 + 12);
    }
}

/* The top menu: open step, cursor over 7 items, frame, title sprite, help bar, the level font hint,
   enter step. */
void menuTopHandler(void)
{
    menuOpenStep();
    menuCursor(0, 7, 0);
    menuPutFrame();
    menuPutSprites(0x0C0A0720, (void *)0x0C2A1A84, *(int *)0x0C2A1AD8 + 8, 24);
    menuPutHelpBar(0, (float)(-*(int *)0x0C2A1AD8), 416.0f);
    putLevelCTFontAssist(279, (void *)0x0C09F8BC, 7, ((int *)0x0C2A11DC)[*(int *)0x0C2A11D8], 0);
    menuEnterStep();
}

extern void FUN_0c05137c(void);
extern void CarSel_Time_Count(void);
extern void FUN_0c05130a(void);
extern void hudDraw(void);
extern void FUN_0c051d22(void);
extern void FUN_0c05153e(void);
extern void nlRotateAZ(int a);
extern void FUN_0c0789c0(Vec3f *v);
extern void FUN_0c078ff0(void);
extern void ADXF_Stop(int h);
extern void ADXF_Close(int h);
void FUN_0c051a3a(void);

/* The car select screen per frame: light and fog, the timer (until 944 frames), the HUD, the
   car, and the countdown (0C2A757C); keeps the speed readout (STR_ADc) as an int. */
void FUN_0c050f80(int x)
{
    nlUnitMatrix();
    *(int *)0x0C2A751C = x;
    FUN_0c051992();
    FUN_0c0519de();
    CarSel_SetBackColor();
    if (*(int *)0x0C2A7518 == 0) {
        if (*(int *)0x0C2A757C < 944) {
            FUN_0c05137c();
        }
        CarSel_Time_Count();
        FUN_0c05130a();
    }
    hudDraw();
    FUN_0c051d22();
    FUN_0c05153e();
    FUN_0c051a3a();
    if (*(int *)0x0C2A757C > 0) {
        (*(int *)0x0C2A757C)--;
    }
    *(int *)0x0C2A75B4 = (int)*(float *)0x0C1EE2F4;
}

/* Place a scene's camera: position base (0C0CF6B4) plus offset (0C2A72E0), rotated by the angles at
   0C2A72EC (z, x, y, negated), in matrix slot 2. */
#define PLACE_VIEW(base, other, offset, angles)                     \
    do {                                                            \
        Vec3f p;                                                    \
        Vec3f q;                                                    \
        unsigned short *a = (unsigned short *)(angles);             \
        p = *(Vec3f *)(base);                                       \
        q = *(Vec3f *)(other);                                      \
        nlAddVector((float *)&p, (float *)(offset));                \
        FUN_0c077df0(2);                                            \
        nlUnitMatrix();                                             \
        nlRotateAZ(-(int)a[2]);                                     \
        nlRotateAX(-(int)a[0]);                                     \
        nlRotateAY(-(int)a[1]);                                     \
        FUN_0c0789c0(&p);                                           \
        FUN_0c077df0(1);                                            \
        FUN_0c078ff0();                                             \
    } while (0)

void FUN_0c050b4c(void)
{
    PLACE_VIEW(0x0C0CF6B4, 0x0C0CF6C0, 0x0C2A72E0, 0x0C2A72EC);
}

void FUN_0c051a3a(void)
{
    PLACE_VIEW(0x0C0D07F4, 0x0C0D0800, 0x0C2A7548, 0x0C2A7554);
}

/* Stop the streamed file: a playing slot (state 3 in its 24-byte record at 0C26C5DC) is stopped and
   closed, then marked 1; the second file (0C26E174) is closed if open. */
void FUN_0c03012c(void)
{
    *(int *)0x0C26E180 = 0;
    if (*(int *)0x0C26E0F8 == 1) {
        if (*(unsigned char *)(0x0C26C5DC + (short)(*(short *)0x0C26E0F4 * 24)) == 3) {
            ADXF_Stop(*(int *)0x0C26C5D8);
            ADXF_Close(*(int *)0x0C26C5D8);
        }
        *(int *)0x0C26E0F8 = 0;
        *(char *)(0x0C26C5DC + (short)(*(short *)0x0C26E0F4 * 24)) = 1;
    }
    if (*(int *)0x0C26E178 == 1) {
        ADXF_Close(*(int *)0x0C26E174);
    }
}

/* The result wobble (0C2A9750..0C2A9758), stopped at amplitude 0.5 when the count (0C2A96F4) reaches
   0C2A97A8 + 121 with 0C2A97E0 clear. */
void FUN_0c05aefc(void)
{
    float *s = (float *)0x0C2A974C;
    short *a = (short *)0x0C2A9750;
    float v;

    if (*(int *)0x0C2A9754 == 1) {
        *a += 0x4000;
        *s = 0.8999999761581421f * *s;
        if (*(int *)0x0C2A97E0 == 0 && *(int *)0x0C2A96F4 == *(int *)0x0C2A97A8 + 121) {
            *s = 0.5f;
            *a = 0;
            *(int *)0x0C2A9754 = 0;
        }
        v = *s;
        if (0.09999999403953552f > v) {
            *(float *)0x0C2A9758 = 0.0f;
        } else {
            *(float *)0x0C2A9758 = -(v * FUN_0c089de0(*(unsigned short *)a));
        }
    }
}

extern void nlObjPutLoadTexture(int tex, void *table);
extern int IsBoyFriend(int a, int b);

/* ASCII to font index: '0'-'9' 26-35, 'A'-'Z' 0-25, then . & ! ? @ * (36-41); anything else 42. */
int FUN_0c0396dc(int ch)
{
    int c = (signed char)ch;

    if (c >= 48 && c <= 57) {
        return c - 22;
    }
    if (c >= 65 && c <= 90) {
        return c - 65;
    }
    switch (c) {
    case 46:
        return 36;
    case 38:
        return 37;
    case 33:
        return 38;
    case 63:
        return 39;
    case 64:
        return 40;
    case 42:
        return 41;
    }
    return 42;
}

/* Load the textures of model group k (all six groups for k 6): counts at 0C0D3048, texture lists at
   0C135134, into the texture table (0C141868). */
void FUN_0c060b84(int k)
{
    int first;
    int last;
    int i;
    int j;

    if (k == 6) {
        first = 0;
        last = 6;
    } else {
        first = k;
        last = k + 1;
    }
    for (i = first; i < last; i++) {
        for (j = 0; j < ((int *)0x0C0D3048)[i]; j++) {
            nlObjPutLoadTexture(((int **)0x0C135134)[i][j], (void *)0x0C141868);
        }
    }
}

/* Next idle animation for a pedestrian (+40): the special ones (state 7, 8, 12-15) cycle their own
   counter (0C2A71FC, 4 skips to 12), the others cycle the first n - 6 (0C2A71F8). */
void pedPickIdle(int *p)
{
    int n = *(int *)0x0C0D61A8;
    int s = p[9];

    if (s == 7 || s == 8 || s == 12 || s == 13 || s == 14 || s == 15) {
        *(int *)0x0C2A71FC = (*(int *)0x0C2A71FC + 1) % n;
        if (*(int *)0x0C2A71FC == 4) {
            *(int *)0x0C2A71FC = 12;
        }
        p[10] = *(int *)0x0C2A71FC;
    } else {
        *(int *)0x0C2A71F8 = (*(int *)0x0C2A71F8 + 1) % (n - 6);
        p[10] = *(int *)0x0C2A71F8;
    }
}

/* Start a walker on route k: lane k % 5 (+20), stopped (+24..+40), heading from the lane table
   (0C131BB8) turned by k / 5 half turns (+54, 0x8000 each), round k / 5 (+64). */
void FUN_0c05fa48(char *o, int k)
{
    int m = k % 5;
    int q;

    *(int *)(o + 20) = m;
    *(int *)(o + 24) = 0;
    *(float *)(o + 28) = 0.0f;
    *(float *)(o + 32) = 0.0f;
    *(float *)(o + 36) = 0.0f;
    *(Vec3f *)(o + 40) = *(Vec3f *)(o + 28);
    *(short *)(o + 52) = 0;
    q = k / 5;
    *(short *)(o + 54) = *(short *)(0x0C131BB8 + m * 16) + ((1 - q) << 15);
    *(short *)(o + 56) = 0;
    *(int *)(o + 60) = 0;
    *(int *)(o + 64) = q;
}

/* Is the stop area of customer k shown? In course mode 2, mini games 10 and 14 always, mini game 8
   for the boyfriend; otherwise only while nobody is boarding. */
int kyakuStopAreaVisible(char *k)
{
    if (*(int *)0x0C1EE20C == 2) {
        if (*(int *)0x0C1EE214 == 10 || *(int *)0x0C1EE214 == 14) {
            return 1;
        }
        if (*(int *)0x0C1EE20C == 2 && *(int *)0x0C1EE214 == 8) {
            if (IsBoyFriend(*(int *)(*(int *)(k + 20) + 4), 1)) {
                return 1;
            }
        }
        if (*(int *)0x0C1EE20C == 2) {
            if (*(int *)0x0C1EE214 == 10 || *(int *)0x0C1EE214 == 14 || *(int *)0x0C1EE214 == 8) {
                return 0;
            }
        }
    }
    return *(int *)0x0C179828 == 1 ? 0 : 1;
}

extern void req_load(void);
extern void FUN_0c03b544(int n);
extern void FUN_0c057c3c(void);

/* Start a vibration (puru puru) effect while playing (main mode 1 or 3, sub mode 1) with vibration on
   (0C28A4EF): mask bit 28, 24 or 16 picks the slot for val (0C131B04/08/0C); in mode 1 of 0C2A11B0
   only mask 1 passes, and a running bit-28 effect blocks the others. */
void ndPuru2Start(int port, int mask, int val)
{
    int mm = *(int *)0x0C1EE234;

    if (!((mm == 1 && *(int *)0x0C1EE238 == 1) || (mm == 3 && *(int *)0x0C1EE238 == 1))) {
        return;
    }
    if (*(signed char *)0x0C28A4EF == 0) {
        return;
    }
    if (*(int *)0x0C2A11B0 != 0 && mask != 1) {
        return;
    }
    if (mask != 0x10000000 && *(int *)0x0C2A9C64 == 0x10000000) {
        return;
    }
    *(int *)0x0C2A9C8C |= mask;
    if (mask == 0x10000000) {
        *(int *)0x0C131B04 = val;
    } else if (mask == 0x01000000) {
        *(int *)0x0C131B08 = val;
    } else if (mask == 0x00010000) {
        *(int *)0x0C131B0C = val;
    }
}

/* Leave the menu for the chosen game (0C2A11D8 +4: 0 arcade, 1 original, 2 Crazy Box with its mini
   game at +8): main mode 1, the game and course mode set, then the game set-up. */
void menuSetMode(void)
{
    int *p = (int *)0x0C2A11D8;

    *(int *)0x0C1EE234 = 1;
    if (p[1] == 1) {
        *(int *)0x0C1EE238 = 4;
        *(int *)0x0C1EE210 = 1;
        *(int *)0x0C1EE214 = 0;
    } else if (p[1] == 2) {
        *(int *)0x0C1EE238 = 0;
        *(int *)0x0C1EE210 = 2;
        *(int *)0x0C1EE214 = p[2] - 2;
    } else {
        *(int *)0x0C1EE238 = 4;
        *(int *)0x0C1EE210 = 0;
        *(int *)0x0C1EE214 = 0;
    }
    *(int *)0x0C2A11C8 = 0;
    *(int *)0x0C1EE218 = 0;
    if (*(int *)0x0C1EE210 == 2 && *(int *)0x0C1EE214 == 15) {
        *(int *)0x0C1EE20C = 0;
    } else {
        *(int *)0x0C1EE20C = *(int *)0x0C1EE210;
    }
    req_load();
    FUN_0c03b544(0);
    FUN_0c057c3c();
}

/* The car select scene for a newly picked car (*0C2A751C): base light, its colour (0C130748, 16
   bytes per car) and the panel layout for the screen mode (0C2A759C). */
void FUN_0c05130a(void)
{
    int *car = *(int **)0x0C2A751C;
    int m;

    if (*(int *)0x0C2A7530 != *car) {
        *(int *)0x0C2A7530 = *car;
        *(Vec3f *)0x0C2A7520 = *(Vec3f *)0x0C0D07D0;
        *(short *)0x0C2A752C = *(short *)(0x0C130748 + **(int **)0x0C2A751C * 16);
        m = *(int *)0x0C2A759C;
        if (m == 0) {
            *(float *)0x0C2A7500 = -320.0f;
        } else if (m == 1) {
            *(float *)0x0C2A750C = -179.0f;
            *(float *)0x0C2A7500 = 322.0f;
            *(float *)0x0C2A7508 = -17.0f;
        } else if (m == 2) {
            *(float *)0x0C2A7500 = -320.0f;
            *(float *)0x0C2A7508 = 9.0f;
        }
    }
}

extern void FUN_0c0414b8(void);
extern void FUN_0c03ac62(void);
extern int FUN_0c03ace8(void);
extern void FUN_0c07c150(int a, float *v, int d);
extern void InitColliWall(int n);
extern int FUN_0c038f80(void);
extern void nlObjPutSetFadeColor(float r, float g, float b);
extern void ExecArrow(int on, float dist);
extern void ResetFadeColor(void);
extern int buIsReady(int drive);
extern int padPortAConnected(void);

typedef struct {
    int w[8];
} Block32;

/* Pause into the VM menu (main mode 3, previous modes saved): without a VMU flag go straight to
   FUN_0c03ac62; with one, menu 5, or menu 0 when FUN_0c03ace8 says the card is not usable. */
void FUN_0c040b98(int k)
{
    *(int *)0x0C2A1224 = 1;
    if (k == 0 && *(int *)0x0C2A121C == 0) {
        *(int *)0x0C2A121C = 1;
    }
    *(int *)0x0C2A1228 = *(int *)0x0C1EE234;
    *(int *)0x0C2A122C = *(int *)0x0C1EE238;
    if (*(int *)0x0C1EE234 != 3) {
        *(int *)0x0C1EE234 = 3;
        *(int *)0x0C1EE238 = 0;
    }
    FUN_0c0414b8();
    if (*(int *)0x0C2A121C == 0) {
        FUN_0c03ac62();
        return;
    }
    if (k != 0 && FUN_0c03ace8() != 1) {
        FUN_0c03b698(0);
        return;
    }
    FUN_0c03b698(5);
}

/* A thick line from p to q: the four corners offset by (dx, -dy) and (-dx, dy), drawn by
   FUN_0c07c150. */
void FUN_0c07c2e0(int a, float *p, float *q, int d, float dy, float dx)
{
    float v[12];

    v[0] = p[0] + dx;
    v[1] = p[1] - dy;
    v[2] = p[2];
    v[3] = p[0] - dx;
    v[4] = p[1] + dy;
    v[5] = p[2];
    v[6] = q[0] + dx;
    v[7] = q[1] - dy;
    v[8] = q[2];
    v[9] = q[0] - dx;
    v[10] = q[1] + dy;
    v[11] = q[2];
    FUN_0c07c150(a, v, d);
}

/* Course collision set-up: the wall table and its 32-byte header for the course (Crazy Box: per mini
   game, and x kept at 0C0ED438), then the walls. */
void FUN_0c031934(int x)
{
    int cm = *(int *)0x0C1EE20C;
    int mg;

    if (cm == 1) {
        *(int *)0x0C26E3F0 = 0x0CDC1EC8;
        *(Block32 *)0x0C26E3F4 = *(Block32 *)0x0C08F9B0;
        InitColliWall(1);
    } else if (cm == 2) {
        mg = *(int *)0x0C1EE214;
        *(int *)0x0C26E3F0 = ((int *)0x0C0ED3C0)[mg];
        *(Block32 *)0x0C26E3F4 = *(Block32 *)(0x0C08FC78 + ((int *)0x0C0ED3FC)[mg] * 32);
        InitColliWall(*(int *)0x0C1EE214);
        *(int *)0x0C0ED438 = x;
    } else {
        *(int *)0x0C26E3F0 = 0x0CD5A3D8;
        *(Block32 *)0x0C26E3F4 = *(Block32 *)0x0C08F6C8;
        InitColliWall(0);
    }
}

/* Crazy Box goal step: start the result once time runs out or the goal is met (FUN_0c038f80), and
   show the green guide arrow within 2000 of the goal (0C1311BC). */
void FUN_0c05c72e(void)
{
    float d;

    if (*(int *)0x0C1EE794 == 0 && *(int *)0x0C2A991C == 0) {
        FUN_0c05bb76(1);
        *(int *)0x0C2A991C = 1;
        *(int *)(0x0C1790CC + 84) = 0;
    }
    if (FUN_0c038f80() && *(int *)0x0C2A991C == 0) {
        FUN_0c05bb24();
        *(int *)0x0C2A991C = 1;
    }
    d = nlLength((char *)0x0C1790CC + 120, (float *)0x0C1311BC);
    if (2000.0f > d) {
        nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
        ExecArrow(1, d);
        ResetFadeColor();
    }
}

/* Blink the VMU messages 14 and 15 at (138, 414) while a game was paused, unless the card is ready or
   no controller is in port A, outside the title loop. */
void PutVMSMessage(void)
{
    if (*(int *)0x0C2A1228 == 0 && *(int *)0x0C2A122C == 0) {
        return;
    }
    if (*(int *)0x0C2A121C == 0 || buIsReady(*(int *)0x0C2A11B8) != 0) {
        if (padPortAConnected()) {
            return;
        }
    }
    if (*(int *)0x0C1EE234 == 0 && (*(int *)0x0C1EE238 & ~1) == 0) {
        return;
    }
    if (!(*(int *)0x0C1EE330 & 32)) {
        return;
    }
    PutVM_Message(32, 14, 0, 138.0f, 414.0f);
    PutVM_Message(32, 15, 0, 138.0f, 414.0f);
}

/* A square of half side r around p (z kept), drawn by FUN_0c07c150. */
void FUN_0c07c3f0(int a, float *p, int d, float r)
{
    float v[12];

    v[0] = p[0] - r;
    v[1] = p[1] - r;
    v[2] = p[2];
    v[3] = p[0] + r;
    v[4] = p[1] - r;
    v[5] = p[2];
    v[6] = p[0] - r;
    v[7] = p[1] + r;
    v[8] = p[2];
    v[9] = p[0] + r;
    v[10] = p[1] + r;
    v[11] = p[2];
    FUN_0c07c150(a, v, d);
}

/* An arrow-head quad: the near corners of p shifted by (dy, dx) more than the far ones at q. */
void FUN_0c07c260(int a, float *p, float *q, int d, float dy, float dx)
{
    float v[12];

    v[0] = p[0] + dx + dy;
    v[1] = p[1] - dy + dx;
    v[2] = p[2];
    v[3] = p[0] - dx + dy;
    v[4] = p[1] + dy + dx;
    v[5] = p[2];
    v[6] = q[0] + dx;
    v[7] = q[1] - dy;
    v[8] = q[2];
    v[9] = q[0] - dx;
    v[10] = q[1] + dy;
    v[11] = q[2];
    FUN_0c07c150(a, v, d);
}

extern void SetColliObj(void *o, int kind);
extern void adxStartAfs2(int ch, int file);
extern int FUN_0c02e58a(int ch);
extern void nlFogTableSet(float *t);

/* Start a flying piece of kind k: its start offset (12-byte entries at 0C0D2988), cleared motion,
   an identity basis, zero spin, then its collision object (kind 17). */
void FUN_0c05ead0(char *o, int k)
{
    *(int *)(o + 20) = k;
    *(Vec3f *)(o + 72) = *(Vec3f *)(0x0C0D2988 + (unsigned char)(k * 12));
    *(float *)(o + 84) = 0.0f;
    *(float *)(o + 88) = 0.0f;
    *(float *)(o + 92) = 0.0f;
    *(float *)(o + 60) = 0.0f;
    *(float *)(o + 64) = 0.0f;
    *(float *)(o + 68) = 0.0f;
    *(float *)(o + 24) = 0.0f;
    *(float *)(o + 28) = 0.0f;
    *(float *)(o + 32) = 1.0f;
    *(float *)(o + 36) = 0.0f;
    *(float *)(o + 40) = 1.0f;
    *(float *)(o + 44) = 0.0f;
    *(Vec3f *)(o + 48) = *(Vec3f *)0x0C0965F0;
    *(char **)(o + 112) = o + 24;
    *(int *)(o + 124) = 0;
    *(int *)(o + 120) = 0;
    SetColliObj(o + 72, 17);
}

/* Voice channel ch's script (12-byte steps, slot at 0C2AEBE0): at a step's start frame, start its
   stream with its volume and pan; once past it, stop when the stream outlasts the step, or move to
   the next step (ending at a zero entry). Counts frames (+12). */
void FUN_0c072e90(int ch)
{
    int *s = (int *)(0x0C2AEBE0 + ch * 16);

    if (((int *)s[0])[1] == s[3]) {
        adxStartAfs2(ch, *(int *)s[0]);
        FUN_0c02e71e(ch, s[1]);
        FUN_0c02e75a(ch, s[2]);
    } else if (!(((int *)s[0])[1] > s[3])) {
        if (FUN_0c02e58a(ch)) {
            if (FUN_0c02e682(ch) >= ((int *)s[0])[2]) {
                gdc_StopStreamVoice(ch);
            }
        } else {
            s[0] += 12;
            s[3] = 0;
            if (*(int *)s[0] == 0) {
                s[0] = 0;
            }
        }
    }
    s[3]++;
}

/* Fog set-up: a linear 128-step table (1 - i/127) at 0C2A9D64, white, distance 850000, density
   0x807F; the fog parameters from 0C1322C0 and the fog state cleared (mode 2). */
void Init_Fog(void)
{
    float *t = (float *)0x0C2A9D64;
    float *src = (float *)0x0C1322C0;
    float *f = (float *)0x0C2A9F70;
    int i;

    for (i = 0; i < 128; i++) {
        t[i] = 1.0f - (float)i / 127.0f;
    }
    *(int *)0x0C0E4E40 = 0xFFFFFF;
    *(float *)0x0C0E4E48 = 850000.0f;
    nlFogTableSet(t);
    njSetRenderWidth(0x807F);
    f[1] = src[1];
    f[2] = src[2];
    f[3] = src[3];
    f[0] = src[0];
    *(int *)0x0C2A9F64 = 0;
    *(int *)0x0C2A9F68 = 0;
    *(int *)0x0C2A9F6C = 2;
    *(int *)0x0C2A9F9C = 0;
    *(int *)0x0C2A9FA0 = 0;
    *(int *)0x0C2A9FA4 = 0;
}

/* Which of the 25 grid areas (32-byte quads at 0C08DBA8) holds pos? Searches outward from start in
   both directions; -1 if none. */
int CheckAreaGrid(void *pos, int start)
{
    int next;
    int n;

    if (start < 0 || start >= 25) {
        start = 0;
    }
    next = start + 1;
    if (next >= 25) {
        next = 0;
    }
    for (n = 13; n != 0; n--) {
        if (isPosInArea((float *)pos, (float *)(0x0C08DBA8 + start * 32))) {
            return start;
        }
        if (isPosInArea((float *)pos, (float *)(0x0C08DBA8 + next * 32))) {
            return next;
        }
        start--;
        if (start < 0) {
            start = 24;
        }
        next++;
        if (next >= 25) {
            next = 0;
        }
    }
    return -1;
}

/* The same search over the 96 city areas (areaPolyTable, 0C08EAC8). */
int getAreaFromPos(float *pos, int start)
{
    int next;
    int n;

    if (start < 0 || start >= 96) {
        start = 0;
    }
    next = start + 1;
    if (next >= 96) {
        next = 0;
    }
    for (n = 48; n != 0; n--) {
        if (isPosInArea(pos, (float *)(0x0C08EAC8 + start * 32))) {
            return start;
        }
        if (isPosInArea(pos, (float *)(0x0C08EAC8 + next * 32))) {
            return next;
        }
        start--;
        if (start < 0) {
            start = 95;
        }
        next++;
        if (next >= 96) {
            next = 0;
        }
    }
    return -1;
}

extern void FUN_0c072580(float *p, int b);
extern void FUN_0c07270c(float *p, int b);
extern void FUN_0c07250c(void *a, void *b);

/* The result screen's icon rows: item i appears once the count (0C2A96F4) passes its threshold
   (3 frames apart), 33 pixels apart, at y = 0C2A9748 + 328 with scale 0C2A9758 + 1. */
#define RESULT_ROW(n, sprites, x0, t0)                                      \
    do {                                                                    \
        float *s = (float *)0x0C2A96F8;                                     \
        int i;                                                              \
        for (i = 0; i < (n); i++) {                                         \
            if (*(int *)0x0C2A96F4 > (t0) + i * 3) {                        \
                ((int *)s)[0] = ((int *)(sprites))[i];                      \
                s[1] = (float)((x0) + i * 33);                              \
                s[2] = (float)(*(int *)0x0C2A9748 + 328);                   \
                s[4] = *(float *)0x0C2A9758 + 1.0f;                         \
                s[5] = *(float *)0x0C2A9758 + 1.0f;                         \
                s[7] = 0.0f;                                                \
                s[9] = 1.0f;                                                \
                ((int *)s)[10] = 0;                                         \
                nlSprPut(s);                                                \
            }                                                               \
        }                                                                   \
    } while (0)

void FUN_0c05a3ae(void)
{
    RESULT_ROW(5, 0x0C130E6C, 98, 52);
}

void FUN_0c05ab80(void)
{
    RESULT_ROW(7, 0x0C130E9C, 375, 67);
}

/* Reset the three tennis players (40-byte records at 0C2AE710) from their starts (0C0D6134). */
void FUN_0c072884(void)
{
    int i;

    for (i = 0; i < 3; i++) {
        FUN_0c07250c((char *)0x0C2AE710 + (signed char)(i * 40), (char *)0x0C0D6134 + (signed char)(i * 12));
    }
}

/* Print a time v as "s.cc" centred on (x, y): whole seconds, the dot, a padding zero under ten
   hundredths, the hundredths, and an optional suffix (flag). */
void pfCrazyBoxRecordDistPut(int x, int y, int flag, float v)
{
    int whole = (int)v;
    int cent;
    float half;

    cent = (int)(nlFraction(v) * 100.0f);
    pfCleanString(x, y, (char *)flag);
    pfAddNumber((char *)whole, 0);
    pfAddString((void *)0x0C0D3034);
    if (cent < 10) {
        pfAddString((void *)0x0C0D302C);
    }
    pfAddNumber((char *)cent, 0);
    if (flag) {
        pfAddString((void *)0x0C0D3038);
    }
    half = pfLength(*(char **)0x0C08D678) * 0.5f;
    pfLocate((float)x - half, (float)y);
    pfPuts(*(char **)0x0C08D678);
}

/* Advance the driver's two blend tracks (+464, +468; 8-byte keys, time at +4) past the motion time
   (+36, wrapped to the motion length at *(+32)), then set the motion table's two key frames (+8,
   +20) for the current driver (TaxiDriver +0) from 0C1337CC. */
void FUN_0c064420(void)
{
    char *td = (char *)0x0C2AD000;
    float n = (float)**(int **)(td + 32);
    float t = *(float *)(td + 36);
    int *tbl;

    t = t - nlFloor(t / n) * n;
    if (t > ((float *)*(int *)(td + 464))[1]) {
        *(int *)(td + 464) += 8;
    }
    if (t > ((float *)*(int *)(td + 468))[1]) {
        *(int *)(td + 468) += 8;
    }
    tbl = ((int **)0x0C1337CC)[*(int *)td];
    ((int **)0x0C1331B0)[*(int *)td][2] = *(int *)((char *)tbl + **(int **)(td + 464) * 8);
    tbl = ((int **)0x0C1337CC)[*(int *)td];
    ((int **)0x0C1331B0)[*(int *)td][5] = *(int *)((char *)tbl + **(int **)(td + 468) * 8 + 4);
}

/* Move a collision object's node (+44) to another kind's list: unlink it from its kind (head
   0C26EBCC, tail 0C26EC24), append it to the new kind's list, clear the object's hit state (+32,
   +36) and move the count (0C26EC7C). */
void ChangeColliObj(void *obj, int kind)
{
    int *o = (int *)obj;
    int *n = (int *)o[11];
    int *head = (int *)0x0C26EBCC;
    int *tail = (int *)0x0C26EC24;
    int *count = (int *)0x0C26EC7C;
    int old;

    if (!n || n[1] == kind) {
        return;
    }
    old = n[1];
    if (n[2] == 0) {
        head[old] = n[3];
    } else {
        ((int *)n[2])[3] = n[3];
    }
    if (n[3] == 0) {
        tail[old] = n[2];
    } else {
        ((int *)n[3])[2] = n[2];
    }
    if (tail[kind] == 0) {
        tail[kind] = (int)n;
        head[kind] = (int)n;
        n[3] = 0;
        n[2] = 0;
    } else {
        n[2] = tail[kind];
        n[3] = 0;
        ((int *)tail[kind])[3] = (int)n;
        tail[kind] = (int)n;
    }
    n[1] = kind;
    o[9] = 0;
    o[8] = 0;
    count[old]--;
    count[kind]++;
}

/* Tidy three-letter initials: SEX and anything made of X and blanks with at least two X become
   "***"; all blank becomes "*CT". */
void FUN_0c03974c(char *s)
{
    int nx = 0;
    int nb = 0;
    int i;

    if (s[0] != 'S' || s[1] != 'E' || s[2] != 'X') {
        for (i = 0; i < 3; i++) {
            if (s[i] == 'X') {
                nx++;
            }
            if (s[i] == ' ' || s[i] == 0) {
                nb++;
            }
        }
        if (!(nx + nb == 3 && nx >= 2)) {
            if (nb == 3 && s[2] == 0) {
                s[0] = '*';
                s[1] = 'C';
                s[2] = 'T';
            }
            return;
        }
    }
    for (i = 0; i < 3; i++) {
        s[i] = '*';
    }
}

extern void FUN_0c02f870(void);
extern void gdc_SpriteFreeMenu(void);
extern int gdc_FileLoad(int dst, int name, int size);
extern void nlObjPutSetReplaceTextureDirName(void *tbl, void *dir);
extern void Set_StandWaitDist(int mode);
extern void kyakuInitStops(void);
extern void FUN_0c0246dc(void);
extern void FUN_0c031492(int n);

/* Load the in-game sprite set (state 3 at 0C26E184): free what the menu or state 5 held, load the
   common sprites and the language's own, and point their replacement texture names. */
void gdc_SpriteSetGame(void)
{
    if (*(int *)0x0C26E184 == 3) {
        return;
    }
    if (*(int *)0x0C26E184 == 5) {
        FUN_0c02f870();
        nlSetCommonTextureOffset(480);
        nlSpriteFreeTexture((void *)0x0C1469C8, 0);
    }
    gdc_SpriteFreeMenu();
    nlSetCommonTextureOffset(240);
    gdc_FileLoad(0x0CB40000, 0x0C08D63C, 0);
    nlObjPutSetReplaceTextureDirName((void *)0x0C143EE8, (void *)0x0C08BFC0);
    if (*(int *)0x0C2A11C0 == 0) {
        nlSetCommonTextureOffset(460);
        gdc_FileLoad(0x0CB40000, 0x0C08D648, 0);
        nlObjPutSetReplaceTextureDirName((void *)0x0C144C88, (void *)0x0C08BB88);
    } else {
        nlSetCommonTextureOffset(470);
        gdc_FileLoad(0x0CB40000, 0x0C08D654, 0);
        nlObjPutSetReplaceTextureDirName((void *)0x0C144D08, (void *)0x0C08BB88);
    }
    nlSetCommonTextureOffset(0);
    *(int *)0x0C26E184 = 3;
    *(int *)0x0C0E5318 = 3;
}

/* Customer system start: stops, counters, the guide arrow (off for Crazy Box games 4, 10-12, 14,
   original-mode game 15 and when NoArrow_Mode is set), and the spawn / despawn distances (700/750 in
   course mode 1, else 1100/1200). */
void init_KyakuMain(void)
{
    int cm;
    int mg;
    int arrow;

    Set_StandWaitDist(*(int *)0x0C1EE20C);
    kyakuInitStops();
    *(int *)0x0C179828 = 0;
    *(short *)0x0C179834 = 0;
    *(int *)0x0C179838 = 0;
    cm = *(int *)0x0C1EE20C;
    mg = *(int *)0x0C1EE214;
    if (cm == 2 && (mg == 11 || mg == 10 || mg == 4 || mg == 14 || mg == 12)) {
        arrow = 0;
    } else if (*(int *)0x0C1EE20C == 0 && *(int *)0x0C1EE214 == 15) {
        arrow = 0;
    } else if (*(int *)0x0C2A736C != 0) {
        arrow = 0;
    } else {
        arrow = 1;
    }
    *(int *)0x0C179830 = arrow;
    FUN_0c0246dc();
    *(int *)0x0C1794EC = 0;
    FUN_0c031492(3);
    *(char *)0x0C1794E8 = 0;
    if (*(int *)0x0C1EE20C == 1) {
        *(float *)0x0C179820 = 700.0f;
        *(float *)0x0C179824 = 750.0f;
    } else {
        *(float *)0x0C179820 = 1100.0f;
        *(float *)0x0C179824 = 1200.0f;
    }
}

extern void nlPushMatrix(int n);
extern void nlTranslateV(float *v);
extern void humanDraw(int model, int a, int frame, int b);
extern int nlMalloc(int size);

/* Draw tennis player pair k (two figures, positions at 0C0D60F8, headings at 0C13F4E4) with the
   current swing (0C13F4C0, models at 0C13F4C4/C8), stepping the swing every 60 frames (0C13F4BC). */
void FUN_0c072348(int k)
{
    float *p = (float *)((char *)0x0C0D60F8 + (signed char)(k * 2 * 12));
    int *a = (int *)0x0C13F4E4 + k * 2;

    nlPushMatrix(0);
    nlTranslateV(p);
    nlRotateAY(a[0]);
    humanDraw(((int *)0x0C13F4C4)[*(int *)0x0C13F4C0 * 2], 16, *(int *)0x0C13F4BC, 0);
    nlPopMatrix(1);
    nlPushMatrix(0);
    nlTranslateV(p + 3);
    nlRotateAY(a[1]);
    humanDraw(((int *)0x0C13F4C8)[*(int *)0x0C13F4C0 * 2], 16, *(int *)0x0C13F4BC, 0);
    nlPopMatrix(1);
    *(int *)0x0C13F4BC = *(int *)0x0C13F4BC % 60;
    if (*(int *)0x0C13F4BC == 0) {
        *(int *)0x0C13F4C0 = (*(int *)0x0C13F4C0 + 1) % 4;
    }
}

/* Per-course status arrays (8-byte records at 0C2A3A3C, one word per 32 points of each course,
   count at 0C2A6694): allocated on the first call (flag 0), then cleared; a failed allocation is
   reported on screen. */
void courseStatusInit(int again)
{
    int *e;
    int i;
    int j;
    int n;

    if (again == 0) {
        for (i = 0; i < *(int *)0x0C2A6694; i++) {
            e = (int *)(0x0C2A3A3C + i * 8);
            n = (**(int **)(*(int *)0x0C2A6690 + i * 12 + 4) >> 5) + 1;
            e[0] = n;
            e[1] = nlMalloc(n * 4);
        }
    }
    for (i = 0; i < *(int *)0x0C2A6694; i++) {
        e = (int *)(0x0C2A3A3C + i * 8);
        if (e[1]) {
            for (j = 0; j < e[0]; j++) {
                ((int *)e[1])[j] = 0;
            }
        } else {
            nlLocate(30, 35);
            nlPrintf((char *)0x0C0A21D8, i);
        }
    }
}

extern void FUN_0c03b81e(int n);
extern void FUN_0c0409a6(void);
extern void FUN_0c03933e(void);
extern void FUN_0c039378(float a, float b, float c);
extern void FUN_0c03101a(float a);
extern int FUN_0c03b788(void);
extern void FUN_0c037534(void);

/* The VMU check screen: while nothing is pending (0C2A11B4) it waits (a card-out note when flag 1 is
   up) and on request 1 opens the dimmed message layer; a pending request is cancelled when the card
   went away at the warning, or runs mode 3. 1 once handed over. */
int FUN_0c041c14(void)
{
    int f;

    FUN_0c03b81e(1);
    f = *(int *)0x0C2A11CC & 1;
    if (*(int *)0x0C2A11B4 == 0) {
        if (f && *(int *)0x0C2A1214 == 0) {
            FUN_0c0409a6();
        }
        if (*(int *)0x0C2A11B0 == 1) {
            *(int *)0x0C2A11B4 = *(int *)0x0C2A11B0;
            FUN_0c03933e();
            FUN_0c039378(0.3999999761581421f, 0.3999999761581421f, 0.3999999761581421f);
            FUN_0c03101a(0.7999999523162842f);
            nlRenderTextureBegin(0);
        }
        return 0;
    }
    if (*(int *)0x0C2A1210 == 0x0C09DDE0 && f) {
        *(int *)0x0C2A11B0 = 0;
    }
    if (*(int *)0x0C2A11B0 == 0) {
        *(int *)0x0C2A11B4 = 0;
        FUN_0c03b698(0);
        return 0;
    }
    FUN_0c039434(3);
    FUN_0c03b788();
    return 1;
}

/* The helicopter: once called for (0C27428C) it follows the car from 1000 ahead and 200 up (each
   frame, until the car reaches state 8), then flies off 2000 above the origin; before that, state 8
   starts it with its sound. */
void ExecHelicopter(void)
{
    float *v = (float *)0x0C274274;
    char *car = (char *)0x0C1790CC;

    if (*(int *)0x0C27428C == 0) {
        if (*(int *)0x0C274290 == 0 && *(int *)(car + 100) == 8) {
            FUN_0c037534();
            Sound_Request(0x411A9, 0);
        }
        return;
    }
    if (*(int *)0x0C274290 != 0) {
        return;
    }
    nlScaleVector(v, (float *)(car + 48), 1000.0f);
    v[1] = v[1] + 200.0f;
    nlAddVector(v, (float *)(car + 120));
    *(Vec3f *)0x0C274280 = *(Vec3f *)(car + 120);
    if (*(int *)(car + 100) == 8) {
        return;
    }
    (*(int *)0x0C274290)++;
    *(Vec3f *)v = *(Vec3f *)0x0C0965F0;
    v[1] = v[1] + 2000.0f;
}

extern int FUN_0c05db72(void);
extern void SetCameraPosVelocity(float *v);
extern void GetAng4Mat(int *ang);
extern void FUN_0c0288e0(int a, float b);
extern void camSetTarget(float *pos, int mode);
extern void SetCameraTargetRatio(float a, float b);
extern void SetCameraMode(int mode);
extern int GetAverageAngle(int a, int b, float w);

/* Is customer stop k usable here? Crazy Box games 10/11 only at their current stop (0C2A98FC), game
   14 also needs FUN_0c05db72 to match 0C2A9900; original-mode game 15 only at stop 7; other games
   always. */
int FUN_0c025b30(int a, int k)
{
    if (*(int *)0x0C1EE20C == 2) {
        if ((*(int *)0x0C1EE214 == 11 || *(int *)0x0C1EE214 == 10) && *(int *)0x0C2A98FC == k) {
            return 1;
        }
        if (*(int *)0x0C1EE20C == 2 && *(int *)0x0C1EE214 == 14 && *(int *)0x0C2A98FC == k) {
            if (FUN_0c05db72() == *(int *)0x0C2A9900) {
                return 1;
            }
        }
    }
    if (*(int *)0x0C1EE20C == 0 && *(int *)0x0C1EE214 == 15 && *(int *)0x0C2A98FC == 7) {
        return 1;
    }
    if (*(int *)0x0C1EE20C == 2) {
        if (*(int *)0x0C1EE214 == 11 || *(int *)0x0C1EE214 == 10 || *(int *)0x0C1EE214 == 14) {
            return 0;
        }
    }
    if (*(int *)0x0C1EE20C == 0 && *(int *)0x0C1EE214 == 15) {
        return 0;
    }
    return 1;
}

/* The chase camera behind the car: a point 5 up and 10 back turned with the car, its angles, and on a
   reset (0C179974) the camera mode 2 set-up first. */
void FUN_0c028b06(void)
{
    float v[3];
    int ang[3];

    v[0] = 0.0f;
    v[2] = 10.0f;
    v[1] = 5.0f;
    nlPushUnitMatrix();
    SetCameraPosVelocity((float *)(0x0C1790CC + 48));
    nlSqrt((Vec3f *)v, v);
    nlRotateAY(0x1800);
    nlRotateAX(0xFC00);
    GetAng4Mat(ang);
    nlPopMatrix(1);
    nlAddVector(v, (float *)(0x0C1790CC + 120));
    if (*(int *)0x0C179974) {
        FUN_0c0288e0(0, 35.0f);
        camSetTarget(v, 0);
        SetCameraTargetRatio(0.7999999523162842f, 0.29999998211860657f);
        SetCameraMode(2);
        ResetSpark();
        *(int *)0x0C179974 = 0;
    }
    camSetTarget(v, 2);
    camSetAngles(ang[0], ang[1], ang[2], 0);
}

/* Blend a pose toward another by t: five 12-byte positions, then twelve angle triples (from +60). */
void FUN_0c066bf0(char *dst, char *src, float t)
{
    float tmp[3];
    float u = 1.0f - t;
    int *pd;
    int *ps;
    int i;
    int off;

    for (i = 0; i < 5; i++) {
        off = (signed char)(i * 12);
        nlGetAverageVector((float *)(dst + off), (float *)(src + off), tmp, u, t);
        *(Vec3f *)(dst + off) = *(Vec3f *)tmp;
    }
    ps = (int *)(src + 60);
    pd = (int *)(dst + 60);
    for (i = 12; i != 0; i--) {
        pd[0] = (short)GetAverageAngle(pd[0], ps[0], u);
        pd[1] = (short)GetAverageAngle(pd[1], ps[1], u);
        pd[2] = (short)GetAverageAngle(pd[2], ps[2], u);
        pd += 3;
        ps += 3;
    }
}

extern void FUN_0c075120(void);
extern void FUN_0c0775d0(void *p, int n);
extern void FUN_0c074d20(void);
extern void FUN_0c074de0(int n);
extern void FUN_0c074d10(int n);
extern void FUN_0c074eb0(int n);
extern void FUN_0c075090(int a, int b, int c);
extern void nlInitPrint(void);
extern void nlPrnIndentOn(void);
extern void nlPerspective(float a, float b, float c, int d);
extern void nlInitCommonTexture(void *p, int a, int b);
extern void nlInitSprite(void *p, int a, int b);
extern void nlInitPalette(void *p, int n);
extern void paletteSetMode(int m);
extern void FUN_0c0742c0(int n);
extern void nlObjPutInit(void);
extern void setBorderColor(int c);

/* Which side of the box edge (a, b) a point p is on, per axis: 0 above, 1 equal, 2 below for x and
   for z (3 apiece), combined into a table lookup (0C08DA64); a "3" entry is settled by the slope
   across the edge. */
int FUN_0c0321c2(float *p, float *a, float *b)
{
    int px;
    int pz;
    int qx;
    int qz;
    int r;
    float t;

    px = (p[0] > a[0]) ? 0 : (a[0] > p[0]) ? 2 : 1;
    pz = (p[2] > a[2]) ? 0 : (a[2] > p[2]) ? 6 : 3;
    px += pz;
    qx = (p[0] > b[0]) ? 0 : (b[0] > p[0]) ? 2 : 1;
    qz = (p[2] > b[2]) ? 0 : (b[2] > p[2]) ? 6 : 3;
    qx += qz;
    r = *(int *)(0x0C08DA64 + (short)(px * 36) + qx * 4);
    if (r == 3) {
        t = a[0] + (b[0] - a[0]) * (p[2] - a[2]) / (b[2] - a[2]);
        if (p[0] > t) {
            r = 0;
        } else if (t > p[0]) {
            r = 1;
        } else {
            r = 2;
        }
    }
    return r;
}

/* Scene set-up for the game: the 3D engine pieces, text printing, the projection (4/3, 0.3, 300),
   the texture, sprite and palette pools, and white fade. */
void InitNaolib2(void)
{
    FUN_0c075120();
    FUN_0c0775d0((void *)0x0C1C1A38, 16);
    FUN_0c074d20();
    FUN_0c074de0(0);
    FUN_0c074d10(0x14A800);
    FUN_0c074eb0(0x0CEA0000);
    FUN_0c075090(0, 0x6000, 0x4C000);
    nlInitPrint();
    nlPrnIndentOn();
    FUN_0c077df0(3);
    nlUnitMatrix();
    nlPerspective(1.3333332538604736f, 0.29999998211860657f, 300.0f, 7464);
    FUN_0c077df0(1);
    nlInitCommonTexture((void *)0x0C1C1E78, 2000, 3000);
    nlInitSprite((void *)0x0C1E53AC, 1000, 1500);
    nlInitPalette((void *)0x0C1EDCE4, 64);
    paletteSetMode(2);
    FUN_0c0742c0(1);
    nlObjPutInit();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    setBorderColor(0);
}

/* Enter the course-end menu (except in reverse mode): save the modes, main mode 3 with FUN_0c041ce2,
   menu 6, then step 10. */
void FUN_0c040a50(void)
{
    if (*(int *)0x0C17948C == 1) {
        return;
    }
    *(int *)0x0C2A1228 = *(int *)0x0C1EE234;
    *(int *)0x0C2A122C = *(int *)0x0C1EE238;
    if (*(int *)0x0C1EE234 != 3) {
        *(int *)0x0C1EE234 = 3;
        *(int *)0x0C1EE238 = 0;
        FUN_0c041ce2(0);
    }
    FUN_0c03b544(6);
    FUN_0c03b698(10);
}

/* Print mode: stores the flag (+20) and sets the blend bits of two words: opaque (x != 0) leaves
   word 2 with bit 29; transparent adds bit 25 to word 0 and the 0x94 top byte to word 2. */
void nlPrintSetOpaqueMode(int x)
{
    unsigned int *g = (unsigned int *)0x0C2AF118;

    g[5] = x;
    g[0] &= 0xF8FFFFFF;
    g[2] &= 0x03FFFFFF;
    if (x == 0) {
        g[0] |= 0x02000000;
        g[2] |= 0x94000000;
    } else {
        g[2] |= 0x20000000;
    }
}

/* Reset the result popup: its sprite (0C2A91D8: scale 1, 0.2 start, flags), the 20 x 9 word grid at
   0C2A9404 (and the first five words of 0C2A9690), and the counters and 0.5 scale. */
void FUN_0c057aac(void)
{
    float *s = (float *)0x0C2A91D8;
    int *grid = (int *)0x0C2A9404;
    int i;
    int j;

    s[3] = 0.19999998807907104f;
    s[4] = 1.0f;
    s[5] = 1.0f;
    s[6] = 0.0f;
    s[7] = 0.0f;
    s[8] = 1.0f;
    s[9] = 1.0f;
    ((int *)s)[10] = 0;
    s[11] = 1.0f;
    ((int *)s)[13] = 10;
    ((int *)s)[12] = 2;
    for (i = 0; i < 20; i++) {
        if (i < 5) {
            ((int *)0x0C2A9690)[i] = 0;
        }
        for (j = 0; j < 9; j++) {
            grid[i * 8 + j] = 0;
        }
    }
    *(int *)0x0C2A9688 = 400;
    *(int *)0x0C2A9684 = 0;
    *(int *)0x0C2A968C = 640;
    *(int *)0x0C2A96A4 = 0;
    *(int *)0x0C2A96A8 = 0;
    *(float *)0x0C2A96B0 = 0.5f;
    *(float *)0x0C2A96B4 = 0.0f;
    *(short *)0x0C2A96AC = 0;
    *(int *)0x0C2A96B8 = 0;
    *(int *)0x0C2A96BC = 0;
    *(int *)0x0C2A96C0 = 0;
}

extern void FUN_0c055bec(void);
extern void FUN_0c055d48(void);
extern void FUN_0c055ecc(void);
extern void FUN_0c05614e(void);

/* The bonus panel's state machine (state 0C2A9178, timer 0C130CAC): states 1-5 run their updates
   (3 also steps the cycle); 2 lasts 60 frames, then 3 with a sound unless 0C2A9168 is 99; 3 goes to
   4 once both flags are up; 4 lasts 120 frames, then 5. The timer runs in states 2 and 4. */
void FUN_0c055b38(void)
{
    int *st = (int *)0x0C2A9178;
    int *t = (int *)0x0C130CAC;

    FUN_0c055bec();
    if (*st >= 1 && *st <= 5) {
        if (*st == 3) {
            FUN_0c055cf4();
        }
        FUN_0c055d48();
        FUN_0c055ecc();
        FUN_0c05614e();
    }
    if (*st == 2 && *t > 60) {
        *st = 3;
        *t = 0;
        if (*(int *)0x0C2A9168 != 99) {
            Sound_Request(0x604A9, 0);
        }
        *(int *)0x0C2A9188 = 0;
    }
    if (*st == 4 && *t > 120) {
        *st = 5;
        *t = 0;
    }
    if (*st == 3 && *(int *)0x0C2A8F88 == 1 && *(int *)0x0C2A8F84 == 1) {
        *st = 4;
    }
    if (*st == 2 || *st == 4) {
        (*t)++;
    }
}

extern void Init_Standard(void);
extern void FUN_0c052574(void);
extern void FUN_0c0525fc(void);
extern void FUN_0c052a1c(void);
extern void FUN_0c0528c8(void);
extern void FUN_0c0527ec(void);
extern void FUN_0c052c9e(void);
extern void FUN_0c052d28(void);
extern void FUN_0c0525b4(void);
void FUN_0c0526a0(void);

/* Start a HUD set: the ten pointers (0C2A8C4C..) to the default panel (0C1309F8), the ten flags
   cleared, the three on flags, then each part's own set-up, and the last counters cleared. */
void Init_nd_Sprite(void)
{
    int p = 0x0C1309F8;
    int i;

    *(int *)0x0C2A8C4C = p;
    *(int *)0x0C2A8C50 = p;
    *(int *)0x0C2A8C54 = p;
    *(int *)0x0C2A7600 = p;
    *(int *)0x0C2A8C5C = p;
    *(int *)0x0C2A8C60 = p;
    *(int *)0x0C2A8C78 = p;
    *(int *)0x0C2A8C7C = p;
    *(int *)0x0C2A8C80 = p;
    *(int *)0x0C2A8C84 = p;
    *(int *)0x0C2A8C88 = p;
    for (i = 0; i < 10; i++) {
        ((int *)0x0C2A918C)[i] = 0;
    }
    *(int *)0x0C2A9180 = 1;
    *(int *)0x0C2A9184 = 1;
    *(int *)0x0C2A9188 = 1;
    hudInit();
    Init_Standard();
    FUN_0c052574();
    FUN_0c0525fc();
    FUN_0c0526a0();
    FUN_0c052a1c();
    FUN_0c0528c8();
    FUN_0c0527ec();
    FUN_0c052c9e();
    FUN_0c052d28();
    FUN_0c0525b4();
    *(int *)0x0C2A7610 = 0;
    *(int *)0x0C2A7614 = 0;
    *(int *)0x0C2A91BC = 0;
    *(int *)0x0C2A91C0 = 0;
    *(int *)0x0C2A91C4 = 0;
    *(int *)0x0C2A91C8 = 0;
}

/* The eight-slot gauge: its sprite (0C2A801C) set up, per slot: pointers 0 and the bars (10 from slot
   3 on), the on flags 1; and the gauge's counters. */
void FUN_0c0526a0(void)
{
    float *s = (float *)0x0C2A801C;
    int i;

    s[1] = 0.0f;
    s[2] = 0.0f;
    s[3] = 0.19999998807907104f;
    s[4] = 1.0f;
    s[5] = 1.0f;
    s[6] = 0.0f;
    s[7] = 0.0f;
    s[8] = 1.0f;
    s[9] = 1.0f;
    ((int *)s)[10] = 0;
    ((int *)s)[13] = 0x200A;
    s[11] = 1.0f;
    ((int *)s)[12] = 2;
    for (i = 0; i < 8; i++) {
        ((int *)0x0C2A8D7C)[i] = 0;
        if (i < 3) {
            ((int *)0x0C2A8D9C)[i] = 0;
        } else {
            ((int *)0x0C2A8D9C)[i] = 10;
        }
        ((int *)0x0C2A8DBC)[i] = 1;
    }
    *(int *)0x0C2A8DDC = 8;
    *(int *)0x0C2A8DE4 = 2;
    *(int *)0x0C2A8DE0 = 3;
    *(int *)0x0C2A8CBC = 0;
    *(int *)0x0C2A8D74 = -6;
    *(int *)0x0C2A8D78 = 9;
}

/* Draw the four car icons (rows at 0C1304CC, spaced 72 apart from x 376, y 42): the picked car
   (0C2A751C) at half size with its first image, the others full size with the second. */
void FUN_0c051e4c(void)
{
    float *s = (float *)0x0C2A7410;
    int i;
    int pick;

    for (i = 0; i < 4; i++) {
        if (**(int **)0x0C2A751C == i) {
            s[4] = 0.5f;
            s[5] = 0.5f;
            pick = 0;
        } else {
            s[4] = 1.0f;
            s[5] = 1.0f;
            pick = 1;
        }
        s[1] = (float)(i * 72 + 376);
        s[2] = 42.0f;
        ((int *)s)[0] = ((int **)0x0C1304CC)[i][pick];
        ((int *)s)[10] = 0;
        nlSprPut(s);
    }
}

extern void sysCfgRead(void);
extern void FUN_0c040e1c(void);
extern void saveBufferInit(void *buf);
extern void FUN_0c041a3e(int n);
extern void FUN_0c03b674(int n);

/* Set up the 4-slot panel sprites (80-byte records at 0C2A9A6C, wrapped to 256): all four for k 4,
   else just slot k - 1; each at (320, 240) scale 0.2 with its counters cleared. */
void FUN_0c05b7f0(int k)
{
    int i;
    int end;
    float *s;

    if (k == 4) {
        i = 0;
        end = 3;
    } else {
        i = k - 1;
        end = k;
    }
    for (; i < end; i++) {
        s = (float *)(0x0C2A9A6C + ((i * 80) & 255));
        s[1] = 320.0f;
        s[2] = 240.0f;
        s[3] = 0.19999998807907104f;
        s[4] = 1.0f;
        s[5] = 1.0f;
        s[6] = 0.0f;
        s[7] = 0.0f;
        s[8] = 1.0f;
        s[9] = 1.0f;
        ((int *)s)[10] = 0;
        ((int *)s)[13] = 10;
        s[11] = 1.0f;
        ((int *)s)[12] = 2;
        ((int *)0x0C2A9B5C)[i] = 0;
        ((float *)0x0C2A9B68)[i] = 0.0f;
        ((float *)0x0C2A9B74)[i] = 0.0f;
    }
}

/* On the result screen, once the count (0C2A96F4) is within 120 of the start (0C2A97A8) and the
   skip button (TaxiSW +4 bit 3) is pressed: stop the voice, jump the count past the start (+121),
   and fold the eight bonus tallies (0C2A97EC) into the totals (0C2A980C, mod 10). */
void FUN_0c059514(void)
{
    int a = *(int *)0x0C2A97A8;
    int *cnt = (int *)0x0C2A96F4;
    int i;

    if (*cnt >= a + 120) {
        return;
    }
    if (!(((int *)0x0C1EE24C)[1] & 8)) {
        return;
    }
    if (*(int *)0x0C2A97E0 != 0) {
        return;
    }
    gdc_StopStreamVoice(0);
    if (*cnt >= a) {
        if (!(*cnt >= a + 121)) {
            *cnt = a + 121;
        }
    } else {
        *cnt = a;
    }
    *(int *)0x0C2A97E0 = 1;
    for (i = 0; i < 8; i++) {
        ((int *)0x0C2A982C)[i] = 1;
        ((int *)0x0C2A980C)[i] = (((int *)0x0C2A97EC)[i] + ((int *)0x0C2A980C)[i]) % 10;
        ((int *)0x0C2A97EC)[i] = 0;
    }
}

/* Reset the VM menu: its state words (0C2A11D8..), counters, the config, the save buffer and the
   first screen, then start the pause (FUN_0c040b54(1)). */
void FUN_0c041d68(void)
{
    int *p = (int *)0x0C2A11D8;
    int i;

    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }
    *(int *)0x0C2A11B4 = 0;
    *(int *)0x0C2A11B0 = 0;
    *(int *)0x0C2A1214 = 0;
    FUN_0c03b674(0);
    *(int *)0x0C2A1228 = 0;
    *(int *)0x0C2A122C = 0;
    *(int *)0x0C2A1224 = -1;
    *(int *)0x0C2A11B8 = 0;
    *(int *)0x0C2A123C = 0;
    sysCfgRead();
    *(int *)0x0C2A11C4 = 0;
    *(int *)0x0C2A1240 = 0;
    *(int *)0x0C2A1244 = 0;
    *(int *)0x0C2A1AE0 = 0;
    *(int *)0x0C2A1220 = 0;
    *(int *)0x0C2A11C8 = 0;
    *(int *)0x0C2A121C = 1;
    FUN_0c040e1c();
    FUN_0c03ac62();
    saveBufferInit((void *)0x0C2A1258);
    FUN_0c0414b8();
    *(char *)0x0C2A1238 = 50;
    *(char *)0x0C2A1239 = 51;
    *(char *)0x0C2A123A = 0;
    FUN_0c041a3e(0);
    FUN_0c03b81e(0);
    *(float *)0x0C2A1AD4 = 1.0f;
    *(int *)0x0C2A1ADC = 640;
    *(int *)0x0C2A1AD8 = 640;
    FUN_0c03b544(0);
    FUN_0c03b698(0);
    FUN_0c040b54(1);
}

/* May customer k be served in this Crazy Box game? Anything but mini games 10 and 8 always; game 8
   needs the boyfriend; game 10 passes at once when not in GSystem mode 1, otherwise when the car is
   nearly still (side speed < 0.15, turn < 16) inside the stop area. */
int kyakuMiniGameAreaOk(char *k)
{
    if (*(int *)0x0C1EE20C != 2) {
        return 1;
    }
    if (*(int *)0x0C1EE214 != 10 && *(int *)0x0C1EE214 != 8) {
        return 1;
    }
    if (*(int *)0x0C1EE788 == 1 && *(int *)0x0C1EE20C == 2 && *(int *)0x0C1EE214 == 8) {
        if (IsBoyFriend(*(int *)(*(int *)(k + 20) + 4), 1)) {
            return 1;
        }
    }
    if (*(int *)0x0C1EE788 != 1 && *(int *)0x0C1EE20C == 2 && *(int *)0x0C1EE214 == 10) {
        return 1;
    }
    if (*(int *)0x0C1EE788 == 1 && *(int *)0x0C1EE20C == 2 && *(int *)0x0C1EE214 == 10) {
        float a = *(float *)(0x0C1790CC + 348);
        float b;

        if (a < 0.0f) {
            a = -a;
        }
        if (0.14999999105930328f > a) {
            b = (float)*(short *)(0x0C1790CC + 408);
            if (b < 0.0f) {
                b = -b;
            }
            if (16.0f > b) {
                if (CheckKyakuArea((float *)(0x0C1790CC + 120), *(int *)0x0C2A98FC)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

/* Spin the customer area marker: its phase (0C0ED920) advances 0.05 and wraps, its angle (0C0ED924)
   2048 per frame; the marker offset (0C271D18) = 0.5 + 0.25 * f(angle); in mini game 19 of Crazy Box
   three more markers step round a 15-frame cycle (0C0ED928): the first two from step 0, then up to
   step 3, then the rest. */
void ExecKyakuArea(void)
{
    float *ph = (float *)0x0C0ED920;
    int *ang = (int *)0x0C0ED924;
    int *step = (int *)0x0C0ED928;
    float *out = (float *)0x0C271D18;
    float k2 = 0.25f;
    float k3 = 0.5f;
    float v;

    *ph = nlFraction(*ph + 0.04999999701976776f);
    *ang += 2048;
    out[0] = k3 + k2 * FUN_0c089de0(*ang);
    if (*(int *)0x0C1EE20C == 2 && *(int *)0x0C1EE214 == 19) {
        if (*step < 2) {
            v = k3 + k2 * FUN_0c089de0(*ang);
            out[2] = v;
        } else if (*step < 4) {
            v = k3 + k2 * FUN_0c089de0(*ang);
            out[0] = v;
        } else {
            v = k3 + k2 * FUN_0c089de0(*ang);
            out[3] = v;
        }
        *step = (*step + 1) % 15;
    } else {
        out[0] = k3 + k2 * FUN_0c089de0(*ang);
    }
}

/* A thick quad: p's near corners shifted by (dx, dy) and q's far corners by (-dx, -dy), with the two
   edge directions flipped from FUN_0c07c260; drawn by FUN_0c07c150. */
void FUN_0c07c1d0(int a, float *p, float *q, int d, float dy, float dx)
{
    float v[12];

    v[0] = p[0] + dx + dy;
    v[1] = p[1] - dy + dx;
    v[2] = p[2];
    v[3] = p[0] - dx + dy;
    v[4] = p[1] + dy + dx;
    v[5] = p[2];
    v[6] = q[0] + dx - dy;
    v[7] = q[1] - dy - dx;
    v[8] = q[2];
    v[9] = q[0] - dx - dy;
    v[10] = q[1] + dy - dx;
    v[11] = q[2];
    FUN_0c07c150(a, v, d);
}

extern void TOANG(short *a, short *b, float x, float y, float z);
extern void nlScale(float x, float y, float z);
extern void nlObjPut(void *obj);

/* A cubic Bezier through the four 12-byte points p: out = (1-t)^3 p0 + 3 t (1-t)^2 p1
   + 3 t^2 (1-t) p2 + t^3 p3. */
void Bezier(float *p, float *out, float t)
{
    float tmp[3];
    float u = 1.0f - t;
    float tt = t * t;
    float uu = u * u;
    float w;

    nlScaleVector(out, p, u * uu);
    w = t * uu;
    nlScaleVector(tmp, p + 3, w * 3.0f);
    nlAddVector(out, tmp);
    u = u * tt;
    nlScaleVector(tmp, p + 6, u * 3.0f);
    nlAddVector(out, tmp);
    nlScaleVector(tmp, p + 9, t * tt);
    nlAddVector(out, tmp);
}

/* Draw the debug marker object at pos, turned along the vector v (angles from TOANG) and scaled by
   s; modes 1, below 0 and above 5 also tilt it a half turn. */
void DispVector(float *v, float *pos, int mode, float s)
{
    short ang[2];

    TOANG(ang, ang + 1, v[0], v[1], -v[2]);
    nlPushMatrix(0);
    nlTranslateV(pos);
    nlRotateAY((unsigned short)ang[1]);
    nlRotateAX((unsigned short)ang[0]);
    nlScale(s, s, s);
    if (mode == 1 || mode < 0 || mode > 5) {
        nlRotateAX(0x8000);
    }
    nlObjPut((void *)0x0C46BAB8);
    nlPopMatrix(1);
}

extern float getNearCoursePoint(int a, int i, int *res, float *pos);

/* The course point nearest pos over all the current stage's courses (info at 0C0C3D4C, 12-byte
   entries by Game_No + MiniGame_No: first course +4, count +8): copied into out. */
void getNearLineIndexAll(float *out)
{
    int *info = (int *)(0x0C0C3D4C + (*(int *)0x0C1EE210 + *(int *)0x0C1EE214) * 12);
    int first = info[1];
    int end = first + info[2];
    int i;
    int idx;
    float best = 1000000.0f;
    float d;
    float *p = 0;

    for (i = first; i < end; i++) {
        idx = 0;
        d = getNearCoursePoint(0, i, &idx, out);
        if (best > d) {
            best = d;
            p = (float *)(*(int *)(*(int *)0x0C2A6690 + i * 12) + idx * 12);
        }
    }
    out[0] = p[0];
    out[1] = p[1];
    out[2] = p[2];
}

extern void gdFsMemcpy(char *src, char *dst, int n);
extern int FUN_0c15fa92(char *name);

/* Parse one ISO 9660 directory record (rec) into out: +0 extent, +4 size, +8 flags, +9 the name's
   hash, +10 the name. Records shorter than 34 give 0. A plain file's name loses its ";1" (2 bytes);
   a directory's "." and ".." entries (names 0 and 1) become "." and "..". */
int FUN_0c15fab8(unsigned char *rec, char *out)
{
    int n;

    if (rec[0] < 34) {
        return 0;
    }
    gdFsMemcpy((char *)rec + 2, out, 4);
    gdFsMemcpy((char *)rec + 10, out + 4, 4);
    out[8] = rec[25];
    n = rec[32];
    if (!(out[8] & 2)) {
        n -= 2;
    }
    gdFsMemcpy((char *)rec + 33, out + 10, n);
    out[10 + n] = 0;
    if (out[8] & 2) {
        if (out[10] == 0) {
            out[10] = 46;
        } else if (out[10] == 1) {
            out[10] = 46;
            out[11] = 46;
            out[12] = 0;
        }
    }
    out[9] = FUN_0c15fa92(out + 10);
    return rec[0];
}

extern int kmSetCheapShadowMode(int mode);
extern void FUN_0c07d430(void);
extern int kmUseAnotherModifier(int m);

/* Lay out the render regions from base: a table of cfg[1] x16-byte entries, cfg[2] x16-byte
   entries and cfg[3] x12-byte entries, one after another (starting 3 x cfg[1]*16 in), the
   boundaries kept in globals; then the cheap shadow mode of cfg[4] and the modifier switched on. */
int FUN_0c07c6b0(int base, int *cfg)
{
    int a = cfg[1] * 16;
    int b = cfg[2] * 16;
    int c = cfg[3] * 12;

    *(int *)0x0C14AA88 = cfg[1];
    *(int *)0x0C14AA8C = cfg[2];
    *(int *)0x0C14AA90 = cfg[3];
    *(int *)0x0C2B7658 = base;
    *(int *)0x0C2B765C = base + a;
    *(int *)0x0C2B7660 = base + 2 * a;
    *(int *)0x0C2B7664 = base + 3 * a;
    *(int *)0x0C2B7668 = base + 3 * a + b;
    *(int *)0x0C2B7670 = base + 3 * a + 2 * b;
    *(int *)0x0C2B766C = base + 3 * a + 2 * b + c;
    kmSetCheapShadowMode(cfg[4]);
    FUN_0c07d430();
    return kmUseAnotherModifier(1);
}

/* Is the copy finished on every channel (h+3 of them)? Each channel object (h+56) answers through
   its vtable slot +80; both flags must be 1. When so, the pending flag (+92) is cleared. */
int mwlRnaIsCopyEnd(char *h)
{
    int ok[2];
    int *p0 = &ok[0];
    int *p1 = &ok[1];
    int res;
    int i;
    int *obj;

    if (*(int *)(h + 92) == 0) {
        return 0;
    }
    res = 1;
    *p1 = 1;
    *p0 = 1;
    for (i = 0; i < (unsigned char)h[3]; i++) {
        obj = *(int **)(h + 56);
        if ((*(int (**)(int *, int))(*obj + 80))(obj, i) != 1) {
            ok[i] = 0;
        }
    }
    if (*p0 == 0 || *p1 == 0) {
        res = 0;
    }
    if (res == 1) {
        *(int *)(h + 92) = 0;
    }
    return res;
}

/* Draw the four result-screen sprites (ids 413, 414, 412, then the table[idx] one) through the
   sprite state at 0C2A7EDC with an orange fade. */
void FUN_0c056ff8(int idx)
{
    float *pf = (float *)0x0C2A7EDC;
    int *pi = (int *)0x0C2A7EDC;

    nlObjPutSetFadeColor(1.0f, 0.5f, 0.0f);
    pf[4] = 1.0f;
    pf[5] = 1.0f;
    pi[10] = 0;
    pi[13] = 0x200a;
    FUN_0c05778a(pf, 413, 175.0f, 68.0f);
    FUN_0c05778a(pf, 414, 242.0f, 74.0f);
    FUN_0c05778a(pf, 412, 210.0f, 96.0f);
    pf[4] = 0.7f;
    pf[5] = 0.7f;
    pi[13] = 0x2005;
    pf[11] = 1.0f;
    FUN_0c05778a(pf, ((int *)0x0C0D0C30)[idx], 184.0f, 44.0f);
    ResetFadeColor();
}

/* Once-only trigger for the end-of-game cue (flag 0C2A991C): with passengers dropped it runs
   FUN_0c05bb24 and zeroes Car_Data+84; with 0C1EE794 clear it switches FUN_0c05bb76 on (1) and sets
   the flag; in mini-game 6 with Car_Data+124 not above 20, or mini-game 5 with it not above 0, it
   switches mode 2 on, sets the flag and plays sound 0x10FA9. */
void FUN_0c05d076(void)
{
    int *flag = (int *)0x0C2A991C;
    int mg;
    float v;

    if (*flag != 0) {
        return;
    }
    if (*(int *)0x0C1794D0 >= 1) {
        FUN_0c05bb24();
        *(int *)(0x0C1790CC + 84) = 0;
    }
    if (*(int *)0x0C1EE794 == 0) {
        FUN_0c05bb76(1);
        *flag = 1;
        *(int *)(0x0C1790CC + 84) = 0;
        return;
    }
    mg = *(int *)0x0C1EE214;
    v = *(float *)(0x0C1790CC + 124);
    if ((mg == 6 && !(v > 20.0f)) || (mg == 5 && !(v > 0.0f))) {
        FUN_0c05bb76(2);
        *flag = 1;
        Sound_Request(0x10FA9, 0);
    }
}

extern void FUN_0c0606e2(int a, int b);
extern void FUN_0c060740(int tbl, int a, int b, int c, int d);

/* Ports with a pad in slot 1 or 2 of a group of six whose first button word has bit 2 set: mark it
   in the global mask 0C2A9FA8 (bit 2, or bit 1 when flag is 0), run FUN_0c0606e2, start the matching
   table (0C0D2F64 for flag, 0C0D2EA0 otherwise) and finish with FUN_0c060692. 0 for any other port. */
int FUN_0c060586(int port, int flag)
{
    unsigned int m = (unsigned int)port % 6;
    int *info;

    if (m != 1 && m != 2) {
        return 0;
    }
    info = (int *)pdGetPeripheral(port);
    if (!(**(int **)((char *)info + 48) & 4)) {
        return 0;
    }
    if (flag) {
        *(int *)0x0C2A9FA8 |= 4;
    } else {
        *(int *)0x0C2A9FA8 |= 2;
    }
    FUN_0c0606e2(0, port);
    if (flag) {
        FUN_0c060740(0x0C0D2F64, 0, 0, 1, port);
    } else {
        FUN_0c060740(0x0C0D2EA0, 0, 0, 1, port);
    }
    return ((int (*)(unsigned int, int, int, int))FUN_0c060692)(port, 0, 0, 1);
}

extern float FUN_0c0288f0(void);
extern void camSetEye(float *pos, int mode);

/* Chase-camera step: target = the car position (Car_Data+120) raised by 5; a pending reset
   (0C179974) first re-seeds the eye, the speed state, the camera mode and the sparks; then the
   target is set and the zoom (0C1798A4) becomes 30 x (1 + (400 - FUN_0c0288f0()) / 800), the
   fraction kept at 0 or more. */
void FUN_0c028f50(void)
{
    float v[3];
    float t;

    v[0] = *(float *)(0x0C1790CC + 120);
    v[1] = *(float *)(0x0C1790CC + 124);
    v[2] = *(float *)(0x0C1790CC + 128);
    v[1] = v[1] + 5.0f;
    if (*(int *)0x0C179974 != 0) {
        camSetEye((float *)0x0C179968, 0);
        SetCameraTargetRatio(0.29999998f, 0.29999998f);
        SetCameraMode(1);
        ResetSpark();
        *(int *)0x0C179974 = 0;
    }
    camSetTarget(v, 2);
    t = (400.0f - FUN_0c0288f0()) / 800.0f;
    if (t < 0.0f) {
        t = 0.0f;
    }
    *(float *)0x0C1798A4 = 30.0f + 30.0f * t;
}

extern int VSklIpPlay(int a, int b, int c, int d, float t, int e, int f);

/* One step of a blended skeleton-pose play (h): while the blend length (+268) is 0 it only clears the
   top bit of the byte at +329. Otherwise VSklIpPlay is run with t = step (+264) / length, then the
   step grows by 1; when it reaches the length the bit is cleared and the target pose (+272, +276)
   becomes the current one (+52, +56). */
void psgPlayBlend(char *h, int arg)
{
    if (*(float *)(h + 268) == 0.0f) {
        h[329] &= 127;
        return;
    }
    VSklIpPlay(*(int *)(h + 52), (int)*(float *)(h + 56), *(int *)(h + 272), (int)*(float *)(h + 276),
               *(float *)(h + 264) / *(float *)(h + 268), *(int *)h, arg);
    *(float *)(h + 264) = *(float *)(h + 264) + 1.0f;
    if (*(float *)(h + 264) == *(float *)(h + 268)) {
        h[329] &= 127;
        *(int *)(h + 52) = *(int *)(h + 272);
        *(float *)(h + 56) = *(float *)(h + 276);
    }
}

/* A point on the line through p and q (x, y, z each) found for the third coordinate: with a different z
   in q the line is solved for z = t = (dz*px - dx*pz) / (k*dz - dx), x = k*t and y follows the line;
   with the same z, z stays p's, x = k*pz and y follows the line, or is out's own when q has the same
   x too. The result goes to out. (The factor k is the float argument.) */
void FUN_0c07bee0(float *p, float *q, float *out, float k)
{
    float tmp[3];
    float dy = q[1] - p[1];
    float dz = q[2] - p[2];
    float dx = q[0] - p[0];
    float t;

    if (dz == 0.0f) {
        tmp[2] = p[2];
        tmp[0] = k * p[2];
        if (dx == 0.0f) {
            tmp[1] = out[1];
        } else {
            tmp[1] = dy * (tmp[0] - p[0]) / dx + p[1];
        }
    } else {
        t = (dz * p[0] - dx * p[2]) / (k * dz - dx);
        tmp[2] = t;
        tmp[0] = k * t;
        tmp[1] = dy * (t - p[2]) / dz + p[1];
    }
    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
}

/* The same with x and y swapped: y = k*t, and x follows the line. */
void FUN_0c07bf70(float *p, float *q, float *out, float k)
{
    float tmp[3];
    float dy = q[1] - p[1];
    float dz = q[2] - p[2];
    float dx = q[0] - p[0];
    float t;

    if (dz == 0.0f) {
        tmp[2] = p[2];
        tmp[1] = k * p[2];
        if (dy == 0.0f) {
            tmp[0] = out[0];
        } else {
            tmp[0] = dx * (tmp[1] - p[1]) / dy + p[0];
        }
    } else {
        t = (dz * p[1] - dy * p[2]) / (k * dz - dy);
        tmp[2] = t;
        tmp[1] = k * t;
        tmp[0] = dx * (t - p[2]) / dz + p[0];
    }
    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
}

extern float nlLdexpf(float x, int n);

/* The smoothed value at 0C2A9F70 (copied to 0C0E4E48) for the state at 0C2A9F64: in state 3, or with 0C2A9F68
   at 3, it jumps to the state's limit (a float at tbl + (signed byte)(state * 20)); with 0C2A9F9C set it grows
   by nlLdexpf(1, step) with the step counter at 0C2A9FA0 counting up, and is cut at the limit; otherwise it eases
   toward the limit by the factor at +16 of the state's entry. */
void FUN_0c060160(void)
{
    char *tbl = (char *)0x0C1322C0;
    float *pf = (float *)0x0C2A9F70;
    float *lim;
    int s = *(int *)0x0C2A9F64;
    int n;

    if (s != 3 && *(int *)0x0C2A9F68 != 3) {
        if (*(int *)0x0C2A9F9C != 0) {
            n = *(int *)0x0C2A9FA0;
            *(int *)0x0C2A9FA0 = n + 1;
            *pf = *pf + nlLdexpf(1.0f, n);
            lim = (float *)(tbl + (signed char)(*(int *)0x0C2A9F64 * 20));
            if (!(*pf > *lim)) {
                *(float *)0x0C0E4E48 = *pf;
                return;
            }
        } else {
            lim = (float *)(tbl + (signed char)(s * 20));
            *pf = *pf + (lim[0] - *pf) * lim[4];
            *(float *)0x0C0E4E48 = *pf;
            return;
        }
    }
    lim = (float *)(tbl + (signed char)(*(int *)0x0C2A9F64 * 20));
    *pf = *lim;
    *(float *)0x0C0E4E48 = *pf;
}

extern void FUN_0c058f08(float *p);
/* nlObjPutSetLightDirection(x, y, z): the second entry of nlObjPutSetLightDirectionV (0C07AE00), which loads the vector's components and falls into it */
extern void nlObjPutSetLightDirection(float a, float b, float c);

/* Set up the HUD sprite layer: a perspective for mode 3, ten sprite slots at 0C2A932C (20 bytes each: x 320,
   y 240, z 0 and three zero halfwords), the extra slot at 0C2A93F8 (0, 36, 0), colour 0x00FFFFFF, and the
   light direction (0, 0.6, 0.8). */
void FUN_0c0579c0(void)
{
    float *s = (float *)0x0C2A932C;
    float *e = (float *)0x0C2A93F8;
    int i;

    FUN_0c077df0(3);
    nlUnitMatrix();
    nlPerspective(1.3333332538604736f, 0.29999998f, 300.0f, 7464);
    FUN_0c077df0(1);
    for (i = 0; i < 10; i++) {
        s[0] = 320.0f;
        s[1] = 240.0f;
        s[2] = 0.0f;
        *(short *)((char *)s + 12) = 0;
        *(short *)((char *)s + 14) = 0;
        *(short *)((char *)s + 16) = 0;
        s += 5;
    }
    *(int *)0x0C2A93F4 = 0;
    e[0] = 0.0f;
    e[2] = 0.0f;
    e[1] = 36.0f;
    FUN_0c058f08(e);
    FUN_0c058f38(0x00FFFFFF);
    nlObjPutSetLightDirection(0.0f, 0.59999996f, 0.79999995f);
}

extern void hudHidePickUpNag(void);

/* The pick-up nag's sprites, once a frame: a counter (0C2A8FB4) steps; in the first 50 of every 61 frames three
   sprites (ids 462-464, at 280/440/480 across, 240 down) are drawn, or one (470, at 320) while 0C2A8FBC is set.
   Past 180 frames the counter restarts and the nag is hidden; at 105 the passenger is picked up. */
void FUN_0c057388(void)
{
    int *cnt = (int *)0x0C2A8FB4;
    float *p = (float *)0x0C2A7EDC;

    *cnt = *cnt + 1;
    p[4] = 1.0f;
    p[5] = 1.0f;
    *(int *)(p + 13) = 10;
    *(int *)(p + 10) = 0;
    if (*cnt % 61 < 50) {
        if (*(int *)0x0C2A8FBC == 0) {
            FUN_0c05778a(p, 462, 280.0f, 240.0f);
            FUN_0c05778a(p, 463, 440.0f, 240.0f);
            FUN_0c05778a(p, 464, 480.0f, 240.0f);
        } else {
            FUN_0c05778a(p, 470, 320.0f, 240.0f);
        }
    }
    if (*cnt > 180) {
        *cnt = 0;
        hudHidePickUpNag();
    }
    if (*cnt == 105) {
        Drv_PickSomeoneUp();
    }
}
