/* Straight-line functions with calls and guards (batch gen_qu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int set_event(int, int);
void FUN_0c037534(void);

void FUN_0c037534(void)
{
    int t0;
    float u1;
    float u2;
    float u3;
    float u4;

    t0 = set_event(0x5C, 0xC0370C4);
    *(unsigned int *)0xC27428C = t0;
    if (t0 != 0) {
        u1 = *(float *)0xC037678;
        *(float *)((t0 + 0x14)) = u1;
        u2 = *(float *)0xC03767C;
        *(float *)((t0 + 0x18)) = u2;
        u3 = *(float *)0xC037680;
        *(float *)((t0 + 0x1C)) = u3;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC0965F0); }
        *(unsigned int *)((t0 + 0x58)) = 0x0;
        { struct mv9 { int w[9]; }; *(struct mv9 *)((t0 + 0x2C)) = *(struct mv9 *)(0xC096608); }
        u4 = *(float *)0xC037690;
        *(float *)((t0 + 0x50)) = u4;
        *(unsigned int *)((t0 + 0x54)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC274274) = *(struct mv3 *)((t0 + 0x14)); }
    }
}
