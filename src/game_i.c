/* Game functions (batch i): the advertisement tick, a countdown that turns a mode off, the vibration start, a mode
   switch that touches the saved drive, a peripheral state test. Globals are addressed directly where the decomp has no
   name for them yet. */

void gdc_StopStreamVoice(int i);
void execAdvSprite(void);
int FUN_0c058234(void);
void FUN_0c05df48(void);
void FUN_0c05df5e(void);
void FUN_0c05bb64(void);
int pdGetPeripheral(int port);
int pdVibStart(int port, char *p, int n);
int buIsReady(int drive);
int FUN_0c05ef68(int port);

#define ADV_FLAGS       (*(unsigned short *)0x0C2A992C)

void FUN_0c05bb76(int a)
{
    if (*(int *)0x0C2A9930 == 0 && *(int *)0x0C2A9934 == 0) {
        ADV_FLAGS |= 0x20;
        *(int *)0x0C2A9930 = 1;
        *(int *)0x0C2A993C = 0;
        if (*(int *)0x0C1EE794 > 0)
            *(int *)0x0C2A9904 = 1;
        gdc_StopStreamVoice(0);
    }
    *(int *)0x0C2A9B8C = a;
}

int Advtise(void)
{
    int v;

    if ((*(unsigned short *)0x0C2A9228 & 1) == 1)
        execAdvSprite();
    v = *(unsigned short *)0x0C2A9228 & 8;
    if (v == 8)
        return FUN_0c058234();
    return v;
}

void FUN_0c05c2d4(void)
{
    int v;

    if (*(int *)0x0C2A9938 == 0)
        FUN_0c05df48();
    v = *(int *)0x0C2A9938 + 1;
    *(int *)0x0C2A9938 = v;
    if (v >= 210) {
        FUN_0c05df5e();
        FUN_0c05bb64();
    }
}

int FUN_0c03bf42(int m)
{
    unsigned int *g = (unsigned int *)0x0C2A11F4;
    int *p = (int *)0x0C0EF54C;
    int c;

    if (!(g[5] & 2))
        return 0;
    c = *p - 1;
    *p = c;
    if (c < 0)
        *p = m;
    if (*p == 0)
        g[5] = (g[5] & -12) | 4;
    return 1;
}

int FUN_0c040de6(int a, int b)
{
    int r;

    if (*(int *)0x0C2A121C == 3 && a != *(int *)0x0C2A11B8) {
        r = buIsReady(*(int *)0x0C2A11B8);
        if (r == 1)
            return r;
    }
    *(int *)0x0C2A1220 = 32;
    return b;
}

/* Whether the pad at port is in the state the mode needs (0x0C1EE24C bytes 43 and 44): 1 and the flag at 0C2A9C98 set or
   cleared accordingly, else 0. */
int FUN_0c05ef68(int port)
{
    unsigned char a, b;

    *(int *)0x0C2A9C70 = pdGetPeripheral(port);
    a = *(unsigned char *)(0x0C1EE24C + 43);
    if (a == 2) {
        b = *(unsigned char *)(0x0C1EE24C + 44);
        if (b == 5) {
            *(int *)0x0C2A9C98 = 1;
            return 1;
        }
        return 0;
    }
    b = *(unsigned char *)(0x0C1EE24C + 44);
    if (b == 2) {
        int *q = *(int **)(*(char **)0x0C2A9C70 + 48);

        if (*q & 0x100) {
            *(int *)0x0C2A9C98 = 0;
            return 1;
        }
    }
    return 0;
}

int vibStart(int port)
{
    int r = FUN_0c05ef68(port);
    char *p;

    if (!r)
        return r;
    p = (char *)0x0C2A9C68;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    r = pdVibStart(port, p, 1);
    if (!r) {
        *(int *)0x0C2A9C64 = 0;
        *(int *)0x0C2A9C60 = 0;
    }
    return r;
}
