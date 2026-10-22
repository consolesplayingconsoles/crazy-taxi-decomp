/* Straight-line functions with calls and guards (batch gen_pb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PcarEvInit(int);
int TrailerInit(int, int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int extRand(void);
int nlScaleUnitVector(int, int, float);
int nlSubVector(int, int);
int set_event(int, int);
int PcarInit(int a4, int a5, int a6);

int PcarInit(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t9;
    int t10;
    int t11;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    int t20;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    float u31;
    int t33;
    int t34;
    int t36;
    int t38;

    t0 = set_event(0x12C, 0xC0465A8);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
    t2 = *(int *)0xC2A44A8;
    *(unsigned int *)0xC2A44A8 = (t2 + 0x1);
    *(unsigned int *)((t0 + 0x78)) = a4;
    t3 = extRand();
    t4 = 0x0;
    if ((t3 & 15) == 0) {
        t4 = 0x1;
    }
    if (t4 != 0) {
        *(unsigned int *)((t0 + 0x78)) = 0x0;
    }
    *(unsigned int *)((t0 + 0x80)) = a5;
    if (a6 == 0) {
        t9 = *(int *)((t0 + 0x80));
        t10 = *(int *)0xC2A6690;
        t11 = *(int *)((((((t9 << 1) + t9) << 2) + t10) + 0x0));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(t11); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(a6); }
    }
    PcarEvInit(t0);
    u15 = *(float *)((t0 + 0xB4));
    u16 = *(float *)0xC04623C;
    u17 = *(float *)0xC046240;
    u18 = *(float *)0xC046244;
    u19 = u17;
    u19 = u19 + u18 * (u16 / u15);
    *(float *)((t0 + 0xD0)) = u19;
    if (t4 != 0) {
        t20 = *(int *)((t0 + 0x84));
        *(unsigned int *)((t0 + 0x84)) = (t20 | 0x2);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0xE0 + t0)); }
    nlSubVector((0x98 + t0), (0x8C + t0));
    t26 = *(int *)((t0 + 0x80));
    t27 = *(int *)0xC2A6690;
    t28 = *(int *)((((((t26 << 1) + t26) << 2) + t27) + 0x8));
    t29 = *(int *)((t28 + 0x0));
    u30 = *(float *)((0xC0C3F04 + ((t29 & 0xF) << 2)));
    u31 = *(float *)0xC046254;
    nlScaleUnitVector((0x98 + t0), (0x98 + t0), (u30 * u31));
    t33 = *(int *)((t0 + 0xD4));
    t34 = *(int *)((t0 + 0x80));
    courseStatusEntry(t34, t33);
    t36 = *(int *)((t0 + 0x84));
    calcCheckExec(t0, t36);
    t38 = *(int *)((t0 + 0x78));
    if (t38 == 11) {
        return TrailerInit(t0, 0x1);
    }
    return t38;
}
