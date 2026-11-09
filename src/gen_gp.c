/* Straight-line functions with calls and guards (batch gen_gp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int NextWindow(int);
int Voice_Request(int, int, int, int);
float nlFastSin(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
int nlTranslate(float, float, float);
int nlsndSeqRequest(int);
int putString(int, int, float, float, float);
int windowEnterStep(int);
int windowOpenStep(int);
int windowGotBike(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o1A_ushort { char p[0x1A]; unsigned short v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


int windowGotBike(void)
{
    int t8;
    float u17;
    float u121;
    float u122;
    float u123;
    float u137;
    int t138;

    if (((*(int *)0xC1EE284) & 0x400) != 0) {
        *(unsigned int *)0xC2A1208 = 0x2;
    }
    if ((windowOpenStep(0x0)) == 1) {
        (((struct o4_float *)0xC2A1AF0)->v) = 2560.0f;
        (((struct o8_float *)0xC2A1AF0)->v) = -32.0f;
        (((struct oC_float *)0xC2A1AF0)->v) = 150.0f;
        (((struct o10_float *)0xC2A1AF0)->v) = 0.0f;
        (((struct o14_float *)0xC2A1AF0)->v) = 500.0f;
        (((struct o18_ushort *)0xC2A1AF0)->v) = 0x0;
        (((struct o1A_ushort *)0xC2A1AF0)->v) = 0x4000;
        (((struct o1C_ushort *)0xC2A1AF0)->v) = 0x800;
        (((struct o20_float *)0xC2A1AF0)->v) = 10.0f;
        (((struct o24_float *)0xC2A1AF0)->v) = (-1.0f);
        (((struct o0_uint *)0xC2A1AF0)->v) = 0xB4;
        *(unsigned int *)0xC0EF550 = 0x2BA;
        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
    }
    if (((*(int *)0xC2A1208) & 0x4) == 0) {
    } else {
        t8 = (((struct o0_int *)0xC2A1AF0)->v);
        if ((int)(int)((float)t8 - 30.0f) > 0) {
            (((struct o4_float *)0xC2A1AF0)->v) = (((((struct o4_float *)0xC2A1AF0)->v)) - 40.0f);
            (((struct o1A_ushort *)0xC2A1AF0)->v) = (int)((nlFastSin((0x10000 - ((int)((float)t8 - 30.0f) << 7)))) * 65536.0f);
            if (((((struct oC_float *)0xC2A1AF0)->v)) > 0.0f) {
                (((struct oC_float *)0xC2A1AF0)->v) = (((((struct oC_float *)0xC2A1AF0)->v)) - (((((struct oC_float *)0xC2A1AF0)->v)) / (float)(int)((float)t8 - 30.0f)));
            }
            u17 = (((struct o14_float *)0xC2A1AF0)->v);
            if (u17 > 0.0f) {
                (((struct o14_float *)0xC2A1AF0)->v) = (((((struct o14_float *)0xC2A1AF0)->v)) - (u17 / (float)(int)((float)t8 - 30.0f)));
            }
            if ((int)((float)t8 - 30.0f) == 30) {
                nlsndSeqRequest(0x40BA9);
            }
        } else {
            (((struct o20_float *)0xC2A1AF0)->v) = 1.0f;
            if (((((struct o0_int *)0xC2A1AF0)->v)) == 0) {
                (((struct o4_float *)0xC2A1AF0)->v) = 0.0f;
            } else {
                (((struct o4_float *)0xC2A1AF0)->v) = (((((struct o4_float *)0xC2A1AF0)->v)) - (((((struct o4_float *)0xC2A1AF0)->v)) / (float)((((struct o0_int *)0xC2A1AF0)->v))));
            }
            (((struct o8_float *)0xC2A1AF0)->v) = 32.0f;
            (((struct oC_float *)0xC2A1AF0)->v) = 0.0f;
            (((struct o14_float *)0xC2A1AF0)->v) = 0.0f;
            (((struct o1A_ushort *)0xC2A1AF0)->v) = 0x0;
            if (0.0f > ((((struct o24_float *)0xC2A1AF0)->v))) {
                (((struct o24_float *)0xC2A1AF0)->v) = (((((struct o24_float *)0xC2A1AF0)->v)) + 0.099999994f);
            }
            if ((int)(unsigned short)((((struct o18_short *)0xC2A1AF0)->v)) > 0) {
                (((struct o18_ushort *)0xC2A1AF0)->v) = (((((struct o18_short *)0xC2A1AF0)->v)) - 0x100);
            }
            if ((int)(unsigned short)((((struct o1C_short *)0xC2A1AF0)->v)) > 0) {
                (((struct o1C_ushort *)0xC2A1AF0)->v) = (((((struct o1C_short *)0xC2A1AF0)->v)) - 0x100);
            }
            if (((((struct o0_int *)0xC2A1AF0)->v)) == 10) {
                nlsndSeqRequest(0xA04A9);
            }
        }
        if ((int)((((struct o0_int *)0xC2A1AF0)->v)) > 0) {
            if (((((struct o0_int *)0xC2A1AF0)->v)) == 1) {
                *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x8);
                nlsndSeqRequest(0x308A9);
            }
            (((struct o0_uint *)0xC2A1AF0)->v) = (((((struct o0_int *)0xC2A1AF0)->v)) - 1);
        }
    }
    u121 = (((struct o8_float *)0xC2A1AF0)->v);
    u122 = (((struct o20_float *)0xC2A1AF0)->v);
    u123 = (((struct o4_float *)0xC2A1AF0)->v);
    if ((float)((((struct o0_int *)0xC2A1AF0)->v)) > 30.0f) {
        putString(0x26, 0xC0A20E0, (u123 + 320.0f), (u121 + 240.0f), u122);
    } else {
        putString(0x26, 0xC0A20F8, (u123 + 320.0f), (u121 + 240.0f), u122);
    }
    nlPushUnitMatrix();
    nlSetTranslate(0xC2A1AFC);
    nlTranslate(0.0f, (-8.0f), (-6e+01f));
    nlRotateAY((0xF000 + (unsigned short)((((struct o1A_short *)0xC2A1AF0)->v))));
    nlRotateAY((unsigned short)((((struct o1A_short *)0xC2A1AF0)->v)));
    u137 = (-3.5f);
    t138 = 0x0;
    for (;;) {
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((((signed char)(((t138 << 1) + t138) << 2) + 0xC0A20B0) + 0x0))), (*(float *)((((signed char)(((t138 << 1) + t138) << 2) + 0xC0A20B0) + 0x4))), (*(float *)((((signed char)(((t138 << 1) + t138) << 2) + 0xC0A20B0) + 0x8))));
        if ((int)t138 < (int)0x2) {
            if ((float)((((struct o0_int *)0xC2A1AF0)->v)) > 3e+01f) {
                nlRotateAX((unsigned short)(((*(int *)0xC1EE330) << 8) << 2));
            }
        }
        if ((int)t138 >= (int)0x1) {
            nlRotateAX((unsigned short)((((struct o18_short *)0xC2A1AF0)->v)));
            nlRotateAZ((unsigned short)((((struct o1C_short *)0xC2A1AF0)->v)));
        }
        if ((int)t138 >= (int)0x2) {
            nlTranslate(0.0f, (((((struct o24_float *)0xC2A1AF0)->v)) + u137), 0.0f);
        }
        nlObjPut((*(int *)(((t138 << 2) + 0xC0EF7E4))));
        nlPopMatrix(0x1);
        t138 = (t138 + 0x1);
        if ((int)t138 >= (int)0x4) {
            break;
        }
    }
    nlPopMatrix(0x1);
    NextWindow(0x0);
    return windowEnterStep(0x3C);
}
