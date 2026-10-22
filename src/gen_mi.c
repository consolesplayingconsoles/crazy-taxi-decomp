/* Straight-line functions with calls and guards (batch gen_mi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_Getoff(int a4, int a5, int a6, int a7);

int Chat_Getoff(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t20;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t3;
    int t7;
    int t11;
    int t15;
    int t19;
    int t23;
    int t27;
    int stk[324] = {0};

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_C060F38:;
    t0 = 0xC0D36E0;
    t1 = (0xC0D36E0 + 96);
    t2 = (0x48C + ((int)stk + 4));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)t1 < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t4 = 0xC0D3740;
    t5 = (0xC0D3740 + 120);
    t6 = (0x414 + ((int)stk + 4));
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)t5 < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    t8 = 0xC0D37B8;
    t9 = (0xC0D37B8 + 144);
    t10 = (0x384 + ((int)stk + 4));
    for (;;) { t11 = *(int *)t8; t8 = (t8 + 4); if ((unsigned int)t9 < (unsigned int)t8) break; *(unsigned int *)t10 = t11; t10 = (t10 + 4); }
    { struct mv15 { int w[15]; }; *(struct mv15 *)((0x348 + ((int)stk + 4))) = *(struct mv15 *)(0xC0D3848); }
    t12 = 0xC0D3884;
    t13 = (0xC0D3884 + 240);
    t14 = (0x258 + ((int)stk + 4));
    for (;;) { t15 = *(int *)t12; t12 = (t12 + 4); if ((unsigned int)t13 < (unsigned int)t12) break; *(unsigned int *)t14 = t15; t14 = (t14 + 4); }
    t16 = 0xC0D3974;
    t17 = (0xC0D3974 + 180);
    t18 = (0x1A4 + ((int)stk + 4));
    for (;;) { t19 = *(int *)t16; t16 = (t16 + 4); if ((unsigned int)t17 < (unsigned int)t16) break; *(unsigned int *)t18 = t19; t18 = (t18 + 4); }
    t20 = 0xC0D3A28;
    t21 = (0xC0D3A28 + 240);
    t22 = (0xB4 + ((int)stk + 4));
    for (;;) { t23 = *(int *)t20; t20 = (t20 + 4); if ((unsigned int)t21 < (unsigned int)t20) break; *(unsigned int *)t22 = t23; t22 = (t22 + 4); }
    t24 = 0xC0D3B18;
    t25 = (0xC0D3B18 + 180);
    t26 = ((int)stk + 4);
    for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)t25 < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
    t28 = *(int *)0xC13EB90;
    t29 = *(int *)((R4 + 0x110));
    t30 = t29 == 0xC956FCC;
    t31 = *(int *)0xC2AD000;
    t32 = t29;
    t33 = (0xB4 + ((int)stk + 4));
    t34 = 0xC13EB94;
    t35 = 0xC2AD000;
    t36 = t28;
    t37 = 0xC13EBCC;
    t38 = t31;
    t39 = 0xC13EBCC;
    t40 = (0x414 + ((int)stk + 4));
    t41 = (0x258 + ((int)stk + 4));
    t42 = (0x384 + ((int)stk + 4));
    R0 = t32;
    R10 = t33;
    R11 = t34;
    R12 = t35;
    R13 = t36;
    R14 = t37;
    R5 = t38;
    R6 = t39;
    R7 = t40;
    R8 = t41;
    R9 = t42;
    if (t30) goto L_C061070;
    goto L_C060FD2;
    L_C060FD2:;
    t43 = R0 == 0xC95A230;
    if (t43) goto L_C061070;
    goto L_C060FD8;
    L_C060FD8:;
    t44 = R0 == 0xC95D7C4;
    if (t44) goto L_C061070;
    goto L_C060FDE;
    L_C060FDE:;
    t45 = R0 == 0xC960308;
    if (t45) goto L_C061070;
    goto L_C060FE4;
    L_C060FE4:;
    t46 = R0 == 0xC962F0C;
    if (t46) goto L_C061070;
    goto L_C060FEA;
    L_C060FEA:;
    t47 = R0 == 0xC9659C0;
    if (t47) goto L_C061070;
    goto L_C060FF0;
    L_C060FF0:;
    t48 = R0 == 0xC9684A4;
    if (t48) goto L_C061070;
    goto L_C060FF6;
    L_C060FF6:;
    t49 = R0 == 0xC96B138;
    if (t49) goto L_C061070;
    goto L_C060FFC;
    L_C060FFC:;
    goto L_C0610D0;
    L_C0610D0:;
    t50 = *(int *)(((0x148 + R4) + 0x0));
    t51 = (int)(((unsigned int)t50 >> 21) & 0x3);
    t52 = t51 == 0;
    t53 = t51;
    t54 = 0xFF;
    R0 = t53;
    R7 = t54;
    if (t52) goto L_C0610F2;
    goto L_C0610E2;
    L_C0610E2:;
    t55 = R0 == 1;
    if (t55) goto L_C061170;
    goto L_C0610E6;
    L_C0610E6:;
    t56 = R0 != 2;
    if (t56) goto L_C0610EE;
    goto L_C0610EA;
    L_C0610EA:;
    goto L_C0611EE;
    L_C0611EE:;
    t57 = (int)((int)R13 % (int)0x3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R6) = *(struct mv3 *)(((unsigned char)(((((((R5 + R7) << 2) + (R5 + R7)) + t57) << 1) + ((((R5 + R7) << 2) + (R5 + R7)) + t57)) << 2) + R10)); }
    t58 = *(int *)((R12 + 0x0));
    t59 = *(int *)((R11 + 0x0));
    t60 = (int)((int)t59 % (int)0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)(((unsigned char)((((((((t58 + R7) << 2) + (t58 + R7)) + t60) + 0x3) << 1) + (((((t58 + R7) << 2) + (t58 + R7)) + t60) + 0x3)) << 2) + R10)); }
    t61 = *(int *)(((0x148 + R4) + 0x0));
    t62 = (int)(((unsigned int)t61 >> 29) & 0x7);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x24)) = *(struct mv3 *)(((unsigned char)((((t62 << 2) << 1) + t62) << 2) + ((int)stk + 4))); }
    goto L_C061266;
    L_C061266:;
    Voice_ShutUp(0x1);
    Voice_Request(R14, 0x1, 0x7F, 0x0);
    Voice_ShutUp(0x2);
    t66 = Voice_Request((R14 + 0x24), 0x2, 0x7F, 0x0);
    return t66;
    L_C0610EE:;
    goto L_C061266;
    L_C061170:;
    t67 = (int)((int)R13 % (int)0x3);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R6) = *(struct mv3 *)(((unsigned char)(((((((R5 + R7) << 2) + (R5 + R7)) + t67) << 1) + ((((R5 + R7) << 2) + (R5 + R7)) + t67)) << 2) + R8)); }
    t68 = *(int *)((R12 + 0x0));
    t69 = *(int *)((R11 + 0x0));
    t70 = (int)((int)t69 % (int)0x2);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)(((unsigned char)((((((((t68 + R7) << 2) + (t68 + R7)) + t70) + 0x3) << 1) + (((((t68 + R7) << 2) + (t68 + R7)) + t70) + 0x3)) << 2) + R8)); }
    t71 = *(int *)(((0x148 + R4) + 0x0));
    t72 = (int)(((unsigned int)t71 >> 29) & 0x7);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x24)) = *(struct mv3 *)(((unsigned char)((((t72 << 2) << 1) + t72) << 2) + (0x1A4 + ((int)stk + 4)))); }
    goto L_C061266;
    L_C0610F2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R6) = *(struct mv3 *)(((unsigned char)(((((R5 + R7) << 2) << 1) + (R5 + R7)) << 2) + R9)); }
    t73 = *(int *)((R12 + 0x0));
    t74 = *(int *)((R11 + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0xC)) = *(struct mv3 *)(((unsigned char)((((((((t73 + R7) << 1) + (t73 + R7)) + (t74 & 0x1)) + 0x1) << 1) + (((((t73 + R7) << 1) + (t73 + R7)) + (t74 & 0x1)) + 0x1)) << 2) + R9)); }
    t75 = *(int *)(((0x148 + R4) + 0x0));
    t76 = (int)(((unsigned int)t75 >> 29) & 0x7);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x24)) = *(struct mv3 *)(((signed char)(((t76 << 1) + t76) << 2) + (0x348 + ((int)stk + 4)))); }
    goto L_C061266;
    L_C061070:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(R6) = *(struct mv3 *)(((signed char)((((((R5 - 1) << 1) + (R13 & 0x1)) << 1) + (((R5 - 1) << 1) + (R13 & 0x1))) << 2) + (0x48C + ((int)stk + 4)))); }
    *(unsigned int *)(((R14 + 0xC) + 0x0)) = 0x0;
    *(unsigned int *)(((R14 + 0xC) + 0x8)) = 0x0;
    *(unsigned int *)(((R14 + 0xC) + 0x4)) = 0x0;
    t77 = *(int *)(((0x148 + R4) + 0x0));
    t78 = (int)(((unsigned int)t77 >> 29) & 0x7);
    t79 = *(int *)((R11 + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R14 + 0x24)) = *(struct mv3 *)(((signed char)(((((t78 << 1) + ((t79 & 0x2) >> 1)) << 1) + ((t78 << 1) + ((t79 & 0x2) >> 1))) << 2) + R7)); }
    t80 = (R14 + 0xC);
    t81 = 0x0;
    R5 = t80;
    R6 = t81;
    goto L_C061266;
}
