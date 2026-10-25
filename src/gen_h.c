/* Straight-line functions with calls and guards (batch gen_h): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_VolStreamSong(int);
int gdc_PlayStreamSong(int);
int CarSel_SetBackColor(void);
void nlSetBackColor(int, int, int);
int kmiInitializeDMA(void);
int kmiWriteRegister(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfSetFont(int);
int pfSize(float, float);
int InitEndRoll(void);
int Result_SetBackColor(void);
int kmiInitializeTA(void);



int kmiInitializeTA(void)
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
    return 0xC2EAAEC;
}

