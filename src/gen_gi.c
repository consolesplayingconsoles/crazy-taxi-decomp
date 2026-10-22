/* Straight-line functions with calls and guards (batch gen_gi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CalcShadow2Matrix(int);
int humanDraw(int, int, int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int pedDraw(int a4, float f4, float f5);

int pedDraw(int a4, float f4, float f5)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t11;
    int t12;
    int t13;
    int t14;
    int t19;
    int t21;
    int t22;
    int t23;
    int t24;
    int t34;
    int t36;
    int t37;
    int t43;
    int t45;
    int t46;
    int t51;
    int t53;
    int t54;
    int t55;
    int t60;
    int t61;
    int t62;
    int t63;
    int t68;
    int t70;
    int t71;
    int t72;
    int t73;
    int t8;
    int t57;

    if (!(300.0f > f4)) {
        t0 = *(int *)0xC179860;
        if (t0 == 7) {
            if (300.0f > f5) {
                nlPushMatrix(0x0);
                t2 = *(int *)((a4 + 0x50));
                if (t2 == 1) {
                    nlTranslateV((a4 + 0xC));
                    t4 = *(int *)((a4 + 0x1C));
                    if (t4 == 1) {
                        t5 = *(short *)((a4 + 0x1A));
                        t8 = (unsigned short)t5;
                    } else {
                        t6 = *(short *)((a4 + 0x1A));
                        t8 = ((unsigned short)t6 + 0x8000);
                    }
                    nlRotateAY(t8);
                    t11 = *(int *)((a4 + 0x24));
                    t12 = *(int *)((a4 + 0x20));
                    t13 = *(int *)((a4 + 0x28));
                    t14 = *(int *)(((t13 << 2) + 0xC0D6158));
                    humanDraw(t14, (t11 + 0x5), t12, 0x0);
                    CalcShadow2Matrix((a4 + 0x54));
                    nlObjPutUseViewMatrix(0xC5AA038);
                } else {
                    if (t2 == 2) {
                        nlTranslateV((a4 + 0x40));
                        t19 = *(short *)((a4 + 0x1A));
                        nlRotateAY((unsigned short)t19);
                        t21 = *(int *)((a4 + 0x24));
                        t22 = *(int *)((a4 + 0x20));
                        t23 = *(int *)((a4 + 0x28));
                        t24 = *(int *)(((t23 << 2) + 0xC0D61AC));
                        humanDraw(t24, (t21 + 0x5), t22, 0x1);
                        CalcShadow2Matrix((a4 + 0x54));
                        nlObjPutUseViewMatrix(0xC5AA038);
                    }
                }
            } else {
                nlPushMatrix(0x0);
                nlTranslateV((a4 + 0xC));
                t34 = *(short *)0xC17985A;
                nlRotateAY(((unsigned short)t34 + 0x8000));
                t36 = *(int *)((a4 + 0x24));
                t37 = *(int *)(((t36 << 2) + 0xC12FF3C));
                nlObjPutUseViewMatrix(t37);
            }
        } else {
            nlPushMatrix(0x0);
            nlTranslateV((a4 + 0xC));
            t43 = *(short *)0xC17985A;
            nlRotateAY(((unsigned short)t43 + 0x8000));
            t45 = *(int *)((a4 + 0x24));
            t46 = *(int *)(((t45 << 2) + 0xC12FF3C));
            nlObjPutUseViewMatrix(t46);
        }
    } else {
        nlPushMatrix(0x0);
        t51 = *(int *)((a4 + 0x50));
        if (t51 == 1) {
            nlTranslateV((a4 + 0xC));
            t53 = *(int *)((a4 + 0x1C));
            if (t53 == 1) {
                t54 = *(short *)((a4 + 0x1A));
                t57 = (unsigned short)t54;
            } else {
                t55 = *(short *)((a4 + 0x1A));
                t57 = ((unsigned short)t55 + 0x8000);
            }
            nlRotateAY(t57);
            t60 = *(int *)((a4 + 0x24));
            t61 = *(int *)((a4 + 0x20));
            t62 = *(int *)((a4 + 0x28));
            t63 = *(int *)(((t62 << 2) + 0xC0D6158));
            humanDraw(t63, (t60 + 0x5), t61, 0x0);
            CalcShadow2Matrix((a4 + 0x54));
            nlObjPutUseViewMatrix(0xC5AA038);
        } else {
            if (t51 == 2) {
                nlTranslateV((a4 + 0x40));
                t68 = *(short *)((a4 + 0x1A));
                nlRotateAY((unsigned short)t68);
                t70 = *(int *)((a4 + 0x24));
                t71 = *(int *)((a4 + 0x20));
                t72 = *(int *)((a4 + 0x28));
                t73 = *(int *)(((t72 << 2) + 0xC0D61AC));
                humanDraw(t73, (t70 + 0x5), t71, 0x1);
                CalcShadow2Matrix((a4 + 0x54));
                nlObjPutUseViewMatrix(0xC5AA038);
            }
        }
    }
    return nlPopMatrix(0x1);
}
