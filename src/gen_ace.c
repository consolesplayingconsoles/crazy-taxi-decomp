/* Straight-line functions with calls and guards (batch gen_ace): generated from the code and checked by tests. Calls are
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
    int t11;
    int t13;
    int t16;
    int t18;

    t0 = nlSetEventNext(0x12C, 0xC0490E0, a4);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
    if (a5 == 5) {
        *(unsigned int *)((t0 + 0x78)) = ((*(int *)((a4 + 0x78))) + 0x2);
    } else {
        *(unsigned int *)((t0 + 0x78)) = ((*(int *)((a4 + 0x78))) + 0x1);
    }
    *(unsigned int *)((t0 + 0x80)) = (*(int *)((a4 + 0x80)));
    *(unsigned int *)((t0 + 0xD4)) = ((*(int *)((a4 + 0xD4))) - ((a5 << 1) + (a5 << 2)));
    getCoursePointMove((0x80 + t0), (0xD4 + t0), 0x0);
    t11 = *(int *)((t0 + 0x80));
    t13 = *(int *)((t0 + 0xD4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(((((t13 << 1) + t13) << 2) + (*(int *)((((((t11 << 1) + t11) << 2) + (*(int *)0xC2A6690)) + 0x0))))); }
    PcarEvInit(t0);
    t16 = *(int *)((t0 + 0x80));
    t18 = *(int *)((t0 + 0xD4));
    *(float *)((t0 + 0x90)) = ((*(float *)((((*(int *)((((((t16 << 1) + t16) << 2) + (*(int *)0xC2A6690)) + 0x0))) + (((t18 << 1) + t18) << 2)) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0x98 + a4)); }
    *(unsigned char *)(((0xA4 + t0) + 0x0)) = (*(signed char *)(((0xA4 + a4) + 0x0)));
    *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0xA4 + a4) + 0x1)));
    *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0xA4 + a4) + 0x2)));
    *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0xA4 + a4) + 0x3)));
    *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0xA4 + a4) + 0x4)));
    *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0xA4 + a4) + 0x5)));
    courseStatusEntry((*(int *)((t0 + 0x80))), (*(int *)((t0 + 0xD4))));
    courseStatusEntry((*(int *)((t0 + 0x80))), ((*(int *)((t0 + 0xD4))) + 0x1));
    return calcCheckExec(t0, (*(int *)((t0 + 0x84))));
}
