/* Straight-line functions with calls and guards (batch gen_acg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int convergeRot(int, int, float);
int convergeRotLimit(int a4, int a5, float f4, float f5);

int convergeRotLimit(int a4, int a5, float f4, float f5)
{
    int t0;
    int t4;
    int t1;

    t0 = convergeRot(a4, a5, f4);
    t4 = (int)(-f5);
    if ((-f5) > (float)t0) {
    } else {
        t1 = t0;
        if ((float)t0 > f5) {
            t1 = (int)f5;
        }
        t4 = t1;
    }
    return t4;
}
