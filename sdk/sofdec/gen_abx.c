/* Straight-line functions with calls and guards (batch gen_abx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void mwlSbClearTrnsReq(int a4, int a5, int a6);

void mwlSbClearTrnsReq(int a4, int a5, int a6)
{
    *(unsigned char *)((a4 + 0x5)) = (*(signed char *)((a4 + 0x60)));
    *(unsigned char *)((a4 + 0x60)) = 0x0;
    *(unsigned int *)((a6 + 0x0)) = 0x0;
}
