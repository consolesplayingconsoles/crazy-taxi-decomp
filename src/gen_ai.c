/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c060160(void);
int FUN_0c0601f0(void);
int FUN_0c0603a2(void);
int FUN_0c0813d0(int);
float nlLength(int, int);

float FUN_0c0217b4(float f4, float f5)
{
    float u2;
    float u5;
    float u12;
    float u15;
    float u24;
    float u23;
    float u9;
    float u19;

    if (!(f5 > f4)) {
        if (f4 != 0.0f) {
            u2 = (((f4 - f5) / f4) < 0.0f ? -((f4 - f5) / f4) : ((f4 - f5) / f4));
            if (80.0f > (f4 < 0.0f ? -f4 : f4)) {
                u2 = ((((f4 - f5) / f4) < 0.0f ? -((f4 - f5) / f4) : ((f4 - f5) / f4)) * ((f4 / 75.0f) < 0.0f ? -(f4 / 75.0f) : (f4 / 75.0f)));
            }
            u9 = u2;
        } else {
            u5 = 0.0f;
            if (f5 != 0.0f) {
                u5 = (((f5 / 75.0f) < 0.0f ? -(f5 / 75.0f) : (f5 / 75.0f)) * 1.0f);
            }
            u9 = u5;
        }
        u23 = u9;
    } else {
        if (f5 != 0.0f) {
            u12 = (((f5 - f4) / f5) < 0.0f ? -((f5 - f4) / f5) : ((f5 - f4) / f5));
            if (80.0f > (f5 < 0.0f ? -f5 : f5)) {
                u12 = ((((f5 - f4) / f5) < 0.0f ? -((f5 - f4) / f5) : ((f5 - f4) / f5)) * ((f5 / 75.0f) < 0.0f ? -(f5 / 75.0f) : (f5 / 75.0f)));
            }
            u19 = u12;
        } else {
            u15 = (((f4 / 75.0f) < 0.0f ? -(f4 / 75.0f) : (f4 / 75.0f)) * 1.0f);
            if (f4 == 0.0f) {
                u15 = 0.0f;
            }
            u19 = u15;
        }
        u23 = u19;
    }
    u24 = u23;
    if (u23 > 1.0f) {
        u24 = 1.0f;
    }
    return u24;
}

void calcColliCheck(int a4)
{
    float u0;
    float u1;
    float u2;
    int t3;
    int t4;
    float u5;
    float u6;
    float u7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t15;
    int t19;
    int t22;
    int t25;
    int t28;

    u0 = *(float *)((a4 + 0xC4));
    if (u0 == 0.0f) {
        u1 = *(float *)((a4 + 0xCC));
        if (0.00199999986f > (u1 < 0.0f ? -u1 : u1)) {
            u2 = *(float *)((a4 + 0x60));
            if (9.99999941e-08f > (u2 < 0.0f ? -u2 : u2)) {
                t3 = *(short *)((a4 + 0xAA));
                t4 = FUN_0c0813d0(t3);
                if ((int)t4 < (int)0x10) {
                    u5 = *(float *)((a4 + 0x100));
                    if (9.99999941e-08f > (u5 < 0.0f ? -u5 : u5)) {
                        u6 = *(float *)((a4 + 0x104));
                        u7 = *(float *)((a4 + 0x90));
                        if (0.073499985f > ((u7 - u6) < 0.0f ? -(u7 - u6) : (u7 - u6))) {
                            t8 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t8 & 0xFFFFFFFB);
                            t9 = *(int *)0xC0A4790;
                            *(unsigned int *)(((0x98 + a4) + 0x8)) = t9;
                            t10 = *(int *)0xC0A478C;
                            *(unsigned int *)(((0x98 + a4) + 0x4)) = t10;
                            t11 = *(int *)0xC0A4788;
                            *(unsigned int *)(((0x98 + a4) + 0x0)) = t11;
                        } else {
                            t12 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t12 | 0x4);
                        }
                    } else {
                        t15 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t15 | 0x4);
                    }
                } else {
                    t19 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t19 | 0x4);
                }
            } else {
                t22 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t22 | 0x4);
            }
        } else {
            t25 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t25 | 0x4);
        }
    } else {
        t28 = *(int *)((a4 + 0x84));
        *(unsigned int *)((a4 + 0x84)) = (t28 | 0x4);
    }
}

void calcCheck(int a4)
{
    float t0;
    float u1;
    int t2;
    int t3;
    float u6;
    float u7;
    float u8;
    int t9;
    int t10;
    float u11;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t21;
    int t25;
    int t28;
    int t31;
    int t34;
    int t4;

    t0 = nlLength(0xC2A1B34, (0x8C + a4));
    u1 = *(float *)0xC2A1B18;
    if ((u1 + 30.0f) > t0) {
        t2 = *(int *)((a4 + 0x84));
        t4 = (t2 | 0xD);
    } else {
        t3 = *(int *)((a4 + 0x84));
        t4 = (t3 & 0xFFFFFFF2);
    }
    *(unsigned int *)((a4 + 0x84)) = t4;
    u6 = *(float *)((a4 + 0xC4));
    if (u6 == 0.0f) {
        u7 = *(float *)((a4 + 0xCC));
        if (0.00199999986f > (u7 < 0.0f ? -u7 : u7)) {
            u8 = *(float *)((a4 + 0x60));
            if (9.99999941e-08f > (u8 < 0.0f ? -u8 : u8)) {
                t9 = *(short *)((a4 + 0xAA));
                t10 = FUN_0c0813d0(t9);
                if ((int)t10 < (int)0x10) {
                    u11 = *(float *)((a4 + 0x100));
                    if (9.99999941e-08f > (u11 < 0.0f ? -u11 : u11)) {
                        u12 = *(float *)((a4 + 0x104));
                        u13 = *(float *)((a4 + 0x90));
                        if (0.073499985f > ((u13 - u12) < 0.0f ? -(u13 - u12) : (u13 - u12))) {
                            t14 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t14 & 0xFFFFFFFB);
                            t15 = *(int *)0xC0A4790;
                            *(unsigned int *)(((0x98 + a4) + 0x8)) = t15;
                            t16 = *(int *)0xC0A478C;
                            *(unsigned int *)(((0x98 + a4) + 0x4)) = t16;
                            t17 = *(int *)0xC0A4788;
                            *(unsigned int *)(((0x98 + a4) + 0x0)) = t17;
                        } else {
                            t18 = *(int *)((a4 + 0x84));
                            *(unsigned int *)((a4 + 0x84)) = (t18 | 0x4);
                        }
                    } else {
                        t21 = *(int *)((a4 + 0x84));
                        *(unsigned int *)((a4 + 0x84)) = (t21 | 0x4);
                    }
                } else {
                    t25 = *(int *)((a4 + 0x84));
                    *(unsigned int *)((a4 + 0x84)) = (t25 | 0x4);
                }
            } else {
                t28 = *(int *)((a4 + 0x84));
                *(unsigned int *)((a4 + 0x84)) = (t28 | 0x4);
            }
        } else {
            t31 = *(int *)((a4 + 0x84));
            *(unsigned int *)((a4 + 0x84)) = (t31 | 0x4);
        }
    } else {
        t34 = *(int *)((a4 + 0x84));
        *(unsigned int *)((a4 + 0x84)) = (t34 | 0x4);
    }
}


int nlArcTan(float f4)
{
    float u0;
    int t1;
    float u2;
    int t3;
    int t4;
    float u5;

    u0 = (1.0f / f4);
    if (!((f4 < 0.0f ? -f4 : f4) > 1.0f)) {
        u0 = f4;
    }
    t1 = 0xD;
    u2 = 0.0f;
    do {
        t3 = (t1 << 1);
        t4 = t1;
        t1 = (t1 - 1);
        u5 = (((float)t3 + u2) + 1.0f);
        u2 = ((((float)t4 * (float)t4) * u0) * u0);
        u2 = (u2 / u5);
    } while ((int)t1 >= (int)0x1);
    if (f4 > 1.0f) {
        return (unsigned short)(0x4000 - ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    if ((-1.0f) > f4) {
        return (unsigned short)(0xC000 - ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF));
    }
    return ((int)(((((u0 / (u2 + 1.0f)) + 6.28318501f) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF);
}

float nlFloor(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (0.0f > f4) {
            if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
                return (float)(0xFFFFFFFF - (int)(f4 < 0.0f ? -f4 : f4));
            }
            return f4;
        }
        return (float)(int)(f4 < 0.0f ? -f4 : f4);
    }
    return f4;
}

float nlRoundOff(float f4)
{
    if (8388608.0f > (f4 < 0.0f ? -f4 : f4)) {
        if (((f4 < 0.0f ? -f4 : f4) - (float)(int)(f4 < 0.0f ? -f4 : f4)) != 0.0f) {
            if (f4 > 0.0f) {
                return (float)(int)(f4 < 0.0f ? -f4 : f4);
            }
            return (float)(-(int)(f4 < 0.0f ? -f4 : f4));
        }
        return f4;
    }
    return f4;
}
