/* Straight-line functions with calls and guards (batch gen_qm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int Drv_ExecBlend(void);
int drvUpdatePartTracks(void);
int FcvStoreBuffer(int, int, float);
int Drv_ExecSeated(void);

int Drv_ExecSeated(void)
{
    int t0;
    float u2;
    int t3;
    float u5;
    int t6;
    float u7;
    int t8;

    t0 = *(signed char *)0xC2AD1DF;
    if ((t0 & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    u2 = *(float *)0xC2AD024;
    t3 = *(int *)0xC2AD020;
    FcvStoreBuffer(t3, 0xC2AD028, u2);
    u5 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u5 + 1.0f);
    t6 = *(int *)0xC2AD020;
    u7 = *(float *)0xC2AD024;
    t8 = *(int *)((t6 + 0x0));
    if (!((float)(t8 - 1) > u7)) {
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    return 0x24;
}
