/* Straight-line functions with calls and guards (batch gen_amo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan2(float);
int TOANG2(int a4, float f4);

int TOANG2(int a4, float f4)
{
    int t0;

    t0 = nlArcTan2((-f4));
    *(unsigned short *)((a4 + 0x0)) = t0;
    return t0;
}
