/* Straight-line functions with calls and guards (batch gen_rk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMvSendTriangle(int, int, int);
int nlMvSendFace7(int a4, int a5, int a6, int a7);

int nlMvSendFace7(int a4, int a5, int a6, int a7)
{
    return nlMvSendTriangle(((((*(short *)((a5 + 0x4))) << 2) << 2) + a4), ((((*(short *)((a7 + 0x4))) << 2) << 2) + a6), ((((*(short *)((a7 + 0x2))) << 2) << 2) + a6));
}
