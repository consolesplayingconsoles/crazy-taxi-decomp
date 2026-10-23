/* Straight-line functions with calls and guards (batch gen_re): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMvSendTriangle(int, int, int);
int nlMvSendFace1(int a4, int a5);

int nlMvSendFace1(int a4, int a5)
{
    return nlMvSendTriangle(((((*(short *)((a5 + 0x0))) << 2) << 2) + a4), ((((*(short *)((a5 + 0x2))) << 2) << 2) + a4), ((((*(short *)((a5 + 0x4))) << 2) << 2) + a4));
}
