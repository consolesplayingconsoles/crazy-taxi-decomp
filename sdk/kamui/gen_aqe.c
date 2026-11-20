/* Straight-line functions with calls and guards (batch gen_aqe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiAddSysConfigFlag(int);
int kmiCopyToPVRMemory(int, int, int);
int kmiFBalloc(int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetSysConfigFlag(void);
int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };


int kmCreateFrameBufferSurface(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t3;
    int t4;
    int t24;
    int t26;
    int t60;
    int t33;
    int t36;
    int t72;
    int stk[654];

    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = (((struct o4_int *)0xC175D48)->v);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = ((((struct o0_int *)0xC175D48)->v));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t0;
    t3 = (((struct oC_int *)0xC175D48)->v);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = ((((struct o8_int *)0xC175D48)->v));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0xC)) = t3;
    t4 = (((struct o14_int *)0xC175D48)->v);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x10)) = ((((struct o10_int *)0xC175D48)->v));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x14)) = t4;
    *(unsigned int *)((((((*(int *)0xC17826C) << 2) << 2) + 0xC2B8C5C) + 0x0)) = a4;
    *(unsigned int *)((((((*(int *)0xC17826C) << 2) << 2) + 0xC2B8C5C) + 0x4)) = a5;
    *(unsigned int *)((((((*(int *)0xC17826C) << 2) << 2) + 0xC2B8C5C) + 0x8)) = (*(int *)(((int)stk + 4)));
    (((struct o0_uint *)0xC2B8C58)->v) = a7;
    *(unsigned int *)((((((*(int *)0xC17826C) << 2) << 2) + 0xC2B8C5C) + 0xC)) = a8;
    *(unsigned int *)0xC17826C = (((*(int *)0xC17826C) + 0x1) & 0x1);
    (((struct o10_uint *)0xC2EA6A4)->v) = a7;
    if (((((struct o3C_int *)0xC2B8C58)->v)) != 0) {
        kmiGetDisplayData(0xFF, a7, (*(int *)(((int)stk + 4))));
    }
    t24 = kmiGetSysConfigFlag();
    if (t24 == 0x80000000) {
        t26 = kmiFBalloc((*(int *)0xC2B8CA0), a4);
        t60 = t26;
        if (t26 == 0) {
            *(unsigned int *)((a4 + 0x0)) = 0x1;
            *(unsigned int *)((a4 + 0x4)) = (*(int *)((((((((struct o0_int *)0xC2EA6A4)->v)) << 2) + (((int)stk + 4) + 0x4)) + 0x0)));
            *(unsigned int *)((a4 + 0x8)) = ((((struct o0_int *)0xC2EA6A4)->v));
            *(unsigned int *)((a4 + 0xC)) = ((((struct o30_int *)0xC2B8C58)->v));
            *(unsigned int *)((a4 + 0x10)) = ((((struct o34_int *)0xC2B8C58)->v));
            if (a7 == 1) {
                *(unsigned int *)((a4 + 0x18)) = 0x1;
            } else {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
            }
            if (a8 == 1) {
                t33 = (((int)stk + 4) + 0x1C);
                for (;;) {
                    if ((unsigned int)t33 >= (unsigned int)((((int)stk + 4) + 0x1C) + 0xA00)) {
                        break;
                    }
                    *(unsigned int *)((t33 + 0x0)) = 0x0;
                    t33 = (t33 + 0x4);
                }
                if ((unsigned int)0x0 < (unsigned int)(*(int *)((a4 + 0x14)))) {
                    t36 = 0x0;
                    for (;;) {
                        kmiCopyToPVRMemory(((*(int *)((a4 + 0x1C))) + t36), (((int)stk + 4) + 0x1C), 0xA00);
                        t36 = (t36 + 0xA00);
                        if ((unsigned int)t36 >= (unsigned int)(*(int *)((a4 + 0x14)))) {
                            break;
                        }
                    }
                }
            }
            t60 = 0x0;
        }
        t72 = t60;
    } else {
        kmiAddSysConfigFlag(0x200);
        t72 = 0x0;
    }
    return t72;
}
