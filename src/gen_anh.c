/* Straight-line functions with calls and guards (batch gen_anh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BigOnePut(float);
int BigOneSwims(void);

int BigOneSwims(void)
{
    int t0;

    t0 = *(int *)0xC1EE210;
    if (t0 != 0) {
        return t0;
    }
    if (!((*(float *)0xC179148) > -1237.0f)) {
        return BigOnePut(-1237.0f);
    }
    return 0x7C;
}
