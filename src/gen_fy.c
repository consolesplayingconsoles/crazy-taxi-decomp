/* Straight-line functions with calls and guards (batch gen_fy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int nlSprPut(int, int);
int hudDrawFareDigits(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_float { char p[0x30]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };


int hudDrawFareDigits(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    register float u2;

    t5 = 0xC0554A4;
    t6 = 0x0;
    for (;;) {
        if (((((struct o4_int *)0xC2A8E88)->v)) == 0) {
            t5 = 0xC2A8E34;
            if ((int)(*(int *)(((t6 << 2) + t5))) > 0) {
                *(unsigned int *)(((t6 << 2) + t5)) = ((*(int *)(((t6 << 2) + t5))) - 1);
                t5 = 0xC2A8E90;
                if ((int)t6 > (int)(*(int *)((t5 + 0x0)))) {
                    t5 = 0xB;
                    t5 = ((int)((int)((*(int *)((((t6 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t5));
                    *(unsigned int *)((((t6 << 2) + 0xC2A8E50) + 0x0)) = t5;
                } else {
                    t5 = (t6 << 2);
                    t5 = (*(int *)((0xC2A8E50 + t5)));
                    if (t5 == 10) {
                        if ((int)t6 < (int)((((struct o8_int *)0xC2A8E88)->v))) {
                            t5 = 0xB;
                            t5 = ((int)((int)((*(int *)((((t6 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t5));
                        } else {
                            t5 = 0xA;
                            t5 = ((int)((int)((*(int *)((((t6 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t5));
                        }
                        *(unsigned int *)((((t6 << 2) + 0xC2A8E50) + 0x0)) = t5;
                    } else {
                        t5 = 0xA;
                        t5 = ((int)((int)((*(int *)((((t6 << 2) + 0xC2A8E50) + 0x0))) + 0x1) % (int)t5));
                        *(unsigned int *)((((t6 << 2) + 0xC2A8E50) + 0x0)) = t5;
                    }
                }
            } else {
                t5 = (t6 << 2);
                if ((*(int *)((0xC2A8E6C + t5))) == 0) {
                    t5 = (t6 << 2);
                    *(unsigned int *)((0xC2A8E6C + t5)) = 0x1;
                    t5 = (Sound_Request(0x205A9, 0x0));
                }
            }
        }
        t5 = t6;
        t7 = 0xFFFFFFFA;
        if ((t5 != 1) && (t0 = (t5 == 1), t5 = t6, t5 != 2)) {
            t8 = 0x2;
            if (t5 == 3) {
            } else {
                t5 = t6;
                t8 = 0xA;
                if ((t5 != 4) && (t1 = (t5 == 4), t5 = t6, t5 != 5)) {
                    t8 = 0x12;
                    if (t5 == 6) {
                    } else {
                        t5 = t6;
                        t8 = 0xFFFFFFF2;
                        if (t5 == 7) {
                            t8 = 0x1A;
                        }
                    }
                }
            }
            t7 = t8;
        }
        if ((int)t6 <= (int)0x1) {
            t5 = (t6 << 2);
            t8 = *(int *)((0xC2A8E50 + t5));
            t5 = 0xC130C80;
            (((struct o0_uint *)0xC2A888C)->v) = (*(int *)(((t8 << 2) + t5)));
        } else {
            t5 = (t6 << 2);
            t8 = *(int *)((0xC2A8E50 + t5));
            t5 = 0xC130C54;
            (((struct o0_uint *)0xC2A888C)->v) = (*(int *)(((t8 << 2) + t5)));
        }
        t5 = 0x1A2;
        t8 = (((struct o28_int *)0xC2A8E88)->v);
        u0 = (float)(((((((0x8 - t6) << 1) + (0x8 - t6)) << 2) << 1) + t7) + t5);
        t5 = t8;
        if ((t5 != 1) && (t2 = (t5 == 1), t5 = t8, t5 != 6)) {
            t5 = 0x1C;
            (((struct o34_uint *)0xC2A888C)->v) = 0xE;
            *(float *)((0xC2A888C + t5)) = 0.0f;
            t5 = (t6 << 2);
            if ((*(int *)((0xC2A8E6C + t5))) == 0) {
                t5 = 0x24;
                t7 = (((struct o4_int *)0xC2A8E88)->v);
                *(float *)((0xC2A888C + t5)) = (1.0f - ((float)t7 * 0.25f));
                t5 = 0x14;
                *(float *)((0xC2A888C + t5)) = (1.0f - ((float)t7 * 0.25f));
            } else {
                t5 = 0x24;
                *(float *)((0xC2A888C + t5)) = 1.0f;
                t5 = 0x14;
                *(float *)((0xC2A888C + t5)) = 1.0f;
            }
            t5 = 0x4;
            *(float *)((0xC2A888C + t5)) = u0;
            u1 = 111.0f;
            u2 = ((((struct o30_float *)0xC2A8E88)->v));
        } else {
            t5 = 0x1C;
            (((struct o34_uint *)0xC2A888C)->v) = 0x6;
            *(float *)((0xC2A888C + t5)) = (1.0f - ((((struct o18_float *)0xC2A8E88)->v)));
            t5 = 0x24;
            *(float *)((0xC2A888C + t5)) = 1.0f;
            t5 = 0x14;
            *(float *)((0xC2A888C + t5)) = ((((struct o18_float *)0xC2A8E88)->v));
            t5 = 0x4;
            *(float *)((0xC2A888C + t5)) = u0;
            t5 = 0xC0555E8;
            u1 = (*(float *)((t5 + 0x0)));
            u2 = ((((struct o30_float *)0xC2A8E88)->v));
        }
        t5 = 0x8;
        *(float *)((0xC2A888C + t5)) = (u1 - u2);
        (((struct o28_uint *)0xC2A888C)->v) = 0x0;
        t5 = (nlSprPut(0xC2A888C, t8));
        t5 = ((((struct o28_int *)0xC2A8E88)->v));
        if ((t5 != 1) && (t3 = (t5 == 1), t5 = (t6 << 2), t4 = *(int *)((0xC2A8E6C + t5)), t4 == 0)) {
            t5 = 0x8;
            *(float *)((0xC2A888C + t5)) = ((*(float *)((0xC2A888C + t5))) - 32.0f);
            if ((int)t6 <= (int)0x1) {
                t5 = (t6 << 2);
                t7 = *(int *)((0xC2A8E50 + t5));
                t5 = 0xA;
                t5 = ((int)((int)(t7 + 0x1) % (int)t5));
                t5 = (t5 << 2);
                (((struct o0_uint *)0xC2A888C)->v) = (*(int *)((0xC130C80 + t5)));
            } else {
                t5 = 0xC2A8E90;
                if ((int)t6 > (int)(*(int *)((t5 + 0x0)))) {
                    t5 = (t6 << 2);
                    t7 = *(int *)((0xC2A8E50 + t5));
                    t5 = 0xB;
                    t5 = ((int)((int)(t7 + 0x1) % (int)t5));
                    t5 = (t5 << 2);
                    (((struct o0_uint *)0xC2A888C)->v) = (*(int *)((0xC130C54 + t5)));
                } else {
                    t5 = (t6 << 2);
                    t7 = *(int *)((0xC2A8E50 + t5));
                    t5 = 0xA;
                    t5 = ((int)((int)(t7 + 0x1) % (int)t5));
                    t5 = (t5 << 2);
                    (((struct o0_uint *)0xC2A888C)->v) = (*(int *)((0xC130C54 + t5)));
                }
                t7 = 0xC130C54;
            }
            t5 = 0x14;
            (((struct o34_uint *)0xC2A888C)->v) = 0x6;
            u0 = ((float)((((struct o4_int *)0xC2A8E88)->v)) * ((((struct o18_float *)0xC2A8E88)->v)));
            *(float *)((0xC2A888C + t5)) = (u0 * 0.25f);
            t5 = 0x1C;
            u0 = (1.0f - ((float)((((struct o4_int *)0xC2A8E88)->v)) * 0.25f));
            *(float *)((0xC2A888C + t5)) = (u0 * ((((struct o18_float *)0xC2A8E88)->v)));
            t5 = 0x24;
            *(float *)((0xC2A888C + t5)) = 1.0f;
            (((struct o28_uint *)0xC2A888C)->v) = 0x0;
            t5 = (nlSprPut(0xC2A888C, t7));
        }
        t6 = (t6 + 0x1);
        if ((int)t6 < (int)0x7) continue;
        break;
    }
    t0 = *(int *)((0xC2A8E6C + (((((struct o0_int *)0xC2A8E88)->v)) << 2)));
    if (t0 == 1) {
        (((struct o0_uint *)0xC2A8E88)->v) = (((((struct o0_int *)0xC2A8E88)->v)) + 0x1);
    }
    return t0;
}
