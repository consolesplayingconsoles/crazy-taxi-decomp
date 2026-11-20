/* Straight-line functions with calls and guards (batch gen_apq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiDiscardRenderPipeline(void);
int kmiFBControl(int, int, int, int, int, int);
int kmiResetBoard(void);
int kmiSetTAEnvironment(int, int, int, int, int);
int kmiWriteDispModeRegisters(void);
int kmiWriteRegister(int, int);
int kmChangeDisplayFilterMode(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


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
    int R1020;
    int R1024;

    R1020 = *(int *)((int)stk + 20);
    R1024 = *(int *)((int)stk + 24);

    R1020 = a4;
    R1024 = a5;
    t1 = (((struct o4_int *)0xC175D30)->v);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x0)) = ((((struct o0_int *)0xC175D30)->v));
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x4)) = t1;
    t3 = (((struct oC_int *)0xC175D30)->v);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x8)) = ((((struct o8_int *)0xC175D30)->v));
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0xC)) = t3;
    t5 = (((struct o14_int *)0xC175D30)->v);
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x10)) = ((((struct o10_int *)0xC175D30)->v));
    *(unsigned int *)(((((int)stk + 20) + 0x8) + 0x14)) = t5;
    kmiDiscardRenderPipeline();
    t8 = 0x0;
    if ((R1024) != 0) {
        t8 = 0x1;
    }
    t11 = 0x0;
    if ((R1020) != 0) {
        t11 = 0x1;
    }
    (((struct o8_uint *)0xC2EA6A0)->v) = t11;
    (((struct oC_uint *)0xC2EA6A0)->v) = t8;
    t30 = 0x280;
    t31 = 0x1E0;
    t32 = 0x0;
    if (((((struct o0_int *)0xC2EA6A0)->v)) == 1) {
    } else {
        t20 = 0x0;
        if (((((((struct o0_int *)0xC2EA6A0)->v)) & 0x1) != 1) && ((t17 = (((struct o0_int *)0xC2EA6A0)->v), (t17 & 44) != 0) && (0x1 != 0))) {
            t20 = 0x1;
        }
        t22 = 0x140;
        if ((((((struct o0_int *)0xC2EA6A0)->v)) & 16) != 0) {
            t22 = 0x280;
        }
        t25 = 0xF0;
        if ((((((struct o0_int *)0xC2EA6A0)->v)) & 32) != 0) {
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
    kmiFBControl(t30, t31, ((((struct o4_int *)0xC2EA6A0)->v)), t32, (t11), (t8));
    kmiWriteDispModeRegisters();
    kmiWriteRegister(0x44, (((((struct o20_int *)0xC2EA928)->v)) & 0xFFFFFFFE));
    kmiWriteRegister(0xE8, (*(int *)0xC2EA984));
    kmiWriteRegister(0x44, ((((struct o20_int *)0xC2EA928)->v)));
    kmiResetBoard();
    kmiSetTAEnvironment(((unsigned int)((((struct o4_int *)0xC2EA6E8)->v)) >> 7), ((unsigned int)((((struct o8_int *)0xC2EA6E8)->v)) >> 7), ((unsigned int)((((struct oC_int *)0xC2EA6E8)->v)) >> 7), ((unsigned int)((((struct o10_int *)0xC2EA6E8)->v)) >> 7), (((((struct o0_int *)0xC2EA6E8)->v))));
    (((struct o0_uint *)0xC2EA928)->v) = 0x1;
    t55 = *(int *)0xC2EA9F0;
    for (;;) {
        if (t55 != (*(int *)0xC2EA9F0)) {
            break;
        }
    }
    return 0x0;
}
