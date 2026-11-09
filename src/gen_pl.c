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
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o3C_short { char p[0x3C]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Exec_Check_Point(float f4, float f5, float f6)
{
    int t4;
    float u11;
    float u49;
    int t12;
    int t112;
    int t113;
    int t134;
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
    int t127;
    int t172;

    if (((*(int *)0xC1EE794) == 0) && (t1 = (((struct o24_int *)0xC2A98F8)->v), t1 == 0)) {
        Start_Fault(0x0);
        (((struct o24_uint *)0xC2A98F8)->v) = 0x1;
        *(unsigned int *)0xC179120 = 0x0;
    } else {
        t4 = CheckKyakuArea(0xC179144, ((((struct o4_int *)0xC2A98F8)->v)), f4, f5, f6);
        if (t4 == 0) {
        } else {
            if (((((struct o4_int *)0xC2A98F8)->v)) == 7) {
                (((struct o4_uint *)0xC2A9A5C)->v) = 0x1;
            } else {
                (((struct o4_uint *)0xC2A9A5C)->v) = 0x0;
            }
            if ((int)((((struct o4_int *)0xC2A98F8)->v)) >= (int)0x7) {
                if (((((struct o4_int *)0xC2A98F8)->v)) == 7) {
                    u11 = (((struct o0_float *)0xC179228)->v);
                    u49 = _builtin_fabsf(u11);
                    if (0.149999991f > _builtin_fabsf(u11)) {
                        t12 = (((struct o3C_short *)0xC179228)->v);
                        if ((16.0f > _builtin_fabsf((float)t12)) && (t13 = (((struct o0_int *)0xC2A9A5C)->v), t13 == 0)) {
                            (((struct oC_uint *)0xC2A9B98)->v) = ((((struct o0_int *)0xC2A98F8)->v));
                            (((struct o0_uint *)0xC2A9B98)->v) = ((int)((int)((((struct o0_int *)0xC2A98F8)->v)) / (int)0xE10));
                            (((struct o4_uint *)0xC2A9B98)->v) = ((int)((int)((int)((int)((((struct o0_int *)0xC2A98F8)->v)) % (int)0xE10)) / (int)0x3C));
                            (((struct o8_uint *)0xC2A9B98)->v) = ((int)((int)((((struct o0_int *)0xC2A98F8)->v)) % (int)0x3C));
                            if (((((struct o4_int *)0xC2A98F8)->v)) == 7) {
                                Start_Excellent();
                                (((struct o0_uint *)0xC2A9A5C)->v) = 0x1;
                                t28 = 0x3D;
                            } else {
                                (((struct o4_uint *)0xC1319DC)->v) = 0x0;
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
                (((struct oC_uint *)0xC2A9B98)->v) = ((((struct o0_int *)0xC2A98F8)->v));
                (((struct o0_uint *)0xC2A9B98)->v) = ((int)((int)((((struct o0_int *)0xC2A98F8)->v)) / (int)0xE10));
                (((struct o4_uint *)0xC2A9B98)->v) = ((int)((int)((int)((int)((((struct o0_int *)0xC2A98F8)->v)) % (int)0xE10)) / (int)0x3C));
                (((struct o8_uint *)0xC2A9B98)->v) = ((int)((int)((((struct o0_int *)0xC2A98F8)->v)) % (int)0x3C));
                if (((((struct o4_int *)0xC2A98F8)->v)) == 7) {
                    Start_Excellent();
                    (((struct o0_uint *)0xC2A9A5C)->v) = 0x1;
                    t74 = 0x3D;
                } else {
                    (((struct o4_uint *)0xC1319DC)->v) = 0x0;
                    t74 = 0x35;
                }
                Start_CrazyBox_Voice(t74);
            }
            if ((int)((((struct o4_int *)0xC2A98F8)->v)) < (int)0x7) {
                (((struct o4_uint *)0xC2A98F8)->v) = (((((struct o4_int *)0xC2A98F8)->v)) + 0x1);
            }
            (((struct o0_uint *)0xC1319DC)->v) = 0x0;
        }
    }
    if ((int)((((struct o4_int *)0xC1319DC)->v)) <= (int)0x3B) {
        (((struct o4_uint *)0xC1319DC)->v) = (((((struct o4_int *)0xC1319DC)->v)) + 0x1);
    }
    t112 = (((struct o4_int *)0xC1319DC)->v);
    t113 = (((struct o10_int *)0xC2A9B98)->v);
    t134 = t112;
    if (t112 == 59) {
        if (t113 == 0) {
            Start_CrazyBox_Voice((((((struct o8_int *)0xC1319DC)->v)) + 0x36));
            t134 = (int)((int)(((((struct o8_int *)0xC1319DC)->v)) + 0x1) % (int)0x2);
            (((struct o8_uint *)0xC1319DC)->v) = t134;
        } else {
            if (t113 == 1) {
                Start_CrazyBox_Voice((((((struct oC_int *)0xC1319DC)->v)) + 0x3A));
                t134 = ((int)((int)(((((struct oC_int *)0xC1319DC)->v)) + 0x1) % (int)0x2));
                t127 = 0xC1319E8;
            } else {
                Start_CrazyBox_Voice((((((struct o10_int *)0xC1319DC)->v)) + 0x38));
                t134 = ((int)((int)(((((struct o10_int *)0xC1319DC)->v)) + 0x1) % (int)0x2));
                t127 = 0xC1319EC;
            }
            *(unsigned int *)((t127 + 0x0)) = t134;
        }
    }
    t143 = (((struct o0_int *)0xC1319DC)->v);
    if ((int)t143 < (int)0xF0) {
        t163 = t134;
        if (t143 == 0) {
            t152 = (((struct o4_int *)0xC2A98F8)->v);
            t153 = (((struct o0_int *)0xC2A98F8)->v);
            if ((int)(*(int *)((((t152 << 2) + 0xC1319B0) + 0x0))) > (int)t153) {
                (((struct o10_uint *)0xC2A9B98)->v) = 0x0;
                t163 = t134;
            } else {
                t156 = *(int *)((((t152 << 2) + 0xC1319B0) + 0x0));
                if ((int)(t156 + 0x12C) < (int)t153) {
                    (((struct o10_uint *)0xC2A9B98)->v) = 0x1;
                } else {
                    (((struct o10_uint *)0xC2A9B98)->v) = 0x2;
                }
                t163 = (t156 + 0x12C);
            }
        }
        (((struct o0_uint *)0xC1319DC)->v) = (((((struct o0_int *)0xC1319DC)->v)) + 0x1);
        if (((int)((((struct o4_int *)0xC2A98F8)->v)) >= (int)0x1) && (t172 = (((struct o4_int *)0xC2A98F8)->v), (int)t172 <= (int)0x7)) {
            t175 = (((struct o4_int *)0xC2A9A5C)->v);
            if (t175 == 0) {
                t177 = (int)((int)((((struct o0_int *)0xC1319DC)->v)) % (int)0x3C);
                if ((int)t177 < (int)0x32) {
                    pfSetFont(0x2);
                    pfSize(1.0f, 1.0f);
                    if (((((struct o10_int *)0xC2A9B98)->v)) == 0) {
                        pfColor(0xFF00FF00, 0xFFCCFFCC, 0xFF00FF00, 0xFFCCFFCC);
                    } else {
                        t184 = 0xFFFFFF00;
                        t185 = 0xFFFFFFFF;
                        if (((((struct o10_int *)0xC2A9B98)->v)) == 1) {
                            t184 = 0xFFFF0000;
                            t185 = 0xFFFFCCCC;
                        }
                        pfColor(t184, t185, t184, t185);
                    }
                    pfTextCenterPut(0x140, 0x15E, 0xC0D14F8);
                    return pfCrazyBoxRecordTimePut(0x140, 0x190, ((((struct oC_int *)0xC2A9B98)->v)));
                }
                return t177;
            }
            return t175;
        }
        return t163;
    }
    return t134;
}
