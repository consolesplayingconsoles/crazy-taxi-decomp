/* Straight-line functions with calls and guards (batch gen_nz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetMatrix8(int);
int nlMultiPushedMatrix(void);
int nlMultiMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlMakeModelViewProjectMatrix(void);

int nlMakeModelViewProjectMatrix(void)
{
    nlPushMatrix((*(int *)0xC2B3208));
    nlMultiMatrix((*(int *)0xC2B31FC));
    nlMultiPushedMatrix();
    nlGetMatrix8(0xC2B33D0);
    return nlPopMatrix(0x1);
}
