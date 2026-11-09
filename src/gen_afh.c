/* Straight-line functions with calls and guards (batch gen_afh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Class_Shadow_Put(void);
int Sound_Request(int, int);
int nlSprPut(int, int);
int Result_Crazy_Put(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Result_Crazy_Put(void)
{
    int t1;
    int t3;
    int t15;
    float u19;
    int t8;
    int t22;
    int t0;
    float u2;
    int t44;
    float u12;
    int t31;
    int t34;
    int t35;

    t1 = 0x0;
    for (;;) {
        t3 = (((struct o0_int *)0xC2A9864)->v);
        if ((int)t1 < (int)0x8) {
            t0 = t1;
            t0 = (t0 << 2);
            t0 = (t0 << 1);
            t0 = (t0 - t1);
            if ((int)t3 <= (int)t0) {
                t44 = t0;
            } else {
                t15 = t0;
                u19 = u2;
                if ((int)t3 < (int)0x38) {
                    t0 = 0xC08106C;
                    t8 = 0xC08106C;
                    if (((int)((int)t3 % (int)0x7)) == 0) {
                        t0 = 0xC072168;
                        Sound_Request(0xA00A9, 0x0);
                        t0 = 0xC2A9754;
                        (((struct oC_uint *)0xC2A9864)->v) = (((((struct oC_int *)0xC2A9864)->v)) + 0x1);
                        *(unsigned int *)((t0 + 0x0)) = 0x1;
                        (((struct o8_ushort *)0xC2A9748)->v) = 0x0;
                        (((struct o4_float *)0xC2A9748)->v) = 0.5f;
                        (((struct o10_float *)0xC2A9748)->v) = 0.0f;
                        t8 = t0;
                    } else {
                        u12 = u2;
                    }
                    t15 = t8;
                    u19 = u12;
                }
                u2 = u19;
                t0 = t15;
                if ((int)t1 < (int)0x5) {
                    t0 = 0x2;
                    (((struct o0_uint *)0xC2A96F8)->v) = (*(int *)((0xC130FFC + (t1 << 2))));
                    t22 = ((((t1 - 2) << 2) << 2) << 1);
                    if ((int)t1 > (int)t0) {
                        t22 = (((((t1 - 2) << 2) << 2) << 1) - ((t1 - 2) << 2));
                    }
                    u2 = (float)((t22 + (t1 << 1)) + 0x9C);
                    (((struct o4_float *)0xC2A96F8)->v) = u2;
                    (((struct o34_uint *)0xC2A96F8)->v) = 0x200A;
                    u2 = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x18C);
                    (((struct o8_float *)0xC2A96F8)->v) = u2;
                    (((struct oC_float *)0xC2A96F8)->v) = 0.149999991f;
                    u2 = ((((struct o10_float *)0xC2A9748)->v));
                    u2 = (u2 + 1.0f);
                    (((struct o10_float *)0xC2A96F8)->v) = u2;
                    u2 = ((((struct o10_float *)0xC2A9748)->v));
                    u2 = (u2 + 1.0f);
                    (((struct o14_float *)0xC2A96F8)->v) = u2;
                    (((struct o1C_float *)0xC2A96F8)->v) = 0.0f;
                    t31 = 0x24;
                    t34 = 0x18C;
                    t35 = (t1 << 1);
                } else {
                    (((struct o34_uint *)0xC2A96F8)->v) = 0xA;
                    (((struct o0_uint *)0xC2A96F8)->v) = 0x13D;
                    u2 = (float)((((t1 - 4) << 2) << 2) + 0xE6);
                    (((struct o4_float *)0xC2A96F8)->v) = u2;
                    u2 = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x18B);
                    (((struct o8_float *)0xC2A96F8)->v) = u2;
                    u2 = ((((struct o10_float *)0xC2A9748)->v));
                    u2 = (u2 + 0.399999976f);
                    (((struct o10_float *)0xC2A96F8)->v) = u2;
                    u2 = ((((struct o10_float *)0xC2A9748)->v));
                    u2 = (u2 + 1.5f);
                    (((struct o14_float *)0xC2A96F8)->v) = u2;
                    (((struct o18_float *)0xC2A96F8)->v) = 0.599999964f;
                    t31 = 0x20;
                    t34 = 0x18B;
                }
                *(float *)((0xC2A96F8 + t31)) = 1.0f;
                (((struct o28_uint *)0xC2A96F8)->v) = 0x0;
                nlSprPut(0xC2A96F8, t34);
                u2 = ((((struct o10_float *)0xC2A9748)->v));
                u2 = (u2 + 1.0f);
                (((struct o10_float *)0xC2A96F8)->v) = u2;
                u2 = ((((struct o10_float *)0xC2A9748)->v));
                u2 = (u2 + 1.0f);
                (((struct o14_float *)0xC2A96F8)->v) = u2;
                (((struct o18_float *)0xC2A96F8)->v) = 0.0f;
            }
            t1 = (t1 + 0x1);
            t0 = t44;
            continue;
        }
        break;
    }
    if ((int)t3 >= (int)0x3D) {
        if (t3 == 61) {
            (((struct o10_uint *)0xC2A9864)->v) = (((((struct o10_int *)0xC2A9864)->v)) + 0x1);
            Sound_Request(0xE00A9, 0x0);
            (((struct oC_uint *)0xC2A9748)->v) = 0x1;
            (((struct o8_ushort *)0xC2A9748)->v) = 0x0;
            (((struct o4_float *)0xC2A9748)->v) = 0.5f;
            (((struct o10_float *)0xC2A9748)->v) = 0.0f;
        }
        Result_Class_Shadow_Put();
    }
    (((struct o0_uint *)0xC2A9864)->v) = (((((struct o0_int *)0xC2A9864)->v)) + 0x1);
    (((struct oC_float *)0xC2A96F8)->v) = 0.199999988f;
    return 0xC;
}
