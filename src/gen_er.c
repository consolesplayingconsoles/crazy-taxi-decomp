/* Straight-line functions with calls and guards (batch gen_er): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int Drv_StartGetOff(int, float);
int FcvStoreBuffer(int, int, float);
int drvUpdatePartTracks(void);
int Drv_ExecGetOff(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecGetOff(float f4, float f5, float f6, float f7, float f8)
{
    int t0;
    int t1;
    float u16;
    int t17;
    int t19;
    int t22;
    int t23;
    int t25;
    int t26;
    int t29;
    int t30;
    int t32;

    t0 = *(int *)0xC2AD014;
    t1 = *(int *)0xC2AD018;
    if (t0 != 0) {
        if (t0 == 1) {
            drvUpdatePartTracks();
            FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
            *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + 1.0f);
            if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
                return Drv_StartAction(0x0, 0x0, 0x0);
            }
            return 0x24;
        }
        return t0;
    }
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        return Drv_ExecBlend(f4, f5, f6, f7, f8);
    }
    drvUpdatePartTracks();
    FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
    u16 = *(float *)0xC2AD024;
    *(float *)0xC2AD024 = (u16 + 1.0f);
    t17 = *(int *)0xC2AD020;
    if ((float)((*(int *)((t17 + 0x0))) - 1) > (u16 + 1.0f)) {
        if ((t17 != 0xC8D1824) && (t17 != 0xC8D2488)) {
            return 0x24;
        }
        if (!(60.0f > (u16 + 1.0f))) {
            t19 = *(int *)((t1 + 0x34));
            if ((t19 != 0xC956FCC) && ((t19 != 0xC95A230) && ((t19 != 0xC95D7C4) && ((t19 != 0xC960308) && ((t19 != 0xC962F0C) && ((t19 != 0xC9659C0) && ((t19 != 0xC9684A4) && (t19 != 0xC96B138)))))))) {
                *(float *)0xC2AD024 = (float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 2);
                t22 = *(int *)((t1 + 0x24));
                if (t22 == 1) {
                    t23 = *(int *)0xC2AD014;
                    *(unsigned int *)0xC2AD014 = (t23 + 0x1);
                    return Drv_StartGetOff((t23 + 0x1), (u16 + 1.0f));
                }
                return t22;
            }
            Drv_StartAction(0x0, 0x0, 0x0);
            t25 = *(signed char *)0xC2AD1DF;
            *(unsigned char *)0xC2AD1DF = (t25 | 0x40);
            return (t25 | 0x40);
        }
        return 0xC063668;
    }
    t26 = *(int *)((t1 + 0x34));
    if ((t26 != 0xC956FCC) && ((t26 != 0xC95A230) && ((t26 != 0xC95D7C4) && ((t26 != 0xC960308) && ((t26 != 0xC962F0C) && ((t26 != 0xC9659C0) && ((t26 != 0xC9684A4) && (t26 != 0xC96B138)))))))) {
        *(float *)0xC2AD024 = (float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 2);
        t29 = *(int *)((t1 + 0x24));
        if (t29 == 1) {
            t30 = *(int *)0xC2AD014;
            *(unsigned int *)0xC2AD014 = (t30 + 0x1);
            return Drv_StartGetOff((t30 + 0x1), (u16 + 1.0f));
        }
        return t29;
    }
    Drv_StartAction(0x0, 0x0, 0x0);
    t32 = *(signed char *)0xC2AD1DF;
    *(unsigned char *)0xC2AD1DF = (t32 | 0x40);
    return (t32 | 0x40);
}
