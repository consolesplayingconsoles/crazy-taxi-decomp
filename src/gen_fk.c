/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlGetMatrix(int);
int nlUnitMatrix(void);
int nlInitMatrixStack(int a4, int a5, int a6);

int nlInitMatrixStack(int a4, int a5, int a6)
{
    int t0;
    int t2;
    int t5;
    int t7;

    t0 = a6;
    if (a5 != ((a5 + 0x1F) & 0xFFFFFFE0)) {
        t0 = (a6 - 1);
    }
    t2 = t0;
    if ((int)t0 > (int)0x7FFF) {
        t2 = 0x7FFF;
    }
    *(unsigned short *)((a4 + 0x2)) = t2;
    *(unsigned short *)((a4 + 0x0)) = 0x0;
    *(unsigned int *)((a4 + 0x8)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    *(unsigned int *)((a4 + 0x4)) = ((a5 + 0x1F) & 0xFFFFFFE0);
    nlUnitMatrix();
    t5 = *(int *)((a4 + 0x8));
    nlGetMatrix(t5);
    t7 = *(int *)((a4 + 0x4));
    return t7;
}
