/* Straight-line functions with calls and guards (batch gen_aqr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetCommonTextureOffset(int);
int nlSpriteFreeTexture(int, int);
int gdc_SpriteFreeMenu(void);

/* manual: no arguments: the registers are overwritten before use */
int gdc_SpriteFreeMenu(void)
{
    int t2;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F1;
    float F4;
    float F6;
    int T_;
    L_C0301DE:;
    nlSetCommonTextureOffset(0x208);
    nlSpriteFreeTexture(0xC144D58, 0xC08B700);
    t2 = *(int *)0xC2A11C0;
    R13 = (0xC073AC0);
    R14 = (0xC07DE30);
    R4 = (t2);
    if ((t2 != 0)) goto L_C030268;
    goto L_C030206;
    L_C030206:;
    nlSetCommonTextureOffset(0x244);
    R0 = ((nlSpriteFreeTexture(0xC1450C8, 0xC08B700)));
    goto L_C0302D6;
    L_C0302D6:;
    return R0;
    L_C030268:;
    R0 = (R4);
    R10 = (0xC145DF8);
    R11 = (0xC08B890);
    R12 = (0x2A8);
    R9 = (0xC08BA70);
    if ((R4 == 1)) goto L_C0302CA;
    goto L_C030278;
    L_C030278:;
    if ((R0 == 2)) goto L_C030288;
    goto L_C03027C;
    L_C03027C:;
    if ((R0 == 3)) goto L_C03029E;
    goto L_C030280;
    L_C030280:;
    if ((R0 == 4)) goto L_C0302B4;
    goto L_C030284;
    L_C030284:;
    goto L_C0302CA;
    L_C0302CA:;
    nlSetCommonTextureOffset(R12);
    R4 = (0xC1456D8);
    R5 = (R11);
    goto L_C0302D2;
    L_C0302D2:;
    R0 = ((nlSpriteFreeTexture(R4, R5)));
    goto L_C0302D6;
    L_C0302B4:;
    nlSetCommonTextureOffset(R12);
    nlSpriteFreeTexture(R10, R11);
    nlSetCommonTextureOffset(0x384);
    R4 = (0xC146778);
    R5 = (R9);
    goto L_C0302D2;
    L_C03029E:;
    nlSetCommonTextureOffset(R12);
    nlSpriteFreeTexture(R10, R11);
    nlSetCommonTextureOffset(0x320);
    R4 = (0xC1462B8);
    R5 = (R9);
    goto L_C0302D2;
    L_C030288:;
    nlSetCommonTextureOffset(R12);
    nlSpriteFreeTexture(R10, R11);
    nlSetCommonTextureOffset(0x352);
    R4 = (0xC146518);
    R5 = (R9);
    goto L_C0302D2;
}
