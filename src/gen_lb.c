/* Straight-line functions with calls and guards (batch gen_lb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int courseStatusGet(int, int, int, int);
extern int getNearLineIndex();
int getSteering(int, int);
int cableCarDrive(int a4);
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
struct oC4_float { char p[0xC4]; float v; };
struct oC8_float { char p[0xC8]; float v; };
struct oCC_float { char p[0xCC]; float v; };
struct oD0_float { char p[0xD0]; float v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD4_uint { char p[0xD4]; unsigned int v; };
struct oE0_float { char p[0xE0]; float v; };
struct oE4_float { char p[0xE4]; float v; };
struct oE8_float { char p[0xE8]; float v; };


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
    int t23;
    int t24;
    float u169;
    int stk[12];

    t0 = (((struct o80_int *)(a4))->v);
    t1 = *(int *)0xC2A6690;
    t3 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x0));
    t4 = *(int *)(((*(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x4))) + 0x0));
    t5 = ((int (*)(int, int, int, int, int))(getNearLineIndex))(0x1, t3, t4, (0xD4 + a4), (0x8C + a4));
    t6 = (((struct oD4_int *)(a4))->v);
    u10 = ((((struct oE0_float *)(a4))->v));
    u10 = u10 + 0.199999988f * ((*(float *)(((((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3) + 0x0))) - ((((struct oE0_float *)(a4))->v)));
    (((struct oE0_float *)(a4))->v) = u10;
    u14 = ((((struct oE4_float *)(a4))->v));
    u14 = u14 + 0.199999988f * (((((struct o4_float *)((((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3)))->v)) - ((((struct oE4_float *)(a4))->v)));
    (((struct oE4_float *)(a4))->v) = u14;
    u18 = ((((struct oE8_float *)(a4))->v));
    u18 = u18 + 0.199999988f * (((((struct o8_float *)((((((t6 + 0x2) << 1) + (t6 + 0x2)) << 2) + t3)))->v)) - ((((struct oE8_float *)(a4))->v)));
    (((struct oE8_float *)(a4))->v) = u18;
    (((struct o88_uint *)(a4))->v) = 0x0;
    if ((int)((((struct oD4_int *)(a4))->v)) >= (int)(t4 - 3)) {
        (((struct o88_uint *)(a4))->v) = 0x4;
        t22 = (((struct o80_int *)(a4))->v);
        if (((t22 == 0x120) && (t23 = *(int *)0xC2A4E44, (t23 & 0xF0) == 96)) || ((t22 == 0x121) && (t24 = *(int *)0xC2A4E44, (t24 & 0xF) == 6))) {
            t26 = (((struct o80_int *)(a4))->v);
            (((struct o80_uint *)(a4))->v) = (unsigned short)(*(short *)(((*(int *)((((((t26 << 1) + t26) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x4)));
            (((struct oD4_uint *)(a4))->v) = 0x0;
            t29 = (((struct o80_int *)(a4))->v);
            t30 = *(int *)0xC2A6690;
            t32 = *(int *)((((((t29 << 1) + t29) << 2) + t30) + 0x0));
            t34 = ((int (*)(int, int, int, int, int, float))(getNearLineIndex))(0x1, t32, (*(int *)(((*(int *)((((((t29 << 1) + t29) << 2) + t30) + 0x4))) + 0x0))), (0xD4 + a4), (0x8C + a4), 0.199999988f);
            t35 = (((struct oD4_int *)(a4))->v);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xE0 + a4)) = *(struct mv3 *)((((((t35 << 1) + t35) << 2) + t32) + 0x18)); }
        }
    } else {
        if ((int)((((struct oD4_int *)(a4))->v)) > (int)(t4 - 8)) {
            (((struct o88_uint *)(a4))->v) = 0x2;
        } else {
            if (((*(int *)((a4 + 0x38))) & 0x5FFF) != 0) {
                (((struct o88_uint *)(a4))->v) = 0x5;
            } else {
                t51 = courseStatusGet(((((struct o80_int *)(a4))->v)), ((((struct oD4_int *)(a4))->v)), 0x0, 0xA);
                if ((0x1F & (t51 >> 1)) != 0) {
                    (((struct o88_uint *)(a4))->v) = 0x4;
                } else {
                    if ((t51 >> 1) != 0) {
                        (((struct o88_uint *)(a4))->v) = 0x3;
                    }
                }
            }
        }
    }
    (((struct oC0_uint *)(a4))->v) = (((((struct oC0_int *)(a4))->v)) + (getSteering(a4, ((int)stk + 8))));
    t93 = (((struct o80_int *)(a4))->v);
    u97 = *(float *)((0xC0C3F04 + (((*(int *)(((*(int *)((((((t93 << 1) + t93) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0))) & 0xF) << 2)));
    t98 = (((struct o88_int *)(a4))->v);
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
    (((struct oC8_float *)(a4))->v) = 0.0f;
    u108 = (((struct oCC_float *)(a4))->v);
    if (u107 == 0.0f) {
        (((struct oC4_float *)(a4))->v) = 0.0f;
        (((struct oC8_float *)(a4))->v) = ((((struct oD0_float *)(a4))->v));
    } else {
        if (!(((((struct oCC_float *)(a4))->v)) > u107)) {
            if ((((((struct oD0_float *)(a4))->v)) * (1.0f + 1.0f)) > ((((struct oC4_float *)(a4))->v))) {
                u113 = (((struct oD0_float *)(a4))->v);
                u114 = (((struct oC4_float *)(a4))->v);
                u115 = 0.000999999931f;
                if (0.000999999931f > (u113 * 0.0299999993f)) {
                    u115 = (u113 * 0.0299999993f);
                }
                (((struct oC4_float *)(a4))->v) = (u114 + u115);
            }
        } else {
            t130 = 0;
            if (0.231481507f > _builtin_fabsf((u107 - u108))) {
                (((struct oC4_float *)(a4))->v) = (((((struct oC4_float *)(a4))->v)) * 0.5f);
                t130 = (1);
            } else {
                (((struct oC4_float *)(a4))->v) = 0.0f;
                if (_builtin_fabsf((u107 - u108)) > 0.462963015f) {
                    (((struct oC8_float *)(a4))->v) = (((((struct oD0_float *)(a4))->v)) * 0.5f);
                }
                t130 = ((_builtin_fabsf((u107 - u108)) > 0.462963015f));
            }
        }
        if (((((struct oC4_float *)(a4))->v)) > (((((struct oD0_float *)(a4))->v)) * (1.0f + 1.0f))) {
            (((struct oC4_float *)(a4))->v) = ((((struct oD0_float *)(a4))->v));
        }
    }
    u153 = (((struct o2C_float *)(a4))->v);
    t172 = 0x2C;
    u182 = _builtin_fabsf((u107 - u108));
    if (800.0f > u153) {
        t155 = *(int *)0xC1EE330;
        t172 = t155;
        if ((t155 & 127) == 0) {
            t172 = (Sound_Request((*(int *)(((((int)((*(int *)0xC1EE330) & 0x180) >> 7) << 2) + 0xC0A37A8))), 0x2));
        } else {
            u169 = _builtin_fabsf((u107 - u108));
        }
        u182 = u169;
    }
    return t172;
}
