/* Straight-line functions with calls and guards (batch gen_sk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int Put_Remain_Time_Gauge(void);

int Put_Remain_Time_Gauge(void)
{
    int t0;
    int t3;
    int t4;
    float u9;
    float u10;
    float u18;
    int t39;
    int t41;
    int t65;
    int t93;
    int t67;
    int t85;
    int t68;
    int t40;
    int t42;
    int t69;
    int t81;

    t0 = *(int *)0xC2A8CBC;
    if (t0 == 0) {
        t3 = *(int *)0xC2A8C90;
        if ((int)t3 < (int)0xA) {
            t4 = *(int *)0xC2A8C90;
            *(unsigned int *)0xC2A8C90 = (t4 + 0x1);
        } else {
            *(unsigned int *)0xC2A8C90 = 0xA;
            *(unsigned int *)0xC2A8CBC = 0x1;
        }
    } else {
        if (t0 == 1) {
            u9 = *(float *)0xC2A8C8C;
            if (1.0f > u9) {
                u10 = *(float *)0xC2A8C8C;
                *(float *)0xC2A8C8C = (u10 + 0.099999994f);
            } else {
                Sound_Request(0x705A9, 0x0);
                *(unsigned int *)0xC2A8CBC = 0x2;
            }
            u18 = *(float *)0xC2A8C8C;
            if (u18 > 1.0f) {
                *(float *)0xC2A8C8C = 1.0f;
            }
        }
    }
    t39 = *(int *)0xC2A8CBC;
    if ((t39 == 2) && (t40 = *(int *)0xC2A8CB8, (int)t40 < (int)0x30)) {
        t41 = *(int *)0xC2A8CB8;
        *(unsigned int *)0xC2A8CB8 = (t41 + 0x1);
        if (((int)(t41 + 0x1) > 0) && (t42 = *(int *)0xC2A8CB8, (int)t42 <= (int)0x3)) {
            *(unsigned int *)0xC2A8CB4 = 0x1;
        } else {
            if (((int)(t41 + 0x1) > (int)0x3) && ((int)(t41 + 0x1) <= (int)0x5)) {
                *(unsigned int *)0xC2A8CB4 = 0x2;
            } else {
                if ((((int)(t41 + 0x1) > (int)0x5) && ((int)(t41 + 0x1) <= (int)0x8)) || (((int)(t41 + 0x1) > (int)0xC) && ((int)(t41 + 0x1) <= (int)0xF))) {
                    *(unsigned int *)0xC2A8CB4 = 0x1;
                } else {
                    if (((int)(t41 + 0x1) > (int)0xF) && ((int)(t41 + 0x1) <= (int)0x11)) {
                        *(unsigned int *)0xC2A8CB4 = 0x2;
                    } else {
                        if (((int)(t41 + 0x1) > (int)0x11) && ((int)(t41 + 0x1) <= (int)0x14)) {
                            *(unsigned int *)0xC2A8CB4 = 0x1;
                        } else {
                            if ((int)(t41 + 0x1) >= (int)0x30) {
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
    t65 = *(int *)0xC2A8EB0;
    t93 = t65;
    if (t65 == 2) {
        t67 = *(int *)0xC2A8EAC;
        t85 = 0xC2A8EAC;
        if ((int)t67 < (int)0x30) {
            t68 = *(int *)0xC2A8EAC;
            *(unsigned int *)0xC2A8EAC = (t68 + 0x1);
            if (((int)(t68 + 0x1) > 0) && (t69 = *(int *)0xC2A8EAC, (int)t69 <= (int)0x3)) {
                *(unsigned int *)0xC2A8EA8 = 0x1;
                t81 = 0xC2A8EAC;
            } else {
                if (((int)(t68 + 0x1) > (int)0x3) && ((int)(t68 + 0x1) <= (int)0x5)) {
                    *(unsigned int *)0xC2A8EA8 = 0x2;
                } else {
                    if ((((int)(t68 + 0x1) > (int)0x5) && ((int)(t68 + 0x1) <= (int)0x8)) || (((int)(t68 + 0x1) > (int)0xC) && ((int)(t68 + 0x1) <= (int)0xF))) {
                        *(unsigned int *)0xC2A8EA8 = 0x1;
                    } else {
                        if (((int)(t68 + 0x1) > (int)0xF) && ((int)(t68 + 0x1) <= (int)0x11)) {
                            *(unsigned int *)0xC2A8EA8 = 0x2;
                        } else {
                            if (((int)(t68 + 0x1) > (int)0x11) && ((int)(t68 + 0x1) <= (int)0x14)) {
                                *(unsigned int *)0xC2A8EA8 = 0x1;
                            } else {
                                if ((int)(t68 + 0x1) >= (int)0x30) {
                                    *(unsigned int *)0xC2A8EA8 = 0x2;
                                } else {
                                    *(unsigned int *)0xC2A8EA8 = 0x0;
                                }
                            }
                        }
                    }
                }
                t81 = 0x3;
            }
            t85 = t81;
        }
        t93 = t85;
    }
    return t93;
}
