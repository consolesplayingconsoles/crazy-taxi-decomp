/* Straight-line functions with calls and guards (batch gen_ox): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int courseStatusGet(int, int, int, int);
extern int getNearLineIndex();
int getSteering(int);
int cableCarDrive(int a4);

int cableCarDrive(int a4)
{
    int t0;
    int t1;
    int t3;
    int t4;
    int t5;
    int t6;
    float u10;
    float u14;
    float u18;
    int t22;
    int t26;
    int t29;
    int t30;
    int t32;
    int t34;
    int t35;
    int t51;
    int t93;
    float u97;
    int t98;
    float u107;
    float u105;
    float u103;
    float u101;
    float u99;
    float u108;
    float u113;
    float u114;
    float u115;
    int t130;
    float u153;
    int t172;
    float u182;
    int t155;
    int t159;
    int t23;
    int t24;
    float u169;
    int stk[12];

    t0 = *(int *)((a4 + 0x80));
    t1 = *(int *)0xC2A6690;
    t3 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x0));
    t4 = *(int *)(((*(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x4))) + 0x0));
    t5 = ((int (*)(int, int, int, int))(getNearLineIndex))(0x1, t3, t4, (0xD4 + a4));
    t6 = *(int *)((a4 + 0xD4));
    u10 = (*(float *)((a4 + 0xE0)));
    u10 = u10 + 0.199999988f * ((*(float *)(((((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3) + 0x0))) - (*(float *)(((0xE0 + a4) + 0x0))));
    *(float *)((a4 + 0xE0)) = u10;
    u14 = (*(float *)((a4 + 0xE4)));
    u14 = u14 + 0.199999988f * ((*(float *)(((0x4 + (((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3)) + 0x0))) - (*(float *)(((0xE4 + a4) + 0x0))));
    *(float *)((a4 + 0xE4)) = u14;
    u18 = (*(float *)((a4 + 0xE8)));
    u18 = u18 + 0.199999988f * ((*(float *)(((0x8 + (((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3)) + 0x0))) - (*(float *)(((0xE8 + a4) + 0x0))));
    *(float *)((a4 + 0xE8)) = u18;
    *(unsigned int *)((a4 + 0x88)) = 0x0;
    if ((int)(*(int *)((a4 + 0xD4))) >= (int)(t4 - 3)) {
        *(unsigned int *)((a4 + 0x88)) = 0x4;
        t22 = *(int *)((a4 + 0x80));
        if (((t22 == 0x120) && (t23 = *(int *)0xC2A4E44, (t23 & 0xF0) == 96)) || ((t22 == 0x121) && (t24 = *(int *)0xC2A4E44, (t24 & 0xF) == 6))) {
            t26 = *(int *)((a4 + 0x80));
            *(unsigned int *)(((0x80 + a4) + 0x0)) = (unsigned short)(*(short *)(((*(int *)((((((t26 << 1) + t26) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x4)));
            *(unsigned int *)((a4 + 0xD4)) = 0x0;
            t29 = *(int *)((a4 + 0x80));
            t30 = *(int *)0xC2A6690;
            t32 = *(int *)((((((t29 << 1) + t29) << 2) + t30) + 0x0));
            t34 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(0x1, t32, (*(int *)(((*(int *)((((((t29 << 1) + t29) << 2) + t30) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4), 0.199999988f);
            t35 = *(int *)((a4 + 0xD4));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE0 + a4)) = *(struct mv3 *)((((((t35 << 1) + t35) << 2) + t32) + 0x18)); }
        }
    } else {
        if ((int)(*(int *)((a4 + 0xD4))) > (int)(t4 - 8)) {
            *(unsigned int *)((a4 + 0x88)) = 0x2;
        } else {
            if (((*(int *)((a4 + 0x38))) & 0x5FFF) != 0) {
                *(unsigned int *)((a4 + 0x88)) = 0x5;
            } else {
                t51 = courseStatusGet((*(int *)((a4 + 0x80))), (*(int *)((a4 + 0xD4))), 0x0, 0xA);
                if ((0x1F & (t51 >> 1)) != 0) {
                    *(unsigned int *)((a4 + 0x88)) = 0x4;
                } else {
                    if ((t51 >> 1) != 0) {
                        *(unsigned int *)((a4 + 0x88)) = 0x3;
                    }
                }
            }
        }
    }
    *(unsigned int *)(((0xC0 + a4) + 0x0)) = ((*(int *)(((0xC0 + a4) + 0x0))) + (getSteering(a4)));
    t93 = *(int *)((a4 + 0x80));
    u97 = *(float *)((0xC0C3F04 + (((*(int *)(((*(int *)((((((t93 << 1) + t93) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0))) & 0xF) << 2)));
    t98 = *(int *)((a4 + 0x88));
    u107 = u97;
    if (t98 != 0) {
        u105 = 0.462963015f;
        if (t98 != 1) {
            u103 = 0.324074119f;
            if (t98 != 2) {
                u101 = 0.13888891f;
                if (t98 != 3) {
                    u99 = 0.0f;
                    if ((t98 != 4) && (t98 != 5)) {
                        u99 = u97;
                    }
                    u101 = u99;
                }
                u103 = u101;
            }
            u105 = u103;
        }
        u107 = u105;
    }
    *(float *)((a4 + 0xC8)) = 0.0f;
    u108 = *(float *)((a4 + 0xCC));
    if (u107 == 0.0f) {
        *(float *)((a4 + 0xC4)) = 0.0f;
        *(float *)((a4 + 0xC8)) = (*(float *)((a4 + 0xD0)));
    } else {
        if (!((*(float *)((a4 + 0xCC))) > u107)) {
            if (((*(float *)((a4 + 0xD0))) * (1.0f + 1.0f)) > (*(float *)((a4 + 0xC4)))) {
                u113 = *(float *)(((0xD0 + a4) + 0x0));
                u114 = *(float *)((a4 + 0xC4));
                u115 = 0.000999999931f;
                if (0.000999999931f > (u113 * 0.0299999993f)) {
                    u115 = (u113 * 0.0299999993f);
                }
                *(float *)((a4 + 0xC4)) = (u114 + u115);
            }
        } else {
            t130 = 0;
            if (0.231481507f > _builtin_fabsf((u107 - u108))) {
                *(float *)((a4 + 0xC4)) = ((*(float *)((a4 + 0xC4))) * 0.5f);
                t130 = (1);
            } else {
                *(float *)((a4 + 0xC4)) = 0.0f;
                if (_builtin_fabsf((u107 - u108)) > 0.462963015f) {
                    *(float *)((a4 + 0xC8)) = ((*(float *)((a4 + 0xD0))) * 0.5f);
                }
                t130 = ((_builtin_fabsf((u107 - u108)) > 0.462963015f));
            }
        }
        if ((*(float *)((a4 + 0xC4))) > ((*(float *)((a4 + 0xD0))) * (1.0f + 1.0f))) {
            *(float *)((a4 + 0xC4)) = (*(float *)((a4 + 0xD0)));
        }
    }
    u153 = *(float *)((a4 + 0x2C));
    t172 = 0x2C;
    u182 = _builtin_fabsf((u107 - u108));
    if (800.0f > u153) {
        t155 = *(int *)0xC1EE330;
        t159 = t155;
        if ((t155 & 127) == 0) {
            t159 = (Sound_Request((*(int *)(((((int)((*(int *)0xC1EE330) & 0x180) >> 7) << 2) + 0xC0A37A8))), 0x2));
        } else {
            u169 = _builtin_fabsf((u107 - u108));
        }
        t172 = t159;
        u182 = u169;
    }
    return t172;
}
