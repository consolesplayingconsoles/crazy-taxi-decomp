/* Straight-line functions with calls and guards (batch gen_kp): generated from the code and checked by tests. Calls are
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
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o24_short { char p[0x24]; short v; };


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
    if ((((((struct o0_int *)0xC2A759C)->v)) != 1) && (t3 = (((struct o0_int *)0xC2A759C)->v), t3 != 2)) {
    } else {
        nlTranslate(((((struct o0_float *)0xC2A7508)->v)), 0.0f, 0.0f);
    }
    nlRotateAY((unsigned short)((((struct o24_short *)0xC2A7508)->v)));
    if ((int)((((struct o10_int *)0xC2A7508)->v)) <= (int)0x1) {
        humanDraw((*(int *)(((((a4 << 2) << 2) + 0xC130748) + 0x4))), (*(int *)(((((a4 << 2) << 2) + 0xC130748) + 0xC))), (*(int *)((((a4 << 2) + 0xC2A7538) + 0x0))), 0x0);
        if ((unsigned int)((*(int *)(((*(int *)(((((a4 << 2) << 2) + 0xC130748) + 0x4))) + 0x0))) - 1) > (unsigned int)(*(int *)((((a4 << 2) + 0xC2A7538) + 0x0)))) {
            *(unsigned int *)((((a4 << 2) + 0xC2A7538) + 0x0)) = ((*(int *)((((a4 << 2) + 0xC2A7538) + 0x0))) + 0x1);
        } else {
            *(unsigned int *)((((a4 << 2) + 0xC2A7538) + 0x0)) = 0x0;
        }
    } else {
        selectSetDriverFace();
        selectPlayPickMotion();
        t25 = (((struct o10_int *)0xC2A7508)->v);
        t26 = (((struct o14_int *)0xC2A7508)->v);
        if (t25 == 3) {
            if (((unsigned int)((*(int *)(((*(int *)((((((*(int *)((t26 + 0x0))) << 2) << 2) + 0xC130748) + 0x8))) + 0x0))) - 1) > (unsigned int)(*(int *)((0xC2A7538 + ((*(int *)((t26 + 0x0))) << 2))))) && (((int)t25 >= (int)0x3) && (t38 = *(int *)((t26 + 0x0)), t38 == a4))) {
                t39 = *(int *)((t26 + 0x0));
                *(unsigned int *)((0xC2A7538 + (t39 << 2))) = ((*(int *)((0xC2A7538 + (t39 << 2)))) + 0x1);
                if (((*(int *)((0xC2A7538 + ((*(int *)((((((struct o14_int *)0xC2A7508)->v)) + 0x0))) << 2)))) == 30) && ((t44 = *(int *)0xC17948C, t44 != 0) && (t45 = (((struct o24_int *)0xC2A759C)->v), t45 == 4))) {
                    Sound_Request(0x501A9, 0x0);
                }
            }
        } else {
            if ((int)t25 >= (int)0x2) {
                t59 = *(int *)((t26 + 0x0));
                *(unsigned int *)((0xC2A7538 + (t59 << 2))) = ((*(int *)((0xC2A7538 + (t59 << 2)))) + 0x1);
            }
        }
        t70 = (((struct o14_int *)0xC2A7508)->v);
        if ((unsigned int)((*(int *)(((*(int *)((((((*(int *)((t70 + 0x0))) << 2) << 2) + 0xC130748) + 0x8))) + 0x0))) - 1) <= (unsigned int)(*(int *)((0xC2A7538 + ((*(int *)((t70 + 0x0))) << 2))))) {
            (((struct o10_uint *)0xC2A7508)->v) = 0x4;
            t76 = (((struct o14_int *)0xC2A7508)->v);
            *(unsigned int *)((t76 + 0x0)) = ((*(int *)((t76 + 0x0))) + ((((struct o24_int *)0xC2A759C)->v)));
        }
    }
    return nlPopMatrix(0x1);
}
