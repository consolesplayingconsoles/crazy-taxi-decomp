/* Straight-line functions with calls and guards (batch gen_eb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Iraira(int a4, int a5, int a6);

int Chat_Iraira(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t15;
    int t17;
    int t63;
    int t45;
    int t54;
    int t3;
    int t80;
    int t71;
    int stk[68] = {0};

    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xD4 + ((int)stk + 4))) = *(struct mv8 *)(0xC0D41A4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0xBC + ((int)stk + 4))) = *(struct mv6 *)(0xC0D41C4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((0xA4 + ((int)stk + 4))) = *(struct mv6 *)(0xC0D41DC); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((0x88 + ((int)stk + 4))) = *(struct mv7 *)(0xC0D41F4); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x78)) = *(struct mv4 *)(0xC0D4210); }
    t0 = 0xC0D4220;
    t2 = (((int)stk + 4) + 0x14);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D4220 + 100)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv5 { int w[5]; }; *(struct mv5 *)(((int)stk + 4)) = *(struct mv5 *)(0xC0D4284); }
    if (a6 == 2) {
        *(unsigned int *)0xC13ED20 = (*(int *)((((int)stk + 4) + (((int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7)) << 2))));
        *(unsigned int *)0xC13ED38 = (*(int *)((((((*(int *)0xC2AD000) - 1) << 2) + (((int)stk + 4) + 0x78)) + 0x0)));
        Voice_ShutUp(0x1);
        Voice_Request(0xC13ED38, 0x1, 0x73, 0x0);
        Voice_ShutUp(0x2);
        t80 = (Voice_Request(0xC13ED20, 0x2, 0x73, 0x0));
    } else {
        t15 = *(int *)0xC13EB90;
        if (a5 == 0) {
            t17 = *(int *)0xC2AD000;
            if (t17 != 1) {
                if (t17 != 2) {
                    if (t17 != 3) {
                        if (t17 != 4) {
                            *(unsigned int *)0xC13ED20 = 0x0;
                        } else {
                            *(unsigned int *)0xC13ED20 = (*(int *)((((((int)((unsigned int)t15 % (unsigned int)0x7)) << 2) + (0x88 + ((int)stk + 4))) + 0x0)));
                        }
                    } else {
                        *(unsigned int *)0xC13ED20 = (*(int *)(((0xA4 + ((int)stk + 4)) + (((int)((unsigned int)t15 % (unsigned int)0x6)) << 2))));
                    }
                } else {
                    *(unsigned int *)0xC13ED20 = (*(int *)(((0xBC + ((int)stk + 4)) + (((int)((unsigned int)t15 % (unsigned int)0x6)) << 2))));
                }
            } else {
                *(unsigned int *)0xC13ED20 = (*(int *)(((((t15 & 0x7) << 2) + (0xD4 + ((int)stk + 4))) + 0x0)));
            }
            Voice_ShutUp(0x1);
            t71 = (Voice_Request(0xC13ED20, 0x1, 0x73, 0x0));
        } else {
            t63 = a5;
            if (a5 == 1) {
                if (a6 != 0) {
                    if (a6 != 1) {
                    } else {
                        t45 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
                        *(unsigned int *)0xC13ED20 = (*(int *)(((((int)stk + 4) + 0x14) + (((((int)((int)t15 % (int)0x4)) + ((t45 << 2) + t45)) + 0x1) << 2))));
                    }
                } else {
                    t54 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
                    *(unsigned int *)0xC13ED20 = (*(int *)(((((int)stk + 4) + 0x14) + (((t54 << 2) + t54) << 2))));
                }
                Voice_ShutUp(0x2);
                t63 = (Voice_Request(0xC13ED20, 0x2, 0x73, 0x0));
            }
            t71 = t63;
        }
        t80 = t71;
    }
    return t80;
}
