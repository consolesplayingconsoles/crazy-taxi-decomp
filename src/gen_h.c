/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02e2ca(int);
int FUN_0c02e31e(int);
int FUN_0c050fec(void);
int FUN_0c074680(int, int, int);
int kmiInitializeDMA(void);
int kmiWriteRegister(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfSetFont(int);
int pfSize(float, float);

void FUN_0c03a3e0(void)
{
    FUN_0c074680(0x0, 0x0, 0x0);
    pfSetFont(0x0);
    pfSize(1.0f, 1.0f);
    FUN_0c02e31e(0x3);
    FUN_0c02e2ca(0x6E);
    *(unsigned int *)0xC2864E0 = 0x0;
    *(unsigned int *)0xC2864E4 = 0x2;
}

void FUN_0c05b0a0(void)
{
    float u2;
    float u3;
    int t4;

    FUN_0c050fec();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    *(unsigned int *)0xC2A96F8 = 0x62;
    *(unsigned int *)0xC2A972C = 0x2005;
    u2 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u2 + 40.0f);
    u3 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u3 + 30.0f);
    *(float *)0xC2A96FC = 0.0f;
    t4 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t4 + 0x70);
    *(float *)0xC2A9704 = 0.279999971f;
    *(unsigned int *)0xC2A9720 = 0x0;
    nlSprPut(0xC2A96F8);
    nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
    *(float *)0xC2A9704 = 0.199999988f;
}

void kmiInitializeTA(void)
{
    int t3;
    int t4;

    kmiWriteRegister(0x8, 0x1);
    kmiWriteRegister(0x8, 0x0);
    kmiInitializeDMA();
    *(unsigned int *)0xC2EAAC8 = 0x800000;
    *(unsigned int *)0xC2EAAD0 = 0x600000;
    t3 = *(int *)0xC2EAAD0;
    *(unsigned int *)0xC2EAAD4 = t3;
    t4 = *(int *)0xC2EAAC8;
    *(unsigned int *)0xC2EAAEC = ((unsigned int)t4 >> 1);
    *(unsigned int *)0xC2EAB0C = 0x0;
    *(unsigned int *)0xC2EAB2C = 0x1;
}
