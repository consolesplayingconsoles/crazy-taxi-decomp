/* Straight-line functions with calls and guards (batch gen_bx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int bootSendData(int, int, int);
int bootRecvData(int, int, int);
int bootEndTransfer(int);
int SetScreen(int);
int SetWindow(int);
int callLoadData(int);
int callSaveData(int);
int nlsndSeqRequest(void);
int PutStringFixPfont(int, int, float, float, float, float);
int buIsReady(void);
int kmGarbageCollectTexture(void);
int menuCursor(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int nlCreateTextureParamA(int);
int putLevelCTFontAssist(int, int, int, int);
int putRecordUnit(int, int, int, int, float, float);
int putString(int, int, float, float, float);
int camGetOnScript(void);
int nlCommonTextureGarbageCollection(void);
int bootSendFromBuffer(int a4, int a5, int a6, int a7);
int bootRecvToBuffer(int a4, int a5, int a6, int a7);
int bootCopyBuffer(int a4, int a5, int a6, int a7);
int menuSaveLoadHandler(void);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };


int nlCommonTextureGarbageCollection(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;

    t2 = kmGarbageCollectTexture();
    t4 = (((struct o0_int *)0xC2B29C0)->v);
    t3 = 0x0;
    for (;;) {
        t5 = (((struct o4_int *)0xC2B29C0)->v);
        if ((int)t3 >= (int)t5) break;
        t6 = *(int *)((t4 + 0x28));
        if (t6 == 0) {
            t2 = nlCreateTextureParamA(t4);
        }
        t4 = (t4 + 0x3C);
        t3 = (t3 + 0x1);
    }
    return t2;
}


