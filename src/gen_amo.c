/* Straight-line functions with calls and guards (batch gen_amo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlArcTan2(float, float);
int TOANG2(int a4, float f4, float f5);

/* manual: TOANG2 passes fr5 on to nlArcTan2 (0C075A50 takes y in fr4, x in fr5; TOANG2 only negates fr4): the generated form took one float and
   its callers never set the second. */
int TOANG2(int a4, float f4, float f5)
{
    int t0;

    t0 = nlArcTan2((-f4), f5);
    *(unsigned short *)((a4 + 0x0)) = t0;
    return t0;
}
