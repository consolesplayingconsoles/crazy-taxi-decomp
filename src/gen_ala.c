/* Straight-line functions with calls and guards (batch gen_ala): generated from the code and checked by tests. Calls are
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
    int t4;
    int t9;
    float u19;
    int t26;
    int t38;

    t0 = set_event(0x12C, 0xC0465A8);
    if (t0 == 0) {
        return t0;
    }
    t1 = *(int *)0xC2A1B1C;
    *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
    *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
    *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
    *(unsigned int *)((t0 + 0x78)) = a4;
    t4 = 0x0;
    if (((extRand()) & 15) == 0) {
        t4 = 0x1;
    }
    if (t4 != 0) {
        *(unsigned int *)((t0 + 0x78)) = 0x0;
    }
    *(unsigned int *)((t0 + 0x80)) = a5;
    if (a6 == 0) {
        t9 = *(int *)((t0 + 0x80));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)((((((t9 << 1) + t9) << 2) + (*(int *)0xC2A6690)) + 0x0)))); }
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)(a6); }
    }
    PcarEvInit(t0);
    u19 = 0.06f;
    u19 = u19 + 0.01f * (1e+03f / (*(float *)((t0 + 0xB4))));
    *(float *)((t0 + 0xD0)) = u19;
    if (t4 != 0) {
        *(unsigned int *)((t0 + 0x84)) = ((*(int *)((t0 + 0x84))) | 0x2);
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x98 + t0)) = *(struct mv3 *)((0xE0 + t0)); }
    nlSubVector((0x98 + t0), (0x8C + t0));
    t26 = *(int *)((t0 + 0x80));
    nlScaleUnitVector((0x98 + t0), (0x98 + t0), ((*(float *)((0xC0C3F04 + (((*(int *)(((*(int *)((((((t26 << 1) + t26) << 2) + (*(int *)0xC2A6690)) + 0x8))) + 0x0))) & 0xF) << 2)))) * 0.7f));
    courseStatusEntry((*(int *)((t0 + 0x80))), (*(int *)((t0 + 0xD4))));
    calcCheckExec(t0, (*(int *)((t0 + 0x84))));
    t38 = *(int *)((t0 + 0x78));
    if (t38 == 11) {
        return TrailerInit(t0, 0x1);
    }
    return t38;
}
