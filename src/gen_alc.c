/* Straight-line functions with calls and guards (batch gen_alc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ResetFadeColor(void);
int nlLocate(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlTranslateNV(int);
int nlTranslateV(int);
int goiToolCourseMap(int a4);

int goiToolCourseMap(int a4)
{
    int t2;
    int t7;
    int t11;
    int t13;
    int t18;
    int t22;
    int t29;
    int t33;
    int t34;
    int t39;
    int t42;
    int t44;
    int t49;
    int t52;
    int t65;
    int t72;
    int t73;
    int t74;
    int t76;
    int t80;
    int t124;
    int t132;
    int t27;
    int t3;
    int t4;
    int t9;
    int t14;
    int t15;
    int t20;
    int t56;
    int t35;
    int t40;
    int t45;
    int t50;
    int t75;
    int t117;
    int t88;
    int t112;
    int t98;
    int t99;
    int t100;
    int stk[25];

    if (a4 == 0) {
        *(unsigned int *)0xC2A62B4 = 0x0;
        *(unsigned int *)0xC2A62B0 = 0x0;
    } else {
        if ((int)(*(int *)0xC2A4E58) < (int)0x1E) {
            *(unsigned int *)(((int)stk + 48)) = 0xC1EE280;
            t2 = *(int *)0xC1EE284;
            t7 = 0x0;
            if (((0x10 & t2) != 0) && (t3 = *(int *)0xC2A6694, t4 = *(int *)0xC2A62B0, (int)t4 < (int)(t3 - 1))) {
                t7 = 0x1;
            }
            t11 = 0x0;
            if (((0x20 & t2) != 0) && (t9 = *(int *)0xC2A62B0, (int)t9 > 0)) {
                t11 = 0x1;
            }
            t27 = ((*(int *)0xC2A62B0) + (t7 - t11));
        } else {
            *(unsigned int *)(((int)stk + 44)) = 0xC1EE280;
            t13 = *(int *)0xC1EE280;
            t18 = 0x0;
            if (((0x10 & t13) != 0) && (t14 = *(int *)0xC2A6694, t15 = *(int *)0xC2A62B0, (int)t15 < (int)(t14 - 1))) {
                t18 = 0x1;
            }
            t22 = 0x0;
            if (((0x20 & t13) != 0) && (t20 = *(int *)0xC2A62B0, (int)t20 > 0)) {
                t22 = 0x1;
            }
            t27 = ((*(int *)0xC2A62B0) + (t18 - t22));
        }
        *(unsigned int *)0xC2A62B0 = t27;
        t29 = *(int *)0xC2A6690;
        *(unsigned int *)(((int)stk + 28)) = (*(int *)((((((t27 << 1) + t27) << 2) + t29) + 0x0)));
        t33 = *(int *)(((*(int *)((((((t27 << 1) + t27) << 2) + t29) + 0x4))) + 0x0));
        if ((int)(*(int *)0xC2A4E58) < (int)0x1E) {
            *(unsigned int *)(((int)stk + 40)) = 0xC1EE280;
            t34 = *(int *)0xC1EE284;
            t39 = 0x0;
            if (((0x80 & t34) != 0) && (t35 = *(int *)0xC2A62B4, (int)t35 < (int)(t33 - 1))) {
                t39 = 0x1;
            }
            t42 = 0x0;
            if (((0x40 & t34) != 0) && (t40 = *(int *)0xC2A62B4, (int)t40 > 0)) {
                t42 = 0x1;
            }
            t56 = ((*(int *)0xC2A62B4) + (t39 - t42));
        } else {
            *(unsigned int *)(((int)stk + 36)) = 0xC1EE280;
            t44 = *(int *)0xC1EE280;
            t49 = 0x0;
            if (((0x80 & t44) != 0) && (t45 = *(int *)0xC2A62B4, (int)t45 < (int)(t33 - 1))) {
                t49 = 0x1;
            }
            t52 = 0x0;
            if (((0x40 & t44) != 0) && (t50 = *(int *)0xC2A62B4, (int)t50 > 0)) {
                t52 = 0x1;
            }
            t56 = ((*(int *)0xC2A62B4) + (t49 - t52));
        }
        *(unsigned int *)0xC2A62B4 = t56;
        *(unsigned int *)0xC2A62B4 = ((int)((int)t56 % (int)t33));
        nlPushUnitMatrix();
        nlTranslate(0.0f, 0.0f, -10.0f);
        nlRotateAX(0x4000);
        if (((*(int *)0xC1EE24C) & 8) != 0) {
            nlScale(0.0014999999f, 0.0014999999f, 0.0014999999f);
            t65 = *(int *)0xC2A62B4;
            nlTranslateNV(((((t65 << 1) + t65) << 2) + (*(int *)(((int)stk + 28)))));
        } else {
            nlScale(0.00039999999f, 0.00039999999f, 0.00039999999f);
        }
        *(unsigned int *)(((int)stk + 32)) = 0xC1EE24C;
        t72 = 0xC04A738;
        t73 = a4;
        t74 = 0x0;
        t76 = 0xC1EE24C;
        for (;;) {
            if ((int)t74 >= (int)(*(int *)0xC2A6694)) {
                break;
            }
            t73 = (*(int *)0xC2A62B0);
            if (((int)t73 < (int)0x1) && (t74 != t73)) {
                t117 = t73;
            } else {
                t80 = *(int *)0xC2A6690;
                *(unsigned int *)(((int)stk + 28)) = (*(int *)((((((t74 << 1) + t74) << 2) + t80) + 0x0)));
                t75 = (*(int *)((((((t74 << 1) + t74) << 2) + t80) + 0x4)));
                t75 = (*(int *)((t75 + 0x0)));
                if (t74 == t73) {
                    t72 = (nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f));
                } else {
                    t88 = t73;
                }
                t73 = t88;
                t76 = 0x0;
                if ((int)t75 > 0) {
                    for (;;) {
                        t73 = 0x0;
                        t72 = (nlPushMatrix(t73));
                        t73 = t76;
                        t73 = (t73 << 1);
                        t73 = (t73 + t76);
                        t73 = (t73 << 2);
                        t73 = (t73 + (*(int *)(((int)stk + 28))));
                        t72 = (nlTranslateV(t73));
                        t72 = (nlScale(5.0f, 5.0f, 5.0f));
                        t73 = 0xC5B4960;
                        t72 = (nlObjPut(t73));
                        t72 = (*(int *)(((int)stk + 32)));
                        t72 = (*(int *)((t72 + 0x0)));
                        if (((t72 & 8) == 0) && ((t98 = *(int *)0xC2A62B4, t76 == t98) && (t99 = *(int *)0xC1EE330, t100 = ((t72 & 8) == 0), t72 = t99, (t72 & 24) == 0))) {
                            t72 = (nlTranslate(0.0f, 0.099999994f, 0.0f));
                            t72 = (nlScale((1.0f + 1.0f), (1.0f + 1.0f), (1.0f + 1.0f)));
                            t73 = 0xC5B4960;
                            t72 = (nlObjPut(t73));
                        }
                        t73 = 0x1;
                        t72 = (nlPopMatrix(t73));
                        if ((int)t75 > (int)0xBB8) {
                            t76 = (t76 + 0x2);
                        }
                        if ((int)t75 > (int)0x7D0) {
                            t76 = (t76 + 0x2);
                        }
                        if ((int)t75 > (int)0x3E8) {
                            t76 = (t76 + 0x2);
                        }
                        if ((int)t75 > (int)0x1F4) {
                            t76 = (t76 + 0x2);
                        }
                        t76 = (t76 + 0x5);
                        if ((int)t76 >= (int)t75) {
                            break;
                        }
                    }
                } else {
                    t112 = t73;
                }
                t73 = t112;
                t72 = (ResetFadeColor());
            }
            t74 = (t74 + 0x1);
            t73 = t117;
        }
        nlPopMatrix(0x1);
        nlLocate(0x1E, 0x28);
        nlPrintf(0xC0C322C, ((*(int *)0xC2A62B0)), (((((*(int *)0xC2A62B0) << 2) << 2) << 1) + 0xC0C0DA0));
        t124 = *(int *)0xC2A62B0;
        t132 = (nlPrintf(0xC0C323C, ((*(int *)0xC2A62B4)), ((*(int *)(((*(int *)((((((t124 << 1) + t124) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0))))));
    }
    return t132;
}
