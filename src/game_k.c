/* Game functions (batch k): the new-game state reset, the course object tables' init, the 24-byte entry start, the
   vibration init, and Kamui's fog density register. Globals are addressed directly where the decomp has no name for them yet. */

void nlRandomSeed(int seed);
void FUN_0c07f5c0(int a);
int pdVibSetStopTime(int t, char *a, char *b, int c);
int kmiWriteRegister(int off, int v);

#define ENTRIES         ((char *)0x0C2B771C)

int kmSetFogDensity(int x)
{
    kmiWriteRegister(184, x);
    return 0;
}

void FUN_0c02c6d8(void)
{
    *(char *)0x0C1EE35C = 1;
    *(int *)0x0C179488 = 0;
    *(int *)0x0C17948C = 0;
    nlRandomSeed(12345);
    *(int *)0x0C2A4E50 = 0;
}

void CourseObj_Init(void)
{
    int i, n;

    *(int *)0x0C2A6ED0 = 0;
    *(int *)0x0C2A6EC8 = 0;
    *(int *)0x0C2A6ED8 = 0;
    *(int *)0x0C2A6ED4 = 0;
    *(int *)0x0C2A6ECC = 0;
    *(int *)0x0C2A6EDC = 0;
    n = *(int *)0x0C0C83EC;
    for (i = 0; i < n; i++) {
        ((int *)0x0C2A6EE8)[i] = 0;
        ((int *)0x0C2A6F60)[i] = 0;
    }
    if (*(int *)0x0C1EE20C == 0) {
        *(int *)0x0C2A6EE0 = 0;
        *(int *)0x0C2A6EE4 = 10;
    } else if (*(int *)0x0C1EE20C == 1) {
        *(int *)0x0C2A6EE0 = 10;
        *(int *)0x0C2A6EE4 = 19;
    }
}

/* Starts entry i when it is in use and not yet started (marking it started); else returns its byte 0 or 1. */
int FUN_0c07fd30(short i)
{
    char *e = ENTRIES + i * 24;

    if (e[0] != 1)
        return e[0];
    if (e[1])
        return e[1];
    FUN_0c07f5c0((i << 12) + 0x1A1);
    e[1] = 1;
    return 1;
}

void nd_Init_Puru2(void)
{
    char s4 = *(char *)0x0C0D2B58;
    char s0 = *(char *)0x0C0D2B59;
    char *p = (char *)0x0C2A9C68;

    p[0] = 1;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    *(int *)0x0C2A9C78 = 0;
    *(int *)0x0C2A9C7C = 0;
    *(int *)0x0C2A9C80 = 0;
    *(int *)0x0C2A9C84 = 0;
    *(int *)0x0C2A9C88 = 0;
    *(int *)0x0C2A9C8C = 0;
    *(int *)0x0C2A9C60 = 0;
    *(int *)0x0C2A9C64 = 0;
    pdVibSetStopTime(*(unsigned char *)(0x0C1EE24C + 44), &s4, &s0, 1);
    *(int *)0x0C2A9C90 = 1;
    *(int *)0x0C2A9C94 = 0;
    *(int *)0x0C2A9C98 = 0;
}
