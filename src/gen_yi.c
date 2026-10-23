/* Straight-line functions with calls and guards (batch gen_yi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int extRand(void);
int getCoursePointMove(int, int, int);
int getNearLineIndex(int, int, int, int, int, float);
int nlArcTan2(float, float);
int PcarEvInit(int a4);

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

    *(float *)((a4 + 0x90)) = ((*(float *)((a4 + 0x90))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + a4)) = *(struct mv3 *)(0xC0A4788); }
    *(unsigned char *)(((0xA4 + a4) + 0x0)) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0xA4 + a4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0xA4 + a4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0xA4 + a4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0xA4 + a4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0xA4 + a4) + 0x5)) = (*(signed char *)0xC0A4799);
    *(unsigned char *)(((0xAA + a4) + 0x0)) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0xAA + a4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0xAA + a4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0xAA + a4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0xAA + a4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0xAA + a4) + 0x5)) = (*(signed char *)0xC0A4799);
    t14 = *(int *)(((((*(int *)((a4 + 0x78))) * 0xA8) + 0xC0A2628) + 0x0));
    *(float *)((a4 + 0xB0)) = ((*(float *)((t14 + 0x14))) + (*(float *)((t14 + 0x10))));
    t18 = *(int *)(((((*(int *)((a4 + 0x78))) * 0xA8) + 0xC0A2628) + 0x9C));
    *(unsigned int *)(((int)stk + 16)) = t18;
    if (t18 != 0) {
        *(unsigned int *)((a4 + 0x7C)) = (*(int *)(((*(int *)(((int)stk + 16))) + (((extRand()) & 0x1F) << 2))));
    } else {
        *(unsigned int *)((a4 + 0x7C)) = 0xFFFFFFFF;
    }
    *(float *)((a4 + 0xB4)) = (*(float *)(((0xC0A2628 + ((*(int *)((a4 + 0x78))) * 0xA8)) + 0x94)));
    *(float *)((a4 + 0xB8)) = 0.0f;
    *(unsigned int *)((a4 + 0xBC)) = 0x1;
    *(unsigned int *)((a4 + 0xC0)) = 0x0;
    *(float *)((a4 + 0xC4)) = 0.0f;
    *(float *)((a4 + 0xC8)) = 0.0f;
    *(float *)((a4 + 0xCC)) = 0.0f;
    *(float *)((a4 + 0xD0)) = 0.0f;
    *(unsigned int *)((a4 + 0xDC)) = 0x0;
    *(float *)((a4 + 0xF8)) = 0.0f;
    *(float *)((a4 + 0xFC)) = 0.0f;
    *(float *)((a4 + 0x100)) = 0.0f;
    *(float *)((a4 + 0x104)) = 0.0f;
    *(unsigned char *)(((0x108 + a4) + 0x0)) = (*(signed char *)0xC0A4794);
    *(unsigned char *)(((0x108 + a4) + 0x1)) = (*(signed char *)0xC0A4795);
    *(unsigned char *)(((0x108 + a4) + 0x2)) = (*(signed char *)0xC0A4796);
    *(unsigned char *)(((0x108 + a4) + 0x3)) = (*(signed char *)0xC0A4797);
    *(unsigned char *)(((0x108 + a4) + 0x4)) = (*(signed char *)0xC0A4798);
    *(unsigned char *)(((0x108 + a4) + 0x5)) = (*(signed char *)0xC0A4799);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + a4)) = *(struct mv3 *)(0xC0A4788); }
    *(float *)((a4 + 0xF0)) = 1.0f;
    *(unsigned int *)((a4 + 0x110)) = 0x0;
    *(unsigned int *)((a4 + 0x114)) = 0x0;
    *(unsigned int *)((a4 + 0x118)) = 0x0;
    *(unsigned int *)((a4 + 0x11C)) = 0x0;
    *(unsigned int *)((a4 + 0x120)) = 0x0;
    *(unsigned int *)((a4 + 0x88)) = 0x0;
    *(unsigned int *)((a4 + 0x84)) = 0xD;
    *(unsigned int *)((a4 + 0x124)) = 0x0;
    if ((*(int *)((a4 + 0x78))) == 10) {
        *(unsigned int *)((a4 + 0x128)) = (*(int *)((0xC0F2AD8 + (((int)((int)(extRand()) % (int)0x4)) << 2))));
    } else {
        *(unsigned int *)((a4 + 0x128)) = 0x0;
        u47 = 0.0f;
    }
    t49 = *(int *)((a4 + 0x80));
    t50 = *(int *)0xC2A6690;
    getNearLineIndex(0x0, (*(int *)((((((t49 << 1) + t49) << 2) + t50) + 0x0))), (*(int *)(((*(int *)((((((t49 << 1) + t49) << 2) + t50) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4), u47);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((a4 + 0x80)));
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)((a4 + 0xD4))) + 0x3);
    getCoursePointMove((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x4), 0x0);
    t58 = *(int *)(((int)stk + 12));
    t60 = *(int *)(((int)stk + 8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE0 + a4)) = *(struct mv3 *)(((((t60 << 1) + t60) << 2) + (*(int *)((((((t58 << 1) + t58) << 2) + (*(int *)0xC2A6690)) + 0x0))))); }
    *(unsigned short *)(((0xA6 + a4) + 0x0)) = (nlArcTan2(((*(float *)((a4 + 0xE0))) - (*(float *)((a4 + 0x8C)))), ((*(float *)((a4 + 0xE8))) - (*(float *)((a4 + 0x94))))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC0A4788); }
    *(unsigned int *)((a4 + 0x40)) = 0x0;
    *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
    return 0x40;
}
