/* Straight-line functions with calls and guards (batch gen_yr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Getoff(int a4);

int Chat_Getoff(int a4)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t10;
    int t12;
    int t14;
    int t16;
    int t18;
    int t20;
    int t22;
    int t24;
    int t26;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t36;
    int t38;
    int t43;
    int t44;
    int t46;
    int t48;
    int t53;
    int t54;
    int t56;
    int t62;
    int t63;
    int t3;
    int t7;
    int t11;
    int t15;
    int t19;
    int t23;
    int t27;
    int stk[324];

    t0 = 0xC0D36E0;
    t2 = (0x48C + ((int)stk + 4));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D36E0 + 96)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0xC0D3740;
    t6 = (0x414 + ((int)stk + 4));
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0xC0D3740 + 120)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0xC0D37B8;
    t10 = (0x384 + ((int)stk + 4));
    for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)((0xC0D37B8 + 144)) < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((0x348 + ((int)stk + 4))) = *(struct mv15 *)(0xC0D3848); }
    t12 = 0xC0D3884;
    t14 = (0x258 + ((int)stk + 4));
    for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)((0xC0D3884 + 240)) < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
    t16 = 0xC0D3974;
    t18 = (0x1A4 + ((int)stk + 4));
    for (;;) { t19 = *(int *)t16; t16 = (t16 + 4); if ((unsigned int)((0xC0D3974 + 180)) < (unsigned int)t16) break; *(unsigned int *)t18 = t19; t18 = (t18 + 4); }
    t20 = 0xC0D3A28;
    t22 = (0xB4 + ((int)stk + 4));
    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)((0xC0D3A28 + 240)) < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
    t24 = 0xC0D3B18;
    t26 = ((int)stk + 4);
    for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)((0xC0D3B18 + 180)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
    t28 = *(int *)0xC13EB90;
    t29 = *(int *)((a4 + 0x110));
    t30 = *(int *)0xC2AD000;
    if ((t29 != 0xC956FCC) && ((t29 != 0xC95A230) && ((t29 != 0xC95D7C4) && ((t29 != 0xC960308) && ((t29 != 0xC962F0C) && ((t29 != 0xC9659C0) && ((t29 != 0xC9684A4) && (t29 != 0xC96B138)))))))) {
        t32 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 21) & 0x3);
        if (t32 != 0) {
            if (t32 != 1) {
                if (t32 == 2) {
                    t33 = (int)((int)t28 % (int)0x3);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBCC) = *(struct mv3 *)(((unsigned char)(((((((t30 + 0xFF) << 2) + (t30 + 0xFF)) + t33) << 1) + ((((t30 + 0xFF) << 2) + (t30 + 0xFF)) + t33)) << 2) + (0xB4 + ((int)stk + 4)))); }
                    t34 = *(int *)0xC2AD000;
                    t36 = (int)((int)(*(int *)0xC13EB94) % (int)0x2);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBD8) = *(struct mv3 *)(((unsigned char)((((((((t34 + 0xFF) << 2) + (t34 + 0xFF)) + t36) + 0x3) << 1) + (((((t34 + 0xFF) << 2) + (t34 + 0xFF)) + t36) + 0x3)) << 2) + (0xB4 + ((int)stk + 4)))); }
                    t38 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBF0) = *(struct mv3 *)(((unsigned char)((((t38 << 2) << 1) + t38) << 2) + ((int)stk + 4))); }
                }
            } else {
                t43 = (int)((int)t28 % (int)0x3);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBCC) = *(struct mv3 *)(((unsigned char)(((((((t30 + 0xFF) << 2) + (t30 + 0xFF)) + t43) << 1) + ((((t30 + 0xFF) << 2) + (t30 + 0xFF)) + t43)) << 2) + (0x258 + ((int)stk + 4)))); }
                t44 = *(int *)0xC2AD000;
                t46 = (int)((int)(*(int *)0xC13EB94) % (int)0x2);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBD8) = *(struct mv3 *)(((unsigned char)((((((((t44 + 0xFF) << 2) + (t44 + 0xFF)) + t46) + 0x3) << 1) + (((((t44 + 0xFF) << 2) + (t44 + 0xFF)) + t46) + 0x3)) << 2) + (0x258 + ((int)stk + 4)))); }
                t48 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBF0) = *(struct mv3 *)(((unsigned char)((((t48 << 2) << 1) + t48) << 2) + (0x1A4 + ((int)stk + 4)))); }
            }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBCC) = *(struct mv3 *)(((unsigned char)(((((t30 + 0xFF) << 2) << 1) + (t30 + 0xFF)) << 2) + (0x384 + ((int)stk + 4)))); }
            t53 = *(int *)0xC2AD000;
            t54 = *(int *)0xC13EB94;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBD8) = *(struct mv3 *)(((unsigned char)((((((((t53 + 0xFF) << 1) + (t53 + 0xFF)) + (t54 & 0x1)) + 0x1) << 1) + (((((t53 + 0xFF) << 1) + (t53 + 0xFF)) + (t54 & 0x1)) + 0x1)) << 2) + (0x384 + ((int)stk + 4)))); }
            t56 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBF0) = *(struct mv3 *)(((signed char)(((t56 << 1) + t56) << 2) + (0x348 + ((int)stk + 4)))); }
        }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBCC) = *(struct mv3 *)(((signed char)((((((t30 - 1) << 1) + (t28 & 0x1)) << 1) + (((t30 - 1) << 1) + (t28 & 0x1))) << 2) + (0x48C + ((int)stk + 4)))); }
        *(unsigned int *)0xC13EBD8 = 0x0;
        *(unsigned int *)0xC13EBE0 = 0x0;
        *(unsigned int *)0xC13EBDC = 0x0;
        t62 = (int)(((unsigned int)(*(int *)(((0x148 + a4) + 0x0))) >> 29) & 0x7);
        t63 = *(int *)0xC13EB94;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC13EBF0) = *(struct mv3 *)(((signed char)(((((t62 << 1) + ((t63 & 0x2) >> 1)) << 1) + ((t62 << 1) + ((t63 & 0x2) >> 1))) << 2) + (0x414 + ((int)stk + 4)))); }
    }
    Voice_ShutUp(0x1);
    Voice_Request(0xC13EBCC, 0x1, 0x7F, 0x0);
    Voice_ShutUp(0x2);
    return (Voice_Request(0xC13EBF0, 0x2, 0x7F, 0x0));
}
