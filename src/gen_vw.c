/* Straight-line functions with calls and guards (batch gen_vw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int InitRenderTexture1st(void);
int frameFlip(void);
int nlCreateVertexBuffer(int, int, int, int);
int nlInitCommonTexture(int, int, int);
int nlInitMatrix(int, int);
int nlInitPalette(int, int);
int nlInitPrint(void);
int nlInitSprite(int, int, int);
int nlLocate(int, int);
int nlMatrixMode(int);
int nlObjPutInit(void);
int nlObjPutSetFadeColor(float, float, float);
int nlPaletteDirectMode(int);
int nlPerspective(int, float, float, float);
int nlPrintf(int, ...);
int nlPrnIndentOn(void);
int nlSetFontSize(int, int);
int nlSysMetricsInit(void);
int nlSysSetDirectListTypeLatency2V(int);
int nlSysSetTextureSize(int);
int nlSysSetVertexBufferBaseAddress(int);
int nlSysUseLatency2V(void);
int nlUnitMatrix(void);
int paletteSetMode(int);
int setBorderColor(int);
int InitNaolib(void);

int InitNaolib(void)
{
    nlSysMetricsInit();
    nlInitMatrix(0xC1C1A38, 0x10);
    nlSysUseLatency2V();
    nlSysSetDirectListTypeLatency2V(0x0);
    nlSysSetTextureSize(0x14A800);
    nlSysSetVertexBufferBaseAddress(0xCEA0000);
    nlCreateVertexBuffer(0x0, 0x6000, 0x4C000, 0x6000);
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
    nlMatrixMode(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    nlMatrixMode(0x1);
    nlInitCommonTexture(0xC1C1E78, 0x7D0, 0xBB8);
    nlInitSprite(0xC1E53AC, 0x3E8, 0x5DC);
    nlInitPalette(0xC1EDCE4, 0x40);
    paletteSetMode(0x2);
    nlPaletteDirectMode(0x1);
    nlObjPutInit();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    return InitRenderTexture1st();
}
