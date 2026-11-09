/* Straight-line functions with calls and guards (batch gen_apv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlPow(float, float);
void hudUpdateFareState(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


void hudUpdateFareState(void)
{
    int t0;
    float u4;
    int t15;
    int t34;
    float t44;
    float u55;

    t0 = (((struct o1C_int *)0xC2A8E94)->v);
    if (t0 != 1) {
        if (t0 != 4) {
            if (t0 == 6) {
                if (((((struct o4_int *)0xC2A8E94)->v)) == 0) {
                    (((struct oC_float *)0xC2A8E94)->v) = 1.0f;
                    u4 = (((struct o24_float *)0xC2A8E94)->v);
                    (((struct o24_float *)0xC2A8E94)->v) = (u4 + 4.0f);
                    if (!(36.0f > (u4 + 4.0f))) {
                        (((struct o24_float *)0xC2A8E94)->v) = 36.0f;
                        (((struct o14_uint *)0xC2A8E94)->v) = 0x0;
                        (((struct o4_uint *)0xC2A8CB4)->v) = 0x0;
                        (((struct o1C_uint *)0xC2A8E94)->v) = 0x9;
                    }
                }
                ((int (*)(int, float, float))(0xC0542E4))(0xC2A8EA0, 4.0f, 1.0f);
    return;
            }
            if (t0 == 8) {
                t15 = *(int *)0xC2A8D74;
                *(unsigned int *)0xC2A8D74 = (t15 + 0x1);
                if ((t15 + 0x1) == 6) {
                    *(unsigned int *)0xC2A8D74 = 0xFFFFFFFA;
                    Sound_Request(0x905A9, 0x0);
                    (((struct o4_uint *)0xC2A8CB4)->v) = 0x0;
                    (((struct o1C_uint *)0xC2A8E94)->v) = 0x9;
                }
            }
            return;
        }
        if (((((struct o20_int *)0xC2A8E94)->v)) == 0) {
            t34 = *(int *)0xC130B04;
            *(unsigned int *)0xC130B04 = (t34 + 0x1);
            if ((t34 + 0x1) == 8) {
                (((struct o20_uint *)0xC2A8E94)->v) = (((((struct o20_int *)0xC2A8E94)->v)) + 0x1);
                *(unsigned int *)0xC130B04 = 0x0;
            }
        } else {
            (((struct o20_uint *)0xC2A8E94)->v) = (((((struct o20_int *)0xC2A8E94)->v)) + 0x1);
        }
        t44 = nlPow((float)((((struct o20_int *)0xC2A8E94)->v)), (1.0f + 1.0f));
        (((struct o24_float *)0xC2A8E94)->v) = (t44 * (1.0f + 1.0f));
        if (!(36.0f > (t44 * (1.0f + 1.0f)))) {
            (((struct o20_uint *)0xC2A8E94)->v) = 0x0;
            (((struct o24_float *)0xC2A8E94)->v) = 36.0f;
            Sound_Request(0x905A9, 0x0);
            (((struct o14_uint *)0xC2A8E94)->v) = 0x0;
            (((struct o1C_uint *)0xC2A8E94)->v) = 0x8;
            *(unsigned int *)(((*(int *)0xC2A8C5C) + 0x0)) = ((((struct o0_int *)0xC2A8E94)->v));
        }
        return;
    }
    (((struct oC_float *)0xC2A8E94)->v) = 1.0f;
    u55 = (((struct o24_float *)0xC2A8E94)->v);
    (((struct o24_float *)0xC2A8E94)->v) = (u55 - 4.0f);
    if ((u55 - 4.0f) > 0.0f) {
    } else {
        Sound_Request(0x705A9, 0x0);
        (((struct o24_float *)0xC2A8E94)->v) = 0.0f;
        (((struct o1C_uint *)0xC2A8E94)->v) = 0x2;
        (((struct o18_uint *)0xC2A8E94)->v) = 0x0;
        (((struct o0_uint *)0xC2A8CB4)->v) = 0x0;
    }
}
