/* Straight-line functions with calls and guards (batch gen_hh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Psg_Init(int, int, int);
int Psg_SetPosPtrSet(int, int);
int set_event(int, int);
void kyakuTaskStart(int a4, int a5, int a6);
struct o170_uint { char p[0x170]; unsigned int v; };
struct o174_uint { char p[0x174]; unsigned int v; };
struct o178_float { char p[0x178]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o180_ushort { char p[0x180]; unsigned short v; };
struct o194_float { char p[0x194]; float v; };
struct o198_int { char p[0x198]; int v; };
struct o198_uint { char p[0x198]; unsigned int v; };
struct o19C_uint { char p[0x19C]; unsigned int v; };
struct o0_int { int v; };
struct o8_int { char p[0x8]; int v; };



void kyakuTaskStart(int a4, int a5, int a6)
{
    int t0;
    int t3;
    int t4;
    int t33;
    int t36;

    t0 = set_event(0x248, 0xC024878);
    if (t0 != 0) {
        (((struct o174_uint *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = a5;
        t3 = (int)((int)((int)((int)(*(int *)0xC1794EC) / (int)0x258)) % (int)0x3);
        (((struct o19C_uint *)(t0))->v) = t3;
        t4 = *(signed char *)((((a4 + 0x18) + t3) + 0x0));
        (((struct o198_uint *)(t0))->v) = (((short)((((t4 << 1) + t4) << 2) << 1) + 0xC1794F0) + 0x18);
        Psg_Init((t0 + 0x1C), (*(int *)((((*(int *)(((*(int *)((t0 + 0x14))) + 0x4))) << 2) + 0xC08A9B8))), (*(int *)((((((struct o198_int *)(t0))->v)) + 0x0))));
        Psg_SetPosPtrSet((t0 + 0x1C), ((*(int *)((t0 + 0x14))) + 0x8));
        (((struct o178_float *)(t0))->v) = 0.699999988f;
        (((struct o17C_float *)(t0))->v) = 35.0f;
        (((struct o180_ushort *)(t0))->v) = 0x0;
        (((struct o194_float *)(t0))->v) = (((*(float *)((((t3 << 2) + ((*(int *)((t0 + 0x14))) + 0x1C)) + 0x0))) + -2000.0f) * 5.88235271e-05f);
        if (((((struct o194_float *)(t0))->v)) > 1.0f) {
            (((struct o194_float *)(t0))->v) = 1.0f;
        }
        if (0.0f > ((((struct o194_float *)(t0))->v))) {
            (((struct o194_float *)(t0))->v) = 0.0f;
        }
    }
    if (((((struct o0_int *)0xC1EE20C)->v)) == 2) {
        if ((((((struct o8_int *)0xC1EE20C)->v)) == 8) && ((int)a6 < (int)0x5)) {
            *(unsigned int *)(((a6 << 2) + 0xC1794D4)) = t0;
        }
        t33 = (((struct o8_int *)0xC1EE20C)->v);
        if (t33 == 8) {
            (((struct o194_float *)(t0))->v) = 1.0f;
        } else {
            if ((t33 == 12) || (t33 == 10)) {
                (((struct o194_float *)(t0))->v) = 0.0f;
            }
        }
        t36 = (((struct o8_int *)0xC1EE20C)->v);
        if ((t36 != 11) && (t36 != 8)) {
            (((struct o170_uint *)(t0))->v) = 0x0;
        } else {
            (((struct o170_uint *)(t0))->v) = (*(signed char *)((((*(int *)((t0 + 0x14))) + 0x18) + 0x0)));
        }
    } else {
        (((struct o170_uint *)(t0))->v) = 0x0;
    }
}
