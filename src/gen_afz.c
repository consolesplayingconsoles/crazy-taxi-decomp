/* Straight-line functions with calls and guards (batch gen_afz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_StartAction(int, int, int);
int FcvStoreBuffer(int, int, float);
int nlSubVector3op(int, int, int);
void Drv_Init(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oF_uchar { char p[0xF]; unsigned char v; };


void Drv_Init(void)
{
    int t23;
    int t19;
    int stk[18];

    { struct mv12 { int w[12]; }; *(struct mv12 *)(((int)stk + 4)) = *(struct mv12 *)(0xC0D4C78); }
    (((struct o0_uint *)0xC2AD000)->v) = (*(int *)((((int)stk + 4) + ((*(int *)0xC179488) << 2))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD004) = *(struct mv3 *)(0xC0D5530); }
    (((struct o10_uint *)0xC2AD000)->v) = 0x0;
    (((struct o14_uint *)0xC2AD000)->v) = 0x0;
    (((struct o1C_uint *)0xC2AD000)->v) = 0x0;
    (((struct o18_uint *)0xC2AD000)->v) = 0x0;
    (((struct o20_uint *)0xC2AD000)->v) = 0xC8E2204;
    (((struct o24_float *)0xC2AD000)->v) = 0.0f;
    FcvStoreBuffer(((((struct o20_int *)0xC2AD000)->v)), 0xC2AD028, 0.0f);
    (((struct o0_float *)0xC2AD0F4)->v) = 0.0f;
    (((struct o4_float *)0xC2AD0F4)->v) = 0.0f;
    (((struct o8_uint *)0xC2AD0F4)->v) = ((((struct o20_int *)0xC2AD000)->v));
    (((struct oC_float *)0xC2AD0F4)->v) = ((((struct o24_float *)0xC2AD000)->v));
    FcvStoreBuffer(((((struct o8_int *)0xC2AD0F4)->v)), 0xC2AD104, ((((struct oC_float *)0xC2AD0F4)->v)));
    (((struct o0_uint *)0xC2AD1D0)->v) = 0xC0D44D8;
    (((struct o4_uint *)0xC2AD1D0)->v) = 0xC0D44E0;
    (((struct o8_uint *)0xC2AD1D0)->v) = 0x0;
    (((struct oF_uchar *)0xC2AD1D0)->v) = ((*(signed char *)0xC2AD1DF) & 0x7F);
    (((struct oF_uchar *)0xC2AD1D0)->v) = ((*(signed char *)0xC2AD1DF) | 0x40);
    (((struct oF_uchar *)0xC2AD1D0)->v) = ((*(signed char *)0xC2AD1DF) & 0xDF);
    (((struct oF_uchar *)0xC2AD1D0)->v) = ((*(signed char *)0xC2AD1DF) & 0xE7);
    (((struct oF_uchar *)0xC2AD1D0)->v) = ((*(signed char *)0xC2AD1DF) & 0xFB);
    (((struct oF_uchar *)0xC2AD1D0)->v) = ((*(signed char *)0xC2AD1DF) & 0xFD);
    (((struct oC_uint *)0xC2AD1D0)->v) = ((((((struct oC_int *)0xC2AD1D0)->v)) & 0xFF000000) | 0x0);
    if ((int)(*(int *)0xC179488) >= (int)0x4) {
        t19 = ((*(signed char *)0xC2AD1DF) | 0x1);
    } else {
        t19 = ((*(signed char *)0xC2AD1DF) & 0xFE);
    }
    (((struct oF_uchar *)0xC2AD1D0)->v) = t19;
    Drv_StartAction(0x0, 0x0, 0x0);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED68) = *(struct mv3 *)(0xC179144); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED74) = *(struct mv3 *)(0xC1791C8); }
    nlSubVector3op(0xC13ED80, 0xC1791C8, 0xC1791D4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13ED8C) = *(struct mv3 *)(0xC13ED80); }
    t23 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((short)(((t23 << 1) + t23) << 2) + 0xC2AD2BC)) = *(struct mv3 *)(0xC0D5530); }
        t23 = (t23 + 0x1);
        if ((int)t23 >= (int)0x23) {
            break;
        }
    }
    (((struct o0_float *)0xC2AD52C)->v) = 0.0f;
    (((struct o4_uint *)0xC2AD52C)->v) = 0x0;
    (((struct o8_uint *)0xC2AD52C)->v) = 0x0;
    (((struct oC_uint *)0xC2AD52C)->v) = 0x0;
    (((struct o10_uint *)0xC2AD52C)->v) = 0x0;
    (((struct o14_uint *)0xC2AD52C)->v) = 0x0;
    (((struct o18_uint *)0xC2AD52C)->v) = 0x0;
}
