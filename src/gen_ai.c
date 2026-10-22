/* Straight-line functions with calls and guards (batch gen_ai): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c060160(void);
int FUN_0c0601f0(void);
int FUN_0c0603a2(void);
int FUN_0c0813d0(int);
float nlLength(int, int);



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
