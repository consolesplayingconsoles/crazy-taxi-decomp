/* Straight-line functions with calls and guards (batch gen_yg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Result_Class_Shadow_Put(void);
int Sound_Request(int, int);
int nlSprPut(int, int);
int Result_Awesome_Put(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int Result_Awesome_Put(void)
{
    int t0;
    int t1;
    int t18;
    int t36;

    t0 = 0xC05AAA4;
    t1 = 0x0;
    for (;;) {
        if ((int)((((struct o0_int *)0xC2A985C)->v)) > (int)(((t1 << 2) << 1) - t1)) {
            if ((int)((((struct o0_int *)0xC2A985C)->v)) < (int)0x31) {
                t0 = 0x7;
                t0 = ((int)((int)((((struct o0_int *)0xC2A985C)->v)) % (int)t0));
                if (t0 == 0) {
                    t0 = (Sound_Request(0xA00A9, 0x0));
                    (((struct o14_uint *)0xC2A985C)->v) = (((((struct o14_int *)0xC2A985C)->v)) + 0x1);
                    (((struct oC_uint *)0xC2A9748)->v) = 0x1;
                    (((struct o8_ushort *)0xC2A9748)->v) = 0x0;
                    (((struct o4_float *)0xC2A9748)->v) = 0.5f;
                    (((struct o10_float *)0xC2A9748)->v) = 0.0f;
                }
            }
            t0 = 0xC131010;
            (((struct o0_uint *)0xC2A96F8)->v) = (*(int *)(((t1 << 2) + t0)));
            if ((int)t1 > (int)0x3) {
                t0 = 0x4;
                *(float *)((0xC2A96F8 + t0)) = (float)(((((((t1 - 2) << 2) << 2) << 1) - (((t1 - 3) << 1) + (t1 - 3))) + (t1 << 1)) + 0x8E);
            } else {
                t0 = t1;
                t18 = 0x9C;
                if (t0 == 3) {
                    t18 = 0x92;
                }
                t0 = 0x4;
                *(float *)((0xC2A96F8 + t0)) = (float)((((((t1 - 2) << 2) << 2) << 1) + (t1 << 1)) + t18);
            }
            t0 = 0x8;
            (((struct o34_uint *)0xC2A96F8)->v) = 0x200A;
            *(float *)((0xC2A96F8 + t0)) = (float)(((((struct o0_int *)0xC2A9748)->v)) + 0x18C);
            t0 = 0xC;
            *(float *)((0xC2A96F8 + t0)) = 0.149999991f;
            t0 = 0x10;
            *(float *)((0xC2A96F8 + t0)) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            t0 = 0x14;
            *(float *)((0xC2A96F8 + t0)) = (((((struct o10_float *)0xC2A9748)->v)) + 1.0f);
            t0 = 0x1C;
            *(float *)((0xC2A96F8 + t0)) = 0.0f;
            t0 = 0x24;
            *(float *)((0xC2A96F8 + t0)) = 1.0f;
            (((struct o28_uint *)0xC2A96F8)->v) = 0x0;
            t0 = (nlSprPut(0xC2A96F8, (t1 << 1)));
        }
        t1 = (t1 + 0x1);
        if ((int)t1 < (int)0x7) continue;
        break;
    }
    t36 = (((struct o0_int *)0xC2A985C)->v);
    if ((int)t36 >= (int)0x31) {
        if (t36 == 49) {
            (((struct o18_uint *)0xC2A985C)->v) = (((((struct o18_int *)0xC2A985C)->v)) + 0x1);
            Sound_Request(0xE00A9, 0x0);
            (((struct oC_uint *)0xC2A9748)->v) = 0x1;
            (((struct o8_ushort *)0xC2A9748)->v) = 0x0;
            (((struct o4_float *)0xC2A9748)->v) = 0.5f;
            (((struct o10_float *)0xC2A9748)->v) = 0.0f;
        }
        Result_Class_Shadow_Put();
    }
    (((struct oC_float *)0xC2A96F8)->v) = 0.19999999f;
    (((struct o0_uint *)0xC2A985C)->v) = (((((struct o0_int *)0xC2A985C)->v)) + 0x1);
    return 0xC;
}
