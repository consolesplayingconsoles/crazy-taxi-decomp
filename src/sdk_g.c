/* Small NAOMI library functions (batch g): the matrix stack's view helpers, nlRand, print, fog and timer setters. */

extern int g_0c2af0bc;

void nlMultiMatrix8(void *m);
void FUN_0c077f20(void *m);
void nlPushMatrix(void *m);
void FUN_0c077f60(void);
int nlRand(void);
void kmSetFogTable(float *t);
void nlRenderTextureSet_Sub(int a, int b, int c, int d, int e);
void FUN_0c075600(float f);
int FUN_0c0753f0(void);
int FUN_0c075400(int t);
int FUN_0c075410(int a, int b);

#define MATRIX_TOP_DC   (*(char **)(0x0C2B31DC + 8))    /* a matrix stack's current pointer (the entry above it) */
#define VIEW_MATRIX     (*(void **)(0x0C2B31F4 + 8))
#define RAND_SEED       (*(unsigned int *)0x0C14A7B4)

/* Multiplies by the matrix one entry (64 bytes) below the top of the stack at 0C2B31DC. */
void FUN_0c077f60(void)
{
    nlMultiMatrix8(MATRIX_TOP_DC - 64);
}

void FUN_0c077f70(void)
{
    FUN_0c077f20(VIEW_MATRIX);
}

void FUN_0c077f80(void)
{
    nlPushMatrix(VIEW_MATRIX);
    FUN_0c077f60();
}

void nlRandomSeed(int seed)
{
    RAND_SEED = seed;
}

/* The C library's linear congruential generator: 0 to 32767. */
int nlRand(void)
{
    RAND_SEED = RAND_SEED * 0x41C64E6D + 12345;
    return (RAND_SEED >> 16) & 0x7FFF;
}

/* nlRand as a float from 0 to just under 1. */
float nlRandom(void)
{
    return (float)nlRand() * (1.0f / 32768.0f);
}

void nlPrintColor(int c)
{
    *(int *)0x0C2AF128 = c;
}

void nlFogTableSet(float *t)
{
    kmSetFogTable(t);
}

void nlPrnIndentOff(void)
{
    g_0c2af0bc &= ~1;
}

void nlRenderTextureSet_Stride(int a, int b, int c, int d)
{
    nlRenderTextureSet_Sub(a, b, c, d, 0);
}

int FUN_0c0742f0(void)
{
    return 0x0C0D6A25;
}

void FUN_0c074300(int v)
{
    *(int *)0x0C14A64C = v;
}

void FUN_0c074680(void)
{
    FUN_0c075600(100000.0f);
}

void FUN_0c074d10(int v)
{
    *(int *)0x0C2AECEC = v;
}

/* The count of timer 0 (TMU TCNT0). */
int FUN_0c0753f0(void)
{
    return *(volatile int *)0xFFD8000C;
}

/* Ticks to a time: t times the factor at 0C2AEDBC, truncated. */
int FUN_0c075400(int t)
{
    return (int)((float)t * *(float *)0x0C2AEDBC);
}

int FUN_0c075410(int a, int b)
{
    return a - b;
}

/* The time since the count kept at 0C2AEEA8 (the timer counts down). */
int FUN_0c075430(void)
{
    int now = FUN_0c0753f0();

    return FUN_0c075400(FUN_0c075410(*(int *)0x0C2AEEA8, now));
}
