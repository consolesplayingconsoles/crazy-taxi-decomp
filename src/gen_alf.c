/* Straight-line functions with calls and guards (batch gen_alf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Drv_CheckSideClear(int, int);
float Drv_FacePsgFrame(int, float, float, float);
int Drv_SetMotion(int, float);
float nlInnerProduct(int, int);
int nlSubVector3op(int, int, int);
float nlUnitVector(int);
int Drv_StartGetOn(int a4, float f4, float f5, float f6);

int Drv_StartGetOn(int a4, float f4, float f5, float f6)
{
    int stk[268];

    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    float R1008;
    R1008 = *(float *)((int)stk + 8);
    v0_5 = a4;
    w0_1 = f4;
    w0_2 = f5;
    w0_3 = f6;
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x3EC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4CF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x3CC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D14); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x3AC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D34); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x38C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D54); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x36C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D74); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x34C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4D94); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x32C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4DB4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x30C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4DD4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x2EC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4DF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x2CC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E14); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x2AC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E34); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x28C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E54); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x26C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E74); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x24C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4E94); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x22C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4EB4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x20C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4ED4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x1EC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4EF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x1CC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F14); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x1AC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F34); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x18C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F54); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x16C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F74); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x14C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4F94); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x12C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4FB4); }
    v0_6 = (0x20);
    v0_1 = ((0x10C + ((int)stk + 4)));
    v0_0 = (0xC2AD000);
    v0_3 = (0xC0D4FD4);
    w0_0 = (0.0f);
    v0_2 = 0;
    for (; v0_2 < (int)v0_6; v0_2++) *(unsigned char *)(v0_1 + v0_2) = *(unsigned char *)(v0_3 + v0_2);
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xEC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D4FF4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xCC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5014); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0xAC + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5034); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((0x8C + ((int)stk + 4))) = *(struct mv8 *)(0xC0D5054); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x6C)) = *(struct mv8 *)(0xC0D5074); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x4C)) = *(struct mv8 *)(0xC0D5094); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0x2C)) = *(struct mv8 *)(0xC0D50B4); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 4) + 0xC)) = *(struct mv8 *)(0xC0D50D4); }
    v0_6 = (v0_5);
    v0_3 = ((*(int *)((v0_0 + 0x18))));
    v0_2 = ((-((((((*(signed char *)((v0_0 + 0x1DF))) & 32) == 0)) ? 1 : 0) - 1)));
    v0_1 = (0xC0D3068);
    v0_4 = (0xC0D3068);
    if ((v0_5 == 0)) goto L_C06240C;
    if ((v0_6 != 1)) goto L_C0623F8;
    if ((v0_2 == 0)) goto L_C0626F8;
    v0_2 = (0xC8E68CC);
    L_C0626FA:;
    *(unsigned int *)((v0_0 + 0x1D0)) = v0_1;
    *(unsigned int *)((v0_0 + 0x1D4)) = 0xC0D3080;
    w0_1 = Drv_FacePsgFrame(v0_3, w0_1, w0_2, w0_3);
    Drv_SetMotion(v0_2, w0_1);
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = ((*(signed char *)(((0x1DF + v0_0) + 0x0))) | 0x80);
    *(float *)((v0_0 + 0xF4)) = w0_0;
    w0_0 = ((*(float *)0xC0627F4));
    L_C06274E:;
    *(float *)((v0_0 + 0xF8)) = w0_0;
    v0_6 = (0xF8);
    L_C062778:;
    return v0_6;
    L_C0626F8:;
    v0_2 = (0xC8E7070);
    goto L_C0626FA;
    L_C0623F8:;
    if ((v0_6 != 2)) goto L_C062400;
    if ((v0_2 == 0)) goto L_C06272C;
    v0_5 = (0xC8AA754);
    L_C06272E:;
    *(unsigned int *)((v0_0 + 0x1D0)) = v0_1;
    *(unsigned int *)((v0_0 + 0x1D4)) = 0xC0D4A10;
    Drv_SetMotion(v0_5, w0_0);
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = ((*(signed char *)(((0x1DF + v0_0) + 0x0))) | 0x80);
    *(float *)((v0_0 + 0xF4)) = w0_0;
    w0_0 = ((*(float *)0xC062804));
    goto L_C06274E;
    L_C06272C:;
    v0_5 = (0xC8AB4C8);
    goto L_C06272E;
    L_C062400:;
    if ((v0_6 != 3)) goto L_C062408;
    *(unsigned int *)((v0_0 + 0x20)) = 0xC8E8E0C;
    *(unsigned int *)((v0_0 + 0x1D0)) = v0_4;
    *(unsigned int *)((v0_0 + 0x1D4)) = 0xC0D4A30;
    *(float *)((v0_0 + 0x24)) = w0_0;
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = ((*(signed char *)(((0x1DF + v0_0) + 0x0))) & 0x7F);
    *(float *)((v0_0 + 0xF4)) = w0_0;
    *(float *)((v0_0 + 0xF8)) = w0_0;
    v0_6 = (0xF8);
    goto L_C062778;
    L_C062408:;
    goto L_C062778;
    L_C06240C:;
    nlSubVector3op(((int)stk + 4), (v0_3 + 0x4), (v0_0 + 0x4));
    R1008 = w0_0;
    w0_2 = nlUnitVector(((int)stk + 4));
    w0_3 = nlInnerProduct(0xC2AD1F8, ((int)stk + 4));
    w0_1 = nlInnerProduct(0xC2AD1E0, ((int)stk + 4));
    *(unsigned int *)(((0x1DC + v0_0) + 0x0)) = (((*(int *)(((0x1DC + v0_0) + 0x0))) & 0xDFFFFFFF) | ((unsigned int)((int)((unsigned int)(Drv_CheckSideClear(v0_3, ((int)stk + 4))) & 0x1)) << 29));
    w0_4 = (w0_3);
    w0_3 = (w0_2);
    w0_5 = (w0_1);
    w0_1 = (80.0f);
    w0_2 = (40.0f);
    if (((*(int *)((v0_0 + 0x0))) != 3)) goto L_C06250E;
    if ((((*(signed char *)((v0_3 + 0x14B))) & 2) == 0)) goto L_C0624D0;
    v0_5 = ((0xCC + ((int)stk + 4)));
    v0_2 = ((0xAC + ((int)stk + 4)));
    v0_1 = ((((int)stk + 4) + 0xC));
    v0_4 = ((0x8C + ((int)stk + 4)));
    L_C062526:;
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = (((*(signed char *)(((0x1DF + v0_0) + 0x0))) & 0xE7) | 0x18);
    L_C062590:;
    v0_3 = ((v0_4 + 0x10));
    w0_1 = (0.382683426f);
    w0_2 = (0.923879504f);
    w0_3 = (-0.923879504f);
    w0_6 = (-0.382683426f);
    if ((!(w0_4 > 0.0f))) goto L_C062648;
    if ((!(w0_5 > w0_2))) goto L_C062604;
    v0_4 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x0)));
    v0_6 = (0x1D0);
    v0_3 = ((*(int *)((v0_3 + 0x0))));
    v0_5 = (v0_4);
    L_C062656:;
    *(unsigned int *)((v0_0 + (v0_6 + 0x4))) = v0_3;
    v0_1 = ((*(int *)((v0_1 + 0x0))));
    L_C06268C:;
    *(unsigned int *)((v0_0 + 0x1C)) = v0_1;
    L_C0626B8:;
    Drv_SetMotion(v0_5, w0_0);
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = ((*(signed char *)(((0x1DF + v0_0) + 0x0))) | 0x80);
    *(float *)((v0_0 + 0xF4)) = w0_0;
    *(float *)((v0_0 + 0xF8)) = 15.0f;
    v0_1 = *(signed char *)(((0x1DF + v0_0) + 0x0));
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = (v0_1 | 0x2);
    v0_6 = ((v0_1 | 0x2));
    goto L_C062778;
    L_C062604:;
    if ((!(w0_5 > w0_1))) goto L_C06261A;
    v0_5 = *(int *)((v0_5 + 0x4));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x4)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_4 + 0x4)));
    v0_3 = ((*(int *)((v0_1 + 0x4))));
    v0_5 = (v0_5);
    L_C062674:;
    *(unsigned int *)((v0_0 + 0x1C)) = v0_3;
    goto L_C0626B8;
    L_C06261A:;
    if ((!(w0_5 > w0_6))) goto L_C062630;
    v0_3 = *(int *)((v0_5 + 0x8));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x8)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_4 + 0x8)));
    v0_1 = ((*(int *)((v0_1 + 0x8))));
    v0_5 = (v0_3);
    goto L_C06268C;
    L_C062630:;
    if ((!(w0_5 > w0_3))) goto L_C0626A6;
    v0_5 = *(int *)((v0_5 + 0xC));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0xC)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_4 + 0xC)));
    v0_3 = ((*(int *)((v0_1 + 0xC))));
    v0_5 = (v0_5);
    goto L_C062674;
    L_C0626A6:;
    v0_4 = *(int *)((v0_5 + 0x10));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x10)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_3 + 0x0)));
    v0_3 = ((*(int *)((v0_1 + 0x10))));
    v0_5 = (v0_4);
    L_C0626B6:;
    *(unsigned int *)((v0_0 + 0x1C)) = v0_3;
    goto L_C0626B8;
    L_C062648:;
    if ((!(w0_5 > w0_2))) goto L_C062660;
    v0_5 = *(int *)((v0_5 + 0x0));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x0)));
    v0_6 = (0x1D0);
    v0_3 = ((*(int *)((v0_4 + 0x0))));
    v0_5 = (v0_5);
    goto L_C062656;
    L_C062660:;
    if ((!(w0_5 > w0_1))) goto L_C062678;
    v0_5 = *(int *)((v0_5 + 0x1C));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x1C)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_4 + 0x1C)));
    v0_3 = ((*(int *)((v0_1 + 0x1C))));
    v0_5 = (v0_5);
    goto L_C062674;
    L_C062678:;
    if ((!(w0_5 > w0_6))) goto L_C062690;
    v0_3 = *(int *)((v0_5 + 0x18));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x18)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_4 + 0x18)));
    v0_1 = ((*(int *)((v0_1 + 0x18))));
    v0_5 = (v0_3);
    goto L_C06268C;
    L_C062690:;
    if ((!(w0_5 > w0_3))) goto L_C0626A6;
    v0_5 = *(int *)((v0_5 + 0x14));
    *(unsigned int *)((v0_0 + 0x1D0)) = (*(int *)((v0_2 + 0x14)));
    *(unsigned int *)((v0_0 + 0x1D4)) = (*(int *)((v0_4 + 0x14)));
    v0_3 = ((*(int *)((v0_1 + 0x14))));
    v0_5 = (v0_5);
    goto L_C0626B6;
    L_C0624D0:;
    if ((!(w0_3 > w0_1))) goto L_C0624E6;
    v0_5 = ((0x12C + ((int)stk + 4)));
    v0_2 = ((0x10C + ((int)stk + 4)));
    v0_1 = ((((int)stk + 4) + 0x2C));
    v0_4 = ((0xEC + ((int)stk + 4)));
    L_C062548:;
    *(unsigned char *)(((0x1DF + v0_0) + 0x0)) = (((*(signed char *)(((0x1DF + v0_0) + 0x0))) & 0xE7) | 0x10);
    goto L_C062590;
    L_C0624E6:;
    if ((!(w0_3 > w0_2))) goto L_C0624FC;
    v0_5 = ((0x18C + ((int)stk + 4)));
    v0_2 = ((0x16C + ((int)stk + 4)));
    v0_1 = ((((int)stk + 4) + 0x4C));
    v0_4 = ((0x14C + ((int)stk + 4)));
    L_C06256A:;
    v0_6 = ((((*(signed char *)(((0x1DF + v0_0) + 0x0))) & 0xE7) | 0x8));
    v0_3 = ((0x1DF + v0_0));
    L_C06258E:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_6;
    goto L_C062590;
    L_C0624FC:;
    v0_5 = ((0x1EC + ((int)stk + 4)));
    v0_2 = ((0x1CC + ((int)stk + 4)));
    v0_1 = ((((int)stk + 4) + 0x6C));
    v0_4 = ((0x1AC + ((int)stk + 4)));
    L_C062586:;
    v0_6 = (((*(signed char *)(((0x1DF + v0_0) + 0x0))) & 0xE7));
    v0_3 = ((0x1DF + v0_0));
    goto L_C06258E;
    L_C06250E:;
    if ((((*(signed char *)((v0_3 + 0x14B))) & 2) == 0)) goto L_C062534;
    v0_5 = ((0x2CC + ((int)stk + 4)));
    v0_2 = ((0x2AC + ((int)stk + 4)));
    v0_1 = ((0x20C + ((int)stk + 4)));
    v0_4 = ((0x28C + ((int)stk + 4)));
    goto L_C062526;
    L_C062534:;
    if ((!(w0_3 > w0_1))) goto L_C062556;
    v0_5 = ((0x32C + ((int)stk + 4)));
    v0_2 = ((0x30C + ((int)stk + 4)));
    v0_1 = ((0x22C + ((int)stk + 4)));
    v0_4 = ((0x2EC + ((int)stk + 4)));
    goto L_C062548;
    L_C062556:;
    if ((!(w0_3 > w0_2))) goto L_C062576;
    v0_5 = ((0x38C + ((int)stk + 4)));
    v0_2 = ((0x36C + ((int)stk + 4)));
    v0_1 = ((0x24C + ((int)stk + 4)));
    v0_4 = ((0x34C + ((int)stk + 4)));
    goto L_C06256A;
    L_C062576:;
    v0_5 = ((0x3EC + ((int)stk + 4)));
    v0_2 = ((0x3CC + ((int)stk + 4)));
    v0_1 = ((0x26C + ((int)stk + 4)));
    v0_4 = ((0x3AC + ((int)stk + 4)));
    goto L_C062586;
}
