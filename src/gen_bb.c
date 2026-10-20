/* Straight-line functions with calls and guards (batch gen_bb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern float _builtin_sqrtf(float);
int nlArcTan(float);
int FUN_0c075930(float f4);
int FUN_0c022102(int a4);

int FUN_0c075930(float f4)
{
    int t0;

    if ((f4 < 0.0f ? -f4 : f4) > 1.0f) {
        return 0x0;
    }
    if (_builtin_sqrtf((1.0f - (f4 * f4))) != 0.0f) {
        return nlArcTan((f4 / _builtin_sqrtf((1.0f - (f4 * f4)))));
    }
    t0 = 0xC000;
    if (f4 > 0.0f) {
        t0 = 0x4000;
    }
    return t0;
}

int FUN_0c022102(int a4)
{
    int t0;
    int t1;
    float u2;
    float u3;
    float u6;
    float u11;

    t0 = *(int *)((a4 + 0x5C));
    t1 = *(int *)0xC179488;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    *(float *)(((0x1A0 + a4) + 0x24)) = 0.0f;
                    *(float *)((((0x1A0 + a4) + 0x84) + 0x24)) = 0.0f;
                    *(float *)(((0x108 + (0x1A0 + a4)) + 0x24)) = 0.5f;
                    *(float *)(((0x18C + (0x1A0 + a4)) + 0x24)) = 0.5f;
                } else {
                    if ((int)t1 < (int)0x4) {
                        *(float *)(((0x24 + (0x1A0 + a4)) + 0x0)) = 0.224999994f;
                        *(float *)((0x24 + ((0x1A0 + a4) + 0x84))) = 0.224999994f;
                        u2 = *(float *)0xC022308;
                        u6 = u2;
                    } else {
                        *(float *)((0x24 + (0x1A0 + a4))) = 0.199999988f;
                        *(float *)((((0x1A0 + a4) + 0x84) + 0x24)) = 0.199999988f;
                        u3 = *(float *)0xC022310;
                        u6 = u3;
                    }
                    *(float *)(((0x108 + (0x1A0 + a4)) + 0x24)) = u6;
                    *(float *)(((0x18C + (0x1A0 + a4)) + 0x24)) = u6;
                }
            } else {
                if ((int)t1 < (int)0x4) {
                    *(float *)(((0x24 + (0x1A0 + a4)) + 0x0)) = 0.114999995f;
                    *(float *)((0x24 + ((0x1A0 + a4) + 0x84))) = 0.114999995f;
                    u11 = 0.38499999f;
                } else {
                    *(float *)((0x24 + (0x1A0 + a4))) = 0.0799999982f;
                    *(float *)((((0x1A0 + a4) + 0x84) + 0x24)) = 0.0799999982f;
                    u11 = 0.419999987f;
                }
                *(float *)(((0x108 + (0x1A0 + a4)) + 0x24)) = u11;
                *(float *)(((0x18C + (0x1A0 + a4)) + 0x24)) = u11;
            }
        } else {
            *(float *)(((0x1A0 + a4) + 0x24)) = 0.5f;
            *(float *)((((0x1A0 + a4) + 0x84) + 0x24)) = 0.5f;
            *(float *)(((0x108 + (0x1A0 + a4)) + 0x24)) = 0.0f;
            *(float *)(((0x18C + (0x1A0 + a4)) + 0x24)) = 0.0f;
        }
    } else {
        *(float *)(((0x1A0 + a4) + 0x24)) = 0.0f;
        *(float *)((((0x1A0 + a4) + 0x84) + 0x24)) = 0.0f;
        *(float *)(((0x108 + (0x1A0 + a4)) + 0x24)) = 0.5f;
        *(float *)(((0x18C + (0x1A0 + a4)) + 0x24)) = 0.5f;
    }
    return 0x24;
}

