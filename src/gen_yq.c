/* Straight-line functions with calls and guards (batch gen_yq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Crush(int a4, int a5);
struct o148_int { char p[0x148]; int v; };
struct o0_uint { unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int Chat_Crush(int a4, int a5)
{
    int t0;
    int t2;
    int t4;
    int t25;
    int t39;
    int t3;
    int stk[68];

    t0 = 0xC0D4028;
    t2 = (0xA0 + ((int)stk + 0));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D4028 + 100)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)((0x8C + ((int)stk + 0))) = *(struct mv5 *)(0xC0D408C); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((((int)stk + 0) + 0x50)) = *(struct mv15 *)(0xC0D40A0); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)((((int)stk + 0) + 0x28)) = *(struct mv10 *)(0xC0D40DC); }
    { struct mv10 { int w[10]; }; *(struct mv10 *)(((int)stk + 0)) = *(struct mv10 *)(0xC0D4104); }
    t4 = *(int *)0xC13EB90;
    if (a5 != 0) {
        if (a5 != 1) {
            if (a5 != 2) {
            } else {
                (((struct o0_uint *)0xC13EC68)->v) = (*(int *)((((((((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 29) & 0x7)) << 1) + (((0x2 & t4) >> 1) & 0x1)) << 2) + (((int)stk + 0) + 0x28)) + 0x0)));
                (((struct oC_uint *)0xC13EC68)->v) = (*(int *)((((((((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 29) & 0x7)) << 1) + ((*(int *)0xC13EB90) & 0x1)) << 2) + ((int)stk + 0)) + 0x0)));
                Voice_ShutUp(0x2);
            }
        } else {
            (((struct o0_uint *)0xC13EC68)->v) = (*(int *)(((0x8C + ((int)stk + 0)) + (((int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 29) & 0x7)) << 2))));
            t25 = (int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 29) & 0x7);
            (((struct oC_uint *)0xC13EC68)->v) = (*(int *)(((((((t25 << 1) + t25) + ((int)((int)(*(int *)0xC13EB90) % (int)0x3))) << 2) + (((int)stk + 0) + 0x50)) + 0x0)));
            Voice_ShutUp(0x2);
        }
    } else {
        t39 = (int)(((unsigned int)((((struct o148_int *)(a4))->v)) >> 29) & 0x7);
        (((struct o0_uint *)0xC13EC68)->v) = (*(int *)(((((((t39 << 2) + t39) + ((int)((int)t4 % (int)0x5))) << 2) + (0xA0 + ((int)stk + 0))) + 0x0)));
        (((struct oC_uint *)0xC13EC68)->v) = 0x0;
    }
    return (Voice_Request(0xC13EC68, 0x2, 0x73, 0x0));
}
