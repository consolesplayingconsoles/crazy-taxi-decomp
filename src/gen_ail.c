/* Straight-line functions with calls and guards (batch gen_ail): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void EndVM_CTLogo(void);

void EndVM_CTLogo(void)
{
    *(unsigned int *)0xC2A9FA8 = ((*(int *)0xC2A9FA8) & 0xFFFFFFFE);
}
