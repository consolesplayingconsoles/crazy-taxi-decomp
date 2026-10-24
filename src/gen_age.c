/* Straight-line functions with calls and guards (batch gen_age): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_BikePedalStep(void);
int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int Drv_StartBikePedal(int);
int FcvStoreBuffer(int, int, float);
int Sound_Request(int, int);
int Drv_ExecBikePedal(float f4, float f5, float f6, float f7, float f8);

int Drv_ExecBikePedal(float f4, float f5, float f6, float f7, float f8)
{
    float u13;
    int t14;
    float u15;
    float u63;
    float u94;
    float u95;

    *(unsigned char *)0xC2AD1DF = ((*(signed char *)0xC2AD1DF) | 0x40);
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        Drv_ExecBlend(f4, f5, f6, f7, f8);
    } else {
        FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD028, (*(float *)0xC2AD024));
        *(float *)0xC2AD024 = ((*(float *)0xC2AD024) + (Drv_BikePedalStep()));
        if (!((float)((*(int *)(((*(int *)0xC2AD020) + 0x0))) - 1) > (*(float *)0xC2AD024))) {
            *(float *)0xC2AD024 = 0.0f;
        }
        u13 = *(float *)0xC2AD024;
        t14 = *(int *)0xC2AD014;
        u15 = *(float *)0xC2AD2B8;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                } else {
                    if (7.0f > u15) {
                        *(unsigned int *)0xC2AD014 = 0x0;
                        Drv_StartBikePedal(0x0);
                        *(float *)0xC2AD100 = u13;
                    }
                }
            } else {
                if (u15 > (1.0f + 1.0f)) {
                    *(unsigned int *)0xC2AD014 = 0x0;
                    Drv_StartBikePedal(0x0);
                    *(float *)0xC2AD100 = u13;
                }
            }
        } else {
            if ((u15 > 0.099999994f) && (1.5f > u15)) {
                *(unsigned int *)0xC2AD014 = 0x1;
                Drv_StartBikePedal(0x1);
                *(float *)0xC2AD100 = u13;
            }
            if ((*(float *)0xC2AD2B8) > 6.0f) {
                u63 = *(float *)0xC2AD024;
                *(unsigned int *)0xC2AD014 = 0x2;
                Drv_StartBikePedal(0x2);
                *(float *)0xC2AD100 = u63;
            }
        }
    }
    if (((*(int *)0xC1791EC) == 0) && (u94 = 0.099999994f, u95 = *(float *)0xC179228, u94 > u95)) {
        Drv_StartAction(0x1, 0x0, 0x0);
    }
    if ((*(signed char *)0xC1EE26E) != 0) {
        return Sound_Request(0x308A9, 0x0);
    }
    return 0x22;
}
