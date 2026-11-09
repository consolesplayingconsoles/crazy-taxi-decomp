/* Straight-line functions with calls and guards (batch gen_adq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_ExecBlend(float, float, float, float, float);
float Drv_FacePsgFrame(int, float, float, float);
int Drv_StartAction(int, int, int);
int Drv_StartGetOn(int);
int FcvStoreBuffer(int, int, float);
int drvUpdatePartTracks(void);
int Drv_ExecGetOn(float f4, float f5, float f6, float f7, float f8);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };


int Drv_ExecGetOn(float f4, float f5, float f6, float f7, float f8)
{
    int t1;
    int t3;
    int t27;
    int t28;
    int t34;
    int t35;
    int t41;
    float u44;
    int t48;

    t1 = (((struct o4_int *)0xC2AD014)->v);
    if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
        return Drv_ExecBlend(f4, f5, f6, f7, f8);
    }
    t3 = (((struct o0_int *)0xC2AD014)->v);
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                if (t3 != 3) {
                    return t3;
                }
                drvUpdatePartTracks();
                FcvStoreBuffer(((((struct oC_int *)0xC2AD014)->v)), 0xC2AD028, ((((struct o10_float *)0xC2AD014)->v)));
                (((struct o10_float *)0xC2AD014)->v) = (((((struct o10_float *)0xC2AD014)->v)) + 1.0f);
                if (!((float)((*(int *)((((((struct oC_int *)0xC2AD014)->v)) + 0x0))) - 1) > ((((struct o10_float *)0xC2AD014)->v)))) {
                    return Drv_StartAction(0x0, 0x0, 0x0);
                }
                return 0x24;
            }
            drvUpdatePartTracks();
            FcvStoreBuffer(((((struct oC_int *)0xC2AD014)->v)), 0xC2AD028, ((((struct o10_float *)0xC2AD014)->v)));
            (((struct o10_float *)0xC2AD014)->v) = (((((struct o10_float *)0xC2AD014)->v)) + 1.5f);
            if (!((float)((*(int *)((((((struct oC_int *)0xC2AD014)->v)) + 0x0))) - 1) > ((((struct o10_float *)0xC2AD014)->v)))) {
                (((struct o10_float *)0xC2AD014)->v) = (float)((*(int *)((((((struct oC_int *)0xC2AD014)->v)) + 0x0))) - 2);
            }
            t27 = *(int *)((t1 + 0x20));
            if (t27 == 3) {
                t28 = (((struct o0_int *)0xC2AD014)->v);
                (((struct o0_uint *)0xC2AD014)->v) = (t28 + 0x1);
                return Drv_StartGetOn((t28 + 0x1));
            }
            return t27;
        }
        (((struct o10_float *)0xC2AD014)->v) = (Drv_FacePsgFrame(t1, f4, f5, f6));
        drvUpdatePartTracks();
        FcvStoreBuffer(((((struct oC_int *)0xC2AD014)->v)), 0xC2AD028, ((((struct o10_float *)0xC2AD014)->v)));
        t34 = *(int *)((t1 + 0x24));
        if (t34 == 2) {
            t35 = (((struct o0_int *)0xC2AD014)->v);
            (((struct o0_uint *)0xC2AD014)->v) = (t35 + 0x1);
            return Drv_StartGetOn((t35 + 0x1));
        }
        return t34;
    }
    drvUpdatePartTracks();
    FcvStoreBuffer(((((struct oC_int *)0xC2AD014)->v)), 0xC2AD028, ((((struct o10_float *)0xC2AD014)->v)));
    (((struct o10_float *)0xC2AD014)->v) = (((((struct o10_float *)0xC2AD014)->v)) + 1.0f);
    t41 = (((struct o8_int *)0xC2AD014)->v);
    u44 = (float)t41;
    if ((int)t41 < 0) {
        u44 = ((float)t41 + 4.2949673e+09f);
    }
    if (u44 > ((((struct o10_float *)0xC2AD014)->v))) {
        return 0x24;
    }
    t48 = (((struct o0_int *)0xC2AD014)->v);
    (((struct o0_uint *)0xC2AD014)->v) = (t48 + 0x1);
    return Drv_StartGetOn((t48 + 0x1));
}
