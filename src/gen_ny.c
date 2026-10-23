/* Straight-line functions with calls and guards (batch gen_ny): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
int nlMultiLineUseViewMatrixTrnsl(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nd_StartWait_PutKyaku(void);

int nd_StartWait_PutKyaku(void)
{
    int t0;
    int t5;
    int t7;
    float u25;
    float u26;
    int t34;
    int t38;
    int t49;
    int t50;
    int t72;
    int t73;
    int t43;
    int t51;
    int t64;
    float u66;

    t0 = *(int *)0xC2A720C;
    if ((t0 != 2) && (t0 != 3)) {
        if ((t0 != 0) && (t0 != 1)) {
            *(unsigned int *)0xC130468 = 0x2;
        } else {
            *(unsigned int *)0xC130468 = 0x0;
        }
    } else {
        *(unsigned int *)0xC130468 = 0x1;
    }
    nlObjPutSetFadeColorBase(1.0f, 1.0f, 0.0f);
    nlPushMatrix(0x0);
    t5 = *(int *)0xC130468;
    if (t5 == 0) {
        nlTranslate(-20.0f, 0.0f, -160.0f);
        t7 = *(signed char *)0xC2A72D8;
        nlTranslateV(((signed char)(((t7 << 1) + t7) << 2) + 0xC0CF624));
        nlRotateAY(0x8000);
        if ((int)(*(int *)0xC2A7208) <= (int)0x33) {
            nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
            nlPushMatrix(0x0);
            nlTranslate(0.0f, (*(float *)0xC2A72C4), 0.0f);
            nlRotateAY(0x8000);
            nlObjPutUseViewMatrix(0xC46D618);
            nlPopMatrix(0x1);
        }
        nlObjPutSetFadeColor(1.0f, 1.0f, 0.0f);
        nlRotateAY((-(unsigned short)(*(short *)0xC2A72C0)));
        u25 = *(float *)0xC2A72C4;
        u26 = *(float *)0xC2A72C8;
        *(float *)0xC2A72C4 = (u25 + u26);
        if (35.0f > (u25 + u26)) {
            *(float *)0xC2A72C4 = 35.0f;
            *(float *)0xC2A72C8 = 0.699999988f;
        }
        *(float *)0xC2A72C8 = ((*(float *)0xC2A72C8) - 0.0249999985f);
        nlMultiLineUseViewMatrixTrnsl(0xC2A7210);
    } else {
        if (t5 == 1) {
            nlTranslateV(0xC2A72CC);
            nlRotateAY(0x4000);
            t34 = *(signed char *)0xC2A72D8;
            nlTranslateV(((signed char)(((t34 << 1) + t34) << 2) + 0xC0CF654));
            t43 = 0x8000;
        } else {
            nlTranslate((*(float *)0xC050A34), 0.0f, -160.0f);
            t38 = *(signed char *)0xC2A72D8;
            nlTranslateV(((signed char)(((t38 << 1) + t38) << 2) + 0xC0CF684));
            t43 = ((unsigned short)(*(short *)0xC2A72C0) + 0x8000);
        }
        nlRotateAY(t43);
    }
    t49 = *(int *)0xC2A720C;
    t50 = *(int *)0xC2A7208;
    if ((t49 == 1) && (t51 = *(int *)0xC2A7208, (int)t51 > (int)0x33)) {
        if (t50 == 52) {
            *(unsigned int *)0xC12FFC0 = 0x0;
        }
        nlRotateAY(0x4000);
        FcvPlay(0xC9CE170, 0x0, (float)(*(int *)0xC12FFC0));
    } else {
        if ((t49 == 3) && ((int)t50 > (int)0xAB)) {
            if (t50 == 0xAC) {
                *(unsigned int *)0xC12FFC0 = 0x0;
            }
            t64 = 0xC954D58;
            u66 = (float)(*(int *)0xC12FFC0);
        } else {
            t64 = (*(int *)(((t49 << 2) + 0xC12FFFC)));
            u66 = (float)(*(int *)0xC12FFC0);
        }
        FcvPlay(t64, 0x0, u66);
    }
    t72 = *(int *)0xC12FFC0;
    t73 = (t72 + 0x1);
    if ((*(int *)0xC2A720C) == 4) {
        t73 = (t72 + 0x2);
    }
    *(unsigned int *)0xC12FFC0 = ((int)((int)t73 % (int)0xC8));
    nlPopMatrix(0x1);
    return nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
}
