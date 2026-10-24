/* Straight-line functions with calls and guards (batch gen_au): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int InitRenderTexture1st(void);
int nlPaletteDirectMode(int);
int nlSysSetTextureSize(int);
int nlSysUseLatency2V(void);
int nlSysSetDirectListTypeLatency2V(int);
int nlSysSetVertexBufferBaseAddress(int);
int nlCreateVertexBuffer(void);
int nlSysMetricsInit(void);
int nlInitMatrix(int, int);
int nlMatrixMode(int);
int ADXSTMF_Create(int, int, int, int);
int frameFlip(void);
int gdFsClose(int);
int gdFsGetFileSize(int);
int gdFsOpen(void);
int nlInitCommonTexture(int, int, int);
int nlInitPalette(int, int);
int nlInitPrint(void);
int nlInitSprite(int, int, int);
int nlLocate(int, int);
int nlObjPutInit(void);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPerspective(int, float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPrnIndentOn(void);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlSetFontSize(int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int paletteSetMode(int);
int setBorderColor(int);
int strncpy(int, int, int);

