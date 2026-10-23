/* Straight-line functions with calls and guards (batch gen_ama): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void Put_TotalDrum_Roll(int a4);

void Put_TotalDrum_Roll(int a4)
{
    int t18;
    int stk[2];

    int R0;
    int R1;
    int R3;
    int R4;
    int T_;
    R4 = a4;
    L_C05473E:;
    R4 = (0xC2A8DBC);
    if (((*(int *)0xC2A8DD8) == 0)) goto L_C054772;
    goto L_C054748;
    L_C054748:;
    if (((*(int *)((R4 + 0x18))) == 0)) goto L_C054772;
    goto L_C05474E;
    L_C05474E:;
    if (((*(int *)((R4 + 0x14))) == 0)) goto L_C054772;
    goto L_C054754;
    L_C054754:;
    if (((*(int *)((R4 + 0x10))) == 0)) goto L_C054772;
    goto L_C05475A;
    L_C05475A:;
    if (((*(int *)((R4 + 0xC))) == 0)) goto L_C054772;
    goto L_C054760;
    L_C054760:;
    if (((*(int *)((R4 + 0x8))) == 0)) goto L_C054772;
    goto L_C054766;
    L_C054766:;
    if (((*(int *)((R4 + 0x4))) == 0)) goto L_C054772;
    goto L_C05476C;
    L_C05476C:;
    if (((*(int *)((R4 + 0x0))) != 0)) goto L_C054780;
    goto L_C054772;
    L_C054772:;
    t18 = (int)((int)((*(int *)0xC2A8DE0) + 0x1) % (int)0x4);
    *(unsigned int *)0xC2A8DE0 = t18;
    R0 = (t18);
    goto L_C054780;
    L_C054780:;
}
