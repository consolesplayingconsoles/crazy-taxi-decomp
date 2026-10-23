/* Straight-line functions with calls and guards (batch gen_ahz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nlObjPutSetFadeColor(float, float, float);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPutSEGALogo(void);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int Put_Adv_Rating(void);

int Put_Adv_Rating(void)
{
    int stk[9];

    *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)0xC0D0AC6);
    *(unsigned char *)((((int)stk + 4) + 0x1)) = (*(signed char *)0xC0D0AC7);
    *(unsigned char *)((((int)stk + 4) + 0x2)) = (*(signed char *)0xC0D0AC8);
    *(unsigned char *)((((int)stk + 4) + 0x3)) = (*(signed char *)0xC0D0AC9);
    *(unsigned char *)((((int)stk + 4) + 0x4)) = (*(signed char *)0xC0D0ACA);
    *(unsigned char *)((((int)stk + 4) + 0x5)) = (*(signed char *)0xC0D0ACB);
    pfSetFont(0x1);
    pfColor(0xFF00FF00, 0xFF00FF00, 0xFF00FF00, 0xFF00FF00);
    pfSize(1.0f, 1.0f);
    pfLocate((*(float *)0xC2A96D4), 70.0f);
    pfPuts(0xC0D0A54);
    pfSize(1.0f, 1.0f);
    pfLocate((*(float *)0xC2A96D8), 200.0f);
    pfPuts(0xC0D0A70);
    pfSize(1.5f, 1.5f);
    pfLocate((*(float *)0xC2A96DC), 250.0f);
    pfPuts(0xC0D0A88);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate(239.0f, 386.0f);
    pfPutSEGALogo();
    nlObjPutSetFadeColor(0.0f, 0.0f, 1.0f);
    return (ResetFadeColor());
}
