/* Straight-line functions with calls and guards (batch gen_cn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_Direction(void);
int Chat_TellDestination(void);
int Drv_StartAction(int, int, int);
int carSpreadWheelLoad(float, float, float);
int SetLandmark(int);
int ExecRenderTexture1st(void);
int ExecRenderTexture2nd(void);
int ExecEndRoll(void);
int SetScreen(int);
extern int SetWindow();
int windowOpenStep(void);
int windowEnterStep(void);
int windowClose(void);
int callBoxAdvice(void);
int callWarnning(int);
int CheckBoxFlag(int);
int GetNowLanguage(int);
int Start_Pass_Default_Sprite(int);
int PTime_Pos_Set(float, float);
int PTime_Scale_Set(float, float);
int PTime_Color_Set(float, float, float);
int Init_Window_Sprite(int);
int Start_PoleMarriageKiss(void);
int Start_LoadSave(int, int);
int End_LoadSave(int);
int Chat_Iraira(void);
int psgFreeIpBuff(int);
int psgStepBlend(int);
int psgUpdatePartTracks(int);
void nlInitLibrary0(int, int, int);
int nlCalcPoint4(int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMultiPushedMatrix(void);
int nlMultiViewMatrix(void);
int nlFastScreenPoint(int, int);
int nlMakeFastModelProjectMatrixVM(void);
int nlMultiLineTrnsl(void);
int nlLineSendHeader(int);
int nlLineCalcColor(int, int);
int nlLineClipNear(int, int);
int nlLineDrawThick(int, int, int, int);
int mwRnaLockCs(int);
int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetCollisionFirst(int, int);
int replayChangeControl(int);
int IsBoyFriend(int, int);
int Psg_SetPosPtr(int, int);
int PutVM_Message(int, int, int, float, float);
int PutWindow(int, float, float);
int SaveBackupData(int);
int SetEffect(int, int, int);
int Sound_Request(int, int);
int Start_Proposal(int, int);
int Voice_Request(int, int, int, int);
extern void _builtin_ftrv(float *, float *);
extern float _builtin_sqrtf(float);
int buAnalyzeBackupFileImage(int, int);
int buIsExistFile(int, int);
int courseStatusGet(int, int, int, int);
int exec_loop_Replay(void);
int extRand(void);
extern int getNearLineIndex();
int kdGetDevice(int);
int kdGetStatus(void);
int kdIsChanged(void);
int kdSetBlockWrite(void);
int kdSetGetLastError(void);
int menuCursorBox(int, int, int);
int menuEnterStep(void);
int menuOpenStep(void);
int menuPutFrame(void);
int menuPutHelpBar(int, float, float);
int menuPutSprites(int, int, int, int);
int mwRnaErrCallFunc(int, ...);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetNumChan(int, int);
int mwRnaSetSfreq(int, int);
int mwRnaUnlockCs(int);
int mwlRnaAlloc(void);
int mwlRnaSetInitMember(int);
int nlAddVector(int, int);
int nlArcTan2(float, float);
int nlGetAverageVector(int, int, int, float, float);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
int nlLineBlendFunc(int, int);
int nlLineSetDiv(float);
int nlLineSetThickness(float);
int nlLocate(int, int);
int nlMultiMatrix8(int);
int nlPopMatrix(int);
extern int nlPrintf();
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleUnitVector(int, int, float);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslateV(int);
int nlUnitVector(int);
int psgEnterState4(int);
int psgPutShadow(int);
float psgRunToPoint(int);
int psgSeatMatrix(int);
int putLevelCTFontAssist(int, int, int, int, int);
int putString(int, int, float, float, float);
int vmsfb_sleep(void);
int vmsio_ismount(int);
void nlTranslate(float f4, float f5, float f6);
void nlInitLibraryDC(int, int, int);
void kmiDACControl(void);
int Level_Calc(int a4);
int DispBackupHeadInfo(int a4, int a5, int a6);
int mwRnaCreate(int a4, int a5);
int nlMultiLineSub(int a4, int a5);
int colliSphereSphere(int a4, int a5);
int vmsio_block_write(int a4, int a5, int a6);
void carResistance(int a4);
void ExecSpark(void);
int pcarLaneChange(int a4);
int gameState13(void);
int windowSaveData(void);
int psgTimeDispExec(void);
int menuCrazyBoxHandler(void);
int psgFrameState4(int a4);
void psgEnterState3(int a4, int a5);


/* manual: nlInitLibraryDC is a trampoline: `bra nlInitLibrary0` with r4 (the mode), r5 (the display flags) and r6 passed
   through untouched and r7 = 0. The generated form was void and called nlInitLibrary0() with nothing, so its callers dropped
   the flags too: nlInitLibrary0 then read a leftover r5, kmSetDisplayMode refused the frame-buffer mode it indexed, and the
   console never got its display registers (black screen after the licence screen on hardware; Flycast drew anyway). */


int mwRnaCreate(int a4, int a5)
{
    int t1;
    int t2;
    int t3;
    int t5;
    int t8;
    int t11;
    int t12;
    int t13;
    int t19;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
    int t34;
    int t37;
    int t38;
    int t39;
    int t43;
    int t52;
    int t45;
    int t47;
    int t53;
    int t54;
    int t55;
    int t60;
    int t62;
    int t63;
    int t64;
    int t65;
    int t78;
    int stk[10] = {0};

    if ((int)a5 >= (int)0x1) {
        if ((int)a5 > (int)0x2) {
            mwRnaErrCallFunc(0xC1765D0);
            t78 = 0x0;
        } else {
            if (a4 != 0) {
                if ((int)a5 > 0) {
                    t1 = a4;
                    t2 = 0x0;
                    for (;;) {
                        t3 = *(int *)((t1 + 0x0));
                        if (t3 == 0) break;
                        t2 = (t2 + 0x1);
                        t1 = (t1 + 0x4);
                        if ((int)t2 >= (int)a5) {
                            t1 = ((int)stk + 8);
                            mwRnaLockCs(t1);
                            t5 = mwlRnaAlloc();
                            if (t5 == 0) {
                                mwRnaErrCallFunc(0xC17662C);
                                t1 = ((int)stk + 8);
                                mwRnaUnlockCs(t1);
                                return t5;
                            }
                            t2 = 0x0;
                            *(unsigned char *)((t5 + 0x3)) = a5;
                            *(unsigned char *)((t5 + 0x2)) = a5;
                            t1 = 0x0;
                            if ((int)a5 > 0) {
                                do {
                                    t8 = *(int *)((a4 + t1));
                                    t2 = (t2 + 0x1);
                                    *(unsigned int *)((((t5 + 0x10) + t1) + 0x0)) = t8;
                                    t1 = (t1 + 0x4);
                                } while ((int)t2 < (int)a5);
                                t11 = *(int *)0xC178644;
                                t12 = *(int *)((t11 + 0x14));
                                t1 = a5;
                                t13 = ((int (*)(int, int))(t12))(t1, t2);
                                *(unsigned int *)((t5 + 0x38)) = t13;
                                if (t13 == 0) {
                                    mwRnaErrCallFunc(0xC17665C);
                                    t1 = ((int)stk + 8);
                                    mwRnaUnlockCs(t1);
                                    return 0x0;
                                }
                                t1 = t5;
                                mwlRnaSetInitMember(t1);
                                t2 = 0x10;
                                t1 = t5;
                                mwRnaSetBitPerSmpl(t1, t2);
                                t2 = 0xAC44;
                                t1 = t5;
                                mwRnaSetSfreq(t1, t2);
                                t19 = *(signed char *)((t5 + 0x3));
                                t2 = (unsigned char)t19;
                                t1 = t5;
                                mwRnaSetNumChan(t1, t2);
                                t1 = *(int *)((t5 + 0x38));
                                *(unsigned int *)(((int)stk + 12)) = t1;
                                t22 = *(int *)((t1 + 0x0));
                                t23 = *(int *)((t22 + 0x18));
                                t24 = ((int (*)(int))(t23))(t1);
                                *(unsigned int *)((t5 + 0x28)) = t24;
                                *(unsigned char *)((t5 + 0x0)) = 0x1;
                                t1 = ((int)stk + 8);
                                mwRnaUnlockCs(t1);
                                return t5;
                            }
                            t26 = *(int *)0xC178644;
                            t27 = *(int *)((t26 + 0x14));
                            t1 = a5;
                            t28 = ((int (*)(int, int))(t27))(t1, t2);
                            *(unsigned int *)((t5 + 0x38)) = t28;
                            if (t28 == 0) {
                                mwRnaErrCallFunc(0xC17665C);
                                t1 = ((int)stk + 8);
                                mwRnaUnlockCs(t1);
                                return 0x0;
                            }
                            t1 = t5;
                            mwlRnaSetInitMember(t1);
                            t2 = 0x10;
                            t1 = t5;
                            mwRnaSetBitPerSmpl(t1, t2);
                            t2 = 0xAC44;
                            t1 = t5;
                            mwRnaSetSfreq(t1, t2);
                            t34 = *(signed char *)((t5 + 0x3));
                            t2 = (unsigned char)t34;
                            t1 = t5;
                            mwRnaSetNumChan(t1, t2);
                            t1 = *(int *)((t5 + 0x38));
                            *(unsigned int *)(((int)stk + 12)) = t1;
                            t37 = *(int *)((t1 + 0x0));
                            t38 = *(int *)((t37 + 0x18));
                            t39 = ((int (*)(int))(t38))(t1);
                            *(unsigned int *)((t5 + 0x28)) = t39;
                            *(unsigned char *)((t5 + 0x0)) = 0x1;
                            t1 = ((int)stk + 8);
                            mwRnaUnlockCs(t1);
                            return t5;
                        }
                    }
                    mwRnaErrCallFunc(0xC176600);
                    t78 = 0x0;
                } else {
                    mwRnaLockCs(((int)stk + 8));
                    t43 = mwlRnaAlloc();
                    if (t43 == 0) {
                        mwRnaErrCallFunc(0xC17662C);
                        t78 = t43;
                    } else {
                        *(unsigned char *)((t43 + 0x3)) = a5;
                        *(unsigned char *)((t43 + 0x2)) = a5;
                        t52 = 0x0;
                        if ((int)a5 > 0) {
                            t45 = 0x0;
                            t52 = 0x0;
                            do {
                                t47 = *(int *)((a4 + t45));
                                t52 = (t52 + 0x1);
                                *(unsigned int *)((((t43 + 0x10) + t45) + 0x0)) = t47;
                                t45 = (t45 + 0x4);
                            } while ((int)t52 < (int)a5);
                        }
                        t53 = *(int *)0xC178644;
                        t54 = *(int *)((t53 + 0x14));
                        t55 = ((int (*)(int, int))(t54))(a5, t52);
                        *(unsigned int *)((t43 + 0x38)) = t55;
                        if (t55 == 0) {
                            mwRnaErrCallFunc(0xC17665C);
                            t78 = 0x0;
                        } else {
                            mwlRnaSetInitMember(t43);
                            mwRnaSetBitPerSmpl(t43, 0x10);
                            mwRnaSetSfreq(t43, 0xAC44);
                            t60 = *(signed char *)((t43 + 0x3));
                            mwRnaSetNumChan(t43, (unsigned char)t60);
                            t62 = *(int *)((t43 + 0x38));
                            *(unsigned int *)(((int)stk + 12)) = t62;
                            t63 = *(int *)((t62 + 0x0));
                            t64 = *(int *)((t63 + 0x18));
                            t65 = ((int (*)(int))(t64))(t62);
                            *(unsigned int *)((t43 + 0x28)) = t65;
                            *(unsigned char *)((t43 + 0x0)) = 0x1;
                            t78 = t43;
                        }
                    }
                    mwRnaUnlockCs(((int)stk + 8));
                }
            } else {
                mwRnaErrCallFunc(0xC176600);
                t78 = 0x0;
            }
        }
    } else {
        mwRnaErrCallFunc(0xC1765D0);
        t78 = 0x0;
    }
    return t78;
}


