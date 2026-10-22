/* Straight-line functions with calls and guards (batch gen_acv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int camRestore(void);
int camGetOffEnd(void);

int camGetOffEnd(void)
{
    int t0;

    t0 = *(int *)0xC2AD590;
    if ((t0 & 2) == 0) {
        return camRestore();
    }
    return t0;
}
