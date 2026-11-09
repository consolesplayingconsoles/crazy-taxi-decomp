/* Straight-line functions with calls and guards (batch gen_tk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetFog(void);
int CarSel_SetLight(void);
int Init_nd_Sprite(void);
int Start_Time_Count(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlMatrixMode(int);
int nlPerspective(int, float, float, float);
int nlUnitMatrix(void);
int selectInitSprites(void);
int nd_CarSelInit(void);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int nd_CarSelInit(void)
{
    int t6;
    int t7;
    int t18;
    int t20;
    int t24;
    int t22;

    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    nlMatrixMode(0x1);
    (((struct o18_ushort *)0xC2A7554)->v) = 0xEB00;
    (((struct o1A_ushort *)0xC2A7554)->v) = 0xF200;
    (((struct o14_float *)0xC2A7554)->v) = 0.799999952f;
    (((struct o24_uint *)0xC2A7554)->v) = 0x8;
    CarSel_SetLight();
    CarSel_SetFog();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A7548) = *(struct mv3 *)(0xC0D07DC); }
    (((struct o0_ushort *)0xC2A7554)->v) = 0x0;
    (((struct o2_ushort *)0xC2A7554)->v) = 0x0;
    (((struct o4_ushort *)0xC2A7554)->v) = 0x0;
    t6 = 0xC2A7538;
    t7 = 0x0;
    for (;;) {
        t7 = (t7 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0x0;
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x4) {
            break;
        }
    }
    (((struct o10_uint *)0xC2A7500)->v) = 0x0;
    (((struct o14_uint *)0xC2A7500)->v) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A7520) = *(struct mv3 *)(0xC0D07D0); }
    (((struct o2C_ushort *)0xC2A7500)->v) = (*(short *)0xC130748);
    (((struct o30_uint *)0xC2A7500)->v) = 0x9;
    (((struct o34_uint *)0xC2A7500)->v) = 0x9;
    (((struct o2C_uint *)0xC2A7594)->v) = 0x0;
    *(float *)0xC130624 = 0.0f;
    Init_nd_Sprite();
    selectInitSprites();
    (((struct o28_uint *)0xC2A7554)->v) = 0x3BF;
    Start_Time_Count(0xC2A757C, 0x0);
    (((struct o18_uint *)0xC2A7500)->v) = 0x0;
    (((struct o2C_uint *)0xC2A7554)->v) = 0x0;
    (((struct o8_uint *)0xC2A7594)->v) = 0x2;
    (((struct o3C_uint *)0xC2A7554)->v) = 0x0;
    (((struct o0_uint *)0xC2A7594)->v) = 0x0;
    (((struct o30_uchar *)0xC2A7554)->v) = 0x0;
    (((struct o34_uint *)0xC2A7554)->v) = 0x0;
    (((struct o4_uint *)0xC2A7594)->v) = 0x0;
    (((struct oC_uint *)0xC2A7594)->v) = 0x0;
    (((struct o10_uint *)0xC2A7594)->v) = 0x0;
    (((struct o14_uint *)0xC2A7594)->v) = 0x0;
    (((struct o18_uint *)0xC2A7594)->v) = 0x0;
    (((struct o1C_uint *)0xC2A7594)->v) = 0x0;
    (((struct o0_uint *)0xC1330C4)->v) = ((((struct o0_int *)0xC133750)->v));
    *(unsigned int *)0xC133104 = ((((struct o28_int *)0xC133750)->v));
    (((struct o34_uint *)0xC1330C4)->v) = ((((struct o34_int *)0xC133750)->v));
    *(unsigned int *)0xC133144 = ((((struct o0_int *)0xC133790)->v));
    *(unsigned int *)0xC133184 = ((((struct o28_int *)0xC133790)->v));
    Voice_ShutUp(0x0);
    t18 = Voice_Request(0xC130628, 0x0, 0x7F, 0x0);
    (((struct o20_uint *)0xC2A7594)->v) = (int)(*(float *)0xC1EE2F4);
    (((struct o24_uint *)0xC2A7594)->v) = 0x0;
    (((struct o28_uint *)0xC2A7594)->v) = 0x0;
    t20 = *(int *)0xC1EE24C;
    if ((0x20000 & t20) != 0) {
        if ((0x8 & t20) != 0) {
            (((struct o0_uint *)0xC2A7368)->v) = 0x1;
        } else {
            (((struct o0_uint *)0xC2A7368)->v) = 0x0;
        }
        t22 = 0x8;
    } else {
        (((struct o0_uint *)0xC2A7368)->v) = 0x0;
        t22 = t18;
    }
    t24 = *(int *)0xC1EE24C;
    if (((0x10000 & t24) != 0) && ((0x8 & t24) != 0)) {
        (((struct o4_uint *)0xC2A7368)->v) = 0x1;
    } else {
        (((struct o4_uint *)0xC2A7368)->v) = 0x0;
    }
    *(unsigned int *)0xC17948C = 0x0;
    (((struct o0_float *)0xC2A7500)->v) = 0.0f;
    (((struct o4_float *)0xC2A7500)->v) = 0.0f;
    (((struct o30_uint *)0xC2A7594)->v) = 0x0;
    return t22;
}
