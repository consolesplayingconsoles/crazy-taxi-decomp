/* Straight-line functions with calls and guards (batch gen_zf): generated from the code and checked by tests. Calls are
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
    int t3;
    int t52;
    int t9;
    int t58;

    if (!(300.0f > f4)) {
        if ((*(int *)0xC179860) == 7) {
            if (300.0f > f5) {
                nlPushMatrix(0x0);
                t3 = *(int *)((a4 + 0x50));
                if (t3 == 1) {
                    nlTranslateV((a4 + 0xC));
                    if ((*(int *)((a4 + 0x1C))) == 1) {
                        t9 = (unsigned short)(*(short *)((a4 + 0x1A)));
                    } else {
                        t9 = ((unsigned short)(*(short *)((a4 + 0x1A))) + 0x8000);
                    }
                    nlRotateAY(t9);
                    humanDraw((*(int *)((((*(int *)((a4 + 0x28))) << 2) + 0xC0D6158))), ((*(int *)((a4 + 0x24))) + 0x5), (*(int *)((a4 + 0x20))), 0x0);
                    CalcShadow2Matrix((a4 + 0x54));
                    nlObjPutUseViewMatrix(0xC5AA038);
                } else {
                    if (t3 == 2) {
                        nlTranslateV((a4 + 0x40));
                        nlRotateAY((unsigned short)(*(short *)((a4 + 0x1A))));
                        humanDraw((*(int *)((((*(int *)((a4 + 0x28))) << 2) + 0xC0D61AC))), ((*(int *)((a4 + 0x24))) + 0x5), (*(int *)((a4 + 0x20))), 0x1);
                        CalcShadow2Matrix((a4 + 0x54));
                        nlObjPutUseViewMatrix(0xC5AA038);
                    }
                }
            } else {
                nlPushMatrix(0x0);
                nlTranslateV((a4 + 0xC));
                nlRotateAY(((unsigned short)(*(short *)0xC17985A) + 0x8000));
                nlObjPutUseViewMatrix((*(int *)((((*(int *)((a4 + 0x24))) << 2) + 0xC12FF3C))));
            }
        } else {
            nlPushMatrix(0x0);
            nlTranslateV((a4 + 0xC));
            nlRotateAY(((unsigned short)(*(short *)0xC17985A) + 0x8000));
            nlObjPutUseViewMatrix((*(int *)((((*(int *)((a4 + 0x24))) << 2) + 0xC12FF3C))));
        }
    } else {
        nlPushMatrix(0x0);
        t52 = *(int *)((a4 + 0x50));
        if (t52 == 1) {
            nlTranslateV((a4 + 0xC));
            if ((*(int *)((a4 + 0x1C))) == 1) {
                t58 = (unsigned short)(*(short *)((a4 + 0x1A)));
            } else {
                t58 = ((unsigned short)(*(short *)((a4 + 0x1A))) + 0x8000);
            }
            nlRotateAY(t58);
            humanDraw((*(int *)((((*(int *)((a4 + 0x28))) << 2) + 0xC0D6158))), ((*(int *)((a4 + 0x24))) + 0x5), (*(int *)((a4 + 0x20))), 0x0);
            CalcShadow2Matrix((a4 + 0x54));
            nlObjPutUseViewMatrix(0xC5AA038);
        } else {
            if (t52 == 2) {
                nlTranslateV((a4 + 0x40));
                nlRotateAY((unsigned short)(*(short *)((a4 + 0x1A))));
                humanDraw((*(int *)((((*(int *)((a4 + 0x28))) << 2) + 0xC0D61AC))), ((*(int *)((a4 + 0x24))) + 0x5), (*(int *)((a4 + 0x20))), 0x1);
                CalcShadow2Matrix((a4 + 0x54));
                nlObjPutUseViewMatrix(0xC5AA038);
            }
        }
    }
    return nlPopMatrix(0x1);
}
