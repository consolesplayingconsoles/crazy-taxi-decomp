/* Straight-line functions with calls and guards (batch gen_uc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int KillColliObj(int);
int SetColliObj(int, int);
int calcCheckExec(int a4, int a5);

int calcCheckExec(int a4, int a5)
{
    int t21;

    if ((a5 & 0x8) != 0) {
        if (((*(int *)((a4 + 0x84))) & 0x8) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x14)) = *(struct mv3 *)((0x8C + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x20)) = *(struct mv3 *)((0x98 + a4)); }
            *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
            *(unsigned int *)((a4 + 0x40)) = 0x0;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x5C)) = *(struct mv3 *)(0xC0A4788); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x44)) = *(struct mv3 *)(0xC0A4788); }
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            *(float *)((a4 + 0x6C)) = 0.0f;
            *(float *)((a4 + 0x70)) = 0.0f;
            SetColliObj((a4 + 0x14), (*(int *)((((*(int *)((a4 + 0x78))) * 0xA8) + 0xC0A26C8))));
        } else {
            KillColliObj((a4 + 0x14));
        }
    }
    t21 = 0x1;
    if (((*(int *)((a4 + 0x84))) & 1) == 0) {
        if ((0x8 & (*(int *)((a4 + 0x84)))) != 0) {
            KillColliObj((a4 + 0x14));
        }
        t21 = 0x0;
    }
    return t21;
}
