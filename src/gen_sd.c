/* Straight-line functions with calls and guards (batch gen_sd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndGetG2TransMode(void);

int nlsndGetG2TransMode(void)
{
    return (*(int *)0xC2B7714);
}
