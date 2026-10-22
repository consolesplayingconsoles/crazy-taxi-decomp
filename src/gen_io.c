/* Straight-line functions with calls and guards (batch gen_io): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c15887e(int, int, int);
extern void _builtin_prefetch(void *);
int kmQueryFinishFlushVertexBuffer(void);
int kmiFatalErrorEntry(int);
int kmiFlipVertexBuffer(int);
int kmiSetOpaqueDummy(void);
int kmRender(void);

int kmRender(void)
{
    int t0;
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
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
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
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t62;
    int t63;
    int t64;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t96;
    int t97;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t107;
    int t108;
    int t109;
    int t111;
    int t112;
    int t113;
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
    int t150;
    int t151;
    int t152;
    int t154;
    int t155;
    int t157;
    int t158;
    int t159;
    int t160;
    int t161;
    int t162;
    int t163;
    int t164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t169;
    int t170;
    int t175;
    int t176;
    int t177;
    int t178;
    int t179;
    int t180;
    int t181;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t188;
    int t189;
    int t190;
    int t191;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    int t201;
    int t202;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t212;
    int t213;
    int t214;
    int t215;
    int t216;
    int t217;
    int t218;
    int t219;
    int t220;
    int t221;
    int t222;
    int t223;
    int t224;
    int t226;
    int t227;
    int t228;
    int t230;
    int t231;
    int t232;
    int t239;
    int t247;
    int t248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    int t254;
    int t255;
    int t256;
    int t257;
    int t274;
    int t275;
    int t276;
    int t277;
    int t278;
    int t279;
    int t295;
    int t280;
    int t281;
    int t282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t288;
    int t289;
    int t290;
    int t292;
    int t293;
    int t294;
    int t304;
    int t305;
    int t306;
    int t307;
    int t308;
    int t312;
    int t313;
    int t314;
    int t315;
    int t316;
    int t317;
    int t318;
    int t319;
    int t320;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t330;
    int t331;
    int t332;
    int t333;
    int t334;
    int t335;
    int t336;
    int t337;
    int t338;
    int t339;
    int t340;
    int t341;
    int t342;
    int t343;
    int t344;
    int t345;
    int t346;
    int t347;
    int t348;
    int t349;
    int t368;
    int t241;
    int t244;
    int t234;
    int t237;
    int t299;
    int t300;
    int t301;
    int t302;
    int t353;
    int t354;
    int t355;
    int t356;
    int stk[31] = {0};

    t0 = *(int *)0xC175D80;
    t1 = *(int *)0xC175D84;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = t0;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x4)) = t1;
    t2 = *(int *)0xC175D8C;
    t3 = *(int *)0xC175D88;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x8)) = t3;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0xC)) = t2;
    t4 = *(int *)0xC175D94;
    t5 = *(int *)0xC175D90;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x10)) = t5;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x14)) = t4;
    t6 = *(int *)0xC175D9C;
    t7 = *(int *)0xC175D98;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x18)) = t7;
    *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x1C)) = t6;
    t8 = *(int *)0xC2EA684;
    if ((t8 & 64) != 0) {
        t9 = *(int *)0xC2EAB30;
        if (t9 != 0) {
            t10 = *(int *)0xC2EAB38;
            if (t10 != 0) {
                t11 = *(int *)0xC2EA844;
                if (t11 != 0) {
                    kmiSetOpaqueDummy();
                }
            }
        }
    }
    t33 = *(int *)0xC2EA9DC;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x44);
    *(unsigned int *)(((((int)stk + 4) + 0x44) + 0x0)) = (0xC2EAA00 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x0)) = (0xC2EAA10 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x4C) + 0x0)) = (0xC2EAA20 + (t33 << 2));
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x50);
    *(unsigned int *)(((((int)stk + 4) + 0x50) + 0x0)) = (0xC2EAA30 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x54) + 0x0)) = (0xC2EAA40 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (0xC2EAA50 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = (0xC2EAA60 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = (0xC2EAA70 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0xC)) = (0xC2EAA80 + (t33 << 2));
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x10)) = ((t33 << 2) + 0xC2EAA90);
    t34 = *(int *)0xC2B8CB8;
    t35 = *(int *)(((int)stk + 8));
    t36 = *(int *)((t34 + 0x0));
    t37 = *(int *)((t35 + 0x0));
    *(unsigned int *)((t37 + 0x0)) = t36;
    t38 = *(int *)0xC2B8CB8;
    t39 = *(int *)(((((int)stk + 4) + 0x48) + 0x0));
    t40 = *(int *)((t38 + 0x4));
    *(unsigned int *)((t39 + 0x0)) = t40;
    t41 = *(int *)0xC2B8CB8;
    t42 = *(int *)(((((int)stk + 4) + 0x4C) + 0x0));
    t43 = *(int *)((t41 + 0x8));
    *(unsigned int *)((t42 + 0x0)) = t43;
    t44 = *(int *)(((int)stk + 4));
    t45 = *(int *)0xC2B8CB8;
    t46 = *(int *)((t44 + 0x0));
    t47 = *(int *)((t45 + 0xC));
    *(unsigned int *)((t46 + 0x0)) = t47;
    t48 = *(int *)0xC2B8CB8;
    t49 = *(int *)(((((int)stk + 4) + 0x54) + 0x0));
    t50 = *(int *)((t48 + 0x10));
    *(unsigned int *)((t49 + 0x0)) = t50;
    t51 = *(int *)0xC2EA9C4;
    if (t51 != 0) {
        t52 = *(int *)0xC2EAAA0;
        if ((t52 & 32) == 0) {
            kmQueryFinishFlushVertexBuffer();
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x10);
            for (;;) {
                t54 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 8)) = (t54 << 2);
                t55 = *(int *)0xC2B8CBC;
                t56 = *(int *)((t55 + (t54 << 2)));
                t57 = *(int *)(((((int)stk + 4) + 0x44) + (t54 << 2)));
                t58 = *(int *)((t57 + 0x0));
                t59 = *(int *)(((((int)stk + 4) + 0x30) + (t54 << 2)));
                t60 = (t56 - t58);
                if ((int)(t56 - t58) < 0) {
                    t60 = ((t56 - t58) + 0x3);
                }
                *(unsigned int *)((t59 + 0x0)) = (((t60 >> 1) >> 1) << 2);
                t62 = *(int *)0xC2B8CBC;
                t63 = *(int *)(((int)stk + 8));
                t64 = *(int *)((t62 + t63));
                FUN_0c15887e(t64, 0xC175D78, 0x4);
                t66 = *(int *)(((int)stk + 8));
                t67 = *(int *)0xC2B8CBC;
                t68 = *(int *)((t67 + t66));
                *(unsigned int *)((t67 + t66)) = (t68 + 0x20);
                t69 = *(int *)(((int)stk + 4));
                t70 = *(int *)0xC2EAAE8;
                if (((((int)t69 >= 0) ? (0x1 << (t69 & 31)) : ((-(int)t69 & 31) ? ((int)0x1 >> (-(int)t69 & 31)) : ((int)0x1 >> 31))) & t70) == 0) {
                    t71 = *(int *)(((((int)stk + 4) + 0x30) + (t69 << 2)));
                    *(unsigned int *)((t71 + 0x0)) = 0x0;
                }
                t75 = *(int *)(((int)stk + 4));
                t76 = *(int *)0xC2EAAE8;
                if (((((int)t75 >= 0) ? (0x1 << (t75 & 31)) : ((-(int)t75 & 31) ? ((int)0x1 >> (-(int)t75 & 31)) : ((int)0x1 >> 31))) & t76) != 0) {
                    *(unsigned int *)(((int)stk + 8)) = (t75 << 2);
                    t77 = *(int *)(((((int)stk + 4) + 0x30) + (t75 << 2)));
                    t78 = *(int *)(((int)stk + 8));
                    t79 = *(int *)((t77 + 0x0));
                    t80 = *(int *)((t78 + 0xC2F91D4));
                    if ((unsigned int)t79 > (unsigned int)t80) {
                        t81 = *(int *)(((int)stk + 8));
                        t82 = *(int *)(((((int)stk + 4) + 0x30) + t81));
                        t83 = *(int *)((t82 + 0x0));
                        *(unsigned int *)((t81 + 0xC2F91D4)) = t83;
                    }
                    t88 = *(int *)(((int)stk + 8));
                    t89 = *(int *)(((int)stk + 8));
                    t90 = *(int *)(((((int)stk + 4) + 0x30) + t88));
                    t91 = *(int *)((t89 + 0xC2EAB44));
                    t92 = *(int *)((t90 + 0x0));
                    if ((unsigned int)t92 > (unsigned int)t91) {
                        break;
                    }
                    t93 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t93 + 0x1);
                    if ((int)(t93 + 0x1) < (int)0x5) continue;
                    *(unsigned int *)0xC178278 = 0x0;
                    t94 = *(int *)0xC178274;
                    *(unsigned int *)0xC178274 = ((t94 + 0x1) & 0x1);
                    kmiFlipVertexBuffer(((t94 + 0x1) & 0x1));
                    return 0x0;
                }
                t96 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t96 + 0x1);
                if ((int)(t96 + 0x1) < (int)0x5) continue;
                *(unsigned int *)0xC178278 = 0x0;
                t97 = *(int *)0xC178274;
                *(unsigned int *)0xC178274 = ((t97 + 0x1) & 0x1);
                kmiFlipVertexBuffer(((t97 + 0x1) & 0x1));
                return 0x0;
            }
            t99 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 4)) = (t99 << 2);
                t100 = *(int *)0xC2EAAE8;
                if (((((int)t99 >= 0) ? (0x1 << (t99 & 31)) : ((-(int)t99 & 31) ? ((int)0x1 >> (-(int)t99 & 31)) : ((int)0x1 >> 31))) & t100) != 0) {
                    t101 = *(int *)(((int)stk + 12));
                    t102 = *(int *)((t101 + 0x0));
                    *(unsigned int *)((t101 + 0x0)) = ((t102 & 0xF0FFFFFF) | ((t99 << 16) << 8));
                    t103 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 8)) = (t103 + (((int)stk + 4) + 0x44));
                    t104 = *(int *)(((t103 + (((int)stk + 4) + 0x44)) + 0x0));
                    t105 = *(int *)((t104 + 0x0));
                    FUN_0c15887e(t105, (((int)stk + 4) + 0x10), 0x20);
                    t107 = *(int *)(((int)stk + 8));
                    t108 = *(int *)((t107 + 0x0));
                    t109 = *(int *)((t108 + 0x0));
                    FUN_0c15887e((t109 + 0x20), 0xC175D78, 0x4);
                    t111 = *(int *)(((int)stk + 4));
                    t112 = *(int *)(((((int)stk + 4) + 0x30) + t111));
                    *(unsigned int *)((t112 + 0x0)) = 0x20;
                } else {
                    t113 = *(int *)((((t99 << 2) + (((int)stk + 4) + 0x30)) + 0x0));
                    *(unsigned int *)((t113 + 0x0)) = 0x0;
                }
                t99 = (t99 + 0x1);
                if ((int)t99 >= (int)0x5) {
                    break;
                }
            }
            kmiFatalErrorEntry(0x2);
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x0;
            *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x10);
            t121 = t52;
            t122 = 0xC2B8CB8;
            for (;;) {
                t123 = *(int *)0xC2EAAA4;
                t124 = *(int *)(((int)stk + 4));
                if (t124 == t123) {
                    t125 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t125 + 0x1);
                    if ((int)(t125 + 0x1) < (int)0x5) continue;
                    t126 = *(int *)0xC2EAAA4;
                    t127 = *(int *)0xC2B8CBC;
                    t121 = t127;
                    t128 = *(int *)(((t126 << 2) + t121));
                    t121 = 0xC2EAAA4;
                    t129 = *(int *)((t121 + 0x0));
                    t130 = *(int *)((((t129 << 2) + (((int)stk + 4) + 0x44)) + 0x0));
                    t131 = *(int *)((t130 + 0x0));
                    if (t128 != t131) {
                        *(unsigned int *)0xC178278 = 0x0;
                        t132 = *(int *)0xC178274;
                        t121 = t132;
                        t121 = (t121 + 0x1);
                        t121 = (t121 & 0x1);
                        *(unsigned int *)0xC178274 = t121;
                        t122 = t121;
                        t133 = kmiFlipVertexBuffer(t122);
                        t121 = t133;
                        t121 = 0x0;
                        return t121;
                    }
                    t122 = 0x10;
                    *(unsigned int *)0xFF000038 = t122;
                    *(unsigned int *)0xFF00003C = t122;
                    t122 = ((int)stk + 4);
                    t122 = (t122 + 0x10);
                    t134 = *(int *)((t122 + 0x0));
                    t135 = *(int *)0xC2EAAA4;
                    t121 = t135;
                    t121 = (t121 & 0x7);
                    t121 = (t121 << 16);
                    t121 = (t121 << 8);
                    *(unsigned int *)((t122 + 0x0)) = ((0xF0FFFFFF & t134) | t121);
                    t136 = *(int *)0xC2EAAA4;
                    t137 = *(int *)0xC2B8CBC;
                    t121 = t137;
                    t139 = *(int *)(((t136 << 2) + t121));
                    t122 = ((t139 & 0x3FFFFFF) | 0xE0000000);
                    t140 = FUN_0c15887e(t122, (((int)stk + 4) + 0x10), 0x20);
                    t121 = t140;
                    _builtin_prefetch((void *)((t139 & 0x3FFFFFF) | 0xE0000000));
                    *(unsigned int *)0xC178278 = 0x0;
                    t141 = *(int *)0xC178274;
                    t121 = t141;
                    t121 = (t121 + 0x1);
                    t121 = (t121 & 0x1);
                    *(unsigned int *)0xC178274 = t121;
                    t122 = t121;
                    t142 = kmiFlipVertexBuffer(t122);
                    t121 = t142;
                    t121 = 0x0;
                    return t121;
                }
                t143 = *(int *)(((int)stk + 4));
                t144 = *(int *)0xC2EAAE8;
                t121 = t144;
                if (((((int)t143 >= 0) ? (0x1 << (t143 & 31)) : ((-(int)t143 & 31) ? ((int)0x1 >> (-(int)t143 & 31)) : ((int)0x1 >> 31))) & t121) != 0) {
                    *(unsigned int *)(((int)stk + 12)) = (t143 << 2);
                    *(unsigned int *)(((int)stk + 16)) = ((t143 << 2) + (((int)stk + 4) + 0x30));
                    t145 = *(int *)((((t143 << 2) + (((int)stk + 4) + 0x30)) + 0x0));
                    t146 = *(int *)(((int)stk + 12));
                    t121 = t146;
                    t147 = *(int *)0xC2B8CBC;
                    t148 = *(int *)(((int)stk + 12));
                    t149 = *(int *)((t147 + t121));
                    t121 = ((int)stk + 4);
                    t121 = (t121 + 0x44);
                    t150 = *(int *)((t148 + t121));
                    t151 = *(int *)((t150 + 0x0));
                    t121 = t151;
                    t152 = (t149 - t121);
                    if ((int)(t149 - t121) < 0) {
                        t152 = ((t149 - t121) + 0x3);
                    }
                    *(unsigned int *)((t145 + 0x0)) = (((t152 >> 1) >> 1) << 2);
                    t154 = *(int *)0xC2B8CBC;
                    t155 = *(int *)(((int)stk + 12));
                    t121 = t155;
                    t157 = *(int *)((t154 + t121));
                    t122 = t157;
                    t158 = FUN_0c15887e(t122, 0xC175D78, 0x4);
                    t121 = t158;
                    t159 = *(int *)(((int)stk + 12));
                    t121 = t159;
                    t160 = *(int *)0xC2B8CBC;
                    t161 = *(int *)((t160 + t121));
                    *(unsigned int *)((t160 + t121)) = (t161 + 0x20);
                    t162 = *(int *)(((int)stk + 16));
                    t121 = 0xC2F91D4;
                    t163 = *(int *)(((int)stk + 12));
                    t164 = *(int *)((t162 + 0x0));
                    t165 = *(int *)((t163 + t121));
                    t166 = *(int *)((t164 + 0x0));
                    if ((unsigned int)t166 > (unsigned int)t165) {
                        t167 = *(int *)(((int)stk + 4));
                        t122 = t167;
                        t122 = (t122 << 2);
                        t168 = t121;
                        t121 = t122;
                        t169 = *(int *)(((((int)stk + 4) + 0x30) + t121));
                        t170 = *(int *)((t169 + 0x0));
                        *(unsigned int *)(((t168 + t122) + 0x0)) = t170;
                    }
                    t175 = *(int *)(((int)stk + 4));
                    t122 = t175;
                    t122 = (t122 << 2);
                    t121 = t122;
                    t176 = *(int *)(((((int)stk + 4) + 0x30) + t121));
                    t177 = *(int *)((0xC2EAB44 + t121));
                    t178 = *(int *)((t176 + 0x0));
                    if ((unsigned int)t178 > (unsigned int)t177) {
                        break;
                    }
                    t179 = *(int *)(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = (t179 + 0x1);
                    if ((int)(t179 + 0x1) < (int)0x5) continue;
                    t180 = *(int *)0xC2EAAA4;
                    t181 = *(int *)0xC2B8CBC;
                    t121 = t181;
                    t182 = *(int *)(((t180 << 2) + t121));
                    t121 = 0xC2EAAA4;
                    t183 = *(int *)((t121 + 0x0));
                    t184 = *(int *)((((t183 << 2) + (((int)stk + 4) + 0x44)) + 0x0));
                    t185 = *(int *)((t184 + 0x0));
                    if (t182 != t185) {
                        *(unsigned int *)0xC178278 = 0x0;
                        t186 = *(int *)0xC178274;
                        t121 = t186;
                        t121 = (t121 + 0x1);
                        t121 = (t121 & 0x1);
                        *(unsigned int *)0xC178274 = t121;
                        t122 = t121;
                        t187 = kmiFlipVertexBuffer(t122);
                        t121 = t187;
                        t121 = 0x0;
                        return t121;
                    }
                    t122 = 0x10;
                    *(unsigned int *)0xFF000038 = t122;
                    *(unsigned int *)0xFF00003C = t122;
                    t122 = ((int)stk + 4);
                    t122 = (t122 + 0x10);
                    t188 = *(int *)((t122 + 0x0));
                    t189 = *(int *)0xC2EAAA4;
                    t121 = t189;
                    t121 = (t121 & 0x7);
                    t121 = (t121 << 16);
                    t121 = (t121 << 8);
                    *(unsigned int *)((t122 + 0x0)) = ((0xF0FFFFFF & t188) | t121);
                    t190 = *(int *)0xC2EAAA4;
                    t191 = *(int *)0xC2B8CBC;
                    t121 = t191;
                    t193 = *(int *)(((t190 << 2) + t121));
                    t122 = ((t193 & 0x3FFFFFF) | 0xE0000000);
                    t194 = FUN_0c15887e(t122, (((int)stk + 4) + 0x10), 0x20);
                    t121 = t194;
                    _builtin_prefetch((void *)((t193 & 0x3FFFFFF) | 0xE0000000));
                    *(unsigned int *)0xC178278 = 0x0;
                    t195 = *(int *)0xC178274;
                    t121 = t195;
                    t121 = (t121 + 0x1);
                    t121 = (t121 & 0x1);
                    *(unsigned int *)0xC178274 = t121;
                    t122 = t121;
                    t196 = kmiFlipVertexBuffer(t122);
                    t121 = t196;
                    t121 = 0x0;
                    return t121;
                }
                t121 = t143;
                t121 = (t121 << 2);
                t197 = *(int *)(((((int)stk + 4) + 0x30) + t121));
                *(unsigned int *)((t197 + 0x0)) = 0x0;
                t198 = *(int *)(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = (t198 + 0x1);
                if ((int)(t198 + 0x1) < (int)0x5) continue;
                t199 = *(int *)0xC2EAAA4;
                t200 = *(int *)0xC2B8CBC;
                t121 = t200;
                t201 = *(int *)(((t199 << 2) + t121));
                t121 = 0xC2EAAA4;
                t202 = *(int *)((t121 + 0x0));
                t203 = *(int *)((((t202 << 2) + (((int)stk + 4) + 0x44)) + 0x0));
                t204 = *(int *)((t203 + 0x0));
                if (t201 != t204) {
                    *(unsigned int *)0xC178278 = 0x0;
                    t205 = *(int *)0xC178274;
                    t121 = t205;
                    t121 = (t121 + 0x1);
                    t121 = (t121 & 0x1);
                    *(unsigned int *)0xC178274 = t121;
                    t122 = t121;
                    t206 = kmiFlipVertexBuffer(t122);
                    t121 = t206;
                    t121 = 0x0;
                    return t121;
                }
                t122 = 0x10;
                *(unsigned int *)0xFF000038 = t122;
                *(unsigned int *)0xFF00003C = t122;
                t122 = ((int)stk + 4);
                t122 = (t122 + 0x10);
                t207 = *(int *)((t122 + 0x0));
                t208 = *(int *)0xC2EAAA4;
                t121 = t208;
                t121 = (t121 & 0x7);
                t121 = (t121 << 16);
                t121 = (t121 << 8);
                *(unsigned int *)((t122 + 0x0)) = ((0xF0FFFFFF & t207) | t121);
                t209 = *(int *)0xC2EAAA4;
                t210 = *(int *)0xC2B8CBC;
                t121 = t210;
                t212 = *(int *)(((t209 << 2) + t121));
                t122 = ((t212 & 0x3FFFFFF) | 0xE0000000);
                t213 = FUN_0c15887e(t122, (((int)stk + 4) + 0x10), 0x20);
                t121 = t213;
                _builtin_prefetch((void *)((t212 & 0x3FFFFFF) | 0xE0000000));
                *(unsigned int *)0xC178278 = 0x0;
                t214 = *(int *)0xC178274;
                t121 = t214;
                t121 = (t121 + 0x1);
                t121 = (t121 & 0x1);
                *(unsigned int *)0xC178274 = t121;
                t122 = t121;
                t215 = kmiFlipVertexBuffer(t122);
                t121 = t215;
                t121 = 0x0;
                return t121;
            }
            t216 = t163;
            t217 = t122;
            t218 = 0x0;
            for (;;) {
                t219 = *(int *)0xC2EAAA4;
                if (t218 != t219) {
                    t216 = 0xC2EAAE8;
                    t220 = *(int *)((t216 + 0x0));
                    if (((((int)t218 >= 0) ? (0x1 << (t218 & 31)) : ((-(int)t218 & 31) ? ((int)0x1 >> (-(int)t218 & 31)) : ((int)0x1 >> 31))) & t220) != 0) {
                        t221 = *(int *)(((int)stk + 8));
                        t217 = t218;
                        t217 = (t217 << 2);
                        t222 = *(int *)((t221 + 0x0));
                        t216 = t222;
                        t216 = (t216 & 0xF0FFFFFF);
                        t216 = (t216 | ((t218 << 16) << 8));
                        *(unsigned int *)((t221 + 0x0)) = t216;
                        *(unsigned int *)(((int)stk + 4)) = t217;
                        t217 = (t217 + (((int)stk + 4) + 0x44));
                        *(unsigned int *)(((int)stk + 12)) = t217;
                        t223 = *(int *)((t217 + 0x0));
                        t217 = t223;
                        t224 = *(int *)((t217 + 0x0));
                        t217 = t224;
                        FUN_0c15887e(t217, (((int)stk + 4) + 0x10), 0x20);
                        t226 = *(int *)(((int)stk + 12));
                        t217 = t226;
                        t227 = *(int *)((t217 + 0x0));
                        t217 = t227;
                        t228 = *(int *)((t217 + 0x0));
                        t217 = t228;
                        t217 = (t217 + 0x20);
                        FUN_0c15887e(t217, 0xC175D78, 0x4);
                        t230 = *(int *)(((int)stk + 4));
                        t231 = *(int *)(((((int)stk + 4) + 0x30) + t230));
                        *(unsigned int *)((t231 + 0x0)) = 0x20;
                    } else {
                        t232 = *(int *)(((((int)stk + 4) + 0x30) + (t218 << 2)));
                        *(unsigned int *)((t232 + 0x0)) = 0x0;
                        t234 = t216;
                        t237 = t217;
                    }
                    t241 = t234;
                    t244 = t237;
                } else {
                    t239 = *(int *)(((((int)stk + 4) + 0x30) + (t218 << 2)));
                    *(unsigned int *)((t239 + 0x0)) = 0x0;
                    t241 = t216;
                    t244 = t217;
                }
                t216 = t241;
                t218 = (t218 + 0x1);
                t217 = t244;
                if ((int)t218 >= (int)0x5) {
                    break;
                }
            }
            kmiFatalErrorEntry(0x2);
            t247 = *(int *)0xC2EAAA4;
            t248 = *(int *)0xC2B8CBC;
            t249 = *(int *)(((t247 << 2) + t248));
            t250 = *(int *)0xC2EAAA4;
            t251 = *(int *)((((t250 << 2) + (((int)stk + 4) + 0x44)) + 0x0));
            t252 = *(int *)((t251 + 0x0));
            if (t249 != t252) {
            } else {
                *(unsigned int *)0xFF000038 = 0x10;
                *(unsigned int *)0xFF00003C = 0x10;
                t253 = *(int *)(((((int)stk + 4) + 0x10) + 0x0));
                t254 = *(int *)0xC2EAAA4;
                *(unsigned int *)(((((int)stk + 4) + 0x10) + 0x0)) = ((0xF0FFFFFF & t253) | (((t254 & 0x7) << 16) << 8));
                t255 = *(int *)0xC2EAAA4;
                t256 = *(int *)0xC2B8CBC;
                t257 = *(int *)(((t255 << 2) + t256));
                FUN_0c15887e(((t257 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x10), 0x20);
                _builtin_prefetch((void *)((t257 & 0x3FFFFFF) | 0xE0000000));
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        t274 = 0xC2B8CB8;
        t275 = (((int)stk + 4) + 0x4C);
        t276 = (((int)stk + 4) + 0x48);
        t277 = (((int)stk + 4) + 0x54);
        for (;;) {
            t278 = *(int *)(((int)stk + 8));
            t279 = *(int *)0xC2EAAE8;
            t295 = 0xC2EAAE8;
            if (((((int)t278 >= 0) ? (0x1 << (t278 & 31)) : ((-(int)t278 & 31) ? ((int)0x1 >> (-(int)t278 & 31)) : ((int)0x1 >> 31))) & t279) != 0) {
                *(unsigned int *)(((int)stk + 4)) = (t278 << 2);
                t280 = *(int *)0xC2B8CBC;
                t281 = *(int *)(((((int)stk + 4) + 0x30) + (t278 << 2)));
                t282 = *(int *)((t280 + (t278 << 2)));
                t283 = *(int *)(((int)stk + 4));
                t284 = *(int *)((t283 + (((int)stk + 4) + 0x44)));
                t285 = *(int *)((t284 + 0x0));
                t286 = (t282 - t285);
                if ((int)(t282 - t285) < 0) {
                    t286 = ((t282 - t285) + 0x3);
                }
                t275 = 0xC175D78;
                *(unsigned int *)((t281 + 0x0)) = (((t286 >> 1) >> 1) << 2);
                t276 = 0x4;
                t288 = *(int *)0xC2B8CBC;
                t289 = *(int *)(((int)stk + 4));
                t290 = *(int *)((t288 + t289));
                t274 = t290;
                FUN_0c15887e(t274, t275, t276);
                t292 = *(int *)(((int)stk + 4));
                t293 = *(int *)0xC2B8CBC;
                t294 = *(int *)((t293 + t292));
                *(unsigned int *)((t293 + t292)) = (t294 + 0x20);
                t295 = t292;
            } else {
                t299 = t274;
                t300 = t275;
                t301 = t276;
                t302 = t277;
            }
            t304 = *(int *)(((int)stk + 8));
            t274 = t299;
            t275 = t300;
            t276 = t301;
            t277 = t302;
            *(unsigned int *)(((int)stk + 8)) = (t304 + 0x1);
            if ((int)(t304 + 0x1) >= (int)0x5) {
                break;
            }
        }
        t305 = t295;
        t306 = 0x0;
        for (;;) {
            t307 = *(int *)0xC2EAAE8;
            if (((((int)t306 >= 0) ? (0x1 << (t306 & 31)) : ((-(int)t306 & 31) ? ((int)0x1 >> (-(int)t306 & 31)) : ((int)0x1 >> 31))) & t307) == 0) {
                t305 = t306;
                t305 = (t305 << 2);
                t308 = *(int *)(((((int)stk + 4) + 0x30) + t305));
                *(unsigned int *)((t308 + 0x0)) = 0x0;
            }
            t306 = (t306 + 0x1);
            if ((int)t306 >= (int)0x5) {
                break;
            }
        }
        *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x10);
        t312 = t305;
        t313 = 0x0;
        t314 = t275;
        for (;;) {
            t315 = *(int *)0xC2EAAE8;
            if (((((int)t313 >= 0) ? (0x1 << (t313 & 31)) : ((-(int)t313 & 31) ? ((int)0x1 >> (-(int)t313 & 31)) : ((int)0x1 >> 31))) & t315) != 0) {
                t314 = t313;
                t314 = (t314 << 2);
                t312 = t314;
                t316 = *(int *)(((((int)stk + 4) + 0x30) + t312));
                t317 = *(int *)((0xC2F91D4 + t312));
                t318 = *(int *)((t316 + 0x0));
                if ((unsigned int)t318 > (unsigned int)t317) {
                    t314 = t313;
                    t314 = (t314 << 2);
                    t312 = t314;
                    t319 = *(int *)(((((int)stk + 4) + 0x30) + t312));
                    t320 = *(int *)((t319 + 0x0));
                    *(unsigned int *)(((0xC2F91D4 + t314) + 0x0)) = t320;
                }
                t314 = t313;
                t314 = (t314 << 2);
                t312 = t314;
                t324 = *(int *)(((((int)stk + 4) + 0x30) + t312));
                t325 = *(int *)((0xC2EAB44 + t312));
                t326 = *(int *)((t324 + 0x0));
                if ((unsigned int)t326 > (unsigned int)t325) {
                    break;
                }
                t313 = (t313 + 0x1);
                if ((int)t313 >= (int)0x5) {
                    *(unsigned int *)0xC178278 = 0x0;
                    t327 = *(int *)0xC178274;
                    t312 = t327;
                    t312 = (t312 + 0x1);
                    t312 = (t312 & 0x1);
                    *(unsigned int *)0xC178274 = t312;
                    t313 = t312;
                    t328 = kmiFlipVertexBuffer(t313);
                    t312 = t328;
                    t312 = 0x0;
                    return t312;
                }
                continue;
            }
            t313 = (t313 + 0x1);
            if ((int)t313 >= (int)0x5) {
                *(unsigned int *)0xC178278 = 0x0;
                t330 = *(int *)0xC178274;
                t312 = t330;
                t312 = (t312 + 0x1);
                t312 = (t312 & 0x1);
                *(unsigned int *)0xC178274 = t312;
                t313 = t312;
                t331 = kmiFlipVertexBuffer(t313);
                t312 = t331;
                t312 = 0x0;
                return t312;
            }
        }
        t332 = t312;
        t333 = t313;
        t334 = t314;
        t335 = t276;
        t336 = t277;
        t337 = 0x0;
        for (;;) {
            t338 = *(int *)0xC2EAAE8;
            if (((((int)t337 >= 0) ? (0x1 << (t337 & 31)) : ((-(int)t337 & 31) ? ((int)0x1 >> (-(int)t337 & 31)) : ((int)0x1 >> 31))) & t338) != 0) {
                t339 = *(int *)(((int)stk + 4));
                t332 = t337;
                t332 = (t332 << 16);
                t333 = t337;
                t340 = *(int *)((t339 + 0x0));
                t332 = (t332 << 8);
                t334 = ((int)stk + 4);
                *(unsigned int *)((t339 + 0x0)) = ((t340 & 0xF0FFFFFF) | t332);
                t333 = (t333 << 2);
                *(unsigned int *)(((int)stk + 12)) = t333;
                t333 = (t333 + (((int)stk + 4) + 0x44));
                *(unsigned int *)(((int)stk + 8)) = t333;
                t335 = 0x20;
                t341 = *(int *)((t333 + 0x0));
                t333 = t341;
                t334 = (t334 + 0x10);
                t342 = *(int *)((t333 + 0x0));
                t333 = t342;
                t343 = FUN_0c15887e(t333, t334, t335);
                t332 = t343;
                t344 = *(int *)(((int)stk + 8));
                t333 = t344;
                t335 = 0x4;
                t334 = 0xC175D78;
                t345 = *(int *)((t333 + 0x0));
                t333 = t345;
                t346 = *(int *)((t333 + 0x0));
                t333 = t346;
                t333 = (t333 + 0x20);
                t347 = FUN_0c15887e(t333, t334, t335);
                t332 = t347;
                t348 = *(int *)(((int)stk + 12));
                t332 = t348;
                t349 = *(int *)(((((int)stk + 4) + 0x30) + t332));
                *(unsigned int *)((t349 + 0x0)) = 0x20;
            } else {
                t353 = t333;
                t354 = t334;
                t355 = t335;
                t356 = t336;
            }
            t333 = t353;
            t334 = t354;
            t335 = t355;
            t336 = t356;
            t337 = (t337 + 0x1);
            if ((int)t337 >= (int)0x5) {
                break;
            }
        }
        kmiFatalErrorEntry(0x2);
    }
    *(unsigned int *)0xC178278 = 0x0;
    t368 = *(int *)0xC178274;
    *(unsigned int *)0xC178274 = ((t368 + 0x1) & 0x1);
    kmiFlipVertexBuffer(((t368 + 0x1) & 0x1));
    return 0x0;
}
