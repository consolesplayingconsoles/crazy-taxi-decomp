/* Straight-line functions with calls and guards (batch gen_ea): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int FcvPlayBuffer(int, int);
int drvJolt(void);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
float nlScalor(int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Drv_Put(void);

int Drv_Put(void)
{
    int t0;
    int t2;
    int t13;
    int t16;
    int t17;
    float u28;
    int t29;
    int t41;
    int t33;
    int t36;
    int t34;
    float u48;
    float u59;
    int t3;
    int stk[50] = {0};

    t0 = 0xC0D51E8;
    t2 = (((int)stk + 4) + 0x14);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D51E8 + 144)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD240) = *(struct mv3 *)(0xC2AD234); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD234) = *(struct mv3 *)(0xC2AD228); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD228) = *(struct mv3 *)(0xC2AD21C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD21C) = *(struct mv3 *)(0xC2AD210); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD210) = *(struct mv3 *)(0xC2AD204); }
    *(unsigned int *)(((int)stk + 8)) = 0xC1790CC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD204) = *(struct mv3 *)(0xC179144); }
    *(unsigned int *)(((int)stk + 4)) = 0xC2AD270;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD27C) = *(struct mv3 *)(0xC2AD270); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((int)stk + 4)))) = *(struct mv3 *)(0xC2AD264); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD264) = *(struct mv3 *)(0xC2AD258); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD258) = *(struct mv3 *)(0xC2AD24C); }
    nlSubVector3op(0xC2AD24C, 0xC2AD204, 0xC2AD210);
    *(float *)0xC2AD2B8 = (nlScalor(0xC2AD24C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD2AC) = *(struct mv3 *)(0xC2AD2A0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD2A0) = *(struct mv3 *)(0xC2AD294); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD294) = *(struct mv3 *)(0xC2AD288); }
    nlSubVector3op(0xC2AD288, 0xC2AD24C, 0xC2AD258);
    nlPushMatrix(((*(int *)(((int)stk + 8))) + 0xB4));
    FUN_0c077210(0xC0D553C, 0xC2AD1E0);
    FUN_0c077210(0xC0D5548, 0xC2AD1EC);
    FUN_0c077210(0xC0D5554, 0xC2AD1F8);
    t13 = *(signed char *)0xC179488;
    nlTranslateV(((unsigned char)(((t13 << 1) + t13) << 2) + (((int)stk + 4) + 0x14)));
    nlRotateAY(0x8000);
    t16 = *(int *)0xC2AD010;
    t17 = *(int *)0xC2AD000;
    if ((t16 != 2) && (t16 != 4)) {
        if (((*(signed char *)0xC2AD1DF) & 128) != 0) {
            FcvPlayBuffer(0xC2AD028, t17);
        } else {
            drvJolt();
        }
    } else {
        FcvPlayBuffer(0xC2AD028, t17);
    }
    nlGetTranslate(0xC2AD004);
    if (((*(signed char *)0xC2AD1DF) & 1) != 0) {
        nlTranslate(0.0f, 3.5f, -3.25999999f);
        u28 = *(float *)0xC2AD024;
        t29 = *(int *)0xC2AD020;
        t41 = ((-(int)((u28 * 65535.0f) / 60.0f)) + 0x8000);
        if ((t29 != 0xC136BE4) && ((t29 != 0xC138BF8) && (t29 != 0xC13A3BC))) {
            t33 = *(int *)0xC2AD020;
            t36 = (0xFFFF8000 + (int)((u28 * 65535.0f) / 60.0f));
            if (t33 == 0xC13BB20) {
            } else {
                t34 = 0xC2AD258;
                if (t33 == 0xC13D404) {
                    t34 = 0x8000;
                }
                t36 = t34;
            }
            t41 = t36;
        }
        nlRotateAX(t41);
        nlObjPutUseViewMatrix(0xC3BFFE0);
        nlPushMatrix(0x0);
        u48 = -2.3f;
        nlTranslate(u48, u48, 0.0f);
        if ((*(int *)0xC2AD020) != 0xC135150) {
            nlRotateAX(((*(int *)0xC2AD0D0) - t41));
        }
        nlObjPutUseViewMatrix(0xC3C05A8);
        nlGetPushedMatrix(0x0);
        u59 = 2.3f;
        nlTranslate(u59, u59, 0.0f);
        if ((*(int *)0xC2AD020) != 0xC135150) {
            nlRotateAX(((*(int *)0xC2AD0E8) - t41));
        }
        nlObjPutUseViewMatrix(0xC3C07C8);
        nlPopMatrix(0x1);
    }
    return (nlPopMatrix(0x1));
}
