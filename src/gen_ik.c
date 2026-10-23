/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
int thunk_kmiWriteRegister(int, int);
int kmiSetVideoTimings(int a4, int a5, int a6, int a7, int a8);

int kmiSetVideoTimings(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
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
    int t61;
    int t63;
    int t64;
    int t68;
    int t70;
    int t72;
    int t74;
    int t76;
    int t78;
    int t80;
    int t82;
    int t84;
    int t85;
    int stk[76] = {0};

    { int *ap = &a8; int k; for (k = 0; k < 63; k++) stk[5 + k] = ap[k]; }
    t0 = *(int *)(((((int)stk + 4) + 0x10) + 0xF8));
    *(unsigned int *)0xC2EA6D8 = t0;
    t1 = *(int *)(((((int)stk + 4) + 0x10) + 0xF0));
    *(unsigned int *)0xC2EA6DC = t1;
    t2 = *(int *)(((((int)stk + 4) + 0x10) + 0xF4));
    *(unsigned int *)0xC2EA6E0 = t2;
    t3 = *(int *)(((((int)stk + 4) + 0x10) + 0x2C));
    t4 = *(int *)(((((int)stk + 4) + 0x10) + 0x54));
    t5 = *(int *)(((((int)stk + 4) + 0x10) + 0x50));
    t6 = *(int *)(((((int)stk + 4) + 0x10) + 0x5C));
    t7 = *(int *)(((((int)stk + 4) + 0x10) + 0x68));
    t8 = *(int *)(((((int)stk + 4) + 0x10) + 0x30));
    t9 = *(int *)(((((int)stk + 4) + 0x10) + 0x60));
    t10 = *(int *)(((((int)stk + 4) + 0x10) + 0x28));
    t11 = *(int *)(((((int)stk + 4) + 0x10) + 0x48));
    t12 = *(int *)(((((int)stk + 4) + 0x10) + 0x4C));
    *(unsigned int *)0xC2EA960 = ((((((((((t4 << 1) | t5) | (t6 << 2)) | ((t7 << 2) << 1)) | ((t8 << 2) << 2)) | (((t9 << 2) << 2) << 1)) | (((t10 << 2) << 2) << 2)) | (t3 << 7)) | (t11 << 8)) | ((t12 << 8) << 1));
    t13 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
    t14 = *(int *)(((((int)stk + 4) + 0x10) + 0x4));
    *(unsigned int *)0xC2EA96C = ((t14 & 0x7FF) | ((t13 & 0x7FF) << 16));
    t15 = *(int *)(((((int)stk + 4) + 0x10) + 0x4));
    *(unsigned int *)0xC2EA964 = ((t15 & 0x7FF) << 16);
    t16 = *(int *)(((((int)stk + 4) + 0x10) + 0x14));
    t17 = *(int *)(((((int)stk + 4) + 0x10) + 0x8));
    *(unsigned int *)0xC2EA970 = ((t17 & 0x7FF) | ((t16 & 0x7FF) << 16));
    t18 = *(int *)(((((int)stk + 4) + 0x10) + 0xC));
    t19 = *(int *)(((((int)stk + 4) + 0x10) + 0x10));
    *(unsigned int *)0xC2EA974 = ((t19 & 0x7FF) | ((t18 & 0x7FF) << 16));
    t20 = *(int *)(((((int)stk + 4) + 0x10) + 0x74));
    t21 = *(int *)(((((int)stk + 4) + 0x10) + 0x78));
    *(unsigned int *)0xC2EA968 = ((t20 & 0x7FF) | ((t21 & 0x7FF) << 16));
    t22 = *(int *)(((((int)stk + 4) + 0x10) + 0x1C));
    t23 = *(int *)(((((int)stk + 4) + 0x10) + 0x18));
    t24 = *(int *)(((((int)stk + 4) + 0x10) + 0x20));
    t25 = *(int *)(((((int)stk + 4) + 0x10) + 0x24));
    *(unsigned int *)0xC2EA978 = ((((t23 & 0x7F) | ((t22 & 0xF) << 8)) | ((((t24 & 0x3FF) << 8) << 2) << 2)) | ((t25 & 0x7F) << 22));
    t26 = *(int *)(((((int)stk + 4) + 0x10) + 0x34));
    t27 = *(int *)(((((int)stk + 4) + 0x10) + 0x38));
    t28 = *(int *)(((((int)stk + 4) + 0x10) + 0x3C));
    t29 = *(int *)(((((int)stk + 4) + 0x10) + 0x40));
    t30 = *(int *)(((((int)stk + 4) + 0x10) + 0x44));
    t31 = *(int *)(((((int)stk + 4) + 0x10) + 0x6C));
    t32 = *(int *)(((((int)stk + 4) + 0x10) + 0x70));
    *(unsigned int *)0xC2EA984 = (((((((t26 & 0x1) | ((t27 & 0x1) << 1)) | ((t28 & 0x1) << 2)) | (((t29 & 0x1) << 2) << 1)) | (((0xF & t30) << 2) << 2)) | ((t31 & 0x1) << 8)) | ((t32 & 0x3F) << 16));
    t33 = *(int *)0xC2EA6D0;
    t34 = *(int *)0xC2EA6D8;
    *(unsigned int *)0xC2EA988 = (t34 + t33);
    t35 = *(int *)0xC2EA6D4;
    t36 = *(int *)0xC2EA6DC;
    t37 = *(int *)0xC2EA6D4;
    t38 = *(int *)0xC2EA6E0;
    *(unsigned int *)0xC2EA98C = ((t36 + t35) | ((t38 + t37) << 16));
    t39 = *(int *)0xC2EAB6C;
    if (t39 != 1) {
        t40 = *(int *)0xC2EA684;
        if ((t40 & 2) != 0) {
            for (;;) {
                t41 = kmiReadRegister(0x10C);
                if ((t41 & 0x3FF) != 0) {
                    break;
                }
            }
            for (;;) {
                t42 = kmiReadRegister(0x10C);
                if ((t42 & 0x3FF) == 0) {
                    break;
                }
            }
        }
    }
    t61 = *(int *)0xC2EA984;
    thunk_kmiWriteRegister(0xE8, (t61 | 0x8));
    t63 = *(int *)0xC2EA69C;
    t64 = 0x0;
    if ((t63 & 1) != 0) {
        t64 = 0x800000;
    }
    thunk_kmiWriteRegister(0x44, t64);
    thunk_kmiWriteRegister(0x5C, 0x0);
    t68 = *(int *)0xC2EA960;
    thunk_kmiWriteRegister(0xD0, t68);
    t70 = *(int *)0xC2EA970;
    thunk_kmiWriteRegister(0xD8, t70);
    t72 = *(int *)0xC2EA968;
    thunk_kmiWriteRegister(0xCC, t72);
    t74 = *(int *)0xC2EA96C;
    thunk_kmiWriteRegister(0xD4, t74);
    t76 = *(int *)0xC2EA974;
    thunk_kmiWriteRegister(0xDC, t76);
    t78 = *(int *)0xC2EA978;
    thunk_kmiWriteRegister(0xE0, t78);
    t80 = *(int *)0xC2EA988;
    thunk_kmiWriteRegister(0xEC, t80);
    t82 = *(int *)0xC2EA98C;
    thunk_kmiWriteRegister(0xF0, t82);
    t84 = *(int *)0xC2EA964;
    t85 = thunk_kmiWriteRegister(0xC8, t84);
    return t85;
}
