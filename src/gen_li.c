/* Straight-line functions with calls and guards (batch gen_li): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0742c0(int);
int FUN_0c074d10(int);
int FUN_0c074d20(void);
int FUN_0c074de0(int);
int FUN_0c074eb0(int);
int FUN_0c075090(void);
int FUN_0c075120(void);
int FUN_0c0775d0(int, int);
int FUN_0c077df0(int);
int InitRenderTexture1st(void);
int frameFlip(void);
int nlInitCommonTexture(int, int, int);
int nlInitPalette(int, int);
int nlInitPrint(void);
int nlInitSprite(int, int, int);
int nlLocate(int, int);
int nlObjPutInit(void);
int nlObjPutSetFadeColor(float, float, float);
int nlPerspective(int, float, float, float);
int nlPrintf(int, ...);
int nlPrnIndentOn(void);
int nlSetFontSize(int, int);
int nlUnitMatrix(void);
int paletteSetMode(int);
int setBorderColor(int);
int InitNaolib(void);

int InitNaolib(void)
{
    FUN_0c075120();
    FUN_0c0775d0(0xC1C1A38, 0x10);
    FUN_0c074d20();
    FUN_0c074de0(0x0);
    FUN_0c074d10(0x14A800);
    FUN_0c074eb0(0xCEA0000);
    FUN_0c075090();
    nlInitPrint();
    nlPrnIndentOn();
    setBorderColor(0x0);
    *(unsigned int *)0xC1EE220 = 0x1;
    nlSetFontSize(0x10, 0x10);
    nlLocate(0xA, 0xC);
    if ((*(int *)0xC1EE228) == 1) {
        nlPrintf(0xC08AAB8);
    } else {
        nlPrintf(0xC08AAD4);
    }
    frameFlip();
    frameFlip();
    nlSetFontSize(0x8, 0x8);
    FUN_0c077df0(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    FUN_0c077df0(0x1);
    nlInitCommonTexture(0xC1C1E78, 0x7D0, 0xBB8);
    nlInitSprite(0xC1E53AC, 0x3E8, 0x5DC);
    nlInitPalette(0xC1EDCE4, 0x40);
    paletteSetMode(0x2);
    FUN_0c0742c0(0x1);
    nlObjPutInit();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    return InitRenderTexture1st();
}
