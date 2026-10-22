/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow2Matrix(int);
int CalcShadow4Normal(int, int);
int FcvPlay(int, int, float);
int GetCollision2D(int, float);
int humanDraw(int, int, int, int);
float nlLength(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_ProposalWalker(int a4);

int Put_ProposalWalker(int a4)
{
    float t0;
    int t3;
    int t5;
    int t6;
    int t7;
    float u9;
    int t10;
    int t11;
    int t17;
    int t19;
    int t21;
    float u23;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t48;
    int t49;

    t0 = nlLength(0xC179144, (a4 + 0x1C));
    if (t0 > 500.0f) {
        nlPushMatrix(0x0);
        nlTranslateV((a4 + 0x1C));
        t3 = *(short *)0xC17985A;
        nlRotateAY(((unsigned short)t3 + 0x8000));
        t5 = *(int *)((a4 + 0x14));
        t6 = *(int *)((a4 + 0x40));
        t7 = *(int *)((((((t6 << 2) + t6) + t5) << 2) + 0xC131C28));
        nlObjPutUseViewMatrix(t7);
        return nlPopMatrix(0x1);
    }
    u9 = 16.5f;
    t10 = GetCollision2D((a4 + 0x1C), u9);
    t11 = *(int *)((t10 + 0x1C));
    if (t11 != -1) {
        CalcShadow4Normal((a4 + 0x44), (t10 + 0xC));
    }
    nlPushMatrix(0x0);
    nlTranslateV((a4 + 0x1C));
    t17 = *(short *)((a4 + 0x36));
    nlRotateAY((unsigned short)t17);
    t19 = *(short *)((a4 + 0x34));
    nlRotateAX((unsigned short)t19);
    t21 = *(short *)((a4 + 0x38));
    nlRotateAZ((unsigned short)t21);
    u23 = 3.0f;
    nlTranslate(0.0f, 0.0f, u23);
    t25 = *(int *)((a4 + 0x18));
    if (t25 == 1) {
        t26 = *(int *)((a4 + 0x3C));
        t27 = *(int *)((a4 + 0x40));
        t28 = *(int *)((a4 + 0x14));
        t29 = *(int *)((0xC131BFC + ((((t27 << 2) + t27) + t28) << 2)));
        t30 = *(int *)((a4 + 0x18));
        t31 = *(int *)((0xC131BA4 + (t27 << 2)));
        t32 = *(int *)(((t28 << 2) + t31));
        t33 = *(int *)((((t30 - 1) << 2) + t32));
        FcvPlay(t33, t29, (float)t26);
    } else {
        t35 = *(int *)((a4 + 0x3C));
        t36 = *(int *)((a4 + 0x40));
        t37 = *(int *)((a4 + 0x14));
        t38 = *(int *)((0xC131BFC + ((((t36 << 2) + t36) + t37) << 2)));
        t39 = *(int *)((a4 + 0x18));
        t40 = *(int *)((0xC131BA4 + (t36 << 2)));
        t41 = *(int *)(((t37 << 2) + t40));
        t42 = *(int *)((((t39 - 1) << 2) + t41));
        humanDraw(t42, t38, t35, 0x0);
    }
    CalcShadow2Matrix((a4 + 0x44));
    nlObjPutUseViewMatrix(0xC5AA038);
    t48 = nlPopMatrix(0x1);
    t49 = *(int *)((a4 + 0x3C));
    *(unsigned int *)((a4 + 0x3C)) = (t49 + 0x1);
    return t48;
}
