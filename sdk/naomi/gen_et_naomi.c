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


int nlSpriteSetGarbagedTexture(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x4));
        if (t3 == -1) {
            break;
        }
        t4 = nlSpriteSetGarbagedTextureOnce_Sub(a4, t2, 0x0);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int nlSpriteSetGarbagedTextureGI(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0x0;
    t1 = a4;
    t2 = 0x0;
    for (;;) {
        t3 = *(int *)((t1 + 0x4));
        if (t3 == -1) {
            break;
        }
        t4 = nlSpriteSetGarbagedTextureOnce_Sub(a4, t2, 0x1);
        t2 = (t2 + 0x1);
        t1 = (t1 + 0x10);
        t0 = (t0 | t4);
    }
    return t0;
}

int nlObjPutLoadTextureGI(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 16)) = a5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)(((int)stk + 8));
        t2 = *(int *)(((int)stk + 16));
        t3 = *(int *)(((int)stk + 12));
        t4 = nlObjPutLoadTextureOnce_Sub(t3, t2, t1, (((int)stk + 4) + 0x4), 0x1);
        t5 = *(int *)(((int)stk + 8));
        t0 = (t0 | t4);
        if (t5 == 0) {
            break;
        }
    }
    return t0;
}
