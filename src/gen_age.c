/* Straight-line functions with calls and guards (batch gen_age): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float Drv_BikePedalStep(void);
int Drv_ExecBlend(float, float, float, float, float);
int Drv_StartAction(int, int, int);
int Drv_StartBikePedal(int);
int FcvStoreBuffer(int, int, float);
int Sound_Request(int, int);
int Drv_ExecBikePedal(float f4, float f5, float f6, float f7, float f8);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct oC_int { char p[0xC]; int v; };


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
        FcvStoreBuffer(((((struct oC_int *)0xC2AD014)->v)), 0xC2AD028, ((((struct o10_float *)0xC2AD014)->v)));
        (((struct o10_float *)0xC2AD014)->v) = (((((struct o10_float *)0xC2AD014)->v)) + (Drv_BikePedalStep()));
        if (!((float)((*(int *)((((((struct oC_int *)0xC2AD014)->v)) + 0x0))) - 1) > ((((struct o10_float *)0xC2AD014)->v)))) {
            (((struct o10_float *)0xC2AD014)->v) = 0.0f;
        }
        u13 = (((struct o10_float *)0xC2AD014)->v);
        t14 = (((struct o0_int *)0xC2AD014)->v);
        u15 = *(float *)0xC2AD2B8;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                } else {
                    if (7.0f > u15) {
                        (((struct o0_uint *)0xC2AD014)->v) = 0x0;
                        Drv_StartBikePedal(0x0);
                        *(float *)0xC2AD100 = u13;
                    }
                }
            } else {
                if (u15 > (1.0f + 1.0f)) {
                    (((struct o0_uint *)0xC2AD014)->v) = 0x0;
                    Drv_StartBikePedal(0x0);
                    *(float *)0xC2AD100 = u13;
                }
            }
        } else {
            if ((u15 > 0.099999994f) && (1.5f > u15)) {
                (((struct o0_uint *)0xC2AD014)->v) = 0x1;
                Drv_StartBikePedal(0x1);
                *(float *)0xC2AD100 = u13;
            }
            if ((*(float *)0xC2AD2B8) > 6.0f) {
                u63 = (((struct o10_float *)0xC2AD014)->v);
                (((struct o0_uint *)0xC2AD014)->v) = 0x2;
                Drv_StartBikePedal(0x2);
                *(float *)0xC2AD100 = u63;
            }
        }
    }
    if ((((((struct o0_int *)0xC1791EC)->v)) == 0) && (u94 = 0.099999994f, u95 = (((struct o3C_float *)0xC1791EC)->v), u94 > u95)) {
        Drv_StartAction(0x1, 0x0, 0x0);
    }
    if ((*(signed char *)0xC1EE26E) != 0) {
        return Sound_Request(0x308A9, 0x0);
    }
    return 0x22;
}
