/* Straight-line functions with calls and guards (batch gen_qg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int VSklIpPlay(int, float);
float nlCeil(float);
float nlFloor(float);
float nlFraction(float);
int VSklSfPlay(int a4, int a5, int a6, float f4);

int VSklSfPlay(int a4, int a5, int a6, float f4)
{
    float t2;
    int t3;

    nlFloor(f4);
    nlCeil(f4);
    t2 = nlFraction(f4);
    t3 = VSklIpPlay(a4, t2);
    return t3;
}
