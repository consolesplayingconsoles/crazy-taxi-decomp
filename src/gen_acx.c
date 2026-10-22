/* Straight-line functions with calls and guards (batch gen_acx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camGetOnMid(void);
int camGetOnFar(void);

int camGetOnFar(void)
{
    return camGetOnMid();
}
