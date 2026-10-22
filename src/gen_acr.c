/* Straight-line functions with calls and guards (batch gen_acr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PcarEvInit(int);
int calcCheckExec(int, int);
int courseStatusEntry(int, int);
int set_event(int, int);
int TrainCarInit(int a4, int a5, int a6);

int TrainCarInit(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t3;
    int t5;
    int t6;
    int t9;
    float u18;

    t0 = 0xC048C48;
    if (a4 == 15) {
        t0 = 0xC0483E0;
    }
    t2 = set_event(0x12C, t0);
    if (t2 != 0) {
        t3 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t3 + 0x1);
        *(unsigned int *)((t2 + 0x74)) = ((t3 + 0x1) - 1);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
        *(unsigned int *)((t2 + 0x78)) = a4;
        *(unsigned int *)((t2 + 0x80)) = a5;
        if (a6 == 0) {
            t5 = *(int *)((t2 + 0x80));
            t6 = *(int *)0xC2A6690;
            t9 = *(int *)(((*(int *)((((((t5 << 1) + t5) << 2) + t6) + 0x4))) + 0x0));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t2)) = *(struct mv3 *)((((((t9 << 1) + t9) << 2) + (*(int *)((((((t5 << 1) + t5) << 2) + t6) + 0x0)))) - 120)); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t2)) = *(struct mv3 *)(a6); }
        }
        PcarEvInit(t2);
        u18 = (0.06f);
        u18 = u18 + (0.01f) * ((1000.0f) / (*(float *)((t2 + 0xB4))));
        *(float *)((t2 + 0xD0)) = u18;
        courseStatusEntry((*(int *)((t2 + 0x80))), (*(int *)((t2 + 0xD4))));
        calcCheckExec(t2, (*(int *)((t2 + 0x84))));
    }
    return t2;
}
