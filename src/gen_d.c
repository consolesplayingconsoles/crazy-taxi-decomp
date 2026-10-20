/* Straight-line functions with calls and guards (batch gen_d): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03b544(int);
int FUN_0c03b698(int);
int FUN_0c072e36(void);
int Sound_Init(void);
int gdc_StopStreamSongAll(void);
int gdc_StopStreamVoiceAll(void);
int menuPutSprites(int, int, int, int);
int pfSetZ(float);
int menuPutFrame(void);
int callGoBackAdvertise(void);

int menuPutFrame(void)
{
    float u0;
    float u1;
    int t2;
    int t3;

    u0 = *(float *)0xC03C1F0;
    u1 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = u0;
    t2 = *(int *)0xC2A1AD8;
    t3 = menuPutSprites(0xC0A06E8, 0xC2A1A84, t2, 0x0);
    *(float *)0xC2A1AD4 = u1;
    return t3;
}

int callGoBackAdvertise(void)
{
    float u6;
    int t7;

    *(unsigned int *)0xC1EE234 = 0x0;
    *(unsigned int *)0xC1EE238 = 0x8;
    *(unsigned int *)0xC2A11D8 = 0x0;
    *(unsigned int *)0xC2A11DC = 0x0;
    FUN_0c03b544(0x0);
    FUN_0c03b698(0x0);
    FUN_0c072e36();
    gdc_StopStreamVoiceAll();
    gdc_StopStreamSongAll();
    Sound_Init();
    u6 = *(float *)0xC040D94;
    t7 = pfSetZ(u6);
    *(unsigned int *)0xC1EE210 = 0x0;
    *(unsigned int *)0xC1EE214 = 0x0;
    *(unsigned int *)0xC1EE20C = 0x0;
    return t7;
}

