/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int Sound_Request(int, int);
int drvUpdatePartTracks(void);
int Drv_ExecHorn(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecHorn(float f4, float f5, float f6, float f7, float f8)
{
    int t12;
    int t42;
    int t43;

    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        Drv_ExecBlend(f4, f5, f6, f7, f8);
    } else {
        drvUpdatePartTracks();
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
        *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.0f);
        if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
            t12 = 0x1;
            if ((*(int *)0xC1791EC) != 0) {
                t12 = 0x0;
            }
            Drv_StartAction(t12, 0x0, 0x0);
        }
    }
    if ((*(signed char *)0xC1EE26E) != 0) {
        Drv_StartAction(0x9, 0x0, 0x0);
        *(float *)0xC2AD024 = (*(float *)0xC0639BC);
    }
    if ((*(float *)0xC2AD024) == (*(float *)0xC0639C0)) {
        t42 = *(int *)0xC2AD000;
        t43 = 0x501A9;
        if ((t42 != 1) && (t42 != 3)) {
            t43 = 0x401A9;
        }
        return Sound_Request(t43, 0x0);
    }
    return 0x24;
}
