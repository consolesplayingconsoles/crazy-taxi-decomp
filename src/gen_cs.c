/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec4Ang(int, int, int);
int pcarRejoinLane(int);
int FUN_0c077210(int, int);
int GetCollision2D(int, float);
int carBalance(int);
int calcCheck(int);
int calcCheckExec(int, int);
int calcColliCheck(int);
int carColliReflection(void);
int carEntry(int);
int carMultiCollision(int);
int carResistance(void);
int carSteering(void);
int dropOutCheck(int);
int kmiAllocSysConfig(int);
int kmiChkActiveListType(int, int, int, int);
int kmiGetDisplayData(int, int, int);
int kmiGetNativeRegOBPSize(int);
int kmiGetPackOBPParam(int, int, int, int, int, int, int);
int kmiSetTAEnvironment(int, ...);
int kmiTAallocEx(int, int, int);
int nlAddVector(int, int);
int nlFastSinCos(int, int, int);
float nlInnerProduct(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int pcarDrive(int);
int pcarEnd(int);
int pointEventGet(int);
int technicalCheck(int);
void MakeKyakuTakeArea(int a4, int a5, int a6, float f4, float f5);
int InsertRankRecord(int a4, int a5, int a6, int a7);
int kmCreateTABuffer(int a4, int a5);
int parkingCarExec(int a4);
int pcarExec(int a4);



int kmCreateTABuffer(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t28;
    int t29;
    int t30;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t49;
    int t5;
    int stk[16] = {0};

    *(unsigned int *)0xC2B8C94 = 0x2;
    *(unsigned int *)0xC2B8C40 = a4;
    *(unsigned int *)0xC2B8C98 = a5;
    t0 = *(int *)0xC177A84;
    *(unsigned int *)(((int)stk + 16)) = t0;
    if (t0 != 0x80000000) {
        t1 = *(int *)0xC177A84;
        *(unsigned int *)0xC177A84 = (t1 | 0x100);
        if ((t1 | 0x100) == 0xB00) {
            *(unsigned int *)0xC177A84 = 0x80000000;
            t2 = *(int *)0xC2B8C94;
            t3 = kmiAllocSysConfig(t2);
            t5 = t3;
        }
        t49 = t5;
    } else {
        *(unsigned int *)0xC177A88 = 0x1;
        t11 = *(int *)0xC2EA9DC;
        *(unsigned int *)0xC2EA9E4 = t11;
        t12 = *(int *)0xC2EA9DC;
        *(unsigned int *)(((t12 << 2) + 0xC2EA9CC)) = 0x2;
        *(unsigned int *)0xC2EA88C = 0x0;
        *(unsigned int *)0xC2EA9F4 = 0x1;
        t13 = *(int *)((a4 + 0x10));
        *(unsigned int *)(((((int)stk + 16) + 0x4) + 0x0)) = (t13 & 0x1);
        t14 = *(int *)((a4 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x4) + 0x4) + 0x0)) = (0x2 & t14);
        t15 = *(int *)((a4 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x4) + 0x8) + 0x0)) = (t15 & 0x4);
        t16 = *(int *)((a4 + 0x10));
        *(unsigned int *)((((((int)stk + 16) + 0x4) + 0xC) + 0x0)) = (t16 & 0x8);
        t17 = *(int *)((((((int)stk + 16) + 0x4) + 0xC) + 0x0));
        t18 = *(int *)((((((int)stk + 16) + 0x4) + 0x8) + 0x0));
        t19 = *(int *)((((((int)stk + 16) + 0x4) + 0x4) + 0x0));
        t20 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
        kmiChkActiveListType(t20, t19, t18, t17);
        t22 = *(int *)((((((int)stk + 16) + 0x4) + 0xC) + 0x0));
        t23 = *(int *)((((((int)stk + 16) + 0x4) + 0x8) + 0x0));
        t24 = *(int *)((((((int)stk + 16) + 0x4) + 0x4) + 0x0));
        t25 = *(int *)(((((int)stk + 16) + 0x4) + 0x0));
        t26 = kmiGetPackOBPParam(t25, t24, t23, t22, 0x0, 0x1, 0x0);
        kmiGetNativeRegOBPSize(t26);
        t28 = *(int *)0xC2B8C98;
        *(unsigned int *)0xC2B8C98 = ((unsigned int)t28 >> 1);
        t29 = *(int *)0xC2B8C64;
        t30 = *(int *)0xC2B8C58;
        kmiGetDisplayData(0xFF, t30, t29);
        t32 = *(int *)0xC2B8CA0;
        t33 = *(int *)0xC2B8C98;
        if ((unsigned int)t33 > (unsigned int)((-t32) + 0x200000)) {
            *(unsigned int *)0xC2B8C98 = ((-t32) + 0x200000);
        }
        t34 = *(int *)0xC2B8C98;
        t35 = kmiTAallocEx(t34, 0xC2B8D20, 0xC2B8D24);
        if (t35 == 0) {
            t36 = *(int *)0xC2B8C98;
            *(unsigned int *)0xC2EAAD8 = t36;
            t37 = *(int *)0xC2B8C58;
            t38 = *(int *)0xC2EA6F8;
            t39 = *(int *)0xC2EA6F4;
            t40 = *(int *)0xC2EA6F0;
            t41 = *(int *)0xC2EA6EC;
            kmiSetTAEnvironment((t26 & (~t37)), 0x0);
            *(unsigned int *)0xC2EA88C = 0x1;
        }
        t49 = t35;
    }
    return t49;
}


