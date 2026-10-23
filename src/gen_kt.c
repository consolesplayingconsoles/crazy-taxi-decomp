/* Straight-line functions with calls and guards (batch gen_kt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int ResetFadeColor();
int nd_SprPut(int, int, float, float);
int nlObjPutSetFadeColor(float, float, float);
int Put_Remain_Icon(float f4);

int Put_Remain_Icon(float f4)
{
    int t1;
    int t3;
    int t6;
    int t7;
    float u41;
    float u42;
    float u43;
    float u35;
    float u36;
    float u37;
    float u29;
    float u30;
    float u31;
    float u69;
    float u70;
    float u71;
    float u62;
    float u63;
    float u64;
    int t83;
    int t2;
    float u76;
    float u77;
    float u78;
    int t9;
    int t10;
    int t11;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;

    *(unsigned int *)0xC2A9968 = ((*(int *)0xC2A9968) + 0x1);
    t1 = 0xC05D8F0;
    t3 = 0x1;
    for (;;) {
        if ((int)t3 <= (int)(*(int *)0xC2A9900)) {
            t1 = (*(int *)0xC1EE214);
            if (t1 != 14) {
                t6 = t1;
                t1 = 0xC2A9A38;
                t7 = *(int *)((t1 + 0x0));
                t1 = 0x3C;
                t1 = ((int)((int)t7 % (int)t1));
                u41 = 0.299999982f;
                u42 = 0.299999982f;
                u43 = 0.299999982f;
                if ((((int)t1 >= (int)0x1E) || (t9 = *(int *)0xC2A9928, t10 = ((int)t1 >= (int)0x1E), t1 = t9, t1 != t3)) && (t11 = *(int *)0xC2A98EC, (int)t11 >= (int)t3)) {
                    t1 = t6;
                    u35 = 1.0f;
                    u36 = 1.0f;
                    u37 = 1.0f;
                    if (t1 == 14) {
                        t1 = 0x3C;
                        t1 = ((int)((int)(*(int *)0xC2A9A38) % (int)t1));
                        u29 = 1.0f;
                        u30 = 1.0f;
                        u31 = 1.0f;
                        if ((((int)t1 < (int)0x1E) && ((t14 = ((int)t1 >= (int)0x1E), t1 = 0x1, t15 = *(int *)0xC2A9A2C, (int)t15 >= (int)t1) && ((t16 = *(int *)0xC2A9A2C, (0x8 - t16) == t3) && (t17 = *(int *)0xC2A9A34, t18 = ((int)t1 >= (int)0x1E), t1 = t17, t1 == 1)))) || (((t19 = ((int)t1 >= (int)0x1E), t1 = 0xC2A9A2C, t20 = *(int *)((t1 + 0x0)), (int)(0x8 - t20) < (int)t3) && (t21 = *(int *)0xC2A9A34, t22 = ((int)t1 >= (int)0x1E), t1 = t21, t1 == 1)) || ((t23 = ((int)t1 >= (int)0x1E), t1 = 0xC2A9A2C, t24 = *(int *)((t1 + 0x0)), (int)(0x7 - t24) < (int)t3) && (t25 = *(int *)0xC2A9A34, t25 == 0)))) {
                            u29 = 0.299999982f;
                            u30 = 0.299999982f;
                            u31 = 0.299999982f;
                        }
                        u35 = u29;
                        u36 = u30;
                        u37 = u31;
                    }
                    u41 = u35;
                    u42 = u36;
                    u43 = u37;
                }
                u76 = u41;
                u77 = u42;
                u78 = u43;
            } else {
                u69 = 1.0f;
                u70 = 1.0f;
                u71 = 1.0f;
                if (t1 == 14) {
                    t1 = 0x3C;
                    t1 = ((int)((int)(*(int *)0xC2A9A38) % (int)t1));
                    u62 = 1.0f;
                    u63 = 1.0f;
                    u64 = 1.0f;
                    if ((((int)t1 < (int)0x1E) && ((t47 = ((int)t1 >= (int)0x1E), t1 = 0x1, t48 = *(int *)0xC2A9A2C, (int)t48 >= (int)t1) && ((t49 = *(int *)0xC2A9A2C, (0x8 - t49) == t3) && (t50 = *(int *)0xC2A9A34, t51 = ((int)t1 >= (int)0x1E), t1 = t50, t1 == 1)))) || (((t52 = ((int)t1 >= (int)0x1E), t1 = 0xC2A9A2C, t53 = *(int *)((t1 + 0x0)), (int)(0x8 - t53) < (int)t3) && (t54 = *(int *)0xC2A9A34, t55 = ((int)t1 >= (int)0x1E), t1 = t54, t1 == 1)) || ((t56 = ((int)t1 >= (int)0x1E), t1 = 0xC2A9A2C, t57 = *(int *)((t1 + 0x0)), (int)(0x7 - t57) < (int)t3) && (t58 = *(int *)0xC2A9A34, t58 == 0)))) {
                        u62 = 0.299999982f;
                        u63 = 0.299999982f;
                        u64 = 0.299999982f;
                    }
                    u69 = u62;
                    u70 = u63;
                    u71 = u64;
                }
                u76 = u69;
                u77 = u70;
                u78 = u71;
            }
            t1 = (nlObjPutSetFadeColor(u76, u77, u78));
            t1 = 0x10;
            if ((int)t3 >= (int)0x5) {
                t2 = 0x24;
            } else {
                t2 = 0x0;
            }
            *(float *)((0xC2A9898 + t1)) = 1.0f;
            t1 = 0x14;
            *(float *)((0xC2A9898 + t1)) = 1.0f;
            t1 = (nd_SprPut(0xC2A9898, 0x1E5, (float)(((((((t3 - 1) << 2) << 1) + (t3 - 1)) << 2) - (t2 << 2)) + 0x1D2), (float)(t2 + 0x4E)));
            t3 = (t3 + 0x1);
            continue;
        }
        break;
    }
    t83 = ((int (*)(float))(ResetFadeColor))(f4);
    if ((*(int *)0xC2A9A38) == 0xB3) {
        *(unsigned int *)0xC2A9A34 = 0x0;
    }
    if ((int)(*(int *)0xC2A9A38) < (int)0xB4) {
        *(unsigned int *)0xC2A9A38 = ((*(int *)0xC2A9A38) + 0x1);
    }
    nlObjPutSetFadeColor(0.0f, 1.0f, 0.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    nd_SprPut(0xC2A9898, 0x1EE, 490.0f, 45.0f);
    nd_SprPut(0xC2A9898, 0x1EF, 586.0f, 45.0f);
    return ((int (*)(void))(ResetFadeColor))();
}
