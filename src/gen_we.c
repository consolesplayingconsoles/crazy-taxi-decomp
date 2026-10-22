/* Straight-line functions with calls and guards (batch gen_we): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int getPieceWindow(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

int getPieceWindow(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int t16;
    int t17;
    int t12;
    int t23;

    if ((int)(*(int *)((a4 + 0x0))) < (int)0x2) {
        t12 = ((int)((int)((*(int *)((a5 + (((int)((int)(((*(int *)((a6 + 0x0))) + (*(int *)((a4 + 0x0)))) - 2) % (int)(*(int *)((a7 + 0x0))))) << 2)))) + 0x1) % (int)a8));
    } else {
        t12 = ((int)((int)((*(int *)((a5 + (((int)((int)((*(int *)((a4 + 0x0))) - 2) % (int)(*(int *)((a7 + 0x0))))) << 2)))) + 0x1) % (int)a8));
    }
    *(unsigned int *)((a9 + 0x0)) = t12;
    t16 = (int)((int)((*(int *)((a4 + 0x0))) + 0x1) % (int)(*(int *)((a7 + 0x0))));
    t17 = *(int *)((a5 + (t16 << 2)));
    *(unsigned int *)((a10 + 0x0)) = t17;
    if ((int)t17 >= (int)(*(int *)((a9 + 0x0)))) {
        *(unsigned int *)((a11 + 0x0)) = (((*(int *)((a10 + 0x0))) - (*(int *)((a9 + 0x0)))) + 0x1);
        t23 = a11;
    } else {
        *(unsigned int *)((a11 + 0x0)) = ((((*(int *)((a10 + 0x0))) - (*(int *)((a9 + 0x0)))) + a8) + 0x1);
        t23 = (t16 << 2);
    }
    return t23;
}
