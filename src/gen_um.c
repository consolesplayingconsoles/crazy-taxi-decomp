/* Straight-line functions with calls and guards (batch gen_um): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseTexFree(void);
int gdc_FileLoad(int, int, int);
int gdc_SpriteFreeMenu(void);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTexture(int, int);
int gdc_SpriteSetAdv(void);

int gdc_SpriteSetAdv(void)
{
    int t0;
    int t31;
    int t30;
    int t13;

    t0 = *(int *)0xC26E184;
    t31 = t0;
    if (t0 != 1) {
        if (t0 == 2) {
            gdc_SpriteFreeMenu();
        }
        if ((*(int *)0xC26E184) == 3) {
            gdc_CourseTexFree();
            nlSetCommonTextureOffset(0xF0);
            nlSpriteFreeTexture(0xC143EE8, 0xC08BFC0);
            if ((*(int *)0xC2A11C0) == 0) {
                nlSetCommonTextureOffset(0x1CC);
                t13 = 0xC144C88;
            } else {
                nlSetCommonTextureOffset(0x1D6);
                t13 = 0xC144D08;
            }
            nlSpriteFreeTexture(t13, 0xC08BB88);
        }
        if ((*(int *)0xC26E184) == 5) {
            gdc_CourseTexFree();
            nlSetCommonTextureOffset(0x1E0);
            nlSpriteFreeTexture(0xC1469C8, 0x0);
            gdc_SpriteFreeMenu();
        }
        nlSetCommonTextureOffset(0xE1);
        gdc_FileLoad(0xCB40000, 0xC08D66C, 0x0);
        nlObjPutSetReplaceTextureDirName(0xC146B68, 0x0);
        t30 = nlSetCommonTextureOffset(0x0);
        *(unsigned int *)0xC26E184 = 0x1;
        *(unsigned int *)0xC0E5318 = 0x3;
        t31 = t30;
    }
    return t31;
}
