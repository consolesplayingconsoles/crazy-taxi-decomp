/* Straight-line functions with calls and guards (batch gen_lm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c14f414(void);
int FUN_0c15152c(void);

int FUN_0c15152c(void)
{
    int t1;

    FUN_0c14f414();
    t1 = *(int *)0x8C0000E0;
    return ((int (*)(int))(t1))(0x2);
}
