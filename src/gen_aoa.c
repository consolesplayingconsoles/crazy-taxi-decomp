/* Straight-line functions with calls and guards (batch gen_aoa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int, float, float);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslateV(int);
float Put_Transporter(int a4, float f4, float f5);

float Put_Transporter(int a4, float f4, float f5)
{
    int t0;
    int t2;
    int t3;
    int t28;
    int t1;
    int t4;
    float u5;
    float u6;
    float u7;
    int t34;
    int t37;
    float u38;
    float u39;
    int t31;
    int stk[14];

    t0 = 0xC04EF58;
    t2 = a4;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)(*(int *)0xC0C83EC)) {
            break;
        }
        t2 = t3;
        t2 = (t2 << 2);
        t2 = (t2 + t3);
        t2 = (t2 << 2);
        t2 = (short)t2;
        *(unsigned int *)(((int)stk + 4)) = t2;
        t2 = (t2 + 0xC1187E0);
        u5 = (nlLength(t2, 0xC179840, f4, f5));
        t0 = 0xC04EF64;
        u7 = u5;
        u6 = (*(float *)((t0 + 0x0)));
        if (u6 > u7) {
            t0 = (nlPushUnitMatrix());
            t4 = (*(int *)(((int)stk + 4)));
            t4 = (t4 + 0xC1187E0);
            t2 = t4;
            t0 = (nlTranslateV(t2));
            t0 = 0x10;
            u6 = (*(float *)((t4 + t0)));
            u6 = (u6 * 65536.0f);
            u6 = (u6 / 360.0f);
            u6 = (u6 + 0.5f);
            t2 = (int)u6;
            t2 = (t2 & 0xFFFF);
            t0 = (nlRotateAY(t2));
            t0 = 0xC;
            u6 = (*(float *)((t4 + t0)));
            u6 = (u6 * 65536.0f);
            u6 = (u6 / 360.0f);
            u6 = (u6 + 0.5f);
            t2 = (int)u6;
            t2 = (t2 & 0xFFFF);
            t0 = (nlRotateAX(t2));
            t0 = 0xC04EF78;
            t4 = t3;
            u6 = (*(float *)((t0 + 0x0)));
            t4 = (t4 << 2);
            if (u7 > u6) {
                t2 = 0xC4537F8;
                t0 = (nlObjPutUseViewMatrix(t2));
                t0 = t4;
                t0 = (*(int *)((0xC2A6F60 + t0)));
                if (t0 == 1) {
                    t2 = 0xC457018;
                    t0 = (nlObjPutUseViewMatrix(t2));
                }
            } else {
                t2 = 0xC4573C8;
                t0 = (nlObjPutUseViewMatrix(t2));
                t0 = t4;
                t0 = (*(int *)((0xC2A6F60 + t0)));
                if (t0 == 1) {
                    t2 = 0xC45E598;
                    t0 = (nlObjPutUseViewMatrix(t2));
                }
            }
            t2 = 0x1;
            t0 = (nlPopMatrix(t2));
            t2 = t4;
            t2 = (t2 + 0xC2A6EE8);
            t28 = *(int *)((t2 + 0x0));
            t1 = (t28 + 0x1);
            *(unsigned int *)((t2 + 0x0)) = (t28 + 0x1);
            if ((int)t1 > (int)0x32) {
                t2 = t4;
                t2 = (t2 + 0xC2A6F60);
                t1 = (*(int *)((t2 + 0x0)));
                t1 = (t1 + 0x1);
                t0 = 0x2;
                t0 = ((int)((int)t1 % (int)t0));
                *(unsigned int *)((t2 + 0x0)) = t0;
                t0 = t4;
                *(unsigned int *)((0xC2A6EE8 + t0)) = 0x0;
            } else {
                t31 = t1;
            }
            t34 = t31;
            t37 = t2;
        } else {
            u38 = u5;
            u39 = u6;
        }
        u5 = u38;
        u6 = u39;
        t1 = t34;
        t3 = (t3 + 0x1);
        t2 = t37;
    }
    return u5;
}
