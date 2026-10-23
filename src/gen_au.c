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

int ADXSTM_OpenFname(int a4, int a5)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t7;
    int t12;
    int t10;
    int stk[8];

    *(unsigned int *)(((int)stk + 16)) = a5;
    t0 = gdFsOpen();
    if (t0 == 0) {
        ADXERR_CallErrFunc(0xC176454, a4);
        t12 = 0x0;
    } else {
        t2 = gdFsGetFileSize(t0);
        if (t2 == 0) {
            ADXERR_CallErrFunc(0xC176484);
            gdFsClose(t0);
            t10 = 0x0;
        } else {
            t5 = *(int *)(((int)stk + 12));
            t6 = *(int *)(((int)stk + 16));
            t7 = ADXSTMF_Create(t0, 0x0, t5, t6);
            if (t7 != 0) {
                strncpy((t7 + 0x40), a4, 0x20);
            }
            t10 = t7;
        }
        t12 = t10;
    }
    return t12;
}


