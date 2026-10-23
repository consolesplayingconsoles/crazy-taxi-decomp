/* Straight-line functions with calls and guards (batch gen_vq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitArrow(int);
int Init_Remain_Arrow(void);

int Init_Remain_Arrow(void)
{
    int t0;
    int t2;

    t0 = *(signed char *)0xC2A98FC;
    t2 = 0xC131030;
    if ((*(int *)0xC1EE214) == 10) {
        t2 = 0xC131084;
    }
    return InitArrow((t2 + (signed char)(((t0 << 1) + t0) << 2)));
}
