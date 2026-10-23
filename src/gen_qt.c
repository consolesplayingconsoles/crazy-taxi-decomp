extern int MoveHelicopter();
/* Straight-line functions with calls and guards (batch gen_qt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int set_event(int, int);
void SetHelicopter(void);

void SetHelicopter(void)
{
    int t0;

    t0 = set_event(0x5C, ((int)MoveHelicopter));
    *(unsigned int *)0xC27428C = t0;
    if (t0 != 0) {
        *(float *)((t0 + 0x14)) = (8860.0f);
        *(float *)((t0 + 0x18)) = (-200.0f);
        *(float *)((t0 + 0x1C)) = (-3487.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x20)) = *(struct mv3 *)(0xC0965F0); }
        *(unsigned int *)((t0 + 0x58)) = 0x0;
        { struct mv9 { int w[9]; }; *(struct mv9 *)((t0 + 0x2C)) = *(struct mv9 *)(0xC096608); }
        *(float *)((t0 + 0x50)) = (0.16666666f);
        *(unsigned int *)((t0 + 0x54)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC274274) = *(struct mv3 *)((t0 + 0x14)); }
    }
}
