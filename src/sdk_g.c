/* Small NAOMI library functions (batch g): the matrix stack's view helpers, nlRand, print, fog and timer setters. */

extern int g_0c2af0bc;

void nlMultiMatrix8(void *m);
void nlMultiMatrixRevOrder(void *m);
void nlPushMatrix(void *m);
void nlMultiPushedMatrix(void);
int nlRand(void);
void kmSetFogTable(float *t);
void nlRenderTextureSet_Sub(int a, int b, int c, int d, int e);
void nlSetBackColorZ(int r, int g, int b, float z);
int nlSysMetricsReadTimer(void);
int nlSysMetricsScaleTime(int t);
int nlSysMetricsDiffTime(int a, int b);

#define MATRIX_TOP_DC   (*(char **)(0x0C2B31DC + 8))    /* a matrix stack's current pointer (the entry above it) */
#define VIEW_MATRIX     (*(void **)(0x0C2B31F4 + 8))
#define RAND_SEED       (*(unsigned int *)0x0C14A7B4)

/* Multiplies by the matrix one entry (64 bytes) below the top of the stack at 0C2B31DC. */
void nlMultiPushedMatrix(void)
{
    nlMultiMatrix8(MATRIX_TOP_DC - 64);
}

void nlMultiViewMatrix(void)
{
    nlMultiMatrixRevOrder(VIEW_MATRIX);
}

void nlPushMultiViewMatrix(void)
{
    nlPushMatrix(VIEW_MATRIX);
    nlMultiPushedMatrix();
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

int __nl_sysver_include__(void)
{
    return 0x0C0D6A25;
}

void nlSetPalExtMode(int v)
{
    *(int *)0x0C14A64C = v;
}

/* The original is `jmp nlSetBackColorZ` with r4-r6 (the colour) passed through and fr4 loaded with 100000.0: the earlier form
   dropped the colour. */
void nlSetBackColor(int r, int g, int b)
{
    nlSetBackColorZ(r, g, b, 100000.0f);
}

void nlSysSetTextureSize(int v)
{
    *(int *)0x0C2AECEC = v;
}

/* The count of timer 0 (TMU TCNT0). */
int nlSysMetricsReadTimer(void)
{
    return *(volatile int *)0xFFD8000C;
}

/* Ticks to a time: t times the factor at 0C2AEDBC, truncated. */
int nlSysMetricsScaleTime(int t)
{
    return (int)((float)t * *(float *)0x0C2AEDBC);
}

int nlSysMetricsDiffTime(int a, int b)
{
    return a - b;
}

/* The time since the count kept at 0C2AEEA8 (the timer counts down). */
int nlSysMetricsCpuPowerGet(void)
{
    int now = nlSysMetricsReadTimer();

    return nlSysMetricsScaleTime(nlSysMetricsDiffTime(*(int *)0x0C2AEEA8, now));
}
