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

int Put_Remain_Time_Flash(void)
{
    int t2;
    int t26;
    int t54;
    int t46;
    int t29;
    int t1;
    int t3;
    int t30;
    int t42;

    if (((*(int *)0xC2A8CBC) == 2) && (t1 = *(int *)0xC2A8CB8, (int)t1 < (int)0x30)) {
        t2 = *(int *)0xC2A8CB8;
        *(unsigned int *)0xC2A8CB8 = (t2 + 0x1);
        if (((int)(t2 + 0x1) > 0) && (t3 = *(int *)0xC2A8CB8, (int)t3 <= (int)0x3)) {
            *(unsigned int *)0xC2A8CB4 = 0x1;
        } else {
            if (((int)(t2 + 0x1) > (int)0x3) && ((int)(t2 + 0x1) <= (int)0x5)) {
                *(unsigned int *)0xC2A8CB4 = 0x2;
            } else {
                if ((((int)(t2 + 0x1) > (int)0x5) && ((int)(t2 + 0x1) <= (int)0x8)) || (((int)(t2 + 0x1) > (int)0xC) && ((int)(t2 + 0x1) <= (int)0xF))) {
                    *(unsigned int *)0xC2A8CB4 = 0x1;
                } else {
                    if (((int)(t2 + 0x1) > (int)0xF) && ((int)(t2 + 0x1) <= (int)0x11)) {
                        *(unsigned int *)0xC2A8CB4 = 0x2;
                    } else {
                        if (((int)(t2 + 0x1) > (int)0x11) && ((int)(t2 + 0x1) <= (int)0x14)) {
                            *(unsigned int *)0xC2A8CB4 = 0x1;
                        } else {
                            if ((int)(t2 + 0x1) >= (int)0x30) {
                                *(unsigned int *)0xC2A8CB4 = 0x2;
                            } else {
                                *(unsigned int *)0xC2A8CB4 = 0x0;
                            }
                        }
                    }
                }
            }
        }
    }
    t26 = *(int *)0xC2A8EB0;
    t54 = t26;
    if (t26 == 2) {
        t46 = 0xC2A8EAC;
        if ((int)(*(int *)0xC2A8EAC) < (int)0x30) {
            t29 = *(int *)0xC2A8EAC;
            *(unsigned int *)0xC2A8EAC = (t29 + 0x1);
            if (((int)(t29 + 0x1) > 0) && (t30 = *(int *)0xC2A8EAC, (int)t30 <= (int)0x3)) {
                *(unsigned int *)0xC2A8EA8 = 0x1;
                t42 = 0xC2A8EAC;
            } else {
                if (((int)(t29 + 0x1) > (int)0x3) && ((int)(t29 + 0x1) <= (int)0x5)) {
                    *(unsigned int *)0xC2A8EA8 = 0x2;
                } else {
                    if ((((int)(t29 + 0x1) > (int)0x5) && ((int)(t29 + 0x1) <= (int)0x8)) || (((int)(t29 + 0x1) > (int)0xC) && ((int)(t29 + 0x1) <= (int)0xF))) {
                        *(unsigned int *)0xC2A8EA8 = 0x1;
                    } else {
                        if (((int)(t29 + 0x1) > (int)0xF) && ((int)(t29 + 0x1) <= (int)0x11)) {
                            *(unsigned int *)0xC2A8EA8 = 0x2;
                        } else {
                            if (((int)(t29 + 0x1) > (int)0x11) && ((int)(t29 + 0x1) <= (int)0x14)) {
                                *(unsigned int *)0xC2A8EA8 = 0x1;
                            } else {
                                if ((int)(t29 + 0x1) >= (int)0x30) {
                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                }
                            }
                        }
                    }
                }
                t42 = 0x3;
            }
            t46 = t42;
        }
        t54 = t46;
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
