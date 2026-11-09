/* Straight-line functions with calls and guards (batch gen_acb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void NextGame(void);
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


void NextGame(void)
{
    (((struct o0_uint *)0xC1EE234)->v) = 0x0;
    (((struct o4_uint *)0xC1EE234)->v) = 0x0;
}
