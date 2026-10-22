/* Straight-line functions with calls and guards (batch gen_np): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetMatrix(int);
int nlLoadMatrix(int);
int FUN_0c077270(void);

int FUN_0c077270(void)
{
    nlGetMatrix(0x0);
    *(unsigned int *)0xC2B31E4 = (*(int *)0xC2B31E0);
    *(unsigned short *)0xC2B31DC = 0x0;
    return nlLoadMatrix(0x0);
}
