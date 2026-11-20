/* Straight-line functions with calls and guards (batch gen_no): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcVector(int, int);
void nlCalcVectors(int a4, int a5, int a6);

void nlCalcVectors(int a4, int a5, int a6)
{
    int t1;
    int t2;
    int t3;
    int stk[5] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    for (;;) {
        t1 = *(int *)(((int)stk + 12));
        *(unsigned int *)(((int)stk + 12)) = (t1 - 1);
        if ((int)(t1 - 1) < 0) {
            break;
        }
        t2 = *(int *)(((int)stk + 8));
        *(unsigned int *)(((int)stk + 8)) = (t2 + 0xC);
        t3 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t3 + 0xC);
        nlCalcVector(((t3 + 0xC) - 12), ((t2 + 0xC) - 12));
    }
}
