/* Straight-line functions with calls and guards (batch gen_rs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07ea70(int, int, int);
int nlsndCheckPackFreeError(int);
int FUN_0c07f1b0(int a4);

int FUN_0c07f1b0(int a4)
{
    int t0;
    int t4;
    int t1;
    int stk[5] = {0};

    t0 = nlsndCheckPackFreeError(a4);
    t4 = t0;
    if (t0 != 0) {
    } else {
        t1 = *(int *)(((((a4 << 1) + a4) << 2) + 0xC2B77E4));
        *(unsigned int *)0xC2B7710 = (FUN_0c07ea70(a4, t1, ((int)stk + 4)));
        *(unsigned int *)0xC2B76FC = 0x101;
        *(unsigned int *)0xC2B7704 = (-t1);
        *(unsigned int *)0xC2B7708 = (*(int *)(((int)stk + 4)));
        t4 = 0x0;
    }
    return t4;
}
