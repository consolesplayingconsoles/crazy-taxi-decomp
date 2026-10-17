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

void menuPutFrame(void)
{
    float u0;
    int t1;

    u0 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = 99.8999939f;
    t1 = *(int *)0xC2A1AD8;
    menuPutSprites(0xC0A06E8, 0xC2A1A84, t1, 0x0);
    *(float *)0xC2A1AD4 = u0;
}

void callGoBackAdvertise(void)
{
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
    pfSetZ(0.099999994f);
    *(unsigned int *)0xC1EE210 = 0x0;
    *(unsigned int *)0xC1EE214 = 0x0;
    *(unsigned int *)0xC1EE20C = 0x0;
}
