/* Reference C, not built: SHC 5.1 -extra=a=400 -macsave=1 matches 5 of 6 functions; extRand keeps its mask in r2, the original in r3 (see docs/engine.md, "The compiler"). Range 0C049818-0C0498F8. */
/* The game's own random numbers (extRand*), a timer delta, and two bit-field helpers. */

extern unsigned int gExtRandSeed;
extern float g_0c0f4274;
extern int g_0c2a4e68;
extern int g_0c2a4e64;
int FUN_0c075430(void);

void extRandomSeed(unsigned int seed)
{
    gExtRandSeed = seed;
}

int extRand(void)
{
    gExtRandSeed = gExtRandSeed * 0x41C64E6D + 0x3039;
    return (gExtRandSeed >> 16) & 0x7FFF;
}

float extRandom(void)
{
    return (float)extRand() * (1.0f / 32768.0f);
}

float FUN_0c049854(void)
{
    float now = (float)FUN_0c075430();
    float d = now - g_0c0f4274;

    g_0c0f4274 = now;
    return d / 150.0f;
}

int FUN_0c049878(int mask)
{
    if (g_0c2a4e68 & mask)
        return 1;
    return 0;
}

int FUN_0c04988a(int *p)
{
    int v, i, n, more, res;

    v = g_0c2a4e64;
    n = 0;
    i = 0;
    if (p)
        n = *p;
    for (i = 0; i < 5; i++) {
        more = v & 32;
        res = v & 31;
        if (!more)
            break;
        if (i == n - 1)
            break;
        v >>= 6;
    }
    if (p)
        *p = i + 1;
    return res;
}
