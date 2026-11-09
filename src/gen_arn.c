/* Straight-line functions with calls and guards (batch gen_arn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
float breathFrameTime(float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslateV(int);
int Put_Remain_Time_Flash(void);
int breathPut(int a4);
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int Put_Remain_Time_Flash(void)
{
    int t2;
    int t26;
    int t54;
    int t29;
    int t1;
    int t3;
    int t30;

    if ((((((struct o8_int *)0xC2A8CB4)->v)) == 2) && (t1 = (((struct o4_int *)0xC2A8CB4)->v), (int)t1 < (int)0x30)) {
        t2 = (((struct o4_int *)0xC2A8CB4)->v);
        (((struct o4_uint *)0xC2A8CB4)->v) = (t2 + 0x1);
        if (((int)(t2 + 0x1) > 0) && (t3 = (((struct o4_int *)0xC2A8CB4)->v), (int)t3 <= (int)0x3)) {
            (((struct o0_uint *)0xC2A8CB4)->v) = 0x1;
        } else {
            if (((int)(t2 + 0x1) > (int)0x3) && ((int)(t2 + 0x1) <= (int)0x5)) {
                (((struct o0_uint *)0xC2A8CB4)->v) = 0x2;
            } else {
                if ((((int)(t2 + 0x1) > (int)0x5) && ((int)(t2 + 0x1) <= (int)0x8)) || (((int)(t2 + 0x1) > (int)0xC) && ((int)(t2 + 0x1) <= (int)0xF))) {
                    (((struct o0_uint *)0xC2A8CB4)->v) = 0x1;
                } else {
                    if (((int)(t2 + 0x1) > (int)0xF) && ((int)(t2 + 0x1) <= (int)0x11)) {
                        (((struct o0_uint *)0xC2A8CB4)->v) = 0x2;
                    } else {
                        if (((int)(t2 + 0x1) > (int)0x11) && ((int)(t2 + 0x1) <= (int)0x14)) {
                            (((struct o0_uint *)0xC2A8CB4)->v) = 0x1;
                        } else {
                            if ((int)(t2 + 0x1) >= (int)0x30) {
                                (((struct o0_uint *)0xC2A8CB4)->v) = 0x2;
                            } else {
                                (((struct o0_uint *)0xC2A8CB4)->v) = 0x0;
                            }
                        }
                    }
                }
            }
        }
    }
    t26 = (((struct o8_int *)0xC2A8EA8)->v);
    t54 = t26;
    if (t26 == 2) {
        t54 = 0xC2A8EAC;
        if ((int)((((struct o4_int *)0xC2A8EA8)->v)) < (int)0x30) {
            t29 = (((struct o4_int *)0xC2A8EA8)->v);
            (((struct o4_uint *)0xC2A8EA8)->v) = (t29 + 0x1);
            if (((int)(t29 + 0x1) > 0) && (t30 = (((struct o4_int *)0xC2A8EA8)->v), (int)t30 <= (int)0x3)) {
                (((struct o0_uint *)0xC2A8EA8)->v) = 0x1;
                t54 = 0xC2A8EAC;
            } else {
                if (((int)(t29 + 0x1) > (int)0x3) && ((int)(t29 + 0x1) <= (int)0x5)) {
                    (((struct o0_uint *)0xC2A8EA8)->v) = 0x2;
                } else {
                    if ((((int)(t29 + 0x1) > (int)0x5) && ((int)(t29 + 0x1) <= (int)0x8)) || (((int)(t29 + 0x1) > (int)0xC) && ((int)(t29 + 0x1) <= (int)0xF))) {
                        (((struct o0_uint *)0xC2A8EA8)->v) = 0x1;
                    } else {
                        if (((int)(t29 + 0x1) > (int)0xF) && ((int)(t29 + 0x1) <= (int)0x11)) {
                            (((struct o0_uint *)0xC2A8EA8)->v) = 0x2;
                        } else {
                            if (((int)(t29 + 0x1) > (int)0x11) && ((int)(t29 + 0x1) <= (int)0x14)) {
                                (((struct o0_uint *)0xC2A8EA8)->v) = 0x1;
                            } else {
                                if ((int)(t29 + 0x1) >= (int)0x30) {
                                    (((struct o0_uint *)0xC2A8EA8)->v) = 0x2;
                                } else {
                                    (((struct o0_uint *)0xC2A8EA8)->v) = 0x0;
                                }
                            }
                        }
                    }
                }
                t54 = 0x3;
            }
        }
    }
    return t54;
}

int breathPut(int a4)
{
    float u11;

    nlPushMatrix(0x0);
    nlTranslateV(a4);
    nlRotateAY((*(int *)((a4 + 0x10))));
    nlRotateAX((*(int *)((a4 + 0xC))));
    FcvPlay(0xC9F0978, 0x15, (*(float *)((a4 + 0x1C))));
    *(float *)(((0x1C + a4) + 0x0)) = ((*(float *)(((0x1C + a4) + 0x0))) + (breathFrameTime((*(float *)((a4 + 0x18))))));
    u11 = *(float *)0xC072A10;
    if (!(u11 > (*(float *)((a4 + 0x1C))))) {
        *(float *)((a4 + 0x1C)) = ((*(float *)((a4 + 0x1C))) - u11);
    }
    return nlPopMatrix(0x1);
}
