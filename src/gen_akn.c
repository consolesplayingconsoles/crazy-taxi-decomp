/* Straight-line functions with calls and guards (batch gen_akn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syTmrInt1Cancel(void);

int syTmrInt1Cancel(void)
{
    int t0;

    t0 = *(signed char *)0xFFD80004;
    *(unsigned char *)0xFFD80004 = (t0 & 0xFD);
    *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFFDF);
    return (t0 & 0xFD);
}
