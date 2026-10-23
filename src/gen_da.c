/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlMvGetFaceVerts(int, int);
int nlMvSendTriangle(int, int, int);
int nlMvSendQuad(int, int, int, int);
int nlMvSendFan3(int, int, int, int, int);
int abs(int);
int GetStopPosCenter(int, int, int);
int PutStringFixPfont(int, int, float, float, float, float);
extern int getNearLineIndex();
int kmLoadTexture(int, int, int, int);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
float navi_GetRouteTbl(int, int, int);
int nlFastSinCos(int, int, int);
float nlLength(int, int);
int nlMultiMatrix8(int);
int putLevelCTFontAssist(int, int, int, int, int);
int gdGdcReqDmaTrans(int a4, int a5);
int BigOneRotate(int a4, int a5, int a6);
int menuRecordsHandler(void);
int texLoadIndexed(int a4, int a5);
int nlMvPutFaceClip(int a4, int a5, int a6, int a7);
float kyakuInitStops(float f4);

int gdGdcReqDmaTrans(int a4, int a5)
{
    int t0;

    t0 = *(int *)0x8C0000BC;
    return ((int (*)(int, int, int, int))(t0))(a4, a5, 0x0, 0x6);
}



int texLoadIndexed(int a4, int a5)
{
    int t3;
    int t0;
    int t4;
    int t5;
    int t17;
    int t6;
    int t7;
    int t8;
    int t11;
    int t9;
    int t10;

    t3 = a4;
    if ((int)a4 >= 0) {
        t0 = *(int *)0xC2B3184;
        t3 = (a4 + t0);
    }
    t4 = *(int *)0xC2AEC84;
    t5 = *(int *)(((((t3 << 2) << 1) + t4) + 0x0));
    t17 = 0x0;
    if (t5 != 0) {
        t6 = *(int *)(((((t3 << 2) << 1) + t4) + 0x4));
        t7 = *(int *)0xC2B29C0;
        t8 = *(int *)((((t6 * 0x3C) + t7) + 0x28));
        t11 = 0x0;
        if (t8 == 0) {
            t9 = kmLoadTexture(((t6 * 0x3C) + t7), a5, 0x0, 0x0);
            t10 = 0x1;
            if (t9 != 0) {
                t10 = 0x0;
            }
            t11 = t10;
        }
        t17 = t11;
    }
    return t17;
}


