/* Straight-line functions with calls and guards (batch gen_agb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int selectSetDriverFace(int a4, int a5, int a6, int a7);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };


int selectSetDriverFace(int a4, int a5, int a6, int a7)
{
    int t1;
    int t46;
    int t60;
    int t87;
    int t93;
    int t95;
    int t106;
    int t80;
    int t36;
    int t37;
    int t38;
    int t75;
    int t69;
    int t101;
    int t97;

    t1 = *(int *)(((*(int *)0xC2A751C) + 0x0));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                if (t1 == 3) {
                    *(unsigned int *)0xC133184 = ((((struct o28_int *)0xC133790)->v));
                    (((struct o34_uint *)0xC133144)->v) = ((((struct o24_int *)0xC133790)->v));
                }
            } else {
                (((struct o0_uint *)0xC133144)->v) = ((((struct o0_int *)0xC133790)->v));
            }
            t80 = t1;
        } else {
            if (((int)(*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) < (int)0x6F) && (t36 = *(int *)0xC2A751C, t37 = *(int *)((t36 + 0x0)), t38 = *(int *)((0xC2A7538 + (t37 << 2))), (int)t38 >= (int)0x17)) {
                *(unsigned int *)0xC133104 = ((((struct o30_int *)0xC133750)->v));
            } else {
                *(unsigned int *)0xC133104 = ((((struct o28_int *)0xC133750)->v));
            }
            t46 = *(int *)(((*(int *)0xC2A751C) + 0x0));
            if ((int)(*(int *)((0xC2A7538 + (t46 << 2)))) < (int)0x7C) {
                if ((int)(*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) >= (int)0x59) {
                    t60 = (((struct o1C_int *)0xC133750)->v);
                    (((struct o34_uint *)0xC1330C4)->v) = t60;
                    t69 = t60;
                } else {
                    if ((int)(*(int *)((0xC2A7538 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))) >= (int)0x17) {
                        (((struct o34_uint *)0xC1330C4)->v) = ((((struct o2C_int *)0xC133750)->v));
                    } else {
                        (((struct o34_uint *)0xC1330C4)->v) = ((((struct o34_int *)0xC133750)->v));
                    }
                    t69 = 0x17;
                }
                t75 = t69;
            } else {
                (((struct o34_uint *)0xC1330C4)->v) = ((((struct o34_int *)0xC133750)->v));
                t75 = (t46 << 2);
            }
            t80 = t75;
        }
        t106 = t80;
    } else {
        t87 = *(int *)(((*(int *)0xC2A751C) + 0x0));
        if ((int)(*(int *)((0xC2A7538 + (t87 << 2)))) < (int)0x56) {
            t93 = *(int *)(((*(int *)0xC2A751C) + 0x0));
            if ((int)(*(int *)((0xC2A7538 + (t93 << 2)))) >= (int)0x32) {
                t95 = (((struct o8_int *)0xC133750)->v);
                (((struct o0_uint *)0xC1330C4)->v) = t95;
                t97 = t95;
            } else {
                (((struct o0_uint *)0xC1330C4)->v) = ((((struct o0_int *)0xC133750)->v));
                t97 = (t93 << 2);
            }
            t101 = t97;
        } else {
            (((struct o0_uint *)0xC1330C4)->v) = ((((struct o0_int *)0xC133750)->v));
            t101 = (t87 << 2);
        }
        t106 = t101;
    }
    return t106;
}
