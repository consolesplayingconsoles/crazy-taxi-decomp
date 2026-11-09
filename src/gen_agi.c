/* Straight-line functions with calls and guards (batch gen_agi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlFloor(float);
float psgUpdatePartTracks(int a4, float f4);
struct o124_int { char p[0x124]; int v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o128_int { char p[0x128]; int v; };
struct o128_uint { char p[0x128]; unsigned int v; };
struct o148_int { char p[0x148]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };


float psgUpdatePartTracks(int a4, float f4)
{
    float u0;
    int t2;
    int t4;
    float u6;
    float t39;
    int t52;
    int t58;
    float u34;
    float u23;
    float u12;

    u0 = (((struct o38_float *)(a4))->v);
    t2 = (int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 9) & 0x3);
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
            } else {
                t4 = *(int *)(((*(int *)((a4 + 0x34))) + 0x0));
                u6 = (float)t4;
                if (0.0f > (float)t4) {
                    u6 = ((float)t4 + 4.2949673e+09f);
                }
                u12 = u6;
            }
            u23 = u12;
        } else {
            u23 = (float)(unsigned short)(*(short *)(((*(int *)((a4 + 0x34))) + 0x0)));
        }
        u34 = u23;
    } else {
        u34 = (float)(*(int *)(((*(int *)((a4 + 0x34))) + 0x0)));
    }
    t39 = nlFloor((u0 / u34));
    if ((u0 - (t39 * u34)) > ((((struct o4_float *)(((((struct o124_int *)(a4))->v))))->v))) {
        (((struct o124_uint *)(a4))->v) = (((((struct o124_int *)(a4))->v)) + 0x8);
    }
    if ((u0 - (t39 * u34)) > ((((struct o4_float *)(((((struct o128_int *)(a4))->v))))->v))) {
        (((struct o128_uint *)(a4))->v) = (((((struct o128_int *)(a4))->v)) + 0x8);
    }
    t52 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((*(int *)((0xC1331B0 + (t52 << 2)))) + 0x8)) = (*(int *)((((*(int *)((0xC1337CC + (t52 << 2)))) + (((*(int *)((((((struct o124_int *)(a4))->v)) + 0x0))) << 1) << 2)) + 0x0)));
    t58 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((*(int *)(((0xC1331B0 + (t58 << 2)) + 0x0))) + 0x14)) = (*(int *)((((*(int *)((0xC1337CC + (t58 << 2)))) + (((*(int *)((((((struct o128_int *)(a4))->v)) + 0x0))) << 1) << 2)) + 0x4)));
    return (t39 * u34);
}
