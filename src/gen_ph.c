/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void nlIntrHandlerEvent900(void);

void nlIntrHandlerEvent900(void)
{
    int t0;
    int t1;

    *(unsigned int *)0xC2B7620 = 0x1;
    t0 = *(int *)0xC2B75BC;
    if (t0 != 0) {
        t1 = ((int (*)(void))(t0))();
    }
}
