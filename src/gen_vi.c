/* Straight-line functions with calls and guards (batch gen_vi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_BikePedalStep(void);
int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int Drv_ExecBikeReverse(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecBikeReverse(float f4, float f5, float f6, float f7, float f8)
{
    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x40);
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        Drv_ExecBlend(f4, f5, f6, f7, f8);
    } else {
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
        *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + (Drv_BikePedalStep()));
        if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
            *(float *)0xC2AD024 = 0.0f;
        }
    }
    if ((*(int *)0xC1791EC) != 0) {
        if ((*(float *)0xC179228) > (*(float *)0xC063C50)) {
            return Drv_StartAction(0x0, 0x0, 0x0);
        }
        return 0x15C;
    }
    return 0x120;
}
