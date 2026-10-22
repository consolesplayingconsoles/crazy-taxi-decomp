/* Straight-line functions with calls and guards (batch gen_acb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void NextGame(void);

void NextGame(void)
{
    *(unsigned int *)0xC1EE234 = 0x0;
    *(unsigned int *)0xC1EE238 = 0x0;
}
