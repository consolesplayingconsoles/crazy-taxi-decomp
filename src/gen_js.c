/* Straight-line functions with calls and guards (batch gen_js): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c074680(int, int, int);
int FUN_0c089e00(int);
int nd_SprPut(int, int, float, float);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAZ(int);
int nlSqrt(int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_SEGA_LOGO2(void);

int Put_SEGA_LOGO2(void)
{
    int t9;
    int t50;
    int t51;
    int t52;
    int t17;
    int stk[42] = {0};

    nlPushMatrix(0x0);
    nlTranslate(0.0f, 0.0f, -50.0f);
    if ((int)(*(int *)0xC2A93F4) >= (int)0x78) {
        nlObjPut(0xC464170);
        *(unsigned int *)0xC2A9300 = 0x200A;
        nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
        nd_SprPut(0xC2A92CC, 0xED, (320.0f), (176.0f));
        nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
        t50 = 0xFFFFFFFF;
        t51 = 0xFFFFFFFF;
        t52 = 0xFFFFFFFF;
    } else {
        t9 = 0x0;
        for (;;) {
            nlPushUnitMatrix();
            nlRotateAZ((t9 * 0x1999));
            *(unsigned int *)(((int)stk + 4)) = (signed char)(((t9 << 1) + t9) << 2);
            nlSqrt(0xC2A93F8, ((signed char)(((t9 << 1) + t9) << 2) + (((int)stk + 4) + 0x4)));
            nlPopMatrix(0x1);
            if ((*(float *)0xC2A93FC) > 0.0f) {
                if (((int)t9 >= (int)0x3) && ((int)t9 <= (int)0x7)) {
                    t17 = ((*(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC))) + 0x222);
                } else {
                    t17 = ((*(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC))) - 0x222);
                }
                *(unsigned short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC)) = t17;
            }
            nlPushMatrix(0x0);
            nlTranslateV(((*(int *)(((int)stk + 4))) + (((int)stk + 4) + 0x4)));
            nlRotateAX((unsigned short)(*(short *)((((unsigned char)(((t9 << 2) + t9) << 2) + 0xC2A932C) + 0xC))));
            FUN_0c089e00((*(int *)((((t9 << 2) + 0xC130D58) + 0x0))));
            nlObjPut((*(int *)((((t9 << 2) + 0xC130D58) + 0x0))));
            nlPopMatrix(0x1);
            t9 = (t9 + 0x1);
            if ((int)t9 >= (int)0xA) {
                break;
            }
        }
        if ((*(float *)0xC2A93FC) > 0.0f) {
            *(float *)0xC2A93FC = ((*(float *)0xC2A93FC) - 0.299999982f);
        }
        *(unsigned int *)0xC2A93F4 = ((*(int *)0xC2A93F4) + 0x1);
        t50 = 0xFF000000;
        t51 = 0xFF000000;
        t52 = 0xFF000000;
    }
    FUN_0c074680(t50, t51, t52);
    return (nlPopMatrix(0x1));
}
