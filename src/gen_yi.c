/* Straight-line functions with calls and guards (batch gen_yi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int extRand(void);
int getCoursePointMove(int, int, int);
int getNearLineIndex(int, int, int, int, int, float);
int nlArcTan2(float, float);
int PcarEvInit(int a4);
struct o10_float { char p[0x10]; float v; };
struct o100_float { char p[0x100]; float v; };
struct o104_float { char p[0x104]; float v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_uint { char p[0x114]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o11C_uint { char p[0x11C]; unsigned int v; };
struct o120_uint { char p[0x120]; unsigned int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o128_uint { char p[0x128]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oA4_uchar { char p[0xA4]; unsigned char v; };
struct oA6_ushort { char p[0xA6]; unsigned short v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oDC_uint { char p[0xDC]; unsigned int v; };
struct oE0_float { char p[0xE0]; float v; };
struct oE8_float { char p[0xE8]; float v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF8_float { char p[0xF8]; float v; };
struct oFC_float { char p[0xFC]; float v; };


int PcarEvInit(int a4)
{
    int t14;
    int t18;
    int t49;
    int t50;
    int t58;
    int t60;
    float u47;
    int stk[13];

    (((struct o90_float *)(a4))->v) = (((((struct o90_float *)(a4))->v)) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)(0xC0A4788); }
    (((struct oA4_uchar *)(a4))->v) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0xA4 + a4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0xA4 + a4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0xA4 + a4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0xA4 + a4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0xA4 + a4) + 0x5)) = (*(signed char *)0xC0A4799);
    (((struct oAA_uchar *)(a4))->v) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0xAA + a4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0xAA + a4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0xAA + a4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0xAA + a4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0xAA + a4) + 0x5)) = (*(signed char *)0xC0A4799);
    t14 = *(int *)((((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0A2628) + 0x0));
    (((struct oB0_float *)(a4))->v) = (((((struct o14_float *)(t14))->v)) + ((((struct o10_float *)(t14))->v)));
    t18 = (((struct o9C_int *)(((((((struct o78_int *)(a4))->v)) * 0xA8) + 0xC0A2628)))->v);
    *(unsigned int *)(((int)stk + 16)) = t18;
    if (t18 != 0) {
        (((struct o7C_uint *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 16))) + (((extRand()) & 0x1F) << 2))));
    } else {
        (((struct o7C_uint *)(a4))->v) = 0xFFFFFFFF;
    }
    (((struct oB4_float *)(a4))->v) = ((((struct o94_float *)((0xC0A2628 + (((((struct o78_int *)(a4))->v)) * 0xA8))))->v));
    (((struct oB8_float *)(a4))->v) = 0.0f;
    (((struct oBC_uint *)(a4))->v) = 0x1;
    (((struct oC0_uint *)(a4))->v) = 0x0;
    (((struct oC4_float *)(a4))->v) = 0.0f;
    (((struct oC8_float *)(a4))->v) = 0.0f;
    (((struct oCC_float *)(a4))->v) = 0.0f;
    (((struct oD0_float *)(a4))->v) = 0.0f;
    (((struct oDC_uint *)(a4))->v) = 0x0;
    (((struct oF8_float *)(a4))->v) = 0.0f;
    (((struct oFC_float *)(a4))->v) = 0.0f;
    (((struct o100_float *)(a4))->v) = 0.0f;
    (((struct o104_float *)(a4))->v) = 0.0f;
    (((struct o108_uchar *)(a4))->v) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)0xC0A4799);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)(0xC0A4788); }
    (((struct oF0_float *)(a4))->v) = 1.0f;
    (((struct o110_uint *)(a4))->v) = 0x0;
    (((struct o114_uint *)(a4))->v) = 0x0;
    (((struct o118_uint *)(a4))->v) = 0x0;
    (((struct o11C_uint *)(a4))->v) = 0x0;
    (((struct o120_uint *)(a4))->v) = 0x0;
    (((struct o88_uint *)(a4))->v) = 0x0;
    (((struct o84_uint *)(a4))->v) = 0xD;
    (((struct o124_uint *)(a4))->v) = 0x0;
    if (((((struct o78_int *)(a4))->v)) == 10) {
        (((struct o128_uint *)(a4))->v) = (*(int *)((0xC0F2AD8 + (((int)((int)(extRand()) % (int)0x4)) << 2))));
    } else {
        (((struct o128_uint *)(a4))->v) = 0x0;
        u47 = 0.0f;
    }
    t49 = (((struct o80_int *)(a4))->v);
    t50 = *(int *)0xC2A6690;
    getNearLineIndex(0x0, (*(int *)((((((t49 << 1) + t49) << 2) + t50) + 0x0))), (*(int *)(((*(int *)((((((t49 << 1) + t49) << 2) + t50) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4), u47);
    *(unsigned int *)(((int)stk + 12)) = ((((struct o80_int *)(a4))->v));
    *(unsigned int *)(((int)stk + 8)) = (((((struct oD4_int *)(a4))->v)) + 0x3);
    getCoursePointMove((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4), 0x0);
    t58 = *(int *)(((int)stk + 12));
    t60 = *(int *)(((int)stk + 8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE0 + a4)) = *(struct mv3 *)(((((t60 << 1) + t60) << 2) + (*(int *)((((((t58 << 1) + t58) << 2) + (*(int *)0xC2A6690)) + 0x0))))); }
    (((struct oA6_ushort *)(a4))->v) = (nlArcTan2((((((struct oE0_float *)(a4))->v)) - ((((struct o8C_float *)(a4))->v))), (((((struct oE8_float *)(a4))->v)) - ((((struct o94_float *)(a4))->v)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC0A4788); }
    (((struct o40_uint *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
    return 0x40;
}
