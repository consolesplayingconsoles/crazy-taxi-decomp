/* Straight-line functions with calls and guards (batch gen_qx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
float Drv_ReverseFrame(void);
int Drv_ExecBlend(void);
int FcvStoreBuffer(int, int, float);
int Drv_ExecReverse(void);

int Drv_ExecReverse(void)
{
    int t0;
    int t1;
    float t3;
    int t4;
    int t8;
    float u9;
    float u10;

    t0 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t0 | 0x40);
    t1 = *(signed char *)0xC2AD1DF;
    if ((t1 & 128) != 0) {
        Drv_ExecBlend();
    } else {
        t3 = Drv_ReverseFrame();
        *(float *)0xC2AD024 = t3;
        t4 = *(int *)0xC2AD020;
        FcvStoreBuffer(t4, 0xC2AD028, t3);
    }
    t8 = *(int *)0xC1791EC;
    if (t8 != 0) {
        u9 = -0.099999994f;
        u10 = *(float *)0xC179228;
        if (u10 > u9) {
            return Drv_StartAction(0x0, 0x0, 0x0);
        }
        return 0x15C;
    }
    return 0x120;
}
