/* Straight-line functions with calls and guards (batch gen_mn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
float nlCos(int);
float nlSin(int);
int nlSprPutPosSet(int, int, int, float, float, float, float);
int nlSpriteF2ARGB(int, int, float, float, float, float);
int nlSpriteF2C(float);
int nlSprPut(int a4, int a5);

int nlSprPut(int a4, int a5)
{
    int t207;
    int t13;
    int t20;
    int t21;
    int t43;
    float u30;
    int t36;
    int t33;
    float u49;
    float u52;
    float t56;
    float u60;
    float u61;
    float u62;
    float u63;
    int t64;
    int t65;
    float u66;
    float u67;
    int t88;
    int t89;
    int t127;
    float u128;
    float u129;
    float u131;
    float u132;
    float u134;
    float u135;
    float u137;
    float u138;
    int t140;
    int t151;
    int t154;
    int t157;
    int t155;
    int t160;
    int t188;
    int t189;
    float u44;
    int t40;
    float u41;
    float u109;
    int t99;
    int t121;
    int t166;
    int stk[28];

    t207 = 0xFFFFFFFF;
    if ((int)(*(int *)((a4 + 0x0))) >= (int)(*(int *)0xC2B76BC)) {
    } else {
        t13 = *(short *)((((*(int *)((a4 + 0x0))) << 1) + (*(int *)0xC2B76B8)));
        if (t13 == -1) {
        } else {
            t20 = *(int *)((a4 + 0x30));
            t21 = *(int *)0xC2B76C8;
            t43 = 0x0;
            if (t20 != 0) {
                if ((t20 != 2) && (t20 != 4)) {
                    u30 = *(float *)((a4 + 0x2C));
                    t36 = 0x1;
                    if (!(1.0f > u30)) {
                        t33 = 0x0;
                        if ((*(short *)((((((t13 << 2) << 2) << 1) + t21) + 0x14))) != 0) {
                            t33 = 0x1;
                        }
                        t36 = t33;
                    }
                    t40 = t36;
                    u41 = u30;
                } else {
                    t40 = 0x1;
                    u41 = (*(float *)((a4 + 0x2C)));
                }
                t43 = t40;
                u44 = u41;
            }
            u49 = ((*(float *)((((((t13 << 2) << 2) << 1) + t21) + 0x18))) * (*(float *)((a4 + 0x10))));
            *(float *)(((int)stk + 8)) = ((((*(float *)((((((t13 << 2) << 2) << 1) + t21) + 0x1C))) * (*(float *)((a4 + 0x14))))) * 0.5f);
            u52 = *(float *)((a4 + 0xC));
            *(float *)(((int)stk + 12)) = (nlSin((*(int *)((a4 + 0x28)))));
            t56 = nlCos((*(int *)((a4 + 0x28))));
            nlSprPutPosSet(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x1C), (u49 * 0.5f), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), t56);
            u60 = *(float *)0xC14A828;
            u61 = *(float *)0xC2B76D0;
            u62 = *(float *)0xC14A824;
            u63 = *(float *)0xC2B76CC;
            t64 = 0x4;
            t65 = 0x0;
            u66 = u60;
            u67 = u62;
            for (;;) {
                if ((unsigned int)t65 >= (unsigned int)0x10) {
                    break;
                }
                t64 = t65;
                u67 = (*(float *)(((((int)stk + 4) + 0x2C) + t64)));
                t65 = (t65 + 0x4);
                u67 = (u67 * ((u63 * u62)));
                *(float *)(((((int)stk + 4) + 0x2C) + t64)) = u67;
                u66 = (*(float *)(((((int)stk + 4) + 0x1C) + t64)));
                u66 = (u66 * ((u61 * u60)));
                *(float *)(((((int)stk + 4) + 0x1C) + t64)) = u66;
            }
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) & 0xF8FCFFFF);
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4))) & 0x1FFFFFFF);
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) & 0x3278FFF);
            if (((*(int *)((a4 + 0x34))) & 0x800) == 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x800000);
            }
            if (((*(int *)((a4 + 0x34))) & 0x1000) != 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x2000);
            }
            if (((*(int *)((a4 + 0x34))) & 0x10000) != 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x1000);
            }
            t88 = *(int *)((a4 + 0x34));
            t89 = (0x7 & ((int)t88 >> 8));
            if ((0x7 & ((int)t88 >> 8)) == 0) {
                t89 = 0x4;
            }
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4))) | (t89 << 29));
            if (t43 != 0) {
                if ((*(int *)((a4 + 0x30))) == 4) {
                    *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x94100000);
                    t99 = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x4000000);
                } else {
                    *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | (((((*(int *)0xC14A648) ^ 0xFC) << 16) << 8) | 0x100000));
                    t99 = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x2000000);
                }
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = t99;
                u109 = u44;
            } else {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x20080000);
                u109 = 1.0f;
            }
            if ((0x2000 & (*(int *)((a4 + 0x34)))) != 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x10)) = (nlSpriteF2ARGB((t89 << 29), 0x2000, u109, (*(float *)0xC14A948), (*(float *)0xC14A94C), (*(float *)0xC14A950)));
            } else {
                if (((*(int *)((a4 + 0x34))) & 0x4000) != 0) {
                    t121 = ((((nlSpriteF2C(u109)) << 16) << 8) | (*(int *)((a4 + 0x38))));
                } else {
                    t121 = (nlSpriteF2ARGB((t89 << 29), 0x2000, u109, 1.0f, 1.0f, 1.0f));
                }
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x10)) = t121;
            }
            t127 = *(int *)((a4 + 0x34));
            u128 = *(float *)((a4 + 0x18));
            u129 = *(float *)((a4 + 0x20));
            u131 = u129;
            u132 = u128;
            if ((0x10 & (t127 & 0x30)) != 0) {
                u131 = (1.0f - u129);
                u132 = (1.0f - u128);
            }
            u134 = *(float *)((a4 + 0x1C));
            u135 = *(float *)((a4 + 0x24));
            u137 = u134;
            u138 = u135;
            if (((t127 & 0x30) & 0x20) == 0) {
                u137 = (1.0f - u134);
                u138 = (1.0f - u135);
            }
            t140 = *(int *)((a4 + 0x34));
            if ((t140 & 0xC000) != 0x8000) {
                if ((t140 & 0xC000) != 0xC000) {
                } else {
                    *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x30000);
                }
            } else {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x20000);
            }
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u132;
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0xFFFF0000);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u131;
            t151 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u137;
            *(unsigned int *)(((int)stk + 4)) = ((unsigned int)(*(int *)(((((int)stk + 4) + 0x18) + 0x0))) >> 16);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u138;
            *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(*(int *)(((((int)stk + 4) + 0x18) + 0x0))) >> 16);
            t154 = *(int *)((a4 + 0x30));
            t157 = t154;
            if (t154 == -1) {
                t155 = 0x0;
                if (t43 != 0) {
                    t155 = 0x2;
                }
                t157 = t155;
            }
            *(unsigned int *)(((int)stk + 20)) = (t157 << 2);
            t160 = *(int *)(((t157 << 2) + (*(int *)0xC2B8CBC)));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t160 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t160 >> 16) >> 8);
            if (((*(int *)((a4 + 0x34))) & 0x4000) != 0) {
                t166 = (((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | (*(int *)0xC2B7948)) | 0x4);
            } else {
                t166 = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | (*(int *)0xC2B7948));
            }
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x0)) = t166;
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x4)) = (*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4)));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | (*(int *)0xC2B794C));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0xC)) = (*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0xC)));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x10)) = (*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x10)));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x14)) = ((((nlSpriteF2C(u109)) << 16) << 8) | (*(int *)((a4 + 0x3C))));
            _builtin_prefetch((void *)((0x3FFFFFF & t160) | 0xE0000000));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x0)) = 0xF0000000;
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x4)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x8)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x0)));
            *(float *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0xC)) = (1.0f / u52);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x10)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x4)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x4)));
            *(float *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x18)) = (1.0f / u52);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x1C)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x8)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x20)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x8)));
            *(float *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x24)) = (1.0f / u52);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x28)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0xC)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x2C)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0xC)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x30)) = (t13 | 0x53500000);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x34)) = ((*(int *)(((int)stk + 24))) | (*(int *)(((int)stk + 4))));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x38)) = ((*(int *)(((int)stk + 4))) | (t151 & 0xFFFF0000));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x3C)) = ((t151 & 0xFFFF0000) | (*(int *)(((int)stk + 16))));
            _builtin_prefetch((void *)(((0x3FFFFFF & t160) | 0xE0000000) + 0x20));
            _builtin_prefetch((void *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x20));
            t188 = *(int *)(((int)stk + 20));
            t189 = *(int *)0xC2B8CBC;
            *(unsigned int *)(((t188 + t189) + 0x0)) = (((*(int *)(((t188 + t189) + 0x0))) & 0xFC000000) | ((((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x20) + 0x20) & 0x3FFFFFF));
        }
        t207 = 0x0;
    }
    return t207;
}
