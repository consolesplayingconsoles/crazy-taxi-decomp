/* Straight-line functions with calls and guards (batch gen_amm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int);
int nd_SprPut(int a4, int a5, float f4, float f5);

int nd_SprPut(int a4, int a5, float f4, float f5)
{
    *(unsigned int *)((a4 + 0x0)) = a5;
    *(float *)((a4 + 0x4)) = f4;
    *(float *)((a4 + 0x8)) = f5;
    return nlSprPut(a4, a5);
}
