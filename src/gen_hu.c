/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow2Matrix(int);
int CalcShadow4Normal(int, int);
int FcvPlay(int, int, float);
int GetCollision2D(int, float);
int humanDraw(int, int, int, int);
float nlLength(int, int, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_ProposalWalker(int a4, float f4, float f5);

int Put_ProposalWalker(int a4, float f4, float f5)
{
    int t6;
    int t10;
    int t27;
    int t28;
    int t36;
    int t37;
    int t48;

    if ((nlLength(0xC179144, (a4 + 0x1C), f4, f5)) > 500.0f) {
        nlPushMatrix(0x0);
        nlTranslateV((a4 + 0x1C));
        nlRotateAY(((unsigned short)(*(short *)0xC17985A) + 0x8000));
        t6 = *(int *)((a4 + 0x40));
        nlObjPutUseViewMatrix((*(int *)((((((t6 << 2) + t6) + (*(int *)((a4 + 0x14)))) << 2) + 0xC131C28))));
        return nlPopMatrix(0x1);
    }
    t10 = GetCollision2D((a4 + 0x1C), (*(float *)0xC05FD14));
    if ((*(int *)((t10 + 0x1C))) != -1) {
        CalcShadow4Normal((a4 + 0x44), (t10 + 0xC));
    }
    nlPushMatrix(0x0);
    nlTranslateV((a4 + 0x1C));
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x36))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x34))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x38))));
    nlTranslate(0.0f, 0.0f, (*(float *)0xC05FD34));
    if ((*(int *)((a4 + 0x18))) == 1) {
        t27 = *(int *)((a4 + 0x40));
        t28 = *(int *)((a4 + 0x14));
        FcvPlay((*(int *)(((((*(int *)((a4 + 0x18))) - 1) << 2) + (*(int *)(((t28 << 2) + (*(int *)((0xC131BA4 + (t27 << 2)))))))))), (*(int *)((0xC131BFC + ((((t27 << 2) + t27) + t28) << 2)))), (float)(*(int *)((a4 + 0x3C))));
    } else {
        t36 = *(int *)((a4 + 0x40));
        t37 = *(int *)((a4 + 0x14));
        humanDraw((*(int *)(((((*(int *)((a4 + 0x18))) - 1) << 2) + (*(int *)(((t37 << 2) + (*(int *)((0xC131BA4 + (t36 << 2)))))))))), (*(int *)((0xC131BFC + ((((t36 << 2) + t36) + t37) << 2)))), (*(int *)((a4 + 0x3C))), 0x0);
    }
    CalcShadow2Matrix((a4 + 0x44));
    nlObjPutUseViewMatrix(0xC5AA038);
    t48 = nlPopMatrix(0x1);
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x1);
    return t48;
}
