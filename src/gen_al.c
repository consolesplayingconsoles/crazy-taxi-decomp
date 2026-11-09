/* Straight-line functions with calls and guards (batch gen_al): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlPow(float, float);
float Init_Pass_Fare(void);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };


float Init_Pass_Fare(void)
{
    float t0;
    int t1;
    int t2;
    int t4;
    int t14;

    (((struct o0_uint *)0xC2A8E9C)->v) = 0x0;
    (((struct o4_float *)0xC2A8E9C)->v) = -2.0f;
    (((struct o8_uint *)0xC2A8E9C)->v) = 0x0;
    (((struct oC_uint *)0xC2A8E9C)->v) = 0x0;
    (((struct o10_uint *)0xC2A8E9C)->v) = 0x0;
    (((struct o18_uint *)0xC2A8E9C)->v) = 0xFFFFFFFB;
    t0 = nlPow(-5.0f, (1.0f + 1.0f));
    (((struct o1C_float *)0xC2A8E9C)->v) = t0;
    (((struct o10_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o14_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o24_uint *)0xC2A7E90)->v) = 0x0;
    (((struct o14_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o18_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o1C_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o28_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o20_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o30_uint *)0xC2A7E90)->v) = 0x6;
    (((struct o0_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o4_float *)0xC2A7E90)->v) = 0.0f;
    (((struct o8_float *)0xC2A7E90)->v) = 0.25f;
    (((struct oC_float *)0xC2A7E90)->v) = 1.0f;
    (((struct o10_float *)0xC2A7E90)->v) = 1.0f;
    t1 = 0x0;
    for (;;) {
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x18)) = 0.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x1C)) = 0.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x20)) = 1.0f;
        *(float *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x24)) = 0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x18)) = (-1.0f);
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x1C)) = -0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x20)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x24)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x18)) = (-1.0f);
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x1C)) = -0.5f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x20)) = 0.0f;
        *(float *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x24)) = 0.0f;
        *(unsigned int *)(((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x34)) = 0xE;
        *(unsigned int *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x280) + 0x34)) = 0x6;
        *(unsigned int *)((((0xC2A810C + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x500) + 0x34)) = 0x6;
        t2 = 0x0;
        for (;;) {
            *(unsigned int *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x28)) = 0x0;
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x4)) = 0.0f;
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x8)) = 240.0f;
            if (t2 == 1) {
                *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0xC)) = 0.25f;
            } else {
                *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0xC)) = 0.279999971f;
            }
            *(float *)(((((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2)) + 0x10)) = 1.0f;
            t4 = (((short)((((((t2 << 2) + t2) << 2) << 2) << 2) << 1) + 0xC2A810C) + (short)((((t1 << 2) + t1) << 2) << 2));
            t2 = (t2 + 0x1);
            *(float *)((t4 + 0x14)) = 0.5f;
            *(unsigned int *)((t4 + 0x28)) = 0x0;
            *(float *)((t4 + 0x2C)) = 1.0f;
            if ((int)t2 >= (int)0x3) {
                break;
            }
        }
        *(unsigned int *)(((t1 << 2) + 0xC2A8EDC)) = 0x0;
        if ((t1 != 7) && ((t1 != 6) && ((t1 != 5) && (t1 != 4)))) {
            if (t1 == 3) {
                *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xB;
            } else {
                *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0x9;
            }
        } else {
            *(unsigned int *)((0xC2A8EFC + (t1 << 2))) = 0xA;
        }
        if ((t1 != 7) && ((t1 != 6) && ((t1 != 5) && (t1 != 4)))) {
            if (t1 == 3) {
                *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xB;
            } else {
                *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0x9;
            }
        } else {
            *(unsigned int *)((((t1 << 2) + 0xC2A8EFC) + 0x20)) = 0xA;
        }
        *(unsigned int *)((((0xC2A8EFC + (t1 << 2)) + 0x40) + 0x0)) = 0x8;
        t14 = (t1 << 2);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t14 + 0xC2A8EBC)) = 0xA;
        if ((int)t1 < (int)0x8) continue;
        break;
    }
    (((struct o14_uint *)0xC2A8E9C)->v) = 0x0;
    (((struct o0_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o4_uint *)0xC2A8F5C)->v) = 0x0;
    (((struct o8_uint *)0xC2A8F5C)->v) = 0x0;
    return t0;
}
