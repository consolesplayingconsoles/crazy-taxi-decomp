/* Straight-line functions with calls and guards (batch gen_iw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float getNearLineIndex();
float navi_GetRouteTbl(int a4, int a5, int a6);

float navi_GetRouteTbl(int a4, int a5, int a6)
{
    int t1;
    int t4;
    float u6;
    float t12;
    int t16;
    int t17;
    int t18;
    int t19;
    float u20;
    float u21;
    float t27;
    int t32;
    int t46;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t63;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t95;
    float u136;
    int t2;
    int t3;
    float u5;
    int t39;
    float u43;
    int t122;
    int t109;
    int t70;
    int stk[19];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    t1 = ((*(int *)0xC2A6690) + 0xEF4);
    t4 = 0x0;
    u6 = 999999.875f;
    for (;;) {
        *(volatile int *)(((int)stk + 20));
        t12 = ((float (*)(int, int, int, int))(getNearLineIndex))(0x0, (*(int *)((t1 + 0x0))), (*(int *)(((*(int *)((t1 + 0x4))) + 0x0))), (((int)stk + 4) + 0x8));
        if (u6 > t12) {
            t3 = (*(int *)(((int)stk + 12)));
            t2 = t4;
            u6 = t12;
            u5 = t12;
        }
        t4 = (t4 + 0x1);
        t1 = (t1 + 0xC);
        if ((int)t4 > (int)0x8) {
            break;
        }
    }
    t16 = *(int *)0xC2A6690;
    if (a6 == -1) {
        t17 = (0xEF4 + t16);
        t18 = 0x0;
        t19 = t16;
        u20 = 999999.875f;
        u21 = 999999.875f;
        for (;;) {
            *(volatile int *)(((int)stk + 16));
            t27 = ((float (*)(int, int, int, int))(getNearLineIndex))(0x0, (*(int *)((t17 + 0x0))), (*(int *)(((*(int *)((t17 + 0x4))) + 0x0))), (((int)stk + 4) + 0x8));
            if (u21 > t27) {
                t19 = t18;
                u21 = t27;
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 12)));
                u20 = t27;
            }
            t18 = (t18 + 0x1);
            t17 = (t17 + 0xC);
            if ((int)t18 > (int)0x8) {
                break;
            }
        }
        t39 = t19;
        u43 = u20;
    } else {
        t32 = (*(int *)(((int)stk + 16)));
        *(unsigned int *)(((int)stk + 20)) = (((((a6 << 1) + a6) << 2) + t16) + 0xEF4);
        t39 = a6;
        u43 = (((float (*)(int, int, int, int, int, float))(getNearLineIndex))(0x0, (*(int *)(((*(int *)(((int)stk + 20))) + 0x0))), (*(int *)(((*(int *)(((((((a6 << 1) + a6) << 2) + t16) + 0xEF4) + 0x4))) + 0x0))), (((int)stk + 4) + 0x4), t32, t12));
    }
    if (t2 == t39) {
        t46 = *(int *)(((int)stk + 8));
        t122 = (int)_builtin_fabsf((float)(t3 - t46));
        _builtin_fabsf((float)(t3 - t46));
    } else {
        *(unsigned int *)(((int)stk + 16)) = (t2 << 2);
        if ((int)t39 > (int)t2) {
            t48 = *(int *)((((t2 << 2) + 0xC0E52C0) + 0x0));
            *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0xC08AD70);
            *(unsigned int *)(((int)stk + 20)) = ((t39 << 2) + 0xC08AD70);
            t49 = (((t39 - t2) - 1) * 0x1E);
            t50 = ((t39 << 2) + 0xC08AD70);
            t51 = 0x0;
            t52 = 0x270F;
            t53 = 0x270F;
            t54 = t2;
            for (;;) {
                if ((*(signed char *)(((t48 + (((t39 - t2) - 1) * 0x1E)) + (signed char)((t51 << 2) + t51)))) != -1) {
                    t52 = 0x1;
                    if ((*(signed char *)((((t48 + (((t39 - t2) - 1) * 0x1E)) + 0xF) + (signed char)((t51 << 2) + t51)))) == 1) {
                        t50 = (*(int *)(((int)stk + 16)));
                        t50 = (*(int *)((t50 + 0x0)));
                        t50 = (t50 - t3);
                    } else {
                        t50 = t3;
                    }
                    t54 = t51;
                    t54 = (t54 << 2);
                    t54 = (t54 + t51);
                    t54 = (signed char)t54;
                    for (;;) {
                        if ((*(signed char *)((t52 + ((t48 + (((t39 - t2) - 1) * 0x1E)) + t54)))) == t39) {
                            break;
                        }
                        t63 = *(signed char *)((t52 + ((t48 + (((t39 - t2) - 1) * 0x1E)) + t54)));
                        t52 = (t52 + 0x1);
                        t50 = (t50 + (*(int *)((0xC08AD70 + (t63 << 2)))));
                    }
                    if ((*(signed char *)((t52 + ((signed char)((t51 << 2) + t51) + ((t48 + (((t39 - t2) - 1) * 0x1E)) + 0xF))))) == 1) {
                        t70 = (*(int *)(((int)stk + 8)));
                    } else {
                        t49 = (*(int *)(((int)stk + 20)));
                        t70 = ((*(int *)((t49 + 0x0))) - (*(int *)(((int)stk + 8))));
                    }
                    t50 = (t50 + t70);
                    if ((int)t50 < (int)t53) {
                        t53 = t50;
                    }
                }
                t51 = (t51 + 0x1);
                if ((int)t51 >= (int)0x3) {
                    break;
                }
            }
            t109 = t53;
        } else {
            t78 = *(int *)((0xC0E52C0 + (t39 << 2)));
            *(unsigned int *)(((int)stk + 24)) = ((t39 << 2) + 0xC08AD70);
            *(unsigned int *)(((int)stk + 20)) = ((t2 << 2) + 0xC08AD70);
            t79 = ((t2 << 2) + 0xC08AD70);
            t80 = ((t39 << 2) + 0xC08AD70);
            t81 = 0x1E;
            t82 = 0x0;
            t83 = 0x270F;
            for (;;) {
                if ((*(signed char *)(((signed char)((t82 << 2) + t82) + ((((t2 - t39) - 1) * 0x1E) + t78)))) != -1) {
                    t81 = 0x1;
                    if ((*(signed char *)(((signed char)((t82 << 2) + t82) + (((((t2 - t39) - 1) * 0x1E) + t78) + 0xF)))) == 1) {
                        t80 = (*(int *)(((int)stk + 24)));
                        t80 = (*(int *)((t80 + 0x0)));
                        t80 = (t80 - (*(int *)(((int)stk + 8))));
                    } else {
                        t80 = (*(int *)(((int)stk + 8)));
                    }
                    for (;;) {
                        if ((*(signed char *)((t81 + (((((t2 - t39) - 1) * 0x1E) + t78) + (signed char)((t82 << 2) + t82))))) == t2) {
                            break;
                        }
                        t95 = *(signed char *)((t81 + (((((t2 - t39) - 1) * 0x1E) + t78) + (signed char)((t82 << 2) + t82))));
                        t81 = (t81 + 0x1);
                        t80 = (t80 + (*(int *)((0xC08AD70 + (t95 << 2)))));
                    }
                    if ((*(signed char *)((t81 + ((((((t2 - t39) - 1) * 0x1E) + t78) + 0xF) + (signed char)((t82 << 2) + t82))))) == 1) {
                        t80 = (t80 + t3);
                    } else {
                        t79 = (*(int *)(((*(int *)(((int)stk + 20))) + 0x0)));
                        t79 = (t79 - t3);
                        t80 = (t80 + t79);
                    }
                    if ((int)t80 < (int)t83) {
                        t83 = t80;
                    }
                }
                t82 = (t82 + 0x1);
                if ((int)t82 >= (int)0x3) {
                    break;
                }
            }
            t109 = t83;
        }
        t122 = t109;
    }
    u136 = u5;
    u136 = u136 + 5e+02f * (float)t122;
    return (u136 + u43);
}
