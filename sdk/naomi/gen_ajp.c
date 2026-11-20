/* Straight-line functions with calls and guards (batch gen_ajp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlsndSetG2TransMode(int a4);

void nlsndSetG2TransMode(int a4)
{
    if (a4 == 0) {
        *(unsigned int *)0xC2B7714 = a4;
    }
}
