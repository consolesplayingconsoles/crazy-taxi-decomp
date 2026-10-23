/* Straight-line functions with calls and guards (batch gen_ahi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(float, float, float, float, float);
float Drv_ReverseFrame(void);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int Drv_ExecReverse(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecReverse(float f4, float f5, float f6, float f7, float f8)
{
    float t3;

    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x40);
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        Drv_ExecBlend(f4, f5, f6, f7, f8);
    } else {
        t3 = Drv_ReverseFrame();
        *(float *)0xC2AD024 = t3;
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, t3);
    }
    if ((*(int *)0xC1791EC) != 0) {
        if ((*(float *)0xC179228) > (*(float *)0xC063320)) {
            return Drv_StartAction(0x0, 0x0, 0x0);
        }
        return 0x15C;
    }
    return 0x120;
}
