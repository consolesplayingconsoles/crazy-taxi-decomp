extern int trainExec();
/* Straight-line functions with calls and guards (batch gen_ty): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int getCoursePointMove(int, int, int);
int nlSetEventNext(int, int, int);
int TrainInit(int a4, int a5);

int TrainInit(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t8;
    int t9;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    float u20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t31;
    int t33;

    t0 = nlSetEventNext(0x12C, ((int)trainExec), a4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
    t2 = *(int *)0xC2A44A8;
    *(unsigned int *)0xC2A44A8 = (t2 + 0x1);
    if (a5 == 5) {
        t3 = *(int *)((a4 + 0x78));
        *(unsigned int *)((t0 + 0x78)) = (t3 + 0x2);
    } else {
        t4 = *(int *)((a4 + 0x78));
        *(unsigned int *)((t0 + 0x78)) = (t4 + 0x1);
    }
    t8 = *(int *)((a4 + 0x80));
    *(unsigned int *)((t0 + 0x80)) = t8;
    t9 = *(int *)((a4 + 0xD4));
    *(unsigned int *)((t0 + 0xD4)) = (t9 - ((a5 << 1) + (a5 << 2)));
    getCoursePointMove((0x80 + t0), (0xD4 + t0), 0x0);
    t11 = *(int *)((t0 + 0x80));
    t12 = *(int *)0xC2A6690;
    t13 = *(int *)((t0 + 0xD4));
    t14 = *(int *)((((((t11 << 1) + t11) << 2) + t12) + 0x0));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(((((t13 << 1) + t13) << 2) + t14)); }
    PcarEvInit(t0);
    t16 = *(int *)((t0 + 0x80));
    t17 = *(int *)0xC2A6690;
    t18 = *(int *)((t0 + 0xD4));
    t19 = *(int *)((((((t16 << 1) + t16) << 2) + t17) + 0x0));
    u20 = *(float *)(((t19 + (((t18 << 1) + t18) << 2)) + 0x4));
    *(float *)((t0 + 0x90)) = (u20 + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
    t21 = *(signed char *)(((0xA4 + a4) + 0x0));
    *(unsigned char *)(((0xA4 + t0) + 0x0)) = t21;
    t22 = *(signed char *)(((0xA4 + a4) + 0x1));
    *(unsigned char *)(((0xA4 + t0) + 0x1)) = t22;
    t23 = *(signed char *)(((0xA4 + a4) + 0x2));
    *(unsigned char *)(((0xA4 + t0) + 0x2)) = t23;
    t24 = *(signed char *)(((0xA4 + a4) + 0x3));
    *(unsigned char *)(((0xA4 + t0) + 0x3)) = t24;
    t25 = *(signed char *)(((0xA4 + a4) + 0x4));
    *(unsigned char *)(((0xA4 + t0) + 0x4)) = t25;
    t26 = *(signed char *)(((0xA4 + a4) + 0x5));
    *(unsigned char *)(((0xA4 + t0) + 0x5)) = t26;
    t27 = *(int *)((t0 + 0xD4));
    t28 = *(int *)((t0 + 0x80));
    courseStatusEntry(t28, t27);
    t30 = *(int *)((t0 + 0xD4));
    t31 = *(int *)((t0 + 0x80));
    courseStatusEntry(t31, (t30 + 0x1));
    t33 = *(int *)((t0 + 0x84));
    return calcCheckExec(t0, t33);
}
