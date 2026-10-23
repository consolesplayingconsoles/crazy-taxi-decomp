/* Straight-line functions with calls and guards (batch gen_ajw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlSetGP_CullingReverse(int a4);

void nlSetGP_CullingReverse(int a4)
{
    if (a4 == 0) {
        *(unsigned int *)0xC2B7948 = ((*(int *)0xC2B7948) & 0x7FFFFFFF);
    } else {
        *(unsigned int *)0xC2B7948 = ((*(int *)0xC2B7948) | 0x80000000);
    }
}
