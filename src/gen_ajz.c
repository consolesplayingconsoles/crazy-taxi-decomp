/* Straight-line functions with calls and guards (batch gen_ajz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c14ecc6(void);

int FUN_0c14ecc6(void)
{
    int t0;

    t0 = *(int *)0xFF00001C;
    *(unsigned int *)0xFF00001C = (t0 | 0x8);
    return (t0 | 0x8);
}
