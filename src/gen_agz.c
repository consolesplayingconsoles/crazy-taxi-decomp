/* Straight-line functions with calls and guards (batch gen_agz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(void);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int drvUpdatePartTracks(void);
int Drv_ExecSeated(void);

int Drv_ExecSeated(void)
{
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        return Drv_ExecBlend();
    }
    drvUpdatePartTracks();
    FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
    *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.0f);
    if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
        return Drv_StartAction(0x0, 0x0, 0x0);
    }
    return 0x24;
}
