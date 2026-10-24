/* Straight-line functions with calls and guards (batch gen_oc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_DriveFrame(void);
int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int Drv_ExecDrive(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecDrive(float f4, float f5, float f6, float f7, float f8)
{
    float t3;
    int t18;
    float u9;
    float u10;

    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x40);
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        Drv_ExecBlend(f4, f5, f6, f7, f8);
    } else {
        t3 = Drv_DriveFrame();
        *(float *)0xC2AD024 = t3;
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, t3);
    }
    if (((*(int *)0xC1791EC) == 0) && (u9 = 0.099999994f, u10 = *(float *)0xC179228, u9 > u10)) {
        Drv_StartAction(0x1, 0x0, 0x0);
    }
    t18 = 0x22;
    if ((*(signed char *)0xC1EE26E) != 0) {
        Drv_StartAction(0x9, 0x0, 0x0);
        *(float *)0xC2AD024 = 14.0f;
        t18 = 0x24;
    }
    return t18;
}
