/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int nlSprPut();
int hudDrawRankDrum(int a4, int a5, int a6);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };


int hudDrawRankDrum(int a4, int a5, int a6)
{
    int t0;
    int t13;
    int t15;
    int t26;
    int t42;
    float u60;
    int t68;
    float u79;
    int t82;
    int t11;
    int t28;
    int t29;
    int t36;
    int t37;

    t0 = (((struct o4_int *)0xC2A9174)->v);
    if (t0 == 0) {
    } else {
        if (t0 == 6) {
        } else {
            if (((((struct o4_int *)0xC2A8F7C)->v)) == 8) {
                t11 = (*(int *)(((((((struct o0_int *)0xC2A8F7C)->v)) << 2) + 0xC130D00)));
            } else {
                t11 = (*(int *)(((((((struct o0_int *)0xC2A8F7C)->v)) << 2) + 0xC130CD8)));
            }
            (((struct o0_uint *)0xC2A80BC)->v) = t11;
            t13 = (((struct o4_int *)0xC2A9174)->v);
            if ((t13 != 1) && (t13 != 5)) {
                (((struct o34_uint *)0xC2A80BC)->v) = 0xE;
                (((struct o1C_float *)0xC2A80BC)->v) = 0.0f;
                if (((((struct o8_int *)0xC2A8F7C)->v)) == 0) {
                    t15 = (((struct o14_int *)0xC2A8F7C)->v);
                    (((struct o24_float *)0xC2A80BC)->v) = (1.0f - ((float)t15 * 0.25f));
                    (((struct o14_float *)0xC2A80BC)->v) = (1.0f - ((float)t15 * 0.25f));
                } else {
                    (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
                    (((struct o14_float *)0xC2A80BC)->v) = 1.0f;
                }
                (((struct o4_float *)0xC2A80BC)->v) = 564.0f;
                (((struct o8_float *)0xC2A80BC)->v) = 264.0f;
            } else {
                (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
                (((struct o1C_float *)0xC2A80BC)->v) = (1.0f - (((((struct o0_float *)0xC2A9174)->v)) * 0.5f));
                (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
                (((struct o14_float *)0xC2A80BC)->v) = (((((struct o0_float *)0xC2A9174)->v)) * 0.5f);
                (((struct o4_float *)0xC2A80BC)->v) = 564.0f;
                (((struct o8_float *)0xC2A80BC)->v) = 200.0f;
            }
            (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
            t26 = ((int (*)(int, int, int))(nlSprPut))(0xC2A80BC, a5, a6);
            if ((((((struct o4_int *)0xC2A9174)->v)) != 1) && ((t28 = (((struct o4_int *)0xC2A9174)->v), t28 != 5) && (t29 = (((struct o8_int *)0xC2A8F7C)->v), t29 == 0))) {
                (((struct o8_float *)0xC2A80BC)->v) = (((((struct o8_float *)0xC2A80BC)->v)) - 64.0f);
                if (((((struct o4_int *)0xC2A8F7C)->v)) == 8) {
                    t36 = (((int)((int)(((((struct o0_int *)0xC2A8F7C)->v)) + 0x1) % (int)0xA)) << 2);
                    t37 = 0xC130D00;
                } else {
                    t36 = (((int)((int)(((((struct o0_int *)0xC2A8F7C)->v)) + 0x1) % (int)0xA)) << 2);
                    t37 = 0xC130CD8;
                }
                (((struct o0_uint *)0xC2A80BC)->v) = (*(int *)((t37 + t36)));
                (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
                (((struct o14_float *)0xC2A80BC)->v) = ((float)((((struct o14_int *)0xC2A8F7C)->v)) * 0.25f);
                (((struct o1C_float *)0xC2A80BC)->v) = (1.0f - ((float)((((struct o14_int *)0xC2A8F7C)->v)) * 0.25f));
                (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
                t42 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, 0xA);
            }
        }
    }
    (((struct o0_uint *)0xC2A80BC)->v) = 0x128;
    (((struct o4_float *)0xC2A80BC)->v) = 532.0f;
    u60 = 212.0f;
    u60 = u60 + 26.0f * ((((struct o0_float *)0xC2A9174)->v));
    (((struct o8_float *)0xC2A80BC)->v) = u60;
    (((struct oC_float *)0xC2A80BC)->v) = 0.049999997f;
    (((struct o10_float *)0xC2A80BC)->v) = 6.0f;
    (((struct o14_float *)0xC2A80BC)->v) = (((((struct o0_float *)0xC2A9174)->v)) * (1.0f + 1.0f));
    (((struct o1C_float *)0xC2A80BC)->v) = (1.0f - (((((struct o0_float *)0xC2A9174)->v)) * 0.5f));
    (((struct o24_float *)0xC2A80BC)->v) = 1.0f;
    (((struct o2C_float *)0xC2A80BC)->v) = 0.7f;
    (((struct o34_uint *)0xC2A80BC)->v) = 0x200E;
    (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
    if (!(1.4f > ((((struct o0_float *)0xC2A9174)->v)))) {
        t68 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    }
    (((struct o8_float *)0xC2A80BC)->v) = 200.0f;
    (((struct o14_float *)0xC2A80BC)->v) = (((((struct o0_float *)0xC2A9174)->v)) * 3.0f);
    u79 = 4.0f;
    if (((((struct o14_float *)0xC2A80BC)->v)) > u79) {
        (((struct o14_float *)0xC2A80BC)->v) = u79;
    }
    (((struct o28_uint *)0xC2A80BC)->v) = 0x8000;
    t82 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
    (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
    return t82;
}
