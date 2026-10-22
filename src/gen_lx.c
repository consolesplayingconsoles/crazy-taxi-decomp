/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_BikePedalStep(void);
int Drv_ExecBlend(void);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int Drv_ExecBikeReverse(void);

int Drv_ExecBikeReverse(void)
{
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x40);
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        Drv_ExecBlend();
    } else {
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
        *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + (Drv_BikePedalStep()));
        if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
            *(float *)0xC2AD024 = 0.0f;
        }
    }
    if ((*(int *)0xC1791EC) != 0) {
        if ((*(float *)0xC179228) > (-0.099999994f)) {
            return Drv_StartAction(0x0, 0x0, 0x0);
        }
        return 0x15C;
    }
    return 0x120;
}
