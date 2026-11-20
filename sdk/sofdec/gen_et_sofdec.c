/* Straight-line functions with calls and guards (batch gen_et): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckKyakuArea(int, int);
int CheckNumRideon(void);
int nlSpriteSetGarbagedTextureOnce_Sub(int, int, int);
int kmytex_FBFreeEntry(int);
int kmytex_VQFreeEntry(int);
int kmiResetBoard(void);
int kmiWriteRegister(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueEntry(int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwlRnaIsCopyEnd(int);
int nlObjPutLoadTextureOnce_Sub(int, int, int, int, int);
int kyakuInDestArea(int a4);
int FBSortQueue(int a4, int a5);
int kmiFBreset(void);
int kmiDiscardRenderPipeline(void);
int kmiFBgetfreememEx(int a4, int a5);
int kmStopDisplayFrameBuffer(void);
int mwlRnaWaitTransEnd(int a4);
int nlSpriteSetGarbagedTexture(int a4);
int nlSpriteSetGarbagedTextureGI(int a4);
int nlObjPutLoadTextureGI(int a4, int a5);


int mwlRnaWaitTransEnd(int a4)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t8;
    int t0;
    int t1;

    *(unsigned int *)0xC17864C = 0x0;
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        
        t2 = a4;
        t4 = mwlRnaIsCopyEnd(t2);
        t0 = t4;
        if (t0 != 1) {
            t2 = 0x1388;
            for (;;) {
                t2 = (t2 - 0x1);
                if (t2 == 0) {
                    break;
                }
            }
            t5 = *(int *)0xC17864C;
            t1 = t5;
            t3 = (t3 + 0x1);
            t1 = (t1 + 0x1);
            *(unsigned int *)0xC17864C = t1;
            continue;
        }
        break;
    }
    t9 = t0;
    if (t3 == 0xC8) {
        t8 = mwRnaErrCallFunc(0xC1766CC);
        t9 = t8;
    }
    return t9;
}


