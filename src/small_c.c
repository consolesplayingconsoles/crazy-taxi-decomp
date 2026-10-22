/* Small functions, batch c. */

int FUN_0c077170(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int FUN_0c17277c(int *r);

void FUN_0c0109c4(int a)
{
    if (a != 0) {
        ((void (*)(void))0xAC0119A4)();
    } else {
        ((void (*)(void))0xAC01138C)();
    }
}

void FUN_0c079d60(int a, float *out)
{
    float f[4];
    float inv;

    FUN_0c077170(a, f);
    inv = 1.0f / f[3];
    out[0] = f[0] * inv;
    out[1] = f[1] * inv;
    out[2] = inv;
}

int syG2AicaFifoWaitEmpty(void)
{
    int r;

    do {
        FUN_0c17277c(&r);
    } while (r != 1);
    *(int *)(*(int *)0xC178700 + 0x110) += 1;
    return 0;
}

int _pd_peripheral_error(int a, int b, unsigned char *p)
{
    unsigned int v;

    v = p[4];
    if (v == 252) {
        return 0xFF0000FC;
    }
    if (v == 255 || v == 8 || v == 5 || v == 6 || v == 0) {
        return 0;
    }
    return 0xFF000000;
}

int CheckClipping(int a, float x)
{
    float f[4];
    float s;

    f[0] = x;
    nlProjectScreen3D(a, &f[1]);
    s = f[1] < 0.0f ? -f[1] : f[1];
    return (x * *(float *)0xC13EEC0 - f[3]) > s * *(float *)0xC13EEC4;
}

void PutCollisionEffect(int a, int b, int c)
{
    if ((c & 1) == 0) {
        SetSpark(a, b, 4);
        ndPuru2Start(*(unsigned char *)(0xC1EE24C + 44), 0x01000000, 0);
        *(int *)0xC0EDA58 += 1;
    } else {
        *(int *)0xC0EDA60 += 1;
    }
}

typedef struct {
    int w[19];
} Words19;

typedef struct {
    int w[36];
} Words36;

int set_event(int a, int b);
int Init_ProposalWalker(int a, int b);

void FUN_0c010954(int a, int b, int c)
{
    if (a != 0) {
        ((void (*)(int, int))0xAC011A1C)(b, c);
    } else {
        ((void (*)(int, int))0xAC0112C6)(b, c);
    }
}

void FUN_0c01098c(int a, int b, int c)
{
    if (a != 0) {
        ((void (*)(int, int))0xAC0119E0)(b, c);
    } else {
        ((void (*)(int, int))0xAC0111E8)(b, c);
    }
}

void FUN_0c0119a8(signed char *out)
{
    int i;

    for (i = 0; i < 8; i++) {
        out[i] = ((int (*)(void))0xAC011AFE)();
    }
}

int Set_ProposalWalker(int i)
{
    int h;

    h = set_event(80, 0x0C05FABA);
    ((int *)0xC2A9D30)[i] = h;
    if (h == 0) {
        return 0;
    }
    Init_ProposalWalker(((int *)0xC2A9D30)[i], i);
    return 1;
}

void Drv_CallActionStart(int a, int b)
{
    Words19 t;
    void (*f)(int);

    t = *(Words19 *)0xC0D4CA8;
    if (*(signed char *)0xC2AD1DF & 1) {
        f = (void (*)(int))t.w[a + 10];
    } else {
        f = (void (*)(int))t.w[a];
    }
    f(b);
}

int Psg_GetCharaKind(int a)
{
    Words36 t;

    t = *(Words36 *)0xC0D5FD4;
    return t.w[a - 23];
}

void FUN_0c0119e0(signed char *out, int n)
{
    int i;

    if (n > 0) {
        i = 0;
        do {
            out[i] = ((int (*)(void))0xAC011AFE)();
            i++;
        } while (i < n);
    }
}

int FUN_0c157220(int key, short *idx)
{
    int *n;
    int found;

    if (key >= *(int *)0xC177FB4) {
        *idx = 1;
    } else {
        *idx = 0;
    }
    n = *(int **)(0xC177FBC + *idx * 20);
    found = 0;
    while (n != 0) {
        if (n[3] == key) {
            found = (int)n;
            n = 0;
        } else {
            n = (int *)n[2];
        }
    }
    return found;
}

void _pd_peripheral_set_null(int *p)
{
    p[0] = 0;
    p[1] = 0;
    if (*(int *)0xC2B92E8 == 0) {
        p[2] = 0;
        p[3] = -1;
        p[4] = 0;
        p[5] = 0;
    } else {
        p[2] = -1;
        p[3] = 0;
        p[4] = -1;
        p[5] = -1;
    }
    ((short *)p)[12] = 0;
    ((short *)p)[13] = 0;
    ((short *)p)[17] = 0;
    ((short *)p)[16] = 0;
    ((short *)p)[15] = 0;
    ((short *)p)[14] = 0;
    p[10] = 0;
    p[9] = 0xC174F00;
}

int FUN_0c07d040(int base, short *p)
{
    int bits;
    int i;

    bits = 0;
    for (i = 0; i < 3; i++) {
        bits = (bits << 1) | (*(unsigned int *)(base + p[i] * 16 + 12) >> 31);
    }
    ((void (*)(int, short *, int, int))((int *)0xC14AA94)[bits])(base, p, 0, 0);
    return bits;
}

int FUN_0c1717d8(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);

void FUN_0c01117e(char *out)
{
    int i;

    *(char *)(*(int *)0xAC00F728 + 20) = 59;
    ((void (*)(void))0xAC0118F8)();
    for (i = 0; i < 16; i++) {
        out[i] = *(char *)(*(int *)0xAC00F72C + i * 4);
    }
}

float carSpeedGripScale(float x)
{
    float t;

    t = x * 0.00599999912f;
    if (!(t > 100.0f)) {
        return 1.0f + 0.00199999986f * t;
    }
    if (!(t > 170.0f)) {
        return 1.19999993f + 0.00714285672f * (t + -100.0f);
    }
    return 1.69999993f + 0.00142857130f * (t + -170.0f);
}


void mwRnaExecServer(void)
{
    int cs;
    char *p;

    FUN_0c1717d8(&cs);
    for (p = (char *)0xC2F605C; (unsigned int)p < 0xC2F605C + 0x480; p += 144) {
        if (*(unsigned char *)p == 1) {
            mwlRnaExecSvrHndl(p);
        }
    }
    mwRnaUnlockCs(&cs);
}

int FUN_0c01089a(int a)
{
    int r;

    r = 0;
    if (*(int *)0xAC00F708 != 0 && a == 0) {
        r = ((int (*)(void))0xAC01112A)();
    }
    if (*(int *)0xAC00F70C != 0 && a == 1) {
        r = ((int (*)(void))0xAC011980)();
    }
    return r;
}

float nlRandom(void);

int search_fat_backward(int disk, int fat, int lo, int hi)
{
    int base;
    int i;

    base = 0xC2EE990 + disk * 328;
    if (hi < lo) {
        return -1;
    }
    i = hi;
    do {
        if ((unsigned short)((int (*)(int, int))((int *)*(int *)0xC2EE98C)[3])(*(int *)(base + 36), i * 2)
            == (unsigned short)fat) {
            return i;
        }
        i--;
    } while (i >= lo);
    return -1;
}

void FUN_0c010630(void)
{
    int m;

    *(int *)0xAC00F708 = 0;
    *(int *)0xAC00F70C = 0;
    m = *(int *)0xAC00F71C & 7;
    if (m != 7) {
        if (((int (*)(int))0xAC010F3C)(m) == 0) {
            *(int *)0xAC00F708 = 1;
        }
    }
    if (((int (*)(int, int))0xAC011A90)(0, 0x1C200) == 0) {
        *(int *)0xAC00F70C = 1;
    }
}

void FUN_0c011a1c(signed char *buf, int n)
{
    int i;

    if (n > 0) {
        i = 0;
        do {
            if ((i & 15) == 0) {
                ((void (*)(void))0xAC011AFE)();
            }
            ((void (*)(int))0xAC011B2C)(buf[i]);
            i++;
        } while (i < n);
    }
}

typedef struct {
    int a;
    int b;
    int c;
} Vec12c;

void SetBubble(Vec12c *p, Vec12c *q)
{
    int e;

    e = set_event(60, 0x0C0369DA);
    if (e == 0) {
        return;
    }
    *(Vec12c *)(e + 20) = *p;
    *(Vec12c *)(e + 32) = *q;
    *(float *)(e + 44) = 0.199999988f + 0.199999988f * nlRandom();
}
