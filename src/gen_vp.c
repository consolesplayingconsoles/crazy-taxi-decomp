/* Straight-line functions with calls and guards (batch gen_vp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int VSklIpPlay(int, float);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int humanDraw(int, int, int, int);
int selectPlayPickMotion(void);

int selectPlayPickMotion(void)
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
    int t15;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t25;
    int t26;
    int t27;
    int t29;
    int t31;
    int t30;
    int t34;
    int t36;

    t0 = *(int *)0xC2A75A4;
    t1 = *(int *)0xC2A751C;
    if (t0 != 1) {
        if (t0 != 2) {
            return t0;
        }
        t2 = *(int *)((t1 + 0x0));
        t3 = *(int *)((t1 + 0x0));
        t4 = *(int *)((0xC2A7538 + (t3 << 2)));
        t5 = *(int *)(((((t2 << 2) << 2) + 0xC130748) + 0xC));
        t6 = *(int *)(((((t2 << 2) << 2) + 0xC130748) + 0x8));
        return humanDraw(t6, t5, t4, 0x0);
    }
    t7 = *(int *)((t1 + 0x0));
    t8 = *(int *)((0xC2A7538 + (t7 << 2)));
    t9 = *(int *)0xC2A75B0;
    t10 = *(int *)((t1 + 0x0));
    *(volatile int *)(((((t10 << 2) << 2) + 0xC130748) + 0xC));
    *(volatile int *)0xC2A75AC;
    *(volatile int *)(((((t10 << 2) << 2) + 0xC130748) + 0x8));
    t15 = *(int *)(((((t10 << 2) << 2) + 0xC130748) + 0x4));
    VSklIpPlay(t15, ((float)t8 / (float)t9));
    t17 = *(int *)0xC2A751C;
    t18 = *(int *)((t17 + 0x0));
    t19 = *(int *)0xC2A75B0;
    t20 = *(int *)((0xC2A7538 + (t18 << 2)));
    if (t20 == (t19 - 1)) {
        t21 = *(int *)0xC2A75A4;
        *(unsigned int *)0xC2A75A4 = (t21 + 0x1);
        t22 = *(int *)0xC2A751C;
        t23 = *(int *)((t22 + 0x0));
        *(unsigned int *)((0xC2A7538 + (t23 << 2))) = 0x0;
        *(unsigned int *)0xC2A7518 = 0x3;
        Voice_ShutUp(0x0);
        t25 = *(int *)0xC2A751C;
        t26 = *(int *)((t25 + 0x0));
        t27 = *(int *)(((t26 << 2) + 0xC130710));
        Voice_Request(t27, 0x0, 0x7F, 0x0);
        t29 = *(int *)0xC2A75C0;
        t31 = t29;
        if (t29 == 4) {
            t30 = Sound_Request(0x308A9, 0x0);
            t31 = t30;
        }
        t34 = *(int *)0xC17948C;
        if (t34 != 0) {
            t36 = *(int *)0xC2A75C0;
            if (t36 != 4) {
                return Sound_Request(0x501A9, 0x0);
            }
            return t36;
        }
        return t31;
    }
    return (t18 << 2);
}
