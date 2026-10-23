/* Straight-line functions with calls and guards (batch gen_hp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXERR_CallErrFunc(int, ...);
int ADXSTM_Tell(int);
int SJ_SplitChunk(int, int, int);
int adxstm_sj_internal_error(void);
int gdFsGetStat(int);
int gdFsReqRd32(int, int, int);
int adxstmf_stat_exec(int a4, int a5);

int adxstmf_stat_exec(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t26;
    int t27;
    int t28;
    int t30;
    int t52;
    int t109;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t90;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t73;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t84;
    int t85;
    int t86;
    int t102;
    int t103;
    int t96;
    int t87;
    int t81;
    int stk[11] = {0};

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)((a4 + 0x4));
    if (t0 == 1) {
        t2 = *(int *)((a4 + 0x8));
        t3 = gdFsGetStat(t2);
        if (t3 == 1) {
            t4 = *(int *)((a4 + 0x20));
            SJ_SplitChunk((a4 + 0x24), (((t4 << 8) << 2) << 1), (((int)stk + 8) + 0xC));
            t6 = *(int *)((t1 + 0x0));
            t7 = *(int *)((t6 + 0x20));
            t8 = ((int (*)(int, int, int))(t7))(t1, 0x1, (((int)stk + 8) + 0xC));
            t9 = *(int *)((t1 + 0x0));
            t10 = *(int *)((t9 + 0x1C));
            t11 = ((int (*)(int, int, int))(t10))(t1, 0x0, (((int)stk + 8) + 0x4));
            t12 = ADXSTM_Tell(a4);
            t13 = *(int *)((a4 + 0x30));
            if (t12 == t13) {
                t14 = *(int *)((a4 + 0x38));
                if (t14 != 0) {
                    t15 = *(int *)((a4 + 0x38));
                    t16 = *(int *)((a4 + 0x3C));
                    t17 = ((int (*)(int))(t15))(t16);
                }
            }
            t26 = *(int *)((a4 + 0x34));
            *(unsigned int *)((a4 + 0x34)) = (t26 + (((t4 << 8) << 2) << 1));
            *(unsigned char *)((a4 + 0x2)) = 0x0;
            t27 = ADXSTM_Tell(a4);
            t28 = *(int *)((a4 + 0x14));
            t30 = (t28 + 0x7FF);
            if ((int)(t28 + 0x7FF) < 0) {
                t30 = ((t28 + 0x7FF) + 0x7FF);
            }
            if ((int)t27 >= (int)((int)t30 >> 11)) {
                *(unsigned char *)((a4 + 0x1)) = 0x3;
            }
        } else {
            if (t3 == 5) {
                ADXERR_CallErrFunc(0xC17652C);
                *(unsigned char *)((a4 + 0x1)) = 0x4;
                *(unsigned char *)((a4 + 0x2)) = 0x0;
            }
        }
    }
    t52 = *(signed char *)((a4 + 0x2));
    t109 = t52;
    if (t52 == 0) {
        if (t1 != 0) {
            t53 = *(int *)((t1 + 0x0));
            if (t53 == 0) {
                t54 = adxstm_sj_internal_error();
                t96 = t54;
            } else {
                t55 = *(int *)((t1 + 0x0));
                t56 = *(int *)((t55 + 0x24));
                t57 = ((int (*)(int, int))(t56))(t1, 0x1);
                t58 = *(int *)((a4 + 0x1C));
                t90 = t57;
                if ((int)t57 < (int)t58) {
                    t59 = *(int *)((t1 + 0x0));
                    t60 = *(int *)((a4 + 0x18));
                    t61 = *(int *)((t59 + 0x18));
                    t62 = ((int (*)(int, int, int, int))(t61))(t1, 0x0, t60, (a4 + 0x24));
                    t63 = *(int *)((a4 + 0x28));
                    t64 = t63;
                    if ((int)t63 < 0) {
                        t64 = (t63 + 0x7FF);
                    }
                    t67 = *(int *)((a4 + 0x30));
                    *(unsigned int *)(((int)stk + 8)) = t67;
                    t68 = ADXSTM_Tell(a4);
                    t69 = *(int *)(((int)stk + 8));
                    t70 = *(int *)((a4 + 0x2C));
                    t71 = (t69 - t68);
                    if ((int)((int)t64 >> 11) < (int)(t69 - t68)) {
                        t71 = ((int)t64 >> 11);
                    }
                    t73 = t70;
                    if ((int)t71 < (int)t70) {
                        t73 = t71;
                    }
                    if (t73 != 0) {
                        t75 = *(int *)((a4 + 0x24));
                        t76 = *(int *)((a4 + 0x8));
                        t77 = gdFsReqRd32(t76, t73, t75);
                        *(unsigned int *)((a4 + 0x20)) = t77;
                        if ((int)t77 <= 0) {
                            t78 = *(int *)((t1 + 0x0));
                            t79 = *(int *)((t78 + 0x1C));
                            t80 = ((int (*)(int, int, int))(t79))(t1, 0x0, (a4 + 0x24));
                            t81 = t80;
                        } else {
                            *(unsigned char *)((a4 + 0x2)) = 0x1;
                            t81 = 0x1;
                        }
                        t87 = t81;
                    } else {
                        t84 = *(int *)((t1 + 0x0));
                        t85 = *(int *)((t84 + 0x1C));
                        t86 = ((int (*)(int, int, int))(t85))(t1, 0x0, (a4 + 0x24));
                        t87 = t86;
                    }
                    t90 = t87;
                }
                t96 = t90;
            }
            t103 = t96;
        } else {
            t102 = adxstm_sj_internal_error();
            t103 = t102;
        }
        t109 = t103;
    }
    return t109;
}
