/* Small library functions (batch p): Kamui background plane defaults, the G2 DMA protect register, RNA slot setup and
   allocation, a texture address mapping, a vertex table writer. */

/* The background plane's parameter words (floats given as their bits: 2.0, 260.0, 1e-5, 150.0, 560.0) in the table at
   0C2EA724, and the sort flags. */
int kmiInitializeBackGroundPlane(void)
{
    int *t = (int *)0x0C2EA724;

    t[0] = 0x80800000;
    t[1] = 0x20800000;
    t[2] = 0;
    t[3] = 0x40000000;
    t[4] = 0x43820000;
    t[5] = 0x3727C5AC;
    t[6] = 0xFF000000;
    t[7] = 0x43160000;
    t[8] = 0x40000000;
    t[9] = 0x3727C5AC;
    t[10] = 0xFF000000;
    t[11] = 0x440C0000;
    t[12] = 0x43820000;
    t[13] = 0x3727C5AC;
    t[14] = 0xFF000000;
    *(int *)0x0C2EA830 = t[5];
    *(int *)0x0C2EA82C = 0x01000000;
    return 0;
}

/* The G2 DMA protection window: the two addresses (bits 20-26) packed into the register and its copy. */
int syG2DmaSetProtect(unsigned int a, unsigned int b)
{
    unsigned int v;

    a &= 0x07F00000;
    b &= 0x07F00000;
    v = ((a >> 20) << 8) | (b >> 20) | 0x46590000;
    *(unsigned int *)0xA05F78BC = v;
    *(unsigned int *)0x0C1786FC = v;
    return 0;
}

int mwlRnaSetInitMember(char *p)
{
    p[1] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    *(int *)(p + 52) = 0;
    *(int *)(p + 44) = 0;
    *(int *)(p + 48) = 0;
    *(int *)(p + 64) = 0x2000;
    *(int *)(p + 68) = 0x2000;
    *(int *)(p + 72) = 0;
    *(int *)(p + 96) = 0;
    *(int *)(p + 108) = -1;
    *(int *)(p + 112) = 0;
    *(int *)(p + 116) = 0;
    *(int *)(p + 120) = 0;
    *(int *)(p + 124) = 0;
    *(int *)(p + 128) = 0;
    *(int *)(p + 140) = 0;
    p[7] = 0;
    *(int *)(p + 136) = 0;
    return 136;
}

/* The first free slot (first byte 0) of the 8 RNA slots of 144 bytes, or 0. */
char *mwlRnaAlloc(void)
{
    char *p;

    for (p = (char *)0x0C2F605C; p < (char *)0x0C2F605C + 1152; p += 144)
        if (!*p)
            return p;
    return 0;
}

/* A texture memory address as the linear address Kamui uses: the 32-bit and 64-bit areas interleaved. */
unsigned int kmyConvertAddress32to64(unsigned int x)
{
    unsigned int five = 0;

    if (x < 0x800000) {
        if (x >= 0x400000) {
            x -= 0x400000;
            five = 4;
        }
        return ((x & ~3u) << 1) + (x & 3) + five;
    }
    if (x >= 0xC00000) {
        x -= 0x400000;
        five = 4;
    }
    return ((x & ~3u) << 1) + (x & 3) + five + 0xFF800000;
}

/* Writes a polygon word into the vertex table at n (a whole word with the flag at 0x400000, else split into two halves, the
   top half of each kept); returns the new count. */
int kmiBGPlanePutColor(unsigned int f, int n, unsigned int v)
{
    int *t = (int *)0x0C2EA724;

    if (f & 0x02000000) {
        if (f & 0x00400000)
            t[n++] = v;
        else {
            t[n++] = v & 0xFFFF0000;
            t[n++] = (v & 0xFFFF) << 16;
        }
    }
    return n;
}
