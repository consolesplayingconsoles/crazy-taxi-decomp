/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Remain_Time_Frame(void);
int Put_Remain_Time_Gauge(int);
int ResetFadeColor(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int nlSprPut(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Remain_Time_Mode2(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };


int Put_Remain_Time_Mode2(void)
{
    int t0;
    int t141;
    int t9;
    int t16;
    int t18;
    int t19;
    int t21;
    int t54;
    int t55;
    int t56;
    int t57;
    int t83;
    int t84;
    int t87;
    int t130;
    int t1;
    int t10;
    int t14;
    int t48;
    int t49;
    float u111;
    float u107;
    int t121;
    int t122;
    int stk[23];

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = (((struct o0_int *)0xC1EE20C)->v);
    t141 = t0;
    if ((t0 == 2) && (t1 = (((struct o8_int *)0xC1EE20C)->v), t1 == 0)) {
    } else {
        t9 = *(int *)0xC2A8C54;
        if ((((((struct o4_int *)0xC1EE20C)->v)) == 2) && (t10 = *(int *)0xC2A9904, t10 != 0)) {
            t14 = ((*(int *)((t9 + 0x0))) + 0x1);
        } else {
            t14 = (*(int *)((t9 + 0x0)));
        }
        t16 = t14;
        if ((int)t14 >= (int)0x57E40) {
            t16 = 0x57E3F;
        }
        t18 = (int)((int)t16 / (int)0xE10);
        t19 = (int)((int)(t16 - (t18 * 0xE10)) / (int)0x3C);
        t21 = (int)((int)(((int)((int)t16 % (int)0x3C)) * 0x64) / (int)0x3C);
        if (t16 == 0x258) {
            Voice_ShutUp(0x0);
            Voice_Request(0xC130B78, 0x0, 0x7F, 0x0);
        }
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0xC);
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = ((int)((int)t18 / (int)0xA));
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 4) + 0xC) + 0x4);
        *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = ((int)((int)t18 % (int)0xA));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = ((int)((int)t19 / (int)0xA));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0xC)) = ((int)((int)t19 % (int)0xA));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x10)) = ((int)((int)t21 / (int)0xA));
        *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x14)) = ((int)((int)t21 % (int)0xA));
        if (((((struct o4_int *)0xC1EE20C)->v)) != 2) {
            Put_Remain_Time_Gauge(0xA);
        }
        (((struct o34_uint *)0xC2A7F7C)->v) = 0x200E;
        (((struct o24_float *)0xC2A7F7C)->v) = 1.0f;
        (((struct o28_uint *)0xC2A7F7C)->v) = 0x0;
        (((struct oC_float *)0xC2A7F7C)->v) = 0.0399999991f;
        if ((int)t16 <= (int)0x258) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        } else {
            nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
        }
        (((struct o8_float *)0xC2A7F7C)->v) = 84.0f;
        if (((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) == 0) && (t48 = *(int *)(((int)stk + 12)), t49 = *(int *)((t48 + 0x0)), t49 == 0)) {
            t54 = 0xC054080;
            t55 = 0x2;
            for (;;) {
                if ((int)t55 >= (int)0x6) {
                    break;
                }
                t54 = 0xC130BEC;
                t56 = *(int *)((((t55 - 2) << 2) + t54));
                t54 = 0x4;
                *(float *)((0xC2A7F7C + t54)) = (float)t56;
                t54 = t55;
                t54 = (t54 << 2);
                t57 = *(int *)(((((int)stk + 4) + 0xC) + t54));
                t54 = 0xC0D0C08;
                (((struct o0_uint *)0xC2A7F7C)->v) = (*(int *)(((t57 << 2) + t54)));
                if ((int)t55 >= (int)0x4) {
                    t54 = 0x10;
                    *(float *)((0xC2A7F7C + t54)) = 0.5f;
                    t54 = 0x14;
                    *(float *)((0xC2A7F7C + t54)) = 0.5f;
                } else {
                    t54 = 0x10;
                    *(float *)((0xC2A7F7C + t54)) = 1.0f;
                    t54 = 0x14;
                    *(float *)((0xC2A7F7C + t54)) = 1.0f;
                }
                t54 = (nlSprPut(0xC2A7F7C));
                t55 = (t55 + 0x1);
            }
            pfSetFont(0x2);
            pfSize(1.0f, 1.0f);
            if ((int)t16 <= (int)0x258) {
                pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            } else {
                pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
            }
            nd_SprPut(0xC2A7F7C, 0x10, 142.0f, 34.0f);
            u111 = 1.5e+02f;
        } else {
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
                (((struct o4_float *)0xC2A7F7C)->v) = (float)(*(int *)0xC130BD4);
                (((struct o0_uint *)0xC2A7F7C)->v) = (*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0xC0D0C08)));
                (((struct o10_float *)0xC2A7F7C)->v) = 1.0f;
                (((struct o14_float *)0xC2A7F7C)->v) = 1.0f;
                t83 = (nlSprPut(0xC2A7F7C));
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x24;
                t83 = 0xC054080;
            }
            t84 = 0x1;
            for (;;) {
                if ((int)t84 >= (int)0x6) {
                    break;
                }
                t83 = 0xC130BD4;
                (((struct o4_float *)0xC2A7F7C)->v) = (float)((*(int *)(((t84 << 2) + t83))) - (*(int *)(((int)stk + 8))));
                t83 = (t84 << 2);
                t87 = *(int *)(((((int)stk + 4) + 0xC) + t83));
                t83 = 0xC0D0C08;
                (((struct o0_uint *)0xC2A7F7C)->v) = (*(int *)(((t87 << 2) + t83)));
                if ((int)t84 >= (int)0x4) {
                    t83 = 0x10;
                    *(float *)((0xC2A7F7C + t83)) = 0.5f;
                    t83 = 0x14;
                    *(float *)((0xC2A7F7C + t83)) = 0.5f;
                } else {
                    t83 = 0x10;
                    *(float *)((0xC2A7F7C + t83)) = 1.0f;
                    t83 = 0x14;
                    *(float *)((0xC2A7F7C + t83)) = 1.0f;
                }
                t83 = (nlSprPut(0xC2A7F7C));
                t84 = (t84 + 0x1);
            }
            pfSetFont(0x2);
            pfSize(1.0f, 1.0f);
            if ((int)t16 <= (int)0x258) {
                pfColor(0xFFFF0000, 0xFFFF0000, 0xFFFF0000, 0xFFFF0000);
            } else {
                pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
            }
            if ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) != 0) {
                nd_SprPut(0xC2A7F7C, 0x10, 96.0f, 34.0f);
                nd_SprPut(0xC2A7F7C, 0x10, 174.0f, 34.0f);
                u107 = 182.0f;
            } else {
                nd_SprPut(0xC2A7F7C, 0x10, 64.0f, 34.0f);
                nd_SprPut(0xC2A7F7C, 0x10, 142.0f, 34.0f);
                u107 = 1.5e+02f;
            }
            u111 = u107;
        }
        nd_SprPut(0xC2A7F7C, 0x10, u111, 34.0f);
        if ((int)t16 <= (int)0x258) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
        }
        Put_Remain_Time_Frame();
        ResetFadeColor();
        if (((int)t16 <= (int)0x258) && ((int)t16 > 0)) {
            if ((((int)((int)t16 % (int)0x3C)) == 0) && ((t121 = *(int *)0xC2A8E98, t121 == 0) && (t122 = *(int *)0xC2A8CB0, t122 == 0))) {
                Sound_Request(0x505A9, 0x0);
                *(unsigned int *)0xC2A8CB0 = 0x1;
            }
        }
        t130 = (int)((int)t16 % (int)0x3C);
        t141 = t130;
        if (t130 != 0) {
            t141 = *(int *)0xC2A8CB0;
            if (t141 == 1) {
                *(unsigned int *)0xC2A8CB0 = 0x0;
            }
        }
    }
    return t141;
}
