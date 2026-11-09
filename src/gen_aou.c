/* Straight-line functions with calls and guards (batch gen_aou): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
int drvJolt(void);
int nlCalcVector(int, int);
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
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };


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
    float u48;
    float u59;
    int t3;
    int stk[50];
    int R1004;
    int R1008;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);

    t0 = 0xC0D51E8;
    t2 = (((int)stk + 4) + 0x14);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D51E8 + 144)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD240) = *(struct mv3 *)(0xC2AD234); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD234) = *(struct mv3 *)(0xC2AD228); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD228) = *(struct mv3 *)(0xC2AD21C); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD21C) = *(struct mv3 *)(0xC2AD210); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD210) = *(struct mv3 *)(0xC2AD204); }
    R1008 = 0xC1790CC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD204) = *(struct mv3 *)(0xC179144); }
    R1004 = 0xC2AD270;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD27C) = *(struct mv3 *)(0xC2AD270); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((R1004)) = *(struct mv3 *)(0xC2AD264); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD264) = *(struct mv3 *)(0xC2AD258); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD258) = *(struct mv3 *)(0xC2AD24C); }
    nlSubVector3op(0xC2AD24C, 0xC2AD204, 0xC2AD210);
    *(float *)0xC2AD2B8 = (nlScalor(0xC2AD24C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD2AC) = *(struct mv3 *)(0xC2AD2A0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD2A0) = *(struct mv3 *)(0xC2AD294); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2AD294) = *(struct mv3 *)(0xC2AD288); }
    nlSubVector3op(0xC2AD288, 0xC2AD24C, 0xC2AD258);
    nlPushMatrix(((R1008) + 0xB4));
    nlCalcVector(0xC0D553C, 0xC2AD1E0);
    nlCalcVector(0xC0D5548, 0xC2AD1EC);
    nlCalcVector(0xC0D5554, 0xC2AD1F8);
    t13 = *(signed char *)0xC179488;
    nlTranslateV(((unsigned char)(((t13 << 1) + t13) << 2) + (((int)stk + 4) + 0x14)));
    nlRotateAY(0x8000);
    t16 = (((struct o10_int *)0xC2AD000)->v);
    t17 = (((struct o0_int *)0xC2AD000)->v);
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
        u28 = (((struct o24_float *)0xC2AD000)->v);
        t29 = (((struct o20_int *)0xC2AD000)->v);
        t41 = ((-(int)((u28 * 65535.0f) / 60.0f)) + 0x8000);
        if ((t29 != 0xC136BE4) && ((t29 != 0xC138BF8) && (t29 != 0xC13A3BC))) {
            t33 = (((struct o20_int *)0xC2AD000)->v);
            t41 = (0xFFFF8000 + (int)((u28 * 65535.0f) / 60.0f));
            if (t33 == 0xC13BB20) {
            } else {
                t41 = 0xC2AD258;
                if (t33 == 0xC13D404) {
                    t41 = 0x8000;
                }
            }
        }
        nlRotateAX(t41);
        nlObjPutUseViewMatrix(0xC3BFFE0);
        nlPushMatrix(0x0);
        u48 = (-2.3f);
        nlTranslate(u48, u48, 0.0f);
        if (((((struct o20_int *)0xC2AD000)->v)) != 0xC135150) {
            nlRotateAX((((((struct o0_int *)0xC2AD0D0)->v)) - t41));
        }
        nlObjPutUseViewMatrix(0xC3C05A8);
        nlGetPushedMatrix(0x0);
        u59 = 2.3f;
        nlTranslate(u59, u59, 0.0f);
        if (((((struct o20_int *)0xC2AD000)->v)) != 0xC135150) {
            nlRotateAX((((((struct o18_int *)0xC2AD0D0)->v)) - t41));
        }
        nlObjPutUseViewMatrix(0xC3C07C8);
        nlPopMatrix(0x1);
    }
    return (nlPopMatrix(0x1));
}
