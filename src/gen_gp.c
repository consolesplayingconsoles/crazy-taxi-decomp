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
        *(float *)0xC2A1AF4 = 2560.0f;
        *(float *)0xC2A1AF8 = -32.0f;
        *(float *)0xC2A1AFC = 150.0f;
        *(float *)0xC2A1B00 = 0.0f;
        *(float *)0xC2A1B04 = 500.0f;
        *(unsigned short *)0xC2A1B08 = 0x0;
        *(unsigned short *)0xC2A1B0A = 0x4000;
        *(unsigned short *)0xC2A1B0C = 0x800;
        *(float *)0xC2A1B10 = 10.0f;
        *(float *)0xC2A1B14 = (-1.0f);
        *(unsigned int *)0xC2A1AF0 = 0xB4;
        *(unsigned int *)0xC0EF550 = 0x2BA;
        Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
    }
    if (((*(int *)0xC2A1208) & 0x4) == 0) {
    } else {
        t8 = *(int *)0xC2A1AF0;
        if ((int)(int)((float)t8 - 30.0f) > 0) {
            *(float *)0xC2A1AF4 = ((*(float *)0xC2A1AF4) - 40.0f);
            *(unsigned short *)0xC2A1B0A = (int)((nlFastSin((0x10000 - ((int)((float)t8 - 30.0f) << 7)))) * 65536.0f);
            if ((*(float *)0xC2A1AFC) > 0.0f) {
                *(float *)0xC2A1AFC = ((*(float *)0xC2A1AFC) - ((*(float *)0xC2A1AFC) / (float)(int)((float)t8 - 30.0f)));
            }
            u17 = *(float *)0xC2A1B04;
            if (u17 > 0.0f) {
                *(float *)0xC2A1B04 = ((*(float *)0xC2A1B04) - (u17 / (float)(int)((float)t8 - 30.0f)));
            }
            if ((int)((float)t8 - 30.0f) == 30) {
                nlsndSeqRequest(0x40BA9);
            }
        } else {
            *(float *)0xC2A1B10 = 1.0f;
            if ((*(int *)0xC2A1AF0) == 0) {
                *(float *)0xC2A1AF4 = 0.0f;
            } else {
                *(float *)0xC2A1AF4 = ((*(float *)0xC2A1AF4) - ((*(float *)0xC2A1AF4) / (float)(*(int *)0xC2A1AF0)));
            }
            *(float *)0xC2A1AF8 = 32.0f;
            *(float *)0xC2A1AFC = 0.0f;
            *(float *)0xC2A1B04 = 0.0f;
            *(unsigned short *)0xC2A1B0A = 0x0;
            if (0.0f > (*(float *)0xC2A1B14)) {
                *(float *)0xC2A1B14 = ((*(float *)0xC2A1B14) + 0.099999994f);
            }
            if ((int)(unsigned short)(*(short *)0xC2A1B08) > 0) {
                *(unsigned short *)0xC2A1B08 = ((*(short *)0xC2A1B08) - 0x100);
            }
            if ((int)(unsigned short)(*(short *)0xC2A1B0C) > 0) {
                *(unsigned short *)0xC2A1B0C = ((*(short *)0xC2A1B0C) - 0x100);
            }
            if ((*(int *)0xC2A1AF0) == 10) {
                nlsndSeqRequest(0xA04A9);
            }
        }
        if ((int)(*(int *)0xC2A1AF0) > 0) {
            if ((*(int *)0xC2A1AF0) == 1) {
                *(unsigned int *)0xC2A1208 = ((*(int *)0xC2A1208) | 0x8);
                nlsndSeqRequest(0x308A9);
            }
            *(unsigned int *)0xC2A1AF0 = ((*(int *)0xC2A1AF0) - 1);
        }
    }
    u121 = *(float *)0xC2A1AF8;
    u122 = *(float *)0xC2A1B10;
    u123 = *(float *)0xC2A1AF4;
    if ((float)(*(int *)0xC2A1AF0) > 30.0f) {
        putString(0x26, 0xC0A20E0, (u123 + 320.0f), (u121 + 240.0f), u122);
    } else {
        putString(0x26, 0xC0A20F8, (u123 + 320.0f), (u121 + 240.0f), u122);
    }
    nlPushUnitMatrix();
    nlSetTranslate(0xC2A1AFC);
    nlTranslate(0.0f, (-8.0f), (-6e+01f));
    nlRotateAY((0xF000 + (unsigned short)(*(short *)0xC2A1B0A)));
    nlRotateAY((unsigned short)(*(short *)0xC2A1B0A));
    u137 = (-3.5f);
    t138 = 0x0;
    for (;;) {
        nlPushMatrix(0x0);
        nlTranslate((*(float *)((((signed char)(((t138 << 1) + t138) << 2) + 0xC0A20B0) + 0x0))), (*(float *)((((signed char)(((t138 << 1) + t138) << 2) + 0xC0A20B0) + 0x4))), (*(float *)((((signed char)(((t138 << 1) + t138) << 2) + 0xC0A20B0) + 0x8))));
        if ((int)t138 < (int)0x2) {
            if ((float)(*(int *)0xC2A1AF0) > 3e+01f) {
                nlRotateAX((unsigned short)(((*(int *)0xC1EE330) << 8) << 2));
            }
        }
        if ((int)t138 >= (int)0x1) {
            nlRotateAX((unsigned short)(*(short *)0xC2A1B08));
            nlRotateAZ((unsigned short)(*(short *)0xC2A1B0C));
        }
        if ((int)t138 >= (int)0x2) {
            nlTranslate(0.0f, ((*(float *)0xC2A1B14) + u137), 0.0f);
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
