/* Straight-line functions with calls and guards (batch gen_cu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int windowOpenStep(void);
int windowEnterStep(void);
int Current_to_Target_angleY(int, ...);
int Start_Excellent(void);
int Start_Fault(int);
int Count_Remain_Drop(void);
int Exec_Remain_Arrow(void);
int Put_Remain_Icon(void);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlMatrixMode(int);
int nlRotateAxe(int, int);
int nlAddVector3op(int, int, int);
int nlSetWindowSize(float, float, float, float);
int nl_set_cnv_proj_pers(void);
int SetCameraMode(int);
int camRestore(void);
int camSetEye(int, int);
int camSetTarget(int, int);
int kmRenderTexture(int);
int memmove(int, int, int);
int menuCursor(int, int, int);
int menuPutSprites(int, int, int, int);
int nlGetAverageVector(int, int, int, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlScaleVector(int, int, float);
int nlSubVector(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
float nlUnitVector(int);
int nlPow(float f4, float f5);
int bootDevCommand(void);
int nlRenderTextureEnd(void);
int windowNameSelect(void);
int Exec_DCmini_Game9(int a4);
int camGetOffShot3(void);
struct o0_int { int v; };
struct o8_int { char p[0x8]; int v; };


int bootDevCommand(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;

    t0 = (((struct o0_int *)0xAC00F728)->v);
    *(unsigned char *)((t0 + 0x3C)) = 0xFFFFFFC0;
    t1 = (((struct o8_int *)0xAC00F728)->v);
    *(unsigned char *)((t1 + 0xC)) = 0xFFFFFF80;
    t2 = (((struct o8_int *)0xAC00F728)->v);
    *(unsigned char *)((t2 + 0x24)) = 0xFFFFFF80;
    t3 = (((struct o0_int *)0xAC00F728)->v);
    *(unsigned char *)((t3 + 0x14)) = 0x43;
    t4 = ((int (*)(int, int))(0xC0118F8))(0xFFFFFF80, 0xAC00F730);
    t5 = (((struct o0_int *)0xAC00F728)->v);
    *(unsigned char *)((t5 + 0x3C)) = 0x0;
    return 0x3C;
}


