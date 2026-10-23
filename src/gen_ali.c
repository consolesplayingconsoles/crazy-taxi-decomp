/* Straight-line functions with calls and guards (batch gen_ali): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int nlPrintColor(int);
int Result_Next_State(int a4);

int Result_Next_State(int a4)
{
    int t0;
    int t15;
    int t28;
    int stk[3];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R14;
    int T_;
    R4 = a4;
    L_C0595E8:;
    t0 = *(int *)0xC2A97D8;
    R14 = (0xC2A97D8);
    R4 = (t0);
    if ((t0 == 0)) goto L_C059624;
    goto L_C0595F4;
    L_C0595F4:;
    if ((R4 == 0x3E7)) goto L_C059612;
    goto L_C0595FA;
    L_C0595FA:;
    if ((R4 == 99)) goto L_C059612;
    goto L_C059602;
    L_C059602:;
    if (((int)(*(int *)0xC2A96F4) >= (int)((*(int *)0xC2A97A8) + 0x186))) goto L_C059646;
    goto L_C059612;
    L_C059612:;
    if ((R4 == 0)) goto L_C059624;
    goto L_C059616;
    L_C059616:;
    if ((R4 == 0x3E7)) goto L_C059624;
    goto L_C05961C;
    L_C05961C:;
    if ((R4 != 99)) goto L_C059634;
    goto L_C059624;
    L_C059624:;
    if (((int)(*(int *)0xC2A96F4) >= (int)((*(int *)0xC2A97A8) + 0x1FE))) goto L_C059646;
    goto L_C059634;
    L_C059634:;
    t15 = *(int *)0xC2A97E0;
    R0 = (t15);
    if ((t15 != 1)) goto L_C05967A;
    goto L_C05963C;
    L_C05963C:;
    R0 = (0xC2A97E4);
    if (((int)(*(int *)0xC2A97E4) < (int)0x78)) goto L_C05967A;
    goto L_C059646;
    L_C059646:;
    nlPrintColor(0xFFFFFFFF);
    if (((*(int *)((R14 + 0x0))) == 0)) goto L_C05965A;
    goto L_C059652;
    L_C059652:;
    if (((int)(*(int *)((R14 + 0x0))) < (int)0x63)) goto L_C059674;
    goto L_C05965A;
    L_C05965A:;
    if (((*(int *)0xC1EE210) == 2)) goto L_C059674;
    goto L_C059662;
    L_C059662:;
    t28 = GetMenuMode(0x1);
    R0 = (t28);
    if ((t28 != 0)) goto L_C059674;
    goto L_C05966C;
    L_C05966C:;
    *(unsigned int *)0xC1EE238 = 0xC;
    goto L_C05967A;
    L_C05967A:;
    return R0;
    L_C059674:;
    *(unsigned int *)0xC1EE238 = 0x2;
    R0 = (0x2);
    goto L_C05967A;
}
