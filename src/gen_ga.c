/* Straight-line functions with calls and guards (batch gen_ga): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int HomingPosX(int, float, float);
int nlSprPut(int);
int selectDrawDriverTiles(void);

int selectDrawDriverTiles(void)
{
    int t0;
    float u1;
    float u2;
    int t40;
    int t43;
    float u47;
    float u27;
    int t109;
    int t112;
    float u113;
    float u114;
    float u116;
    float u62;
    float u75;
    float u79;
    float u103;
    float u104;
    float u106;
    float u82;
    float u97;
    float u98;
    float u100;
    float u84;
    float u85;
    float u86;
    int t122;
    int t123;
    int t124;
    float u125;
    float u126;
    float u127;
    int t128;
    int t129;
    float u130;
    int t139;
    int t50;
    int t53;
    float u54;
    float u55;
    float u57;
    int t5;
    int t8;
    float u9;
    float u10;
    float u12;
    float u44;
    float u45;
    int t17;
    int t20;
    float u24;
    int t30;
    int t33;
    float u34;
    float u35;
    float u37;
    int t65;
    int t68;
    float u69;
    float u72;
    float u76;
    float u92;
    float u93;
    float u88;
    int t131;
    int t154;
    int t155;
    int t156;
    int t158;
    float u159;
    float u160;
    float u161;
    float u162;
    int stk[16] = {0};

    *(unsigned int *)(((int)stk + 8)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x8)) = *(struct mv3 *)(0xC0D083C); }
    t0 = *(int *)0xC2A759C;
    u1 = *(float *)0xC2A7500;
    if (t0 == 0) {
        if (0.0f > u1) {
            u2 = *(float *)0xC2A7500;
            *(float *)0xC2A7500 = (u2 + 90.0f);
            t5 = (((int)stk + 4) + 0x8);
            t8 = t0;
            u9 = (u2 + 90.0f);
            u10 = 90.0f;
            u12 = u1;
        } else {
            HomingPosX(0xC2A7500, 0.599999964f, 0.0f);
        }
        t50 = t5;
        t53 = t8;
        u54 = u9;
        u55 = u10;
        u57 = u12;
    } else {
        t40 = (((int)stk + 4) + 0x8);
        t43 = t0;
        u47 = u1;
        if (t0 == 1) {
            if (u1 > 0.0f) {
                *(float *)0xC2A7500 = ((*(float *)0xC2A7500) - 60.0f);
                t17 = (((int)stk + 4) + 0x8);
                t20 = t0;
                u24 = u1;
            } else {
                HomingPosX(0xC2A7500, 0.599999964f, 0.0f);
            }
            if (0.0f > (*(float *)0xC2A7508)) {
                u27 = *(float *)0xC2A7508;
                *(float *)0xC2A7508 = (u27 + (1.0f + 1.0f));
                t30 = t17;
                t33 = t20;
                u34 = (u27 + (1.0f + 1.0f));
                u35 = (1.0f + 1.0f);
                u37 = u24;
            } else {
                HomingPosX(0xC2A7508, 0.599999964f, 0.0f);
            }
            t40 = t30;
            t43 = t33;
            u44 = u34;
            u45 = u35;
            u47 = u37;
        }
        t50 = t40;
        t53 = t43;
        u54 = u44;
        u55 = u45;
        u57 = u47;
    }
    t109 = t50;
    t112 = t53;
    u113 = u54;
    u114 = u55;
    u116 = u57;
    if ((*(int *)0xC2A759C) == 2) {
        if (0.0f > (*(float *)0xC2A7500)) {
            u62 = *(float *)0xC2A7500;
            *(float *)0xC2A7500 = (u62 + 30.0f);
            t65 = t50;
            t68 = t53;
            u69 = (u62 + 30.0f);
            u72 = u57;
        } else {
            HomingPosX(0xC2A7500, 0.599999964f, 0.0f);
        }
        if ((*(float *)0xC2A7508) > 0.0f) {
            u75 = *(float *)0xC2A7508;
            *(float *)0xC2A7508 = (u75 - 1.0f);
            u76 = (u75 - 1.0f);
        } else {
            *(float *)0xC2A7508 = 0.0f;
            u76 = u69;
        }
        u79 = *(float *)0xC2A7500;
        u103 = u76;
        u104 = u79;
        u106 = u72;
        if (!(0.0f > u79)) {
            u82 = *(float *)0xC2A7500;
            u97 = u82;
            u98 = 0.00999999978f;
            u100 = u72;
            if (0.00999999978f > u82) {
                u84 = *(float *)0xC2A7504;
                if (u84 > 0.0f) {
                    u85 = *(float *)0xC2A7504;
                    *(float *)0xC2A7504 = (u85 - 49.0f);
                    u92 = (u85 - 49.0f);
                    u93 = 49.0f;
                } else {
                    if (0.0f > u84) {
                        u86 = *(float *)0xC2A7504;
                        *(float *)0xC2A7504 = (u86 + 10.0f);
                        u88 = (u86 + 10.0f);
                    } else {
                        *(float *)0xC2A7504 = 0.0f;
                        u88 = 0.00999999978f;
                    }
                    u92 = u82;
                    u93 = u88;
                }
                u97 = u92;
                u98 = u93;
                u100 = u84;
            }
            u103 = u97;
            u104 = u98;
            u106 = u100;
        }
        t109 = t65;
        t112 = t68;
        u113 = u103;
        u114 = u104;
        u116 = u106;
    }
    if ((*(int *)(((*(int *)0xC2A751C) + 0x0))) == 3) {
        *(unsigned int *)(((int)stk + 8)) = 0xFFFFFFE8;
    }
    *(unsigned int *)(((int)stk + 4)) = 0xC1305D8;
    t122 = t109;
    t123 = t112;
    t124 = 0x0;
    u125 = u113;
    u126 = u114;
    u127 = u116;
    for (;;) {
        t128 = 0x14E;
        t129 = 0x0;
        u130 = (float)((((((t124 - 2) << 2) << 2) << 2) << 1) + 0x14E);
        for (;;) {
            if ((t124 == 3) && ((t129 == 2) && (t131 = *(int *)0xC2A75C4, t131 == 1))) {
                t154 = t131;
                t155 = t122;
                t156 = t128;
                t158 = t123;
                u159 = u125;
                u160 = u126;
                u161 = u130;
                u162 = u127;
            } else {
                u130 = (*(float *)0xC2A7500);
                u126 = (float)((((((t124 - 2) << 2) << 2) << 2) << 1) + 0x14E);
                u126 = (u126 + u130);
                u130 = (float)(int)u126;
                *(float *)0xC2A7464 = u130;
                t128 = (*(int *)0xC2A751C);
                t122 = (*(int *)((t128 + 0x0)));
                u126 = (*(float *)0xC2A7504);
                t122 = (t122 << 2);
                t128 = (*(int *)((t122 + 0xC130728)));
                t122 = (*(int *)(((int)stk + 8)));
                t139 = ((((((t129 - 1) << 2) << 2) << 2) << 1) - t128);
                t128 = 0x118;
                u130 = (float)((t139 + t122) + t128);
                u130 = (u130 + u126);
                u130 = (float)(int)u130;
                t122 = 0xC2A75C4;
                t123 = t129;
                t123 = (t123 << 2);
                t123 = (t123 + t124);
                *(float *)0xC2A7468 = u130;
                *(unsigned int *)0xC2A7488 = 0x0;
                t123 = (t123 << 2);
                if ((*(int *)((t122 + 0x0))) == 0) {
                    t128 = (*(int *)((t123 + (*(int *)((0xC1305C8 + ((*(int *)(((*(int *)0xC2A751C) + 0x0))) << 2)))))));
                    *(unsigned int *)0xC2A7460 = t128;
                } else {
                    *(unsigned int *)0xC2A7460 = (*(int *)((t123 + (*(int *)(((*(int *)(((int)stk + 4))) + 0x0))))));
                }
                t128 = 0xC07DF00;
                t123 = 0xC2A7460;
                t154 = (nlSprPut(t123));
            }
            u125 = u159;
            u126 = u160;
            u130 = u161;
            u127 = u162;
            t122 = t155;
            t128 = t156;
            t123 = t158;
            t129 = (t129 + 0x1);
            if ((int)t129 >= (int)0x3) {
                break;
            }
        }
        t124 = (t124 + 0x1);
        if ((int)t124 >= (int)0x4) {
            break;
        }
    }
    return t154;
}
