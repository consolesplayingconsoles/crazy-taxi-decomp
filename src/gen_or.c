/* Straight-line functions with calls and guards (batch gen_or): generated from the code and checked by tests. Calls are
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
void FUN_0c04a8b6(int a4);

void FUN_0c04a8b6(int a4)
{
    int t0;
    int t1;
    int t7;
    int t2;
    int t3;
    int t4;
    int t15;
    int t11;
    int t12;
    int t17;
    int t23;
    int t18;
    int t19;
    int t20;
    int t31;
    int t27;
    int t28;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t52;
    int t46;
    int t47;
    int t58;
    int t54;
    int t55;
    int t60;
    int t61;
    int t68;
    int t62;
    int t63;
    int t74;
    int t70;
    int t71;
    int t76;
    int t83;
    int t85;
    int t87;
    float u89;
    float u92;
    int t97;
    int t98;
    int t99;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t34;
    int t36;
    int t79;

    if (a4 == 0) {
        *(unsigned int *)0xC2A62BC = 0x0;
        *(unsigned int *)0xC2A62B8 = 0x0;
    } else {
        t0 = *(int *)0xC2A4E58;
        if ((int)t0 < (int)0x1E) {
            t1 = *(int *)0xC1EE284;
            t7 = 0x0;
            if ((0x10 & t1) != 0) {
                t2 = *(int *)0xC2A6694;
                t3 = *(int *)0xC2A62B8;
                t4 = 0x0;
                if ((int)t3 < (int)(t2 - 1)) {
                    t4 = 0x1;
                }
                t7 = t4;
            }
            t15 = 0x0;
            if ((0x20 & t1) != 0) {
                t11 = *(int *)0xC2A62B8;
                t12 = 0x0;
                if ((int)t11 > 0) {
                    t12 = 0x1;
                }
                t15 = t12;
            }
            t34 = t7;
            t36 = t15;
        } else {
            t17 = *(int *)0xC1EE280;
            t23 = 0x0;
            if ((0x10 & t17) != 0) {
                t18 = *(int *)0xC2A6694;
                t19 = *(int *)0xC2A62B8;
                t20 = 0x0;
                if ((int)t19 < (int)(t18 - 1)) {
                    t20 = 0x1;
                }
                t23 = t20;
            }
            t31 = 0x0;
            if ((0x20 & t17) != 0) {
                t27 = *(int *)0xC2A62B8;
                t28 = 0x0;
                if ((int)t27 > 0) {
                    t28 = 0x1;
                }
                t31 = t28;
            }
            t34 = t23;
            t36 = t31;
        }
        t39 = *(int *)0xC2A62B8;
        *(unsigned int *)0xC2A62B8 = (t39 + (t34 - t36));
        t40 = *(int *)0xC2A6690;
        t41 = *(int *)(((((((t39 + (t34 - t36)) << 1) + (t39 + (t34 - t36))) << 2) + t40) + 0x0));
        t42 = *(int *)(((((((t39 + (t34 - t36)) << 1) + (t39 + (t34 - t36))) << 2) + t40) + 0x4));
        t43 = *(int *)0xC2A4E58;
        t44 = *(int *)((t42 + 0x0));
        if ((int)t43 < (int)0x1E) {
            t45 = *(int *)0xC1EE284;
            t52 = 0x0;
            if ((0x80 & t45) != 0) {
                t46 = *(int *)0xC2A62BC;
                t47 = 0x0;
                if ((int)t46 < (int)(t44 - 1)) {
                    t47 = 0x1;
                }
                t52 = t47;
            }
            t58 = 0x0;
            if ((0x40 & t45) != 0) {
                t54 = *(int *)0xC2A62BC;
                t55 = 0x0;
                if ((int)t54 > 0) {
                    t55 = 0x1;
                }
                t58 = t55;
            }
            t60 = *(int *)0xC2A62BC;
            t79 = (t60 + (t52 - t58));
        } else {
            t61 = *(int *)0xC1EE280;
            t68 = 0x0;
            if ((0x80 & t61) != 0) {
                t62 = *(int *)0xC2A62BC;
                t63 = 0x0;
                if ((int)t62 < (int)(t44 - 1)) {
                    t63 = 0x1;
                }
                t68 = t63;
            }
            t74 = 0x0;
            if ((0x40 & t61) != 0) {
                t70 = *(int *)0xC2A62BC;
                t71 = 0x0;
                if ((int)t70 > 0) {
                    t71 = 0x1;
                }
                t74 = t71;
            }
            t76 = *(int *)0xC2A62BC;
            t79 = (t76 + (t68 - t74));
        }
        *(unsigned int *)0xC2A62BC = t79;
        t83 = (int)((int)t79 % (int)t44);
        *(unsigned int *)0xC2A62BC = t83;
        nlPushMatrix(0x0);
        t85 = *(int *)0xC2A62BC;
        nlTranslateV(((((t85 << 1) + t85) << 2) + t41));
        t87 = *(int *)0xC1EE330;
        nlRotateAY(((t87 << 8) << 2));
        u89 = *(float *)0xC04AB2C;
        nlScale(u89, u89, u89);
        nlRotateAX(0xC000);
        u92 = *(float *)0xC04AB3C;
        nlTranslate(0.0f, 0.0f, u92);
        nlObjPutUseViewMatrix(0xC46BAB8);
        nlPopMatrix(0x1);
        nlLocate(0x1E, 0x28);
        t97 = *(int *)0xC2A62B8;
        t98 = *(int *)0xC2A62B8;
        t99 = t98;
        nlPrintf(0xC0C322C, t99, ((((t97 << 2) << 2) << 1) + 0xC0C0DA0));
        t101 = *(int *)0xC2A62B8;
        t102 = *(int *)0xC2A6690;
        t103 = *(int *)((((((t101 << 1) + t101) << 2) + t102) + 0x4));
        t104 = *(int *)((t103 + 0x0));
        t105 = t104;
        t106 = *(int *)0xC2A62BC;
        t107 = t106;
        nlPrintf(0xC0C323C, t107, t105);
    }
}
