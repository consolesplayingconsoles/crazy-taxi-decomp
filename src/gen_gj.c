/* Straight-line functions with calls and guards (batch gen_gj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int extRand(void);
int getCoursePointMove(int, int, int);
int getNearLineIndex(int, int, int, int);
int nlArcTan2(float, float);
int PcarEvInit(int a4, int a5, int a6, int a7, float f4, float f5);

int PcarEvInit(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int t14;
    int t18;
    int t45;
    int t46;
    int t54;
    int t56;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    L_C045E0C:;
    *(float *)((R4 + 0x90)) = ((*(float *)((R4 + 0x90))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + R4)) = *(struct mv3 *)(0xC0A4788); }
    *(unsigned char *)(((0xA4 + R4) + 0x0)) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0xA4 + R4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0xA4 + R4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0xA4 + R4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0xA4 + R4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0xA4 + R4) + 0x5)) = (*(signed char *)0xC0A4799);
    *(unsigned char *)(((0xAA + R4) + 0x0)) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0xAA + R4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0xAA + R4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0xAA + R4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0xAA + R4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0xAA + R4) + 0x5)) = (*(signed char *)0xC0A4799);
    t14 = *(int *)(((((*(int *)((R4 + 0x78))) * 0xA8) + 0xC0A2628) + 0x0));
    *(float *)((R4 + 0xB0)) = ((*(float *)((t14 + 0x14))) + (*(float *)((t14 + 0x10))));
    t18 = *(int *)(((((*(int *)((R4 + 0x78))) * 0xA8) + 0xC0A2628) + 0x9C));
    *(unsigned int *)(((int)stk + 16)) = t18;
    R10 = (0xC0A4794);
    R11 = (0xC0A2628);
    R12 = (0xA8);
    R13 = (0xC0A4788);
    R14 = (R4);
    R4 = (t14);
    F15 = (1.0f);
    if ((t18 == 0)) goto L_C045E98;
    goto L_C045E84;
    L_C045E84:;
    *(unsigned int *)((R14 + 0x7C)) = (*(int *)(((*(int *)(((int)stk + 16))) + (((extRand()) & 0x1F) << 2))));
    goto L_C045E9E;
    L_C045E9E:;
    *(float *)((R14 + 0xB4)) = (*(float *)(((R11 + ((*(int *)((R14 + 0x78))) * R12)) + 0x94)));
    *(float *)((R14 + 0xB8)) = 0.0f;
    *(unsigned int *)((R14 + 0xBC)) = 0x1;
    *(unsigned int *)((R14 + 0xC0)) = 0x0;
    *(float *)((R14 + 0xC4)) = 0.0f;
    *(float *)((R14 + 0xC8)) = 0.0f;
    *(float *)((R14 + 0xCC)) = 0.0f;
    *(float *)((R14 + 0xD0)) = 0.0f;
    *(unsigned int *)((R14 + 0xDC)) = 0x0;
    *(float *)((R14 + 0xF8)) = 0.0f;
    *(float *)((R14 + 0xFC)) = 0.0f;
    *(float *)((R14 + 0x100)) = 0.0f;
    *(float *)((R14 + 0x104)) = 0.0f;
    *(unsigned char *)(((0x108 + R14) + 0x0)) = (*(signed char *)((R10 + 0x0)));
    *(unsigned char *)(((0x108 + R14) + 0x1)) = (*(signed char *)((R10 + 0x1)));
    *(unsigned char *)(((0x108 + R14) + 0x2)) = (*(signed char *)((R10 + 0x2)));
    *(unsigned char *)(((0x108 + R14) + 0x3)) = (*(signed char *)((R10 + 0x3)));
    *(unsigned char *)(((0x108 + R14) + 0x4)) = (*(signed char *)((R10 + 0x4)));
    *(unsigned char *)(((0x108 + R14) + 0x5)) = (*(signed char *)((R10 + 0x5)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + R14)) = *(struct mv3 *)(R13); }
    *(float *)((R14 + 0xF0)) = F15;
    *(unsigned int *)((R14 + 0x110)) = 0x0;
    *(unsigned int *)((R14 + 0x114)) = 0x0;
    *(unsigned int *)((R14 + 0x118)) = 0x0;
    *(unsigned int *)((R14 + 0x11C)) = 0x0;
    *(unsigned int *)((R14 + 0x120)) = 0x0;
    *(unsigned int *)((R14 + 0x88)) = 0x0;
    *(unsigned int *)((R14 + 0x84)) = 0xD;
    *(unsigned int *)((R14 + 0x124)) = 0x0;
    R4 = (0x0);
    F4 = (0.0f);
    if (((*(int *)((R14 + 0x78))) != 10)) goto L_C045F80;
    goto L_C045F2C;
    L_C045F2C:;
    *(unsigned int *)((R14 + 0x128)) = (*(int *)((0xC0F2AD8 + (((int)((int)(extRand()) % (int)0x4)) << 2))));
    goto L_C045F84;
    L_C045F84:;
    t45 = *(int *)((R14 + 0x80));
    t46 = *(int *)0xC2A6690;
    getNearLineIndex(0x0, (*(int *)((((((t45 << 1) + t45) << 2) + t46) + 0x0))), (*(int *)(((*(int *)((((((t45 << 1) + t45) << 2) + t46) + 0x4))) + 0x0))), (0xD4 + R14));
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((R14 + 0x80)));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)((R14 + 0xD4))) + 0x3);
    getCoursePointMove((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4), 0x0);
    t54 = *(int *)(((int)stk + 12));
    t56 = *(int *)(((int)stk + 8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE0 + R14)) = *(struct mv3 *)(((((t56 << 1) + t56) << 2) + (*(int *)((((((t54 << 1) + t54) << 2) + (*(int *)0xC2A6690)) + 0x0))))); }
    *(unsigned short *)(((0xA6 + R14) + 0x0)) = (nlArcTan2(((*(float *)((R14 + 0xE0))) - (*(float *)((R14 + 0x8C)))), ((*(float *)((R14 + 0xE8))) - (*(float *)((R14 + 0x94))))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x5C)) = *(struct mv3 *)(R13); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x44)) = *(struct mv3 *)(R13); }
    *(unsigned int *)((R14 + 0x40)) = 0x0;
    *(unsigned int *)((R14 + 0x3C)) = (R14 + 0x44);
    return 0x40;
    L_C045F80:;
    *(unsigned int *)((R14 + 0x128)) = R4;
    goto L_C045F84;
    L_C045E98:;
    *(unsigned int *)((R14 + 0x7C)) = 0xFFFFFFFF;
    goto L_C045E9E;
}
