/* Straight-line functions with calls and guards (batch gen_jl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void usr_adx_err_func(void);

void usr_adx_err_func(void)
{
    *(unsigned int *)0xC1EE208 = ((*(int *)0xC1EE208) + 0x1);
}
