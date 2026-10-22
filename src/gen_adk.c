/* Straight-line functions with calls and guards (batch gen_adk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseTexFree(void);
int gdc_FileLoad(int, int, int);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTexture(int, int);
int gdc_SpriteSetMenu(void);

int gdc_SpriteSetMenu(void)
{
    int t0;
    int t82;
    int t70;
    int t27;
    int t69;
    int t9;
    int t60;
    int t61;
    int t54;
    int t55;
    int t45;
    int t46;
    int t36;
    int t37;

    t0 = *(int *)0xC26E184;
    t82 = t0;
    if (t0 == 2) {
    } else {
        t70 = t0;
        if (t0 == 5) {
        } else {
            gdc_CourseTexFree();
            if ((*(int *)0xC26E184) == 3) {
                nlSetCommonTextureOffset(0xF0);
                nlSpriteFreeTexture(0xC143EE8, 0xC08BFC0);
                if ((*(int *)0xC2A11C0) == 0) {
                    nlSetCommonTextureOffset(0x1CC);
                    t9 = 0xC144C88;
                } else {
                    nlSetCommonTextureOffset(0x1D6);
                    t9 = 0xC144D08;
                }
                nlSpriteFreeTexture(t9, 0xC08BB88);
            }
            if ((*(int *)0xC26E184) == 1) {
                nlSetCommonTextureOffset(0xE1);
                nlSpriteFreeTexture(0xC146B68, 0x0);
            }
            nlSetCommonTextureOffset(0x208);
            gdc_FileLoad(0xCB40000, 0xC08D5F4, 0x0);
            nlObjPutSetReplaceTextureDirName(0xC144D58, 0xC08B700);
            if ((*(int *)0xC2A11C0) == 0) {
                nlSetCommonTextureOffset(0x244);
                gdc_FileLoad(0xCB40000, 0xC08D600, 0x0);
                nlObjPutSetReplaceTextureDirName(0xC1450C8, 0xC08B700);
            } else {
                t27 = *(int *)0xC2A11C0;
                if (t27 != 1) {
                    if (t27 != 2) {
                        if (t27 != 3) {
                            if (t27 != 4) {
                                nlSetCommonTextureOffset(0x2A8);
                                gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                                t36 = 0xC1456D8;
                                t37 = 0xC08B890;
                            } else {
                                nlSetCommonTextureOffset(0x2A8);
                                gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                                nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                                nlSetCommonTextureOffset(0x384);
                                gdc_FileLoad(0xCB40000, 0xC08D630, 0x0);
                                t36 = 0xC146778;
                                t37 = 0xC08BA70;
                            }
                            t45 = t36;
                            t46 = t37;
                        } else {
                            nlSetCommonTextureOffset(0x2A8);
                            gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                            nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                            nlSetCommonTextureOffset(0x320);
                            gdc_FileLoad(0xCB40000, 0xC08D624, 0x0);
                            t45 = 0xC1462B8;
                            t46 = 0xC08BA70;
                        }
                        t54 = t45;
                        t55 = t46;
                    } else {
                        nlSetCommonTextureOffset(0x2A8);
                        gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                        nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                        nlSetCommonTextureOffset(0x352);
                        gdc_FileLoad(0xCB40000, 0xC08D618, 0x0);
                        t54 = 0xC146518;
                        t55 = 0xC08BA70;
                    }
                    t60 = t54;
                    t61 = t55;
                } else {
                    nlSetCommonTextureOffset(0x2A8);
                    gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                    t60 = 0xC1456D8;
                    t61 = 0xC08B890;
                }
                nlObjPutSetReplaceTextureDirName(t60, t61);
            }
            t69 = nlSetCommonTextureOffset(0x0);
            *(unsigned int *)0xC26E184 = 0x2;
            *(unsigned int *)0xC0E5318 = 0x3;
            t70 = t69;
        }
        t82 = t70;
    }
    return t82;
}
