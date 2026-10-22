/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiConvertUVnum(int);
int kmProcessVertexRenderState(int a4);

int kmProcessVertexRenderState(int a4)
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
    int t12;
    int t9;
    int t17;
    int t15;
    int t26;
    int t21;
    int t22;
    int t30;
    int t29;
    int t37;
    int t34;
    int t42;
    int t40;
    int t48;
    int t46;
    int t59;
    int t52;
    int t54;
    int t73;
    int t62;
    int t68;
    int t90;
    int t77;
    int t85;
    int t78;
    int t79;
    int t99;
    int t94;
    int t95;
    int t105;
    int t102;
    int t103;
    int t109;
    int t108;
    int t120;
    int t114;
    int t116;
    int t129;
    int t123;
    int t125;
    int t138;
    int t132;
    int t134;
    int t143;
    int t141;
    int t149;
    int t147;
    int t155;
    int t152;
    int t153;
    int t165;
    int t160;
    int t161;
    int t171;
    int t168;
    int t169;
    int t176;
    int t175;
    int t180;
    int t200;
    int t181;
    int t190;
    int t182;
    int t183;
    int t184;
    int t185;
    int t186;
    int t187;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t215;
    int t213;
    int t216;
    int t217;
    int t218;
    int t219;
    int t227;
    int t236;
    int t237;
    int t264;
    int t253;
    int t254;
    int t257;
    int t260;
    int t271;
    int t269;
    int t274;
    int t275;
    int t284;
    int t280;
    int t286;
    int t291;
    int t287;
    int t288;
    int t306;
    int t293;
    int t299;
    int t294;
    int t295;
    int t312;
    int t309;
    int t323;
    int t314;
    int t318;
    int t315;
    int t325;
    int t334;
    int t326;
    int t329;
    int t336;
    int t339;
    int t337;
    int t341;
    int t63;
    int t80;
    int t233;
    int t224;
    int t278;
    int stk[18] = {0};

    t0 = *(int *)((a4 + 0x94));
    t1 = *(int *)((a4 + 0x98));
    t2 = *(int *)((a4 + 0x9C));
    *(unsigned int *)(((int)stk + 12)) = t2;
    t3 = *(int *)((a4 + 0x90));
    t4 = *(int *)0xC175FB4;
    t5 = *(int *)0xC175FB8;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t4;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t5;
    t6 = *(int *)0xC175FC0;
    t7 = *(int *)0xC175FBC;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t7;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0xC)) = t6;
    t8 = *(int *)((a4 + 0x0));
    t12 = t0;
    if ((0x1 & t8) != 0) {
        t9 = *(int *)((a4 + 0x14));
        t12 = ((t0 & 0x1FFFFFFF) | (t9 << 29));
    }
    t17 = t12;
    if ((0x2 & t8) != 0) {
        t15 = *(int *)((a4 + 0x18));
        t17 = ((0xE7FFFFFF & t12) | (t15 << 27));
    }
    t26 = t17;
    if ((0x20 & t8) != 0) {
        t21 = *(int *)((a4 + 0x28));
        t22 = (t17 & 0xFBFFFFFF);
        if (t21 != 0) {
            t22 = (t17 | 0x4000000);
        }
        t26 = t22;
    }
    t30 = t26;
    if ((0x8 & t8) != 0) {
        t29 = *(int *)((a4 + 0x20));
        t30 = ((0xFDFFFFFF & t26) | (((((unsigned int)t29 >> 1) << 16) << 8) << 1));
    }
    *(unsigned int *)(((int)stk + 16)) = (0x200 & t8);
    t37 = t30;
    if ((0x200 & t8) != 0) {
        t34 = *(int *)((a4 + 0x40));
        t37 = ((t30 & 0xFEFFFFFF) | ((t34 << 16) << 8));
    }
    t42 = t37;
    if ((0x8 & t8) != 0) {
        t40 = *(int *)((a4 + 0x20));
        t42 = ((0xFF7FFFFF & t37) | ((t40 & 0x1) << 23));
    }
    *(unsigned int *)(((int)stk + 8)) = (0x800000 & t8);
    t48 = t42;
    if ((0x800000 & t8) != 0) {
        t46 = *(int *)((a4 + 0x10));
        t48 = ((0xFFBFFFFF & t42) | (t46 << 22));
    }
    t59 = t48;
    if ((t8 & 0x4000000) != 0) {
        t52 = *(int *)((a4 + 0xB4));
        t54 = (t48 & 0xFFEFFFFF);
        if (t52 != 0) {
            t54 = (t48 | 0x100000);
        }
        t59 = t54;
    }
    t73 = t1;
    if ((0x40 & t8) != 0) {
        t62 = *(int *)((a4 + 0x2C));
        t68 = t1;
        if ((unsigned int)t62 < (unsigned int)0xC) {
            switch ((t62 << 1)) {
                case 0:
                {
                    t63 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t63 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t63 = (0xC0000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                case 6:
                {
                    t63 = (0x40000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                case 8:
                {
                    t63 = (0xE0000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                case 10:
                {
                    t63 = (0x60000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                case 12:
                {
                    t63 = (0xA0000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                case 14:
                case 18:
                {
                    t63 = t1;
                }
                    break;
                case 16:
                {
                    t63 = (0x80000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                case 20:
                {
                    t63 = (0x20000000 | (t1 & 0x1FFFFFFF));
                }
                    break;
                default:
                {
                    t63 = (t1 & 0x1FFFFFFF);
                }
                    break;
            }
            t68 = t63;
        }
        t73 = t68;
    }
    t90 = t73;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 4)) = (t73 & 0x1FFFFFFF);
        t77 = *(int *)((a4 + 0x30));
        t85 = t73;
        if ((unsigned int)t77 < (unsigned int)0xC) {
            switch ((t77 << 1)) {
                case 0:
                {
                    t78 = *(int *)(((int)stk + 4));
                    t80 = (((t78 | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t79 = *(int *)(((int)stk + 4));
                    t80 = (((t79 | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t80 = (0x18000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t80 = t73;
                }
                    break;
                case 8:
                {
                    t80 = (0x1C000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t80 = (0x14000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 14:
                {
                    t80 = (0xC000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t80 = (0x10000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t80 = (0x8000000 | (t73 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t80 = ((t73 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t80 = (t73 & 0xE3FFFFFF);
                }
                    break;
            }
            t85 = t80;
        }
        t90 = t85;
    }
    t99 = t90;
    if ((t8 & 0x1000000) != 0) {
        t94 = *(int *)((a4 + 0x34));
        t95 = (t90 & 0xFDFFFFFF);
        if (t94 != 0) {
            t95 = (t90 | 0x2000000);
        }
        t99 = t95;
    }
    t105 = t99;
    if ((0x2000000 & t8) != 0) {
        t102 = *(int *)((a4 + 0x38));
        t103 = (t99 & 0xFEFFFFFF);
        if (t102 != 0) {
            t103 = (t99 | 0x1000000);
        }
        t105 = t103;
    }
    t109 = t105;
    if ((0x100 & t8) != 0) {
        t108 = *(int *)((a4 + 0x3C));
        t109 = ((0xFF3FFFFF & t105) | ((t108 & 0x3) << 22));
    }
    t120 = t109;
    if ((0x40000 & t8) != 0) {
        t114 = *(int *)((a4 + 0x64));
        t116 = (t109 & 0xFFDFFFFF);
        if (t114 != 0) {
            t116 = (t109 | 0x200000);
        }
        t120 = t116;
    }
    t129 = t120;
    if ((0x400 & t8) != 0) {
        t123 = *(int *)((a4 + 0x44));
        t125 = (t120 & 0xFFEFFFFF);
        if (t123 != 0) {
            t125 = (t120 | 0x100000);
        }
        t129 = t125;
    }
    t138 = t129;
    if ((0x800 & t8) != 0) {
        t132 = *(int *)((a4 + 0x48));
        t134 = (t129 & 0xFFF7FFFF);
        if (t132 != 0) {
            t134 = (t129 | 0x80000);
        }
        t138 = t134;
    }
    t143 = t138;
    if ((t8 & 0x1000) != 0) {
        t141 = *(int *)((a4 + 0x4C));
        t143 = ((0xFFFE7FFF & t138) | (t141 << 15));
    }
    t149 = t143;
    if ((0x2000 & t8) != 0) {
        t147 = *(int *)((a4 + 0x50));
        t149 = ((0xFFF9FFFF & t143) | ((t147 << 16) << 1));
    }
    t155 = t149;
    if ((0x4000 & t8) != 0) {
        t152 = *(int *)((a4 + 0x54));
        t153 = *(int *)((((t152 << 2) + (((int)stk + 4) + 0x14)) + 0x0));
        t155 = ((0xFFFF9FFF & t149) | (t153 << 13));
    }
    t165 = t155;
    if ((0x8000 & t8) != 0) {
        t160 = *(int *)((a4 + 0x58));
        t161 = (t155 & 0xFFFFEFFF);
        if (t160 != 0) {
            t161 = (t155 | 0x1000);
        }
        t165 = t161;
    }
    t171 = t165;
    if ((0x10000 & t8) != 0) {
        t168 = *(int *)((a4 + 0x5C));
        t169 = (t168 & 0xF);
        if ((t168 & 0xF) == 0) {
            t169 = 0x4;
        }
        t171 = ((0xFFFFF0FF & t165) | (t169 << 8));
    }
    t176 = t171;
    if ((0x20000 & t8) != 0) {
        t175 = *(int *)((a4 + 0x60));
        t176 = ((0xFFFFFF3F & t171) | ((((t175 & 0x3) << 2) << 2) << 2));
    }
    t180 = *(int *)((a4 + 0x20));
    t200 = t176;
    if ((t180 >> 1) == 1) {
        t181 = *(int *)((a4 + 0x6C));
        t190 = t176;
        if (t181 != 0) {
            t182 = *(int *)((a4 + 0x6C));
            t183 = *(int *)((t182 + 0xC));
            t184 = kmiConvertUVnum(t183);
            *(unsigned int *)(((int)stk + 4)) = ((t176 & 0xFFFFFFC7) | ((t184 << 2) << 1));
            t185 = *(int *)((a4 + 0x6C));
            t186 = *(int *)((t185 + 0x10));
            t187 = kmiConvertUVnum(t186);
            t190 = ((((t176 & 0xFFFFFFC7) | ((t184 << 2) << 1)) & 0xFFFFFFF8) | t187);
        }
        t200 = t190;
    }
    t208 = *(int *)((a4 + 0x20));
    if ((t208 >> 1) != 1) {
    } else {
        t209 = *(int *)((a4 + 0x6C));
        if (t209 != 0) {
            t210 = *(int *)((a4 + 0x6C));
            t211 = *(int *)(((int)stk + 12));
            t212 = *(int *)((t210 + 0x18));
            t215 = ((0x1 & t212) & 0x1);
            t213 = (int)(((unsigned int)t215 >> 1) | ((unsigned int)t215 << 31));
            t216 = *(int *)((t210 + 0x8));
            if ((((((((t211 & 0x7FFFFFFF) | t213) & 0xBFFFFFFF) | ((t212 & 0x8) << 27)) & 0xC7FFFFFF) | (t216 & 0x38000000)) & 0x38000000) != 0x28000000) {
                if ((((((((t211 & 0x7FFFFFFF) | t213) & 0xBFFFFFFF) | ((t212 & 0x8) << 27)) & 0xC7FFFFFF) | (t216 & 0x38000000)) & 0x38000000) == 0x30000000) {
                    t217 = *(int *)((a4 + 0x68));
                    t224 = ((0xF81FFFFF & ((((((t211 & 0x7FFFFFFF) | t213) & 0xBFFFFFFF) | ((t212 & 0x8) << 27)) & 0xC7FFFFFF) | (t216 & 0x38000000))) | ((t217 & 0x3F) << 21));
                } else {
                    t218 = *(int *)((a4 + 0x6C));
                    *(unsigned int *)(((int)stk + 20)) = t218;
                    t219 = *(int *)((t218 + 0x18));
                    t224 = ((0xFDFFFFFF & ((((((((t211 & 0x7FFFFFFF) | t213) & 0xBFFFFFFF) | ((t212 & 0x8) << 27)) & 0xC7FFFFFF) | (t216 & 0x38000000)) & 0xFBFFFFFF) | ((((~(0x4 & t219)) & 0x4) << 16) << 8))) | ((t219 & 0x10) << 21));
                }
                t233 = t224;
            } else {
                t227 = *(int *)((a4 + 0x68));
                t233 = ((0xF81FFFFF & ((((((t211 & 0x7FFFFFFF) | t213) & 0xBFFFFFFF) | ((t212 & 0x8) << 27)) & 0xC7FFFFFF) | (t216 & 0x38000000))) | ((t227 & 0x3F) << 21));
            }
            t236 = *(int *)((a4 + 0x6C));
            t237 = *(int *)((t236 + 0x1C));
            *(unsigned int *)(((int)stk + 12)) = ((t233 & 0xFFE00000) | ((unsigned int)((unsigned int)t237 >> 2) >> 1));
        }
    }
    t264 = t3;
    if ((0x100000 & t8) != 0) {
        t253 = *(int *)((a4 + 0x4));
        t254 = t3;
        if (t253 == 0) {
            t254 = (0x80000000 | (t3 & 0x1FFFFFFF));
        }
        t257 = t254;
        if (t253 == 1) {
            t257 = (0x80000000 | (t254 & 0x1FFFFFFF));
        }
        t260 = t257;
        if (t253 == 2) {
            t260 = (0xA0000000 | (0x1FFFFFFF & t257));
        }
        t264 = t260;
    }
    t271 = t264;
    if ((0x200000 & t8) != 0) {
        t269 = *(int *)((a4 + 0x8));
        t271 = ((0xF8FFFFFF & t264) | ((t269 << 16) << 8));
    }
    if ((0x8000000 & t8) != 0) {
        t274 = *(int *)((a4 + 0xB8));
        t278 = t274;
    } else {
        t275 = *(int *)0xC2EA85C;
        t278 = t275;
    }
    t284 = (((t278 << 16) << 2) | (0xFFF3FFFF & (t271 | 0x800000)));
    if ((0x10000000 & t8) != 0) {
        t280 = *(int *)((a4 + 0xBC));
        t284 = ((0xFFFCFFFF & (((t278 << 16) << 2) | (0xFFF3FFFF & (t271 | 0x800000)))) | (t280 << 16));
    }
    t286 = *(int *)((a4 + 0xA0));
    t291 = (0xFFFFFF3F & t284);
    if ((t286 & 0x60000000) != 0) {
        t287 = *(int *)((a4 + 0x8));
        t288 = (0xFFFFFF3F & t284);
        if ((t287 & 1) != 0) {
            t288 = (0x40 | (0xFFFFFF3F & t284));
        }
        t291 = t288;
    }
    t306 = t291;
    if ((0x10 & t8) != 0) {
        t293 = *(int *)((a4 + 0x24));
        t299 = t291;
        if ((t293 & 1) != 0) {
            t294 = *(int *)((a4 + 0x24));
            t295 = *(int *)0xC1782FC;
            t299 = ((0xFFFFFFBF & ((0xFFFFFF7F & t291) | (t294 << 7))) | (((t295 << 2) << 2) << 2));
        }
        t306 = t299;
    }
    t312 = t306;
    if ((t8 & 0x400000) != 0) {
        t309 = *(int *)((a4 + 0xC));
        t312 = ((0xFFFFFFCF & t306) | ((t309 << 2) << 2));
    }
    t323 = t312;
    if ((0x8 & t8) != 0) {
        t314 = *(int *)((a4 + 0x20));
        t318 = ((0xFFFFFFF7 & t312) | ((((unsigned int)t314 >> 1) << 2) << 1));
        if ((0x8 & t8) != 0) {
            t315 = *(int *)((a4 + 0x20));
            t318 = ((0xFFFFFFFD & ((0xFFFFFFF7 & t312) | ((((unsigned int)t314 >> 1) << 2) << 1))) | ((t315 & 0x1) << 1));
        }
        t323 = t318;
    }
    t325 = *(int *)(((int)stk + 16));
    t334 = t323;
    if (t325 != 0) {
        t326 = *(int *)((a4 + 0x40));
        t329 = (t323 & 0xFFFFFFFB);
        if (t326 != 0) {
            t329 = (t323 | 0x4);
        }
        t334 = t329;
    }
    t336 = *(int *)(((int)stk + 8));
    t339 = t334;
    if (t336 != 0) {
        t337 = *(int *)((a4 + 0x10));
        t339 = (t337 | (0xFFFFFFFE & t334));
    }
    *(unsigned int *)((a4 + 0x94)) = (t59 & 0xFFD00000);
    *(unsigned int *)((a4 + 0x98)) = t200;
    t341 = *(int *)(((int)stk + 12));
    *(unsigned int *)((a4 + 0x9C)) = t341;
    *(unsigned int *)((a4 + 0x90)) = (t339 & 0xE78F00FF);
    return 0x0;
}
