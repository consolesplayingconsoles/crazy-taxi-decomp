/* Straight-line functions with calls and guards (batch gen_afh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlLocate(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlTranslateV(int);
void goiToolCoursePoint(int a4);

void goiToolCoursePoint(int a4)
{
    int t2;
    int t6;
    int t11;
    int t12;
    int t16;
    int t21;
    int t27;
    int t28;
    int t29;
    int t32;
    int t33;
    int t38;
    int t41;
    int t43;
    int t48;
    int t51;
    int t60;
    float u64;
    int t76;
    int t23;
    int t25;
    int t3;
    int t4;
    int t9;
    int t13;
    int t14;
    int t19;
    int t55;
    int t34;
    int t39;
    int t44;
    int t49;

    if (a4 == 0) {
        *(unsigned int *)0xC2A62BC = 0x0;
        *(unsigned int *)0xC2A62B8 = 0x0;
    } else {
        if ((int)(*(int *)0xC2A4E58) < (int)0x1E) {
            t2 = *(int *)0xC1EE284;
            t6 = 0x0;
            if (((0x10 & t2) != 0) && (t3 = *(int *)0xC2A6694, t4 = *(int *)0xC2A62B8, (int)t4 < (int)(t3 - 1))) {
                t6 = 0x1;
            }
            t11 = 0x0;
            if (((0x20 & t2) != 0) && (t9 = *(int *)0xC2A62B8, (int)t9 > 0)) {
                t11 = 0x1;
            }
            t23 = t6;
            t25 = t11;
        } else {
            t12 = *(int *)0xC1EE280;
            t16 = 0x0;
            if (((0x10 & t12) != 0) && (t13 = *(int *)0xC2A6694, t14 = *(int *)0xC2A62B8, (int)t14 < (int)(t13 - 1))) {
                t16 = 0x1;
            }
            t21 = 0x0;
            if (((0x20 & t12) != 0) && (t19 = *(int *)0xC2A62B8, (int)t19 > 0)) {
                t21 = 0x1;
            }
            t23 = t16;
            t25 = t21;
        }
        t27 = *(int *)0xC2A62B8;
        *(unsigned int *)0xC2A62B8 = (t27 + (t23 - t25));
        t28 = *(int *)0xC2A6690;
        t29 = *(int *)(((((((t27 + (t23 - t25)) << 1) + (t27 + (t23 - t25))) << 2) + t28) + 0x0));
        t32 = *(int *)(((*(int *)(((((((t27 + (t23 - t25)) << 1) + (t27 + (t23 - t25))) << 2) + t28) + 0x4))) + 0x0));
        if ((int)(*(int *)0xC2A4E58) < (int)0x1E) {
            t33 = *(int *)0xC1EE284;
            t38 = 0x0;
            if (((0x80 & t33) != 0) && (t34 = *(int *)0xC2A62BC, (int)t34 < (int)(t32 - 1))) {
                t38 = 0x1;
            }
            t41 = 0x0;
            if (((0x40 & t33) != 0) && (t39 = *(int *)0xC2A62BC, (int)t39 > 0)) {
                t41 = 0x1;
            }
            t55 = ((*(int *)0xC2A62BC) + (t38 - t41));
        } else {
            t43 = *(int *)0xC1EE280;
            t48 = 0x0;
            if (((0x80 & t43) != 0) && (t44 = *(int *)0xC2A62BC, (int)t44 < (int)(t32 - 1))) {
                t48 = 0x1;
            }
            t51 = 0x0;
            if (((0x40 & t43) != 0) && (t49 = *(int *)0xC2A62BC, (int)t49 > 0)) {
                t51 = 0x1;
            }
            t55 = ((*(int *)0xC2A62BC) + (t48 - t51));
        }
        *(unsigned int *)0xC2A62BC = t55;
        *(unsigned int *)0xC2A62BC = ((int)((int)t55 % (int)t32));
        nlPushMatrix(0x0);
        t60 = *(int *)0xC2A62BC;
        nlTranslateV(((((t60 << 1) + t60) << 2) + t29));
        nlRotateAY((((*(int *)0xC1EE330) << 8) << 2));
        u64 = *(float *)0xC04AB2C;
        nlScale(u64, u64, u64);
        nlRotateAX(0xC000);
        nlTranslate(0.0f, 0.0f, (*(float *)0xC04AB3C));
        nlObjPutUseViewMatrix(0xC46BAB8);
        nlPopMatrix(0x1);
        nlLocate(0x1E, 0x28);
        nlPrintf(0xC0C322C, ((*(int *)0xC2A62B8)), (((((*(int *)0xC2A62B8) << 2) << 2) << 1) + 0xC0C0DA0));
        t76 = *(int *)0xC2A62B8;
        nlPrintf(0xC0C323C, ((*(int *)0xC2A62BC)), ((*(int *)(((*(int *)((((((t76 << 1) + t76) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0)))));
    }
}
