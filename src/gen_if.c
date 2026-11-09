/* Straight-line functions with calls and guards (batch gen_if): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
extern int nlSprPut();
int hudUpdateRankDrum(int a4, int a5);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_int { char p[0xC]; int v; };


int hudUpdateRankDrum(int a4, int a5)
{
    int t0;
    int t104;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
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
    int t88;
    float u89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t103;
    int t126;
    int t129;
    int t138;
    int t130;
    int t132;
    float u82;
    float u73;

    t0 = (((struct oC_int *)0xC2A916C)->v);
    if (t0 != 0) {
        t104 = t0;
        if (t0 != 6) {
            t1 = 0xC055FB4;
            t2 = 0x0;
            for (;;) {
                t3 = (((struct o4_int *)0xC2A8F8C)->v);
                if (t3 == 0) {
                    t1 = (((struct oC_int *)0xC2A916C)->v);
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
                                    t11 = (((struct o1C_int *)0xC2A916C)->v);
                                    if (t11 == 0) {
                                        t1 = Sound_Request(0x704A9, 0x0);
                                        (((struct o1C_uint *)0xC2A916C)->v) = 0x1;
                                    }
                                    t1 = Sound_Request(0x205A9, 0x0);
                                    t1 = 0xC2A8F84;
                                    *(unsigned int *)(((t2 << 2) + t1)) = 0x1;
                                    t18 = (((struct o0_int *)0xC2A8F8C)->v);
                                    (((struct o0_uint *)0xC2A8F8C)->v) = (t18 + 0x1);
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
                        (((struct o0_uint *)0xC2A80BC)->v) = 0x152;
                    } else {
                        t1 = 0xC2A8F7C;
                        t48 = *(int *)(((t2 << 2) + t1));
                        t1 = 0xC130CB0;
                        t49 = *(int *)(((t48 << 2) + t1));
                        (((struct o0_uint *)0xC2A80BC)->v) = t49;
                    }
                } else {
                    t1 = 0xC2A8F7C;
                    t53 = *(int *)(((t2 << 2) + t1));
                    t1 = 0xC130CB0;
                    t54 = *(int *)(((t53 << 2) + t1));
                    (((struct o0_uint *)0xC2A80BC)->v) = t54;
                }
                t58 = (((struct oC_int *)0xC2A916C)->v);
                t1 = t58;
                if (t1 != 1) {
                    t1 = t58;
                    if (t1 == 5) {
                        t1 = 0x1C;
                        (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
                        u59 = (((struct o8_float *)0xC2A916C)->v);
                        *(float *)((0xC2A80BC + t1)) = (1.0f - (u59 * 0.5f));
                        t1 = 0x24;
                        *(float *)((0xC2A80BC + t1)) = 1.0f;
                        t1 = 0x14;
                        u60 = (((struct o8_float *)0xC2A916C)->v);
                        *(float *)((0xC2A80BC + t1)) = (u60 * 0.5f);
                        t1 = 0x4;
                        *(float *)((0xC2A80BC + t1)) = (float)(((((((0x1 - t2) << 2) + (0x1 - t2)) << 2) << 1) + t45) + 0x1FA);
                        t1 = 0xC05607C;
                        u61 = *(float *)((t1 + 0x0));
                        u73 = u61;
                    } else {
                        t1 = 0x1C;
                        (((struct o34_uint *)0xC2A80BC)->v) = 0xE;
                        *(float *)((0xC2A80BC + t1)) = 0.0f;
                        t1 = 0xC2A8F84;
                        t62 = *(int *)(((t2 << 2) + t1));
                        if (t62 == 0) {
                            t63 = (((struct o4_int *)0xC2A8F8C)->v);
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
                    (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
                    u76 = (((struct o8_float *)0xC2A916C)->v);
                    *(float *)((0xC2A80BC + t1)) = (1.0f - (u76 * 0.5f));
                    t1 = 0x24;
                    *(float *)((0xC2A80BC + t1)) = 1.0f;
                    t1 = 0x14;
                    u77 = (((struct o8_float *)0xC2A916C)->v);
                    *(float *)((0xC2A80BC + t1)) = (u77 * 0.5f);
                    t1 = 0x4;
                    *(float *)((0xC2A80BC + t1)) = (float)(((((((0x1 - t2) << 2) + (0x1 - t2)) << 2) << 1) + t45) + 0x1FA);
                    t1 = 0xC05607C;
                    u78 = *(float *)((t1 + 0x0));
                    u82 = u78;
                }
                t1 = 0x8;
                *(float *)((0xC2A80BC + t1)) = u82;
                (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
                t1 = ((int (*)(int, int))(nlSprPut))(0xC2A80BC, t45);
                t1 = (((struct oC_int *)0xC2A916C)->v);
                if (t1 != 1) {
                    t1 = (((struct oC_int *)0xC2A916C)->v);
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
                            (((struct o0_uint *)0xC2A80BC)->v) = t92;
                            (((struct o34_uint *)0xC2A80BC)->v) = 0x6;
                            t93 = (((struct o4_int *)0xC2A8F8C)->v);
                            *(float *)((0xC2A80BC + t1)) = ((float)t93 * 0.25f);
                            t1 = 0x1C;
                            t94 = (((struct o4_int *)0xC2A8F8C)->v);
                            *(float *)((0xC2A80BC + t1)) = (1.0f - ((float)t94 * 0.25f));
                            t1 = 0x24;
                            *(float *)((0xC2A80BC + t1)) = 1.0f;
                            (((struct o28_uint *)0xC2A80BC)->v) = 0x0;
                            t1 = ((int (*)(int))(nlSprPut))(0xC2A80BC);
                        }
                    }
                }
                t2 = (t2 + 0x1);
                if ((int)t2 <= (int)0x1) continue;
                break;
            }
            t103 = (((struct o0_int *)0xC2A916C)->v);
            (((struct o0_uint *)0xC2A916C)->v) = (t103 + 0x1);
            t104 = t1;
        }
        t132 = t104;
    }
    t126 = *(int *)0xC2A11B0;
    if (t126 == 0) {
        *(unsigned int *)0xC2A91C4 = 0x0;
    }
    t129 = *(int *)0xC2A11B0;
    t138 = t132;
    if (t129 != 0) {
        t130 = *(int *)0xC2A91C4;
        if (t130 == 0) {
            t132 = Sound_Request(0x704A9, 0x0);
            *(unsigned int *)0xC2A91C4 = 0x1;
        }
        t138 = t132;
    }
    return t138;
}
