/* Straight-line functions with calls and guards (batch gen_uh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int VSklIpPlay(int, int, int, int, int, int, float);
float nlCeil(float);
float nlFloor(float);
float nlFraction(float);
int VSklSfPlay(int a4, int a5, int a6, float f4);

int VSklSfPlay(int a4, int a5, int a6, float f4)
{
    int fl;
    int ce;

    fl = (int)nlFloor(f4);
    ce = (int)nlCeil(f4);
    return VSklIpPlay(a4, fl, a4, ce, a5, a6, nlFraction(f4));
}

