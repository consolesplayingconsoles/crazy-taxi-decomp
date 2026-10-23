/* Straight-line functions with calls and guards (batch gen_pl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int, float, float, float);
int Start_CrazyBox_Voice(int);
int Start_Excellent(void);
int Start_Fault(int);
int pfColor(int, int, int, int);
int pfCrazyBoxRecordTimePut(int, int, int);
int pfSetFont(int);
int pfSize(float, float);
int pfTextCenterPut(int, int, int);
int Exec_Check_Point(float f4, float f5, float f6);

int Exec_Check_Point(float f4, float f5, float f6)
{
    int t4;
    float u11;
    float u49;
    int t12;
    int t112;
    int t113;
    int t134;
    int t117;
    int t143;
    int t163;
    int t152;
    int t153;
    int t156;
    int t175;
    int t177;
    int t184;
    int t185;
    int t1;
    int t13;
    float u41;
    int t28;
    int t74;
    int t130;
    int t126;
    int t127;
    int t159;
    int t172;

    if (((*(int *)0xC1EE794) == 0) && (t1 = *(int *)0xC2A991C, t1 == 0)) {
        Start_Fault(0x0);
        *(unsigned int *)0xC2A991C = 0x1;
        *(unsigned int *)0xC179120 = 0x0;
    } else {
        t4 = CheckKyakuArea(0xC179144, (*(int *)0xC2A98FC), f4, f5, f6);
        if (t4 == 0) {
        } else {
            if ((*(int *)0xC2A98FC) == 7) {
                *(unsigned int *)0xC2A9A60 = 0x1;
            } else {
                *(unsigned int *)0xC2A9A60 = 0x0;
            }
            if ((int)(*(int *)0xC2A98FC) >= (int)0x7) {
                if ((*(int *)0xC2A98FC) == 7) {
                    u11 = *(float *)0xC179228;
                    u49 = _builtin_fabsf(u11);
                    if (0.149999991f > _builtin_fabsf(u11)) {
                        t12 = *(short *)0xC179264;
                        if ((16.0f > _builtin_fabsf((float)t12)) && (t13 = *(int *)0xC2A9A5C, t13 == 0)) {
                            *(unsigned int *)0xC2A9BA4 = (*(int *)0xC2A98F8);
                            *(unsigned int *)0xC2A9B98 = ((int)((int)(*(int *)0xC2A98F8) / (int)0xE10));
                            *(unsigned int *)0xC2A9B9C = ((int)((int)((int)((int)(*(int *)0xC2A98F8) % (int)0xE10)) / (int)0x3C));
                            *(unsigned int *)0xC2A9BA0 = ((int)((int)(*(int *)0xC2A98F8) % (int)0x3C));
                            if ((*(int *)0xC2A98FC) == 7) {
                                Start_Excellent();
                                *(unsigned int *)0xC2A9A5C = 0x1;
                                t28 = 0x3D;
                            } else {
                                *(unsigned int *)0xC1319E0 = 0x0;
                                t28 = 0x35;
                                _builtin_fabsf((float)t12);
                            }
                            Start_CrazyBox_Voice(t28);
                        } else {
                            u41 = _builtin_fabsf((float)t12);
                        }
                        u49 = u41;
                    }
                }
            } else {
                *(unsigned int *)0xC2A9BA4 = (*(int *)0xC2A98F8);
                *(unsigned int *)0xC2A9B98 = ((int)((int)(*(int *)0xC2A98F8) / (int)0xE10));
                *(unsigned int *)0xC2A9B9C = ((int)((int)((int)((int)(*(int *)0xC2A98F8) % (int)0xE10)) / (int)0x3C));
                *(unsigned int *)0xC2A9BA0 = ((int)((int)(*(int *)0xC2A98F8) % (int)0x3C));
                if ((*(int *)0xC2A98FC) == 7) {
                    Start_Excellent();
                    *(unsigned int *)0xC2A9A5C = 0x1;
                    t74 = 0x3D;
                } else {
                    *(unsigned int *)0xC1319E0 = 0x0;
                    t74 = 0x35;
                }
                Start_CrazyBox_Voice(t74);
            }
            if ((int)(*(int *)0xC2A98FC) < (int)0x7) {
                *(unsigned int *)0xC2A98FC = ((*(int *)0xC2A98FC) + 0x1);
            }
            *(unsigned int *)0xC1319DC = 0x0;
        }
    }
    if ((int)(*(int *)0xC1319E0) <= (int)0x3B) {
        *(unsigned int *)0xC1319E0 = ((*(int *)0xC1319E0) + 0x1);
    }
    t112 = *(int *)0xC1319E0;
    t113 = *(int *)0xC2A9BA8;
    t134 = t112;
    if (t112 == 59) {
        if (t113 == 0) {
            Start_CrazyBox_Voice(((*(int *)0xC1319E4) + 0x36));
            t117 = (int)((int)((*(int *)0xC1319E4) + 0x1) % (int)0x2);
            *(unsigned int *)0xC1319E4 = t117;
            t130 = t117;
        } else {
            if (t113 == 1) {
                Start_CrazyBox_Voice(((*(int *)0xC1319E8) + 0x3A));
                t126 = ((int)((int)((*(int *)0xC1319E8) + 0x1) % (int)0x2));
                t127 = 0xC1319E8;
            } else {
                Start_CrazyBox_Voice(((*(int *)0xC1319EC) + 0x38));
                t126 = ((int)((int)((*(int *)0xC1319EC) + 0x1) % (int)0x2));
                t127 = 0xC1319EC;
            }
            *(unsigned int *)((t127 + 0x0)) = t126;
            t130 = t126;
        }
        t134 = t130;
    }
    t143 = *(int *)0xC1319DC;
    if ((int)t143 < (int)0xF0) {
        t163 = t134;
        if (t143 == 0) {
            t152 = *(int *)0xC2A98FC;
            t153 = *(int *)0xC2A98F8;
            if ((int)(*(int *)((((t152 << 2) + 0xC1319B0) + 0x0))) > (int)t153) {
                *(unsigned int *)0xC2A9BA8 = 0x0;
                t159 = t134;
            } else {
                t156 = *(int *)((((t152 << 2) + 0xC1319B0) + 0x0));
                if ((int)(t156 + 0x12C) < (int)t153) {
                    *(unsigned int *)0xC2A9BA8 = 0x1;
                } else {
                    *(unsigned int *)0xC2A9BA8 = 0x2;
                }
                t159 = (t156 + 0x12C);
            }
            t163 = t159;
        }
        *(unsigned int *)0xC1319DC = ((*(int *)0xC1319DC) + 0x1);
        if (((int)(*(int *)0xC2A98FC) >= (int)0x1) && (t172 = *(int *)0xC2A98FC, (int)t172 <= (int)0x7)) {
            t175 = *(int *)0xC2A9A60;
            if (t175 == 0) {
                t177 = (int)((int)(*(int *)0xC1319DC) % (int)0x3C);
                if ((int)t177 < (int)0x32) {
                    pfSetFont(0x2);
                    pfSize(1.0f, 1.0f);
                    if ((*(int *)0xC2A9BA8) == 0) {
                        pfColor(0xFF00FF00, 0xFFCCFFCC, 0xFF00FF00, 0xFFCCFFCC);
                    } else {
                        t184 = 0xFFFFFF00;
                        t185 = 0xFFFFFFFF;
                        if ((*(int *)0xC2A9BA8) == 1) {
                            t184 = 0xFFFF0000;
                            t185 = 0xFFFFCCCC;
                        }
                        pfColor(t184, t185, t184, t185);
                    }
                    pfTextCenterPut(0x140, 0x15E, 0xC0D14F8);
                    return pfCrazyBoxRecordTimePut(0x140, 0x190, (*(int *)0xC2A9BA4));
                }
                return t177;
            }
            return t175;
        }
        return t163;
    }
    return t134;
}
