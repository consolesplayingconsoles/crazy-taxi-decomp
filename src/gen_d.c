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


