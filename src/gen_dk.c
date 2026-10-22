/* Straight-line functions with calls and guards (batch gen_dk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07b9e0(void);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlTranslate(float, float, float);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetAttribFaceColor(int, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int PutKyakuStopArea(int a4, int a5, int a6, int a7);

int PutKyakuStopArea(int a4, int a5, int a6, int a7)
{
    float u1;
    int t6;
    int t13;
    int t45;
    float u46;
    int t31;
    int t32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u47;
    float u48;
    float u49;
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t80;
    float u96;
    float u102;
    int t106;
    int stk[21] = {0};

    *(unsigned int *)(((int)stk + 32)) = a5;
    u1 = *(float *)0xC0ED920;
    if ((*(int *)0xC271D28) != a4) {
        *(unsigned int *)0xC271D28 = a4;
        t6 = *(int *)((((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC0ED9C8 + ((*(int *)0xC1EE210) << 2))))))) + ((a4 << 2) << 1)) + 0x0));
        *(float *)0xC271D1C = 10.0f;
        if ((*(int *)0xC2A7368) != 0) {
        } else {
            t13 = *(int *)((((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC0ED9C8 + ((*(int *)0xC1EE210) << 2))))))) + (((*(int *)0xC271D28) << 2) << 1)) + 0x4));
            nlTriPutTextureInit(0xC271D30, 0xFFFFFFFF, 0x0);
            nlTriPutSetAttrib(0xC271D30, 0x1, 0x0, 0xFFFFFFFF, 0x1, 0x0, 0x1, 0x1, 0x0, ((t6 << 1) + 0x2), 1.0f, 0.799999952f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f);
            nlTriPutSetClipping(0xC271D30, (*(float *)((t13 + 0x0))), (*(float *)((t13 + 0x4))), (*(float *)((t13 + 0x8))), 2000.0f);
            *(unsigned int *)0xC271D50 = ((*(int *)0xC271D50) & 0x3FFFF3F);
            *(unsigned int *)0xC271D50 = ((*(int *)0xC271D50) | 0x300000C0);
            nlTriPutSetPoint(0xC271D30, 0x0, (*(float *)((t13 + 0x0))), (*(float *)((t13 + 0x4))), (*(float *)((t13 + 0x8))), 1.0f, 1.0f, 1.0f, u1, 0.0f);
            nlTriPutSetPoint(0xC271D30, 0x1, (*(float *)((t13 + 0x0))), ((*(float *)((t13 + 0x4))) + (*(float *)0xC271D1C)), (*(float *)((t13 + 0x8))), 1.0f, 1.0f, 1.0f, u1, 0.979999959f);
            t45 = 0x1;
            u46 = (u1 + 0.5f);
            if ((int)0x1 < (int)t6) {
                t31 = 0x1;
                t32 = (t13 + 0xC);
                u33 = (u1 + 0.5f);
                for (;;) {
                    u34 = *(float *)((t32 + 0x8));
                    u35 = *(float *)((t32 + 0x4));
                    u36 = *(float *)((t32 + 0x0));
                    *(unsigned int *)(((int)stk + 28)) = (t31 << 1);
                    nlTriPutSetPoint(0xC271D30, (t31 << 1), u36, u35, u34, 1.0f, 1.0f, 1.0f, u33, 0.0f);
                    nlTriPutSetPoint(0xC271D30, ((*(int *)(((int)stk + 28))) + 0x1), (*(float *)((t32 + 0x0))), ((*(float *)((t32 + 0x4))) + (*(float *)0xC271D1C)), (*(float *)((t32 + 0x8))), 1.0f, 1.0f, 1.0f, u33, 0.979999959f);
                    t31 = (t31 + 0x1);
                    u33 = (u33 + 0.5f);
                    t32 = (t32 + 0xC);
                    if ((int)t31 >= (int)t6) {
                        break;
                    }
                }
                t45 = t31;
                u46 = u33;
            }
            u47 = *(float *)((t13 + 0x8));
            u48 = *(float *)((t13 + 0x4));
            u49 = *(float *)((t13 + 0x0));
            *(unsigned int *)(((int)stk + 28)) = (t45 << 1);
            nlTriPutSetPoint(0xC271D30, (t45 << 1), u49, u48, u47, 1.0f, 1.0f, 1.0f, u46, 0.0f);
            nlTriPutSetPoint(0xC271D30, ((*(int *)(((int)stk + 28))) + 0x1), (*(float *)((t13 + 0x0))), ((*(float *)((t13 + 0x4))) + (*(float *)0xC271D1C)), (*(float *)((t13 + 0x8))), 1.0f, 1.0f, 1.0f, u46, 0.979999959f);
        }
        t74 = *(int *)((((*(int *)((((*(int *)0xC1EE214) << 2) + (*(int *)((0xC0ED9C8 + ((*(int *)0xC1EE210) << 2))))))) + (((*(int *)0xC271D28) << 2) << 1)) + 0x4));
        *(unsigned int *)0xC273F10 = t6;
        *(unsigned int *)0xC273F14 = 0xDF007F00;
        *(unsigned int *)(((((((t6 + 0x1) << 1) + (t6 + 0x1)) << 2) + 0xC273F10) + 0x8)) = 0x0;
        t75 = 0xC0ED9C8;
        t76 = (((((t6 + 0x1) << 1) + (t6 + 0x1)) << 2) + 0xC273F10);
        t78 = t6;
        t79 = 0xC273F18;
        t80 = t74;
        for (;;) {
            if (t78 == 0) {
                break;
            }
            t76 = t80;
            t75 = t79;
            t80 = (t80 + 0xC);
            t79 = (t79 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t75) = *(struct mv3 *)(t76); }
            t78 = (t78 - 1);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(t79) = *(struct mv3 *)(0xC273F18); }
    }
    u96 = *(float *)0xC0ED920;
    nlTriPutSetAttribFaceColor(0xC271D30, 0.0f, (*(float *)0xC271D18), 0.0f);
    *(unsigned int *)0xC273F14 = (((int)((*(float *)0xC271D18) * 255.0f) << 8) | 0xDF000000);
    nlPushMatrix(0x0);
    if ((*(int *)0xC2A7368) == 0) {
        nlObjPutUseViewMatrix(0xC271D30);
        u102 = 10.0f;
        u102 = u102 + 10.0f * u96;
        nlTranslate(0.0f, u102, 0.0f);
        t106 = (*(int *)(((int)stk + 32)));
        for (;;) {
            if (t106 == 0) {
                break;
            }
            FUN_0c07b9e0();
            nlTranslate(0.0f, 10.0f, 0.0f);
            t106 = (t106 - 1);
        }
    } else {
        nlTranslate(0.0f, 3.0f, 0.0f);
        FUN_0c07b9e0();
    }
    return nlPopMatrix(0x1);
}
