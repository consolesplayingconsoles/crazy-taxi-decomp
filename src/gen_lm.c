/* Straight-line functions with calls and guards (batch gen_lm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syCachePurgeAll(void);
int syBtCheckDisc(void);

int syBtCheckDisc(void)
{
    int t1;

    syCachePurgeAll();
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int))(t1))(0x2);
}
