/* Draft: generated C that the check did not accept (did not compile). Not proven equivalent. */

int check_cache(int);
int check_caps(int);
int memset(int, int, int);
int set_fat(int, int);
int set_vmstime(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int write_fat(int);
int write_sys(int);

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t159;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t10;
    int t158;
    int t11;
    int t12;
    int t157;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t155;
    int t22;
    int t154;
    int t23;
    int t24;
    int t25;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t143;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t151;
    int t150;
    int t153;
    int t156;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0xC2EE990) + 0x2));
    t159 = 0xFFFFFF01;
    if (t0 != 0) {
        if (a8 != 0) {
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
            t1 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
            t2 = *(int *)(((0xC1784E0 + ((((t1 << 2) + t1) << 2) << 2)) + 0xC));
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t2;
        } else {
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x30)) = 0x1;
            t3 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x4));
            t4 = *(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0xC1784E0) + 0xC));
            t5 = (int)((int)t4 / (int)0xA);
            *(unsigned int *)((((a4 * 0x148) + 0xC2EE990) + 0x34)) = t5;
        }
        t10 = vmsio_ismount(a4);
        t158 = 0xFFFFFF01;
        if (t10 != 0) {
            t11 = *(int *)(((int)stk + 8));
            t12 = *(signed char *)(((t11 + 0xC2EE990) + 0x8));
            t157 = 0xFFFFFF01;
            if (t12 != 0) {
                t13 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                memset(t13, 0x0, 0x200);
                t15 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                t16 = *(int *)((t15 + 0x8));
                t17 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                t18 = vmsfs_write_retry(a4, t16, t17);
                if ((int)t18 < 0) {
                    t19 = 0xFFFFFF81;
                    if (t18 != 0xFFFFFF40) {
                        t19 = 0xFFFFFF01;
                    }
                    t156 = t19;
                } else {
                    t20 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                    t21 = vmsfs_mediainfo_retry(a4, t20);
                    t155 = 0xFFFFFF01;
                    if ((int)t21 >= 0) {
                        t22 = check_caps(((a4 * 0x148) + 0xC2EE990));
                        t154 = 0xFFFFFF83;
                        if ((int)t22 >= 0) {
                            t23 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t24 = *(int *)((t23 + 0x1C));
                            *(unsigned int *)((t23 + 0x30)) = t24;
                            t25 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            memset(t25, 0x0, 0x200);
                            t27 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t28 = memset((t27 + 0x10), 0x20, 0x20);
                            t29 = *(int *)(((int)stk + 12));
                            t30 = t28;
                            t31 = 0x0;
                            t32 = t29;
                            while ((int)t31 < (int)0x20) {
                                t33 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                                t30 = t33;
                                t34 = *(signed char *)((t32 + 0x0));
                                t32 = (t32 + 0x1);
                                t35 = (t31 + 0x10);
                                t31 = (t31 + 0x1);
                                *(unsigned char *)((t35 + t30)) = t34;
                            }
                            t36 = *(int *)(((int)stk + 4));
                            set_vmstime((((int)stk + 4) + 0x10), t36);
                            t38 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t39 = (t38 + 0x30);
                            t40 = 0x0;
                            t41 = (((int)stk + 4) + 0x10);
                            while ((int)t40 < (int)0x8) {
                                t42 = *(signed char *)((t41 + 0x0));
                                t41 = (t41 + 0x1);
                                t40 = (t40 + 0x1);
                                *(unsigned char *)((t39 + 0x0)) = t42;
                                t39 = (t39 + 0x1);
                            }
                            t43 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            *(unsigned int *)(((int)stk + 4)) = t43;
                            t44 = *(int *)((t43 + 0xC));
                            *(unsigned int *)(((int)stk + 8)) = t44;
                            t45 = *(int *)(((int)stk + 4));
                            t46 = *(int *)((t45 + 0x14));
                            *(unsigned int *)(((int)stk + 12)) = t46;
                            t47 = *(int *)0xC2EE98C;
                            t48 = *(int *)(((int)stk + 4));
                            t49 = *(int *)((t47 + 0x10));
                            t50 = *(int *)((t48 + 0x4));
                            t51 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t52 = ((int (*)(int, int, int, int))(t49))(t51, 0x42, t50, t41);
                            t53 = *(int *)(((int)stk + 16));
                            t54 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            *(unsigned char *)((t54 + 0x4E)) = t53;
                            t55 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            *(unsigned char *)((t55 + 0x4F)) = 0x0;
                            t56 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t57 = *(int *)0xC2EE98C;
                            t58 = *(int *)((t56 + 0x0));
                            t59 = *(int *)((t57 + 0x10));
                            t60 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t61 = ((int (*)(int, int, int))(t59))(t60, 0x40, t58);
                            t62 = *(int *)0xC2EE98C;
                            t63 = *(int *)(((int)stk + 12));
                            t64 = *(int *)((t62 + 0x10));
                            t65 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t66 = ((int (*)(int, int, int))(t64))(t65, 0x4A, t63);
                            t67 = *(int *)0xC2EE98C;
                            t68 = *(int *)(((int)stk + 8));
                            t69 = *(int *)((t67 + 0x10));
                            t70 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t71 = ((int (*)(int, int, int))(t69))(t70, 0x46, t68);
                            t72 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t73 = *(int *)0xC2EE98C;
                            t74 = *(int *)((t72 + 0x18));
                            t75 = *(int *)((t73 + 0x10));
                            t76 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t77 = ((int (*)(int, int, int))(t75))(t76, 0x4C, t74);
                            t78 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t79 = *(int *)0xC2EE98C;
                            t80 = *(int *)((t78 + 0x10));
                            t81 = *(int *)((t79 + 0x10));
                            t82 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t83 = ((int (*)(int, int, int))(t81))(t82, 0x48, t80);
                            t84 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t85 = *(int *)0xC2EE98C;
                            t86 = *(int *)((t84 + 0x1C));
                            t87 = *(int *)((t85 + 0x10));
                            t88 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t89 = ((int (*)(int, int, int))(t87))(t88, 0x50, t86);
                            t90 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t91 = *(int *)0xC2EE98C;
                            t92 = *(int *)((t90 + 0x20));
                            t93 = *(int *)((t91 + 0x10));
                            t94 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t95 = ((int (*)(int, int, int))(t93))(t94, 0x52, t92);
                            t96 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t97 = *(int *)0xC2EE98C;
                            t98 = *(int *)((t96 + 0x34));
                            t99 = *(int *)((t97 + 0x10));
                            t100 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t101 = ((int (*)(int, int, int))(t99))(t100, 0x54, t98);
                            t102 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t103 = *(int *)0xC2EE98C;
                            t104 = *(int *)((t102 + 0x38));
                            t105 = *(int *)((t103 + 0x10));
                            t106 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t107 = ((int (*)(int, int, int))(t105))(t106, 0x56, t104);
                            t108 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                            t109 = *(int *)0xC2EE98C;
                            t110 = *(int *)((t108 + 0x0));
                            t111 = *(int *)((t109 + 0x10));
                            t112 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                            t113 = ((int (*)(int, int, int))(t111))(t112, 0x44, t110);
                            t114 = memset((((a4 << 8) << 1) + 0xC2F389C), 0x0, 0x200);
                            t115 = t114;
                            t116 = 0x0;
                            for (;;) {
                                t117 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                t118 = *(int *)((t117 + 0x0));
                                if ((int)t116 >= (int)t118) {
                                    t119 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t120 = *(int *)((t119 + 0x18));
                                    t121 = *(int *)(((0x30 + t119) + 0x0));
                                    *(unsigned int *)(((int)stk + 4)) = t120;
                                    t122 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x28));
                                    t123 = memset(t122, 0x0, ((t120 << 8) << 1));
                                    t115 = t123;
                                    t124 = write_dir_all(a4);
                                    t115 = t124;
                                    t125 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t116 = 0xFFFA;
                                    t126 = *(int *)((t125 + 0x8));
                                    t127 = set_fat(a4, t126);
                                    t115 = t127;
                                    t128 = 0x0;
                                    for (;;) {
                                        t129 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t130 = *(int *)((t129 + 0x10));
                                        if ((int)t128 >= (int)t130) break;
                                        t131 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t132 = *(int *)((t131 + 0xC));
                                        t133 = set_fat(a4, (t132 + t128));
                                        t115 = t133;
                                        t128 = (t128 + 0x1);
                                    }
                                    t134 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                    t135 = *(int *)((t134 + 0x8));
                                    t136 = set_fat(a4, t135);
                                    t115 = t136;
                                    t137 = 0x0;
                                    for (;;) {
                                        t138 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t139 = *(int *)((t138 + 0x10));
                                        if ((int)t137 >= (int)t139) break;
                                        t140 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x1C));
                                        t141 = *(int *)((t140 + 0xC));
                                        t142 = set_fat(a4, (t141 + t137));
                                        t115 = t142;
                                        t137 = (t137 + 0x1);
                                    }
                                    t143 = write_fat(a4);
                                    t115 = t143;
                                    t144 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                                    t145 = memset(t144, 0x55, 0x10);
                                    t115 = t145;
                                    t146 = write_sys(a4);
                                    t115 = t146;
                                    t147 = *(int *)((((a4 * 0x148) + 0xC2EE990) + 0x20));
                                    t148 = memset(t147, 0x0, 0x10);
                                    t115 = t148;
                                    t115 = 0x0;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xB)) = t115;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xC)) = t115;
                                    *(unsigned char *)((((a4 * 0x148) + 0xC2EE990) + 0xA)) = t115;
                                    t149 = check_cache(a4);
                                    t115 = t149;
                                    return t115;
                                }
                                t151 = 0x0;
                                if (a8 != 0) {
                                    t150 = vmsfs_write_retry(a4, t116, (((a4 << 8) << 1) + 0xC2F389C));
                                    t115 = t150;
                                    t151 = t115;
                                }
                                t115 = t151;
                                if (t115 != 0xFFFFFF01) {
                                    
                                    t153 = set_fat(a4, t116);
                                    t115 = t153;
                                    t116 = (t116 + 0x1);
                                    continue;
                                }
                                break;
                            }
                            t154 = 0xFFFFFF01;
                        }
                        t155 = t154;
                    }
                    t156 = t155;
                }
                t157 = t156;
            }
            t158 = t157;
        }
        t159 = t158;
    }
    return t159;
}

