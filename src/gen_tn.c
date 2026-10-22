/* Straight-line functions with calls and guards (batch gen_tn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
int humanDraw(int, int, int, int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int selectPlayPickMotion(void);
int selectSetDriverFace(void);
int selectDrawDriver(int a4);

int selectDrawDriver(int a4)
{
    int t25;
    int t26;
    int t39;
    int t59;
    int t70;
    int t76;
    int t3;
    int t38;
    int t44;
    int t45;

    nlPushUnitMatrix();
    nlTranslateV(0xC2A7520);
    if (((*(int *)0xC2A759C) != 1) && (t3 = *(int *)0xC2A759C, t3 != 2)) {
    } else {
        nlTranslate((*(float *)0xC2A7508), 0.0f, 0.0f);
    }
    nlRotateAY((unsigned short)(*(short *)0xC2A752C));
    if ((int)(*(int *)0xC2A7518) <= (int)0x1) {
        humanDraw((*(int *)(((((a4 << 2) << 2) + 0xC130748) + 0x4))), (*(int *)(((((a4 << 2) << 2) + 0xC130748) + 0xC))), (*(int *)((((a4 << 2) + 0xC2A7538) + 0x0))), 0x0);
        if ((unsigned int)((*(int *)(((*(int *)(((((a4 << 2) << 2) + 0xC130748) + 0x4))) + 0x0))) - 1) > (unsigned int)(*(int *)((((a4 << 2) + 0xC2A7538) + 0x0)))) {
            *(unsigned int *)((((a4 << 2) + 0xC2A7538) + 0x0)) = ((*(int *)((((a4 << 2) + 0xC2A7538) + 0x0))) + 0x1);
        } else {
            *(unsigned int *)((((a4 << 2) + 0xC2A7538) + 0x0)) = 0x0;
        }
    } else {
        selectSetDriverFace();
        selectPlayPickMotion();
        t25 = *(int *)0xC2A7518;
        t26 = *(int *)0xC2A751C;
        if (t25 == 3) {
            if (((unsigned int)((*(int *)(((*(int *)((((((*(int *)((t26 + 0x0))) << 2) << 2) + 0xC130748) + 0x8))) + 0x0))) - 1) > (unsigned int)(*(int *)((0xC2A7538 + ((*(int *)((t26 + 0x0))) << 2))))) && (((int)t25 >= (int)0x3) && (t38 = *(int *)((t26 + 0x0)), t38 == a4))) {
                t39 = *(int *)((t26 + 0x0));
                *(unsigned int *)((0xC2A7538 + (t39 << 2))) = ((*(int *)((0xC2A7538 + (t39 << 2)))) + 0x1);
                if (((*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) == 30) && ((t44 = *(int *)0xC17948C, t44 != 0) && (t45 = *(int *)0xC2A75C0, t45 == 4))) {
                    Sound_Request(0x501A9, 0x0);
                }
            }
        } else {
            if ((int)t25 >= (int)0x2) {
                t59 = *(int *)((t26 + 0x0));
                *(unsigned int *)((0xC2A7538 + (t59 << 2))) = ((*(int *)((0xC2A7538 + (t59 << 2)))) + 0x1);
            }
        }
        t70 = *(int *)0xC2A751C;
        if ((unsigned int)((*(int *)(((*(int *)((((((*(int *)((t70 + 0x0))) << 2) << 2) + 0xC130748) + 0x8))) + 0x0))) - 1) <= (unsigned int)(*(int *)((0xC2A7538 + ((*(int *)((t70 + 0x0))) << 2))))) {
            *(unsigned int *)0xC2A7518 = 0x4;
            t76 = *(int *)0xC2A751C;
            *(unsigned int *)((t76 + 0x0)) = ((*(int *)((t76 + 0x0))) + (*(int *)0xC2A75C0));
        }
    }
    return nlPopMatrix(0x1);
}
