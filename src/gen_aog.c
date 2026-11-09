/* Straight-line functions with calls and guards (batch gen_aog): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int TrafficLevelChange(int);
int ndPuru2Start(int, int, int);
int nlProjectScreen3D(int, int);
extern int setTechnicalBonus();
int technicalCheck(int a4, int a5, int a6);
struct o124_int { char p[0x124]; int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o58_int { char p[0x58]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o0_int { int v; };
struct o8_int { char p[0x8]; int v; };



int technicalCheck(int a4, int a5, int a6)
{
    float u9;
    int t12;
    float u15;
    int t16;
    int t38;
    int t73;
    int t64;
    int t67;
    int t1;
    int t2;
    int t97;
    int t88;
    int t79;
    int t50;
    int stk[10];

    if ((((((struct o0_int *)0xC1EE20C)->v)) == 2) && ((t1 = (((struct o8_int *)0xC1EE20C)->v), t1 != 12) && (t2 = (((struct o8_int *)0xC1EE20C)->v), t2 != 9))) {
        t97 = t2;
    } else {
        if (((*(int *)((a4 + 0x34))) & 0x1) != 0) {
            u9 = (((struct o70_float *)(a4))->v);
            if (!(u9 > 0.049999997f) && !(-0.099999994f > u9)) {
                ndPuru2Start((unsigned char)(*(signed char *)0xC1EE278), 0x1000000, 0x0);
            } else {
                (((struct o124_uint *)(a4))->v) = 0xFFFFFFFF;
                t12 = ((int (*)(int, int, int))(setTechnicalBonus))(0xFFFFFFFF, 0x0, a6);
                TrafficLevelChange(0xFFFFFFFF);
                if ((*(int *)0xC2A1B74) == 0) {
                    u15 = (((struct o30_float *)(a4))->v);
                    t16 = 0x6;
                    if ((unsigned int)(int)(u15 * 1.5f) < (unsigned int)0x6) {
                        t16 = (int)(u15 * 1.5f);
                    }
                    *(unsigned int *)(((int)stk + 4)) = t16;
                    Sound_Request((*(int *)(((t16 << 2) + 0xC0A3788))), 0x1);
                }
                *(unsigned int *)0xC2A1B74 = 0x5;
            }
        }
        if (((((struct o124_int *)(a4))->v)) == -1) {
            t38 = 0x68;
            if (((((struct o68_int *)(a4))->v)) == 0) {
                (((struct o124_uint *)(a4))->v) = 0x0;
                t38 = 0x124;
            }
            t88 = t38;
        } else {
            if (((((struct o68_int *)(a4))->v)) != 0) {
                if (((((struct o124_int *)(a4))->v)) == 0) {
                    nlProjectScreen3D((0x8C + a4), (((int)stk + 4) + 0x4));
                    if (0.0f > (*(float *)(((int)stk + 8)))) {
                        t50 = (*(int *)(((((((((struct o78_int *)(a4))->v)) & 0x1) << 2) + 0xC0A3778) + 0x0)));
                    } else {
                        t50 = (*(int *)(((((((((struct o78_int *)(a4))->v)) & 0x1) << 2) + 0xC0A3778) + 0x8)));
                    }
                    Sound_Request(t50, 0x2);
                }
                if (((((struct o6C_float *)(a4))->v)) > 2.5f) {
                    (((struct o124_uint *)(a4))->v) = 0x1;
                } else {
                    (((struct o124_uint *)(a4))->v) = 0xFFFFFFFF;
                }
                t79 = 0x124;
            } else {
                t73 = 0x124;
                if (((((struct o124_int *)(a4))->v)) != 0) {
                    (((struct o124_uint *)(a4))->v) = 0x0;
                    t64 = (((struct o58_int *)((*(int *)0xC2A1B30)))->v);
                    t67 = t64;
                    if (t64 == 1) {
                        t67 = (((int (*)(int, int))(setTechnicalBonus))(0x0, ((int)(((((struct o6C_float *)(a4))->v)) * 0.199999988f) + 0x1)));
                    }
                    t73 = t67;
                }
                t79 = t73;
            }
            t88 = t79;
        }
        t97 = t88;
    }
    return t97;
}
