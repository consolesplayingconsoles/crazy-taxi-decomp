/* Straight-line functions with calls and guards (batch gen_ro): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndCheckPackLoadError(int, int);
int nlsndPackLoadInit(int, int, int, int);
int nlsndPackLoadLockBG(int a4, int a5, int a6);

int nlsndPackLoadLockBG(int a4, int a5, int a6)
{
    int t1;
    int t8;
    int t2;
    int stk[7] = {0};

    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    t1 = nlsndCheckPackLoadError(a4, (*(int *)(((int)stk + 8))));
    t8 = t1;
    if (t1 != 0) {
    } else {
        t2 = *(int *)((a4 + 0x8));
        *(unsigned int *)0xC2B7710 = (nlsndPackLoadInit((*(int *)(((int)stk + 8))), (*(int *)((a4 + 0x4))), t2, ((int)stk + 4)));
        *(unsigned int *)0xC2B76FC = 0x1001;
        *(unsigned int *)0xC2B7700 = (*(int *)(((int)stk + 12)));
        *(unsigned int *)0xC2B7704 = t2;
        *(unsigned int *)0xC2B7708 = (*(int *)(((int)stk + 4)));
        t8 = 0x0;
    }
    return t8;
}
