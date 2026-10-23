/* Straight-line functions with calls and guards (batch gen_aih): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void Add_Sec_End(void);

void Add_Sec_End(void)
{
    *(unsigned int *)0xC2A760C = 0xFFFFFFFE;
}
