/* Straight-line functions with calls and guards (batch gen_abq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndStreamGetFreq(int);
int mwSbGetSfreq(int a4);

int mwSbGetSfreq(int a4)
{
    int t1;

    t1 = nlsndStreamGetFreq((*(short *)((a4 + 0x6))));
    *(unsigned int *)((a4 + 0x14)) = t1;
    return t1;
}
