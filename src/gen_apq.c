/* Straight-line functions with calls and guards (batch gen_apq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiDiscardRenderPipeline(int, int, int, int);
int kmiFBControl(int, int, int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);

int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t8;
    int t11;
    int t30;
    int t31;
    int t32;
    int t20;
    int t22;
    int t25;
    int t34;
    int t55;
    int t17;
    int stk[17];

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    t1 = *(int *)0xC175D34;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x0)) = (*(int *)0xC175D30);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x4)) = t1;
    t3 = *(int *)0xC175D3C;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x8)) = (*(int *)0xC175D38);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0xC)) = t3;
    t5 = *(int *)0xC175D44;
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x10)) = (*(int *)0xC175D40);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x14)) = t5;
    kmiDiscardRenderPipeline(a4, a5, a6, a7);
    t8 = 0x0;
    if ((*(int *)(((int)stk + 24))) != 0) {
        t8 = 0x1;
    }
    t11 = 0x0;
    if ((*(int *)(((int)stk + 20))) != 0) {
        t11 = 0x1;
    }
    *(unsigned int *)0xC2EA6A8 = t11;
    *(unsigned int *)0xC2EA6AC = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if ((*(int *)0xC2EA6A0) == 1) {
    } else {
        t20 = 0x0;
        if ((((*(int *)0xC2EA6A0) & 0x1) != 1) && ((t17 = *(int *)0xC2EA6A0, (t17 & 44) != 0) && (0x1 != 0))) {
            t20 = 0x1;
        }
        t22 = 0x140;
        if (((*(int *)0xC2EA6A0) & 16) != 0) {
            t22 = 0x280;
        }
        t25 = 0xF0;
        if (((*(int *)0xC2EA6A0) & 32) != 0) {
            t25 = 0x1E0;
        }
        t30 = t22;
        t31 = t25;
        t32 = t20;
    }
    t34 = *(int *)0xC2EA9F0;
    for (;;) {
        if (t34 != (*(int *)0xC2EA9F0)) {
            break;
        }
    }
    kmiFBControl(t30, t31, (*(int *)0xC2EA6A4), t32, (t11), (t8));
    kmiWriteDispModeRegisters();
    kmiWriteRegister(0x44, ((*(int *)0xC2EA948) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (*(int *)0xC2EA984));
    kmiWriteRegister(0x44, (*(int *)0xC2EA948));
    kmiResetBoard();
    kmiSetTAEnvironment(((unsigned int)(*(int *)0xC2EA6EC) >> 7), ((unsigned int)(*(int *)0xC2EA6F0) >> 7), ((unsigned int)(*(int *)0xC2EA6F4) >> 7), ((unsigned int)(*(int *)0xC2EA6F8) >> 7), ((*(int *)0xC2EA6E8)), 0x0);
    *(unsigned int *)0xC2EA928 = 0x1;
    t55 = *(int *)0xC2EA9F0;
    for (;;) {
        if (t55 != (*(int *)0xC2EA9F0)) {
            break;
        }
    }
    return 0x0;
}
