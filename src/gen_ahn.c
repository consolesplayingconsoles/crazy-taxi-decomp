/* Straight-line functions with calls and guards (batch gen_ahn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void ResetSBoardFlag(void);

void ResetSBoardFlag(void)
{
    int t0;
    int t1;

    t0 = 0x9;
    t1 = 0xC275820;
    for (;;) {
        t0 = (t0 - 1);
        *(unsigned int *)(((t1 - 0x4) + 0x0)) = 0x0;
        t1 = (t1 - 0x4);
        if ((int)t0 < 0) {
            break;
        }
    }
    *(unsigned int *)0xC275820 = 0x9;
}
