/* Straight-line functions with calls and guards (batch gen_ajo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlsndG2DmaInit(void);

void nlsndG2DmaInit(void)
{
    int t0;
    int t1;

    t0 = 0x10;
    t1 = 0xC2B783C;
    for (;;) {
        t0 = (t0 - 0x1);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
        t1 = (t1 + 0x10);
        if (t0 == 0) {
            break;
        }
    }
    *(unsigned int *)0xC2B7714 = 0x0;
}
