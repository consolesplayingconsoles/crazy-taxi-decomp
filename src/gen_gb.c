/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiWriteDispModeRegisters(void);
int kmiDiscardRenderPipeline(void);
int kmiFBControl(int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, ...);
int kmiWriteRegister(int, int);
int kmChangeDisplayFilterMode(int a4, int a5);

int kmChangeDisplayFilterMode(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t7;
    int t8;
    int t10;
    int t11;
    int t13;
    int t33;
    int t34;
    int t35;
    int t14;
    int t22;
    int t15;
    int t18;
    int t16;
    int t24;
    int t25;
    int t27;
    int t28;
    int t37;
    int t38;
    int t39;
    int t42;
    int t44;
    int t46;
    int t49;
    int t55;
    int t56;
    int stk[17] = {0};

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t0 = *(int *)0xC175D30;
    t1 = *(int *)0xC175D34;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x0)) = t0;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x4)) = t1;
    t2 = *(int *)0xC175D38;
    t3 = *(int *)0xC175D3C;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x8)) = t2;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0xC)) = t3;
    t4 = *(int *)0xC175D40;
    t5 = *(int *)0xC175D44;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x10)) = t4;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x14)) = t5;
    kmiDiscardRenderPipeline();
    t7 = *(int *)(((int)stk + 24));
    t8 = 0x0;
    if (t7 != 0) {
        t8 = 0x1;
    }
    t10 = *(int *)(((int)stk + 20));
    t11 = 0x0;
    if (t10 != 0) {
        t11 = 0x1;
    }
    *(unsigned int *)0xC2EA6A8 = t11;
    *(unsigned int *)0xC2EA6AC = t8;
    t13 = *(int *)0xC2EA6A0;
    t33 = 0x280;
    t34 = 0x1E0;
    t35 = 0x0;
    if (t13 == 1) {
    } else {
        t14 = *(int *)0xC2EA6A0;
        t22 = 0x0;
        if ((t14 & 0x1) != 1) {
            t15 = *(int *)0xC2EA6A0;
            t18 = 0x0;
            if ((t15 & 44) != 0) {
                t16 = 0x0;
                if (0x1 != 0) {
                    t16 = 0x1;
                }
                t18 = t16;
            }
            t22 = t18;
        }
        t24 = *(int *)0xC2EA6A0;
        t25 = 0x140;
        if ((t24 & 16) != 0) {
            t25 = 0x280;
        }
        t27 = *(int *)0xC2EA6A0;
        t28 = 0xF0;
        if ((t27 & 32) != 0) {
            t28 = 0x1E0;
        }
        t33 = t25;
        t34 = t28;
        t35 = t22;
    }
    t37 = *(int *)0xC2EA9F0;
    for (;;) {
        t38 = *(int *)0xC2EA9F0;
        if (t37 != t38) {
            break;
        }
    }
    t39 = *(int *)0xC2EA6A4;
    kmiFBControl(t33, t34, t39, t35);
    kmiWriteDispModeRegisters();
    t42 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, (t42 & 0xFFFFFFFE));
    t44 = *(int *)0xC2EA984;
    kmiWriteRegister(0xE8, t44);
    t46 = *(int *)0xC2EA948;
    kmiWriteRegister(0x44, t46);
    kmiResetBoard();
    t49 = *(int *)0xC2EA6E8;
    *(volatile int *)0xC2EA6F8;
    *(volatile int *)0xC2EA6F4;
    *(volatile int *)0xC2EA6F0;
    *(volatile int *)0xC2EA6EC;
    kmiSetTAEnvironment(t49, 0x0, t11, t8);
    *(unsigned int *)0xC2EA928 = 0x1;
    t55 = *(int *)0xC2EA9F0;
    for (;;) {
        t56 = *(int *)0xC2EA9F0;
        if (t55 != t56) {
            break;
        }
    }
    return 0x0;
}
