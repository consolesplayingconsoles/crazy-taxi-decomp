/* Straight-line functions with calls and guards (batch gen_qs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSetCommonTextureOffset(int);
int nlSpriteFreeTexture(int, int);
int gdc_SpriteFreeMenu(void);

int gdc_SpriteFreeMenu(void)
{
    int t2;
    int t4;
    int t32;
    int t33;
    int t29;
    int t30;
    int t24;
    int t25;
    int t17;
    int t18;
    int t10;
    int t11;

    nlSetCommonTextureOffset(0x208);
    nlSpriteFreeTexture(0xC144D58, 0xC08B700);
    t2 = *(int *)0xC2A11C0;
    if (t2 == 0) {
        nlSetCommonTextureOffset(0x244);
        t4 = nlSpriteFreeTexture(0xC1450C8, 0xC08B700);
        t33 = t4;
    } else {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    if (t2 != 4) {
                        nlSetCommonTextureOffset(0x2A8);
                        t10 = 0xC1456D8;
                        t11 = 0xC08B890;
                    } else {
                        nlSetCommonTextureOffset(0x2A8);
                        nlSpriteFreeTexture(0xC145DF8, 0xC08B890);
                        nlSetCommonTextureOffset(0x384);
                        t10 = 0xC146778;
                        t11 = 0xC08BA70;
                    }
                    t17 = t10;
                    t18 = t11;
                } else {
                    nlSetCommonTextureOffset(0x2A8);
                    nlSpriteFreeTexture(0xC145DF8, 0xC08B890);
                    nlSetCommonTextureOffset(0x320);
                    t17 = 0xC1462B8;
                    t18 = 0xC08BA70;
                }
                t24 = t17;
                t25 = t18;
            } else {
                nlSetCommonTextureOffset(0x2A8);
                nlSpriteFreeTexture(0xC145DF8, 0xC08B890);
                nlSetCommonTextureOffset(0x352);
                t24 = 0xC146518;
                t25 = 0xC08BA70;
            }
            t29 = t24;
            t30 = t25;
        } else {
            nlSetCommonTextureOffset(0x2A8);
            t29 = 0xC1456D8;
            t30 = 0xC08B890;
        }
        t32 = nlSpriteFreeTexture(t29, t30);
        t33 = t32;
    }
    return t33;
}
