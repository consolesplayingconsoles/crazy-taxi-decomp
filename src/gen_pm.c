/* Straight-line functions with calls and guards (batch gen_pm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int LetsMakeAquarium(void);

int LetsMakeAquarium(void)
{
    float u0;
    int t1;
    int t2;

    *(unsigned int *)0xC13F514 = 0x0;
    u0 = *(float *)0xC072A34;
    t1 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((short)((((t1 << 2) << 1) + t1) << 2) + 0xC2AE788)) = *(struct mv3 *)(0xC0D5530); }
        *(unsigned int *)((((short)((((t1 << 2) << 1) + t1) << 2) + 0xC2AE788) + 0xC)) = 0x0;
        t2 = ((short)((((t1 << 2) << 1) + t1) << 2) + 0xC2AE788);
        t1 = (t1 + 0x1);
        *(unsigned int *)((t2 + 0x10)) = 0x0;
        *(float *)((t2 + 0x14)) = u0;
        *(unsigned int *)((t2 + 0x18)) = 0x0;
        *(unsigned int *)((t2 + 0x1C)) = 0x0;
        *(unsigned int *)((t2 + 0x20)) = 0x0;
        if ((int)t1 >= (int)0x1E) {
            break;
        }
    }
    return 0x14;
}
