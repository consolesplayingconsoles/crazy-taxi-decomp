/* Straight-line functions with calls and guards (batch gen_im): generated from the code and checked by tests. Calls are
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
    int t0;
    float u1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    float u16;
    float u17;
    float u18;
    int t20;
    int t21;
    float u22;
    float u23;
    float u24;
    float u26;
    float u27;
    float u28;
    float u29;
    int t45;
    float u46;
    int t31;
    int t32;
    float u33;
    float u34;
    float u35;
    float u36;
    float u38;
    float u39;
    float u40;
    int t41;
    float u42;
    float u47;
    float u48;
    float u49;
    float u51;
    float u52;
    float u53;
    int t54;
    float u55;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    float u101;
    float u102;
    float u104;
    int t106;
    float u108;
    int t110;
    int t112;
    int stk[21] = {0};

    *(unsigned int *)(((int)stk + 32)) = a5;
    t0 = *(int *)0xC271D28;
    u1 = *(float *)0xC0ED920;
    if (t0 != a4) {
        *(unsigned int *)0xC271D28 = a4;
        t2 = *(int *)0xC1EE210;
        t3 = *(int *)0xC1EE214;
        t4 = *(int *)((0xC0ED9C8 + (t2 << 2)));
        t5 = *(int *)(((t3 << 2) + t4));
        t6 = *(int *)(((t5 + ((a4 << 2) << 1)) + 0x0));
        *(float *)0xC271D1C = 10.0f;
        t7 = *(int *)0xC2A7368;
        if (t7 != 0) {
        } else {
            t8 = *(int *)0xC1EE210;
            t9 = *(int *)0xC1EE214;
            t10 = *(int *)((0xC0ED9C8 + (t8 << 2)));
            t11 = *(int *)(((t9 << 2) + t10));
            t12 = *(int *)0xC271D28;
            t13 = *(int *)(((t11 + ((t12 << 2) << 1)) + 0x4));
            nlTriPutTextureInit(0xC271D30, 0xFFFFFFFF, 0x0);
            nlTriPutSetAttrib(0xC271D30, 0x1, 0x0, 0xFFFFFFFF, 0x1, 0x0, 0x1, 0x1, 0x0, ((t6 << 1) + 0x2), 1.0f, 0.799999952f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f);
            u16 = *(float *)((t13 + 0x8));
            u17 = *(float *)((t13 + 0x0));
            u18 = *(float *)((t13 + 0x4));
            nlTriPutSetClipping(0xC271D30, u17, u18, u16, 2000.0f);
            t20 = *(int *)0xC271D50;
            *(unsigned int *)0xC271D50 = (t20 & 0x3FFFF3F);
            t21 = *(int *)0xC271D50;
            *(unsigned int *)0xC271D50 = (t21 | 0x300000C0);
            u22 = *(float *)((t13 + 0x8));
            u23 = *(float *)((t13 + 0x0));
            u24 = *(float *)((t13 + 0x4));
            nlTriPutSetPoint(0xC271D30, 0x0, u23, u24, u22, 1.0f, 1.0f, 1.0f, u1, 0.0f);
            u26 = *(float *)((t13 + 0x8));
            u27 = *(float *)0xC271D1C;
            u28 = *(float *)((t13 + 0x4));
            u29 = *(float *)((t13 + 0x0));
            nlTriPutSetPoint(0xC271D30, 0x1, u29, (u28 + u27), u26, 1.0f, 1.0f, 1.0f, u1, 0.979999959f);
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
                    u38 = *(float *)((t32 + 0x8));
                    u39 = *(float *)0xC271D1C;
                    u40 = *(float *)((t32 + 0x4));
                    t41 = *(int *)(((int)stk + 28));
                    u42 = *(float *)((t32 + 0x0));
                    nlTriPutSetPoint(0xC271D30, (t41 + 0x1), u42, (u40 + u39), u38, 1.0f, 1.0f, 1.0f, u33, 0.979999959f);
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
            u51 = *(float *)((t13 + 0x8));
            u52 = *(float *)0xC271D1C;
            u53 = *(float *)((t13 + 0x4));
            t54 = *(int *)(((int)stk + 28));
            u55 = *(float *)((t13 + 0x0));
            nlTriPutSetPoint(0xC271D30, (t54 + 0x1), u55, (u53 + u52), u51, 1.0f, 1.0f, 1.0f, u46, 0.979999959f);
        }
        t69 = *(int *)0xC1EE210;
        t70 = *(int *)0xC1EE214;
        t71 = *(int *)((0xC0ED9C8 + (t69 << 2)));
        t72 = *(int *)(((t70 << 2) + t71));
        t73 = *(int *)0xC271D28;
        t74 = *(int *)(((t72 + ((t73 << 2) << 1)) + 0x4));
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
            t81 = *(int *)((t76 + 0x8));
            t82 = *(int *)((t76 + 0x4));
            *(unsigned int *)((t75 + 0x8)) = t81;
            t83 = *(int *)((t76 + 0x0));
            *(unsigned int *)((t75 + 0x4)) = t82;
            *(unsigned int *)((t75 + 0x0)) = t83;
            t78 = (t78 - 1);
        }
        t84 = *(int *)0xC273F20;
        t85 = *(int *)0xC273F1C;
        *(unsigned int *)((t79 + 0x8)) = t84;
        t86 = *(int *)0xC273F18;
        *(unsigned int *)((t79 + 0x4)) = t85;
        *(unsigned int *)((t79 + 0x0)) = t86;
    }
    u101 = *(float *)0xC271D18;
    u102 = *(float *)0xC0ED920;
    nlTriPutSetAttribFaceColor(0xC271D30, 0.0f, u101, 0.0f);
    u104 = *(float *)0xC271D18;
    *(unsigned int *)0xC273F14 = (((int)(u104 * 255.0f) << 8) | 0xDF000000);
    nlPushMatrix(0x0);
    t106 = *(int *)0xC2A7368;
    if (t106 == 0) {
        nlObjPutUseViewMatrix(0xC271D30);
        u108 = 10.0f;
        u108 = u108 + 10.0f * u102;
        nlTranslate(0.0f, u108, 0.0f);
        t110 = *(int *)(((int)stk + 32));
        t112 = t110;
        for (;;) {
            if (t112 == 0) {
                break;
            }
            FUN_0c07b9e0();
            nlTranslate(0.0f, 10.0f, 0.0f);
            t112 = (t112 - 1);
        }
    } else {
        nlTranslate(0.0f, 3.0f, 0.0f);
        FUN_0c07b9e0();
    }
    return nlPopMatrix(0x1);
}
