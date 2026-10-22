/* Straight-line functions with calls and guards (batch gen_nz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077470(int);
int FUN_0c077f60(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int FUN_0c078fc0(void);

int FUN_0c078fc0(void)
{
    nlPushMatrix((*(int *)0xC2B3208));
    nlMultiMatrix((*(int *)0xC2B31FC));
    FUN_0c077f60();
    FUN_0c077470(0xC2B33D0);
    return nlPopMatrix(0x1);
}
