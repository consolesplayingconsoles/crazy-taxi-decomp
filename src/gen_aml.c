/* Straight-line functions with calls and guards (batch gen_aml): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int selectDrawBar(void);

int selectDrawBar(void)
{
    *(unsigned int *)0xC2A7398 = 0x0;
    return nlSprPut(0xC2A7370);
}
