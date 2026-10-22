/* Straight-line functions with calls and guards (batch gen_if): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
extern int nlSprPut();
int hudUpdateRankDrum(int a4, int a5);

int hudUpdateRankDrum(int a4, int a5)
{
    int t0;
    int t104;
    int t1;
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
    int t17;
    int t18;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    int t53;
    int t54;
    int t58;
    float u59;
    float u60;
    float u61;
    int t62;
    int t63;
    float u69;
    float u76;
    float u77;
    float u78;
    int t85;
    int t86;
    int t87;
    int t88;
    float u89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t103;
    int t126;
    int t129;
    int t138;
    int t130;
    int t132;
    int t131;
    int t115;
    float u82;
    float u73;

    t0 = *(int *)0xC2A9178;
    if (t0 != 0) {
        t104 = t0;
        if (t0 != 6) {
            t1 = 0xC055FB4;
            t2 = 0x0;
            for (;;) {
                t3 = *(int *)0xC2A8F90;
                if (t3 == 0) {
                    t4 = *(int *)0xC2A9178;
                    t1 = t4;
                    if (t1 == 3) {
                        t1 = (t2 << 2);
                        t5 = *(int *)((0xC2A8F74 + t1));
                        if ((int)t5 > 0) {
                            t6 = *(int *)((((t2 << 2) + 0xC2A8F74) + 0x0));
                            *(unsigned int *)((((t2 << 2) + 0xC2A8F74) + 0x0)) = (t6 - 1);
                            t7 = *(int *)(((0xC2A8F7C + (t2 << 2)) + 0x0));
                            t1 = 0xA;
                            t8 = (int)((int)(t7 + 0x1) % (int)t1);
                            t1 = t8;
                            *(unsigned int *)(((0xC2A8F7C + (t2 << 2)) + 0x0)) = t1;
                            t9 = *(int *)((((t2 << 2) + 0xC2A8F74) + 0x0));
                            if (t9 == 0) {
                                t1 = 0xC2A8F84;
                                t10 = *(int *)(((t2 << 2) + t1));
                                if (t10 == 0) {
                                    t11 = *(int *)0xC2A9188;
                                    if (t11 == 0) {
                                        t12 = Sound_Request(0x704A9, 0x0);
                                        t1 = t12;
                                        *(unsigned int *)0xC2A9188 = 0x1;
                                    }
                                    t17 = Sound_Request(0x205A9, 0x0);
                                    t1 = t17;
                                    t1 = 0xC2A8F84;
                                    *(unsigned int *)(((t2 << 2) + t1)) = 0x1;
                                    t18 = *(int *)0xC2A8F8C;
                                    *(unsigned int *)0xC2A8F8C = (t18 + 0x1);
                                }
                            }
                        }
                    }
                }
                t1 = t2;
                t44 = (t1 == 1);
                t1 = t2;
                t45 = 0xFFFFFFF2;
                if (t44) {
                    t45 = 0xFFFFFFFA;
                }
                if (t1 == 1) {
                    t1 = 0xC2A8F7C;
                    t47 = *(int *)(((t2 << 2) + t1));
                    t1 = t47;
                    if (t1 == 9) {
                        *(unsigned int *)0xC2A80BC = 0x152;
                    } else {
                        t1 = 0xC2A8F7C;
                        t48 = *(int *)(((t2 << 2) + t1));
                        t1 = 0xC130CB0;
                        t49 = *(int *)(((t48 << 2) + t1));
                        *(unsigned int *)0xC2A80BC = t49;
                    }
                } else {
                    t1 = 0xC2A8F7C;
                    t53 = *(int *)(((t2 << 2) + t1));
                    t1 = 0xC130CB0;
                    t54 = *(int *)(((t53 << 2) + t1));
                    *(unsigned int *)0xC2A80BC = t54;
                }
                t58 = *(int *)0xC2A9178;
                t1 = t58;
                if (t1 != 1) {
                    t1 = t58;
                    if (t1 == 5) {
                        t1 = 0x1C;
                        *(unsigned int *)0xC2A80F0 = 0x6;
                        u59 = *(float *)0xC2A9174;
                        *(float *)((0xC2A80BC + t1)) = (1.0f - (u59 * 0.5f));
                        t1 = 0x24;
                        *(float *)((0xC2A80BC + t1)) = 1.0f;
                        t1 = 0x14;
                        u60 = *(float *)0xC2A9174;
                        *(float *)((0xC2A80BC + t1)) = (u60 * 0.5f);
                        t1 = 0x4;
                        *(float *)((0xC2A80BC + t1)) = (float)(((((((0x1 - t2) << 2) + (0x1 - t2)) << 2) << 1) + t45) + 0x1FA);
                        t1 = 0xC05607C;
                        u61 = *(float *)((t1 + 0x0));
                        u73 = u61;
                    } else {
                        t1 = 0x1C;
                        *(unsigned int *)0xC2A80F0 = 0xE;
                        *(float *)((0xC2A80BC + t1)) = 0.0f;
                        t1 = 0xC2A8F84;
                        t62 = *(int *)(((t2 << 2) + t1));
                        if (t62 == 0) {
                            t63 = *(int *)0xC2A8F90;
                            t1 = 0x24;
                            *(float *)((0xC2A80BC + t1)) = (1.0f - ((float)t63 * 0.25f));
                            t1 = 0x14;
                            *(float *)((0xC2A80BC + t1)) = (1.0f - ((float)t63 * 0.25f));
                        } else {
                            t1 = 0x24;
                            *(float *)((0xC2A80BC + t1)) = 1.0f;
                            t1 = 0x14;
                            *(float *)((0xC2A80BC + t1)) = 1.0f;
                        }
                        t1 = 0x4;
                        *(float *)((0xC2A80BC + t1)) = (float)(((((((0x1 - t2) << 2) + (0x1 - t2)) << 2) << 1) + t45) + 0x1FA);
                        t1 = 0xC056270;
                        u69 = *(float *)((t1 + 0x0));
                        u73 = u69;
                    }
                    u82 = u73;
                } else {
                    t1 = 0x1C;
                    *(unsigned int *)0xC2A80F0 = 0x6;
                    u76 = *(float *)0xC2A9174;
                    *(float *)((0xC2A80BC + t1)) = (1.0f - (u76 * 0.5f));
                    t1 = 0x24;
                    *(float *)((0xC2A80BC + t1)) = 1.0f;
                    t1 = 0x14;
                    u77 = *(float *)0xC2A9174;
                    *(float *)((0xC2A80BC + t1)) = (u77 * 0.5f);
                    t1 = 0x4;
                    *(float *)((0xC2A80BC + t1)) = (float)(((((((0x1 - t2) << 2) + (0x1 - t2)) << 2) << 1) + t45) + 0x1FA);
                    t1 = 0xC05607C;
                    u78 = *(float *)((t1 + 0x0));
                    u82 = u78;
                }
                t1 = 0x8;
                *(float *)((0xC2A80BC + t1)) = u82;
                *(unsigned int *)0xC2A80E4 = 0x0;
                t85 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, t45);
                t1 = t85;
                t86 = *(int *)0xC2A9178;
                t1 = t86;
                if (t1 != 1) {
                    t87 = *(int *)0xC2A9178;
                    t1 = t87;
                    if (t1 != 5) {
                        t1 = 0xC2A8F84;
                        t88 = *(int *)(((t2 << 2) + t1));
                        if (t88 == 0) {
                            t1 = 0x8;
                            u89 = *(float *)((0xC2A80BC + t1));
                            *(float *)((0xC2A80BC + t1)) = (u89 - 64.0f);
                            t1 = 0xC2A8F7C;
                            t90 = *(int *)(((t2 << 2) + t1));
                            t1 = 0xA;
                            t91 = (int)((int)(t90 + 0x1) % (int)t1);
                            t1 = t91;
                            t1 = (t1 << 2);
                            t92 = *(int *)((0xC130CB0 + t1));
                            t1 = 0x14;
                            *(unsigned int *)0xC2A80BC = t92;
                            *(unsigned int *)0xC2A80F0 = 0x6;
                            t93 = *(int *)0xC2A8F90;
                            *(float *)((0xC2A80BC + t1)) = ((float)t93 * 0.25f);
                            t1 = 0x1C;
                            t94 = *(int *)0xC2A8F90;
                            *(float *)((0xC2A80BC + t1)) = (1.0f - ((float)t94 * 0.25f));
                            t1 = 0x24;
                            *(float *)((0xC2A80BC + t1)) = 1.0f;
                            *(unsigned int *)0xC2A80E4 = 0x0;
                            t95 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
                            t1 = t95;
                        }
                    }
                }
                t2 = (t2 + 0x1);
                if ((int)t2 <= (int)0x1) continue;
                break;
            }
            t103 = *(int *)0xC2A916C;
            *(unsigned int *)0xC2A916C = (t103 + 0x1);
            t104 = t1;
        }
        t115 = t104;
    }
    t126 = *(int *)0xC2A11B0;
    if (t126 == 0) {
        *(unsigned int *)0xC2A91C4 = 0x0;
    }
    t129 = *(int *)0xC2A11B0;
    t138 = t115;
    if (t129 != 0) {
        t130 = *(int *)0xC2A91C4;
        t132 = t115;
        if (t130 == 0) {
            t131 = Sound_Request(0x704A9, 0x0);
            *(unsigned int *)0xC2A91C4 = 0x1;
            t132 = t131;
        }
        t138 = t132;
    }
    return t138;
}
