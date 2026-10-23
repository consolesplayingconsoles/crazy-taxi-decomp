/* Straight-line functions with calls and guards (batch gen_aef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlScalor(int, float);
int InitSetObject(float f4);

int InitSetObject(float f4)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    float u11;
    int t18;
    int t30;
    int t31;
    int t32;
    int t43;
    int t45;
    int t1;
    int t3;
    int t7;
    float u9;
    float u10;
    float u12;
    int t25;
    int t27;
    int t71;
    int t64;
    int t59;
    int t54;
    int t50;
    int t46;
    int stk[13];

    t0 = 0xC038498;
    t2 = 0x0;
    t4 = 0xC0EDBC0;
    t5 = 0xC0EDBC0;
    t6 = 0xC0EDBC0;
    u11 = f4;
    for (;;) {
        if ((int)t2 >= (int)0x1C) {
            break;
        }
        t1 = (*(int *)((t5 + 0x0)));
        u12 = 0.0f;
        *(unsigned int *)(((int)stk + 4)) = t1;
        t7 = (*(int *)((t5 + 0x4)));
        t3 = 0x0;
        for (;;) {
            t1 = (*(int *)((t4 + 0x8)));
            if ((int)t3 >= (int)t1) {
                break;
            }
            t18 = *(int *)(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = (t18 + 0xC);
            t0 = 0x4;
            u10 = 0.0f;
            u9 = (*(float *)((t7 + t0)));
            u11 = ((nlScalor(((t18 + 0xC) - 12), u11)));
            if (u9 > u10) {
                u9 = (*(float *)((t7 + t0)));
                u11 = (u11 + u9);
            }
            t7 = (t7 + 0x8);
            if (u11 > u12) {
                u12 = u11;
            }
            t3 = (t3 + 0x1);
        }
        u10 = u12;
        u10 = (u10 * u12);
        u9 = 2.5f;
        t0 = 0x1C;
        *(float *)((t6 + t0)) = u12;
        t0 = 0x20;
        t4 = (t4 + 0x24);
        u9 = (u9 / u10);
        t5 = (t5 + 0x24);
        t2 = (t2 + 0x1);
        *(float *)((t6 + t0)) = u9;
        t6 = (t6 + 0x24);
    }
    if (((*(int *)0xC1EE20C) == 2) && (t25 = *(int *)0xC1EE214, t25 != 9)) {
        *(float *)0xC2757E8 = 3.40282347e+38f;
        *(float *)0xC2757EC = 3.40282347e+38f;
        t27 = 0xC1EE214;
    } else {
        *(float *)0xC2757E8 = 1800.0f;
        *(float *)0xC2757EC = 2000.0f;
        t27 = t1;
    }
    t30 = t27;
    t31 = 0x0;
    t32 = 0x0;
    for (;;) {
        if ((int)t32 >= (int)0x3F) {
            break;
        }
        t30 = (*(int *)0xC0EDBB8);
        t32 = (t32 + 0x1);
        t30 = (t30 + t31);
        t31 = (t31 + 0x20);
        *(unsigned int *)((t30 + 0x1C)) = 0x0;
    }
    if ((*(int *)0xC1EE20C) == 0) {
        *(unsigned int *)((((*(int *)0xC0EDBB8) + 0x300) + 0x14)) = 0x0;
        *(unsigned short *)(((0x300 + (*(int *)0xC0EDBB8)) + 0x10)) = 0x0;
    }
    t43 = *(int *)0xC1EE20C;
    if (t43 == 2) {
        t45 = *(int *)0xC1EE214;
        if (t45 == 3) {
            *(unsigned int *)0xC2757F0 = 0x0;
            *(unsigned int *)0xC2757F4 = 0x1;
            t64 = t45;
        } else {
            if (t45 == 1) {
                *(unsigned int *)0xC2757F0 = 0x1;
                *(unsigned int *)0xC2757F4 = 0x3;
                t59 = t45;
            } else {
                if (t45 == 8) {
                    *(unsigned int *)0xC2757F0 = 0x3;
                    *(unsigned int *)0xC2757F4 = 0x4;
                    t54 = t45;
                } else {
                    if (t45 == 9) {
                        *(unsigned int *)0xC2757F0 = 0x4;
                        *(unsigned int *)0xC2757F4 = 0xA;
                        t50 = t45;
                    } else {
                        if (t45 == 14) {
                            *(unsigned int *)0xC2757F0 = 0xA;
                            *(unsigned int *)0xC2757F4 = 0x18;
                            t46 = t45;
                        } else {
                            *(unsigned int *)0xC2757F0 = 0x18;
                            *(unsigned int *)0xC2757F4 = 0x3A;
                            t46 = 0x18;
                        }
                        t50 = t46;
                    }
                    t54 = t50;
                }
                t59 = t54;
            }
            t64 = t59;
        }
        t71 = t64;
    } else {
        if (t43 == 1) {
            *(unsigned int *)0xC2757F0 = 0x0;
            *(unsigned int *)0xC2757F4 = 0x3F;
        } else {
            *(unsigned int *)0xC2757F0 = 0x0;
            *(unsigned int *)0xC2757F4 = 0x3A;
        }
        t71 = t43;
    }
    return t71;
}
