/* Straight-line functions with calls and guards (batch gen_qv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void goiToolPointEntry(int a4, int a5, int a6, int a7);

void goiToolPointEntry(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;

    if ((int)a4 < 0) {
        *(unsigned int *)0xC2A5AEC = 0x0;
    } else {
        t0 = *(int *)0xC2A5AEC;
        if ((int)t0 < (int)0xC8) {
            *(unsigned int *)((((t0 << 2) << 2) + 0xC2A4E6C)) = a4;
            t1 = *(int *)0xC2A5AEC;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((((t1 << 2) << 2) + 0xC2A4E6C) + 0x4)) = *(struct mv3 *)(a5); }
            t2 = *(int *)0xC2A5AEC;
            *(unsigned int *)0xC2A5AEC = (t2 + 0x1);
        }
    }
}
