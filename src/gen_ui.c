/* Straight-line functions with calls and guards (batch gen_ui): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlay(int, int, float);
float nlLength(int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_Course_Obj_Fcv(void);

int Put_Course_Obj_Fcv(void)
{
    int t23;

    if (1500.0f > (nlLength(0xC0C83F0, 0xC179840))) {
        nlPushUnitMatrix();
        nlTranslateV(0xC0C83F0);
        nlTranslate(12.0f, 7.0f, -23.0f);
        nlRotateAY((unsigned short)(*(short *)0xC0C8408));
        FcvPlay(0xC9EFE54, 0xE, (float)(*(int *)0xC118948));
        nlPopMatrix(0x1);
        nlPushUnitMatrix();
        nlTranslateV(0xC0C83FC);
        nlTranslate(-285.0f, 0.0f, -118.0f);
        nlRotateAY((unsigned short)(*(short *)0xC0C840A));
        FcvPlay(0xC9F173C, 0xF, (float)(*(int *)0xC118948));
        nlPopMatrix(0x1);
    }
    t23 = (int)((int)((*(int *)0xC118948) + 0x1) % (int)0x2710);
    *(unsigned int *)0xC118948 = t23;
    return t23;
}
