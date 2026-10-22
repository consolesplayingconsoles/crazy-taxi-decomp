/* Straight-line functions with calls and guards (batch gen_ls): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void DO_NOT_LCDAccess(void);

void DO_NOT_LCDAccess(void)
{
    *(unsigned int *)0xC2A9FF0 = 0x1;
}
