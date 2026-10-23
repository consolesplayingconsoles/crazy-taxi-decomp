/* Straight-line functions with calls and guards (batch gen_xh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int DispVector(int, int, int, float);
float nlFastCos(int);
float nlFastSin(int);
int nlLocate(int, int);
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlPrintf(int, ...);
int goiToolLight(int a4);

int goiToolLight(int a4)
{
    int t2;
    int t4;
    int t9;
    float u15;
    int t16;
    int t18;
    float u49;
    int t55;
    float u3;
    float u8;
    int stk[18];

    if (a4 == 0) {
        *(unsigned int *)0xC2A5AF0 = 0x2200;
        *(unsigned int *)0xC2A5AF4 = 0x2900;
        *(float *)0xC2A5AF8 = 0.649999976f;
        t55 = 0xC04AB74;
    } else {
        if (((*(int *)0xC1EE24C) & 4) != 0) {
            *(unsigned int *)(((int)stk + 20)) = 0xC1EE24C;
            t2 = *(int *)0xC1EE24C;
            t4 = 0x0;
            if (((0x10 & t2) != 0) && (u3 = *(float *)0xC2A5AF8, 1.0f > u3)) {
                t4 = 0x1;
            }
            t9 = 0x0;
            if (((0x20 & t2) != 0) && (u8 = *(float *)0xC2A5AF8, u8 > 0.0f)) {
                t9 = 0x1;
            }
            u15 = (*(float *)0xC2A5AF8);
            u15 = u15 + (*(float *)0xC04ACBC) * (float)(t4 - t9);
            *(float *)0xC2A5AF8 = u15;
        } else {
            t16 = *(int *)0xC1EE24C;
            *(unsigned int *)0xC2A5AF0 = ((*(int *)0xC2A5AF0) + ((((((((((0x10 & t16) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x20 & t16) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            t18 = *(int *)0xC1EE24C;
            *(unsigned int *)0xC2A5AF4 = ((*(int *)0xC2A5AF4) + ((((((((((0x80 & t18) == 0)) ? 1 : 0) ^ 0x1) - (-(((((0x40 & t18) == 0)) ? 1 : 0) - 1))) << 2) << 2) << 2) << 1));
            *(unsigned int *)0xC2A5AF0 = (unsigned short)(*(int *)0xC2A5AF0);
            *(unsigned int *)0xC2A5AF4 = (unsigned short)(*(int *)0xC2A5AF4);
        }
        *(float *)(((int)stk + 36)) = ((nlFastCos((*(int *)0xC2A5AF0))) * (nlFastSin((*(int *)0xC2A5AF4))));
        *(float *)(((int)stk + 40)) = (nlFastSin((*(int *)0xC2A5AF0)));
        *(float *)(((int)stk + 44)) = ((nlFastCos((*(int *)0xC2A5AF0))) * (nlFastCos((*(int *)0xC2A5AF4))));
        nlObjPutSetLightDirectionV((((int)stk + 20) + 0x10));
        nlObjPutSetGlobalAmbience((*(float *)0xC2A5AF8));
        *(float *)(((int)stk + 24)) = 0.0f;
        *(float *)(((int)stk + 28)) = (*(float *)0xC04ACD0);
        *(float *)(((int)stk + 32)) = (*(float *)0xC04ACD4);
        DispVector((((int)stk + 20) + 0x10), (((int)stk + 20) + 0x4), 0x1, 1.0f);
        nlLocate(0x1E, 0x28);
        u49 = *(float *)0xC2A5AF8;
        *(float *)(((int)stk + 16)) = u49;
        t55 = (nlPrintf(0xC0C324C, ((*(int *)0xC2A5AF0)), ((*(int *)0xC2A5AF4)), u49));
    }
    return t55;
}
