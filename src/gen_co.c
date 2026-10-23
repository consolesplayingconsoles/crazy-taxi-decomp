/* Straight-line functions with calls and guards (batch gen_co): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow4Normal(int, int);
int CheckClipping(float);
int CheckClippingProject3D(int, float);
int carBoxVertexInit(void);
int convergeRot(int, int, float);
int getNearLinkedLine(int, int, int, int, int);
int HomingPosX(int, float, float);
int pedGetSubwayFlag(void);
int fcvSolveIK(int, int, int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlTranslateNV(int);
int nlAddVector3op(int, int, int);
int nlInitInterrupt0(int);
int nlstripSetVertexContextTex(int, int);
int nldispstripTexOfsSub(int, int);
int abs(int);
int kmytex_FBAllocEntry(void);
int kmytex_FBEnQueueTop(int, int, int);
int kmiVQallocFB(int, int, int, int, int, int);
int kmiCheckRenderTexture(int);
int ADXT_ExecErrChk(int);
int GetCollision2D(int, float);
int Sound_Request(int, int);
int adxt_stat_decend(int);
int adxt_stat_decinfo(int);
int adxt_stat_playend(void);
int adxt_stat_playing(int);
int adxt_stat_prep(int);
int courseStatusEntry(int, int);
int courseStatusGet(int, int, int, int);
int courseStatusInit(int);
int crowdCreate(int, int);
int extRand(void);
int fcvRotate(int);
int findSplineSection(int, int, int);
int getCoursePointMove(int, int, int);
int getPieceWindow(int, int, int, int, int, int, int, int);
int kmSetPixelClipping(int, int, int, int);
int kmiFlipVertexBuffer(int);
int kmiReadRegister(int);
int kmiStartRenderTextureEntry(int);
int kmiWriteRegister(int, int);
int kmytex_FBDeQueueEntry(int, int, int);
int nlAddVector(int, int);
int nlArcTan(float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlOuterProduct(int, int, int);
int nlPopMatrix(int);
int nlProjectScreen3D(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlRotateV(int, int);
int nlScaleVector(int, int, float);
int nlSprPut(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int putCarModel(int, int);
int putTrainModel(int, int);
int replay(int);
int sklRotate(int);
void nlSetTranslate(int a4);
void nlUnitMatrix(void);
int nlDispStripTexOfsTrnsl(int a4, int a5, int a6);
int nlInitInterruptDC(void);
int ADXT_ExecHndl(int a4);
int pcarRejoinLane(int a4);
int CheckCollisionPoly(int a4, int a5, int a6);
int carCorneringForce(int a4, int a5);
int VQalloc(int a4, int a5, int a6);
int entryCarPut(int a4);
int selectDrawDriverTiles(void);
int kmRenderTextureDirect(int a4);
int carBalanceRoll(int a4, float f4);
int crowdSpawn(int a4, int a5, float f4);
int pedDodgeCheck(int a4, float f4, float f5);
int SklPlay(int a4, int a5, int a6, int a7);
int FcvPlayBuffer(int a4, int a5);



int nlDispStripTexOfsTrnsl(int a4, int a5, int a6)
{
    int t0;

    t0 = nlstripSetVertexContextTex(0xC14AB40, a6);
    if (t0 == 0) {
        return nldispstripTexOfsSub(a4, a5);
    }
    return t0;
}

int nlInitInterruptDC(void)
{
    return nlInitInterrupt0(0x0);
}

int ADXT_ExecHndl(int a4)
{
    int t0;
    int t3;
    int t6;

    t0 = *(signed char *)((a4 + 0x1));
    if (t0 == 3) {
        adxt_stat_playing(a4);
    } else {
        if (t0 == 1) {
            adxt_stat_decinfo(a4);
        } else {
            t3 = *(signed char *)((a4 + 0x1));
            if (t3 == 2) {
                adxt_stat_prep(a4);
            } else {
                if (t3 == 4) {
                    adxt_stat_decend(a4);
                } else {
                    t6 = *(signed char *)((a4 + 0x1));
                    if (t6 == 5) {
                        adxt_stat_playend();
                    }
                }
            }
        }
    }
    return ADXT_ExecErrChk(a4);
}













