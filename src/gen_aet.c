/* Straight-line functions with calls and guards (batch gen_aet): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiConvertUVnum(int);
int kmProcessVertexRenderState(int a4);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_int { char p[0x50]; int v; };
struct o54_int { char p[0x54]; int v; };
struct o58_int { char p[0x58]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB8_int { char p[0xB8]; int v; };
struct oBC_int { char p[0xBC]; int v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };



int kmProcessVertexRenderState(int a4)
{
    int t0;
    int t1;
    int t3;
    int t5;
    int t6;
    int t8;
    int t12;
    int t17;
    int t27;
    int t31;
    int t38;
    int t43;
    int t49;
    int t61;
    int t70;
    int t87;
    int t74;
    int t82;
    int t97;
    int t104;
    int t108;
    int t120;
    int t130;
    int t140;
    int t145;
    int t151;
    int t157;
    int t168;
    int t175;
    int t172;
    int t173;
    int t180;
    int t194;
    int t188;
    int t204;
    int t205;
    int t206;
    int t209;
    int t207;
    int t210;
    int t211;
    int t212;
    int t248;
    int t237;
    int t238;
    int t241;
    int t255;
    int t268;
    int t273;
    int t281;
    int t286;
    int t298;
    int t289;
    int t310;
    int t315;
    int t64;
    int t65;
    int t77;
    int t185;
    int t219;
    int t262;
    int t271;
    int t274;
    int stk[17];

    t0 = (((struct o94_int *)(a4))->v);
    t1 = (((struct o98_int *)(a4))->v);
    *(unsigned int *)(((int)stk + 8)) = ((((struct o9C_int *)(a4))->v));
    t3 = (((struct o90_int *)(a4))->v);
    t5 = (((struct o4_int *)0xC175FB4)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x0)) = ((((struct o0_int *)0xC175FB4)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x4)) = t5;
    t6 = (((struct oC_int *)0xC175FB4)->v);
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0x8)) = ((((struct o8_int *)0xC175FB4)->v));
    *(unsigned int *)(((((int)stk + 0) + 0x14) + 0xC)) = t6;
    t8 = *(int *)((a4 + 0x0));
    t12 = t0;
    if ((0x1 & t8) != 0) {
        t12 = ((t0 & 0x1FFFFFFF) | ((*(int *)((a4 + 0x14))) << 29));
    }
    t17 = t12;
    if ((0x2 & t8) != 0) {
        t17 = ((0xE7FFFFFF & t12) | ((*(int *)((a4 + 0x18))) << 27));
    }
    t27 = t17;
    if ((0x20 & t8) != 0) {
        t27 = (t17 & 0xFBFFFFFF);
        if ((*(int *)((a4 + 0x28))) != 0) {
            t27 = (t17 | 0x4000000);
        }
    }
    t31 = t27;
    if ((0x8 & t8) != 0) {
        t31 = ((0xFDFFFFFF & t27) | (((((unsigned int)(*(int *)((a4 + 0x20))) >> 1) << 16) << 8) << 1));
    }
    *(unsigned int *)(((int)stk + 12)) = (0x200 & t8);
    t38 = t31;
    if ((0x200 & t8) != 0) {
        t38 = ((t31 & 0xFEFFFFFF) | ((((((struct o40_int *)(a4))->v)) << 16) << 8));
    }
    t43 = t38;
    if ((0x8 & t8) != 0) {
        t43 = ((0xFF7FFFFF & t38) | (((*(int *)((a4 + 0x20))) & 0x1) << 23));
    }
    *(unsigned int *)(((int)stk + 4)) = (0x800000 & t8);
    t49 = t43;
    if ((0x800000 & t8) != 0) {
        t49 = ((0xFFBFFFFF & t43) | ((*(int *)((a4 + 0x10))) << 22));
    }
    t61 = t49;
    if ((t8 & 0x4000000) != 0) {
        t61 = (t49 & 0xFFEFFFFF);
        if (((((struct oB4_int *)(a4))->v)) != 0) {
            t61 = (t49 | 0x100000);
        }
    }
    t70 = t1;
    if (((0x40 & t8) != 0) && (t64 = *(int *)((a4 + 0x2C)), (unsigned int)t64 < (unsigned int)0xC)) {
        switch ((t64 << 1)) {
            case 0:
            {
                t65 = ((((t1 & 0x1FFFFFFF) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
            }
                break;
            case 2:
            {
                t65 = ((((t1 & 0x1FFFFFFF) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
            }
                break;
            case 4:
            {
                t65 = (0xC0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 6:
            {
                t65 = (0x40000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 8:
            {
                t65 = (0xE0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 10:
            {
                t65 = (0x60000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 12:
            {
                t65 = (0xA0000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 14:
            case 18:
            {
                t65 = t1;
            }
                break;
            case 16:
            {
                t65 = (0x80000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            case 20:
            {
                t65 = (0x20000000 | (t1 & 0x1FFFFFFF));
            }
                break;
            default:
            {
                t65 = (t1 & 0x1FFFFFFF);
            }
                break;
        }
        t70 = t65;
    }
    t87 = t70;
    if ((0x80 & t8) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (t70 & 0x1FFFFFFF);
        t74 = *(int *)((a4 + 0x30));
        t82 = t70;
        if ((unsigned int)t74 < (unsigned int)0xC) {
            switch ((t74 << 1)) {
                case 0:
                {
                    t77 = ((((*(int *)(((int)stk + 0))) | 0xA0000000) & 0xE3FFFFFF) | 0x10000000);
                }
                    break;
                case 2:
                {
                    t77 = ((((*(int *)(((int)stk + 0))) | 0x80000000) & 0xE3FFFFFF) | 0x14000000);
                }
                    break;
                case 4:
                {
                    t77 = (0x18000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 6:
                case 10:
                {
                    t77 = t70;
                }
                    break;
                case 8:
                {
                    t77 = (0x1C000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 12:
                {
                    t77 = (0x14000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 14:
                {
                    t77 = (0xC000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 16:
                {
                    t77 = (0x10000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 18:
                {
                    t77 = (0x8000000 | (t70 & 0xE3FFFFFF));
                }
                    break;
                case 20:
                {
                    t77 = ((t70 & 0xE3FFFFFF) | 0x4000000);
                }
                    break;
                default:
                {
                    t77 = (t70 & 0xE3FFFFFF);
                }
                    break;
            }
            t82 = t77;
        }
        t87 = t82;
    }
    t97 = t87;
    if ((t8 & 0x1000000) != 0) {
        t97 = (t87 & 0xFDFFFFFF);
        if ((*(int *)((a4 + 0x34))) != 0) {
            t97 = (t87 | 0x2000000);
        }
    }
    t104 = t97;
    if ((0x2000000 & t8) != 0) {
        t104 = (t97 & 0xFEFFFFFF);
        if ((*(int *)((a4 + 0x38))) != 0) {
            t104 = (t97 | 0x1000000);
        }
    }
    t108 = t104;
    if ((0x100 & t8) != 0) {
        t108 = ((0xFF3FFFFF & t104) | (((*(int *)((a4 + 0x3C))) & 0x3) << 22));
    }
    t120 = t108;
    if ((0x40000 & t8) != 0) {
        t120 = (t108 & 0xFFDFFFFF);
        if (((((struct o64_int *)(a4))->v)) != 0) {
            t120 = (t108 | 0x200000);
        }
    }
    t130 = t120;
    if ((0x400 & t8) != 0) {
        t130 = (t120 & 0xFFEFFFFF);
        if (((((struct o44_int *)(a4))->v)) != 0) {
            t130 = (t120 | 0x100000);
        }
    }
    t140 = t130;
    if ((0x800 & t8) != 0) {
        t140 = (t130 & 0xFFF7FFFF);
        if (((((struct o48_int *)(a4))->v)) != 0) {
            t140 = (t130 | 0x80000);
        }
    }
    t145 = t140;
    if ((t8 & 0x1000) != 0) {
        t145 = ((0xFFFE7FFF & t140) | (((((struct o4C_int *)(a4))->v)) << 15));
    }
    t151 = t145;
    if ((0x2000 & t8) != 0) {
        t151 = ((0xFFF9FFFF & t145) | ((((((struct o50_int *)(a4))->v)) << 16) << 1));
    }
    t157 = t151;
    if ((0x4000 & t8) != 0) {
        t157 = ((0xFFFF9FFF & t151) | ((*(int *)((((((((struct o54_int *)(a4))->v)) << 2) + (((int)stk + 0) + 0x14)) + 0x0))) << 13));
    }
    t168 = t157;
    if ((0x8000 & t8) != 0) {
        t168 = (t157 & 0xFFFFEFFF);
        if (((((struct o58_int *)(a4))->v)) != 0) {
            t168 = (t157 | 0x1000);
        }
    }
    t175 = t168;
    if ((0x10000 & t8) != 0) {
        t172 = (((struct o5C_int *)(a4))->v);
        t173 = (t172 & 0xF);
        if ((t172 & 0xF) == 0) {
            t173 = 0x4;
        }
        t175 = ((0xFFFFF0FF & t168) | (t173 << 8));
    }
    t180 = t175;
    if ((0x20000 & t8) != 0) {
        t180 = ((0xFFFFFF3F & t175) | ((((((((struct o60_int *)(a4))->v)) & 0x3) << 2) << 2) << 2));
    }
    t194 = t180;
    if ((((*(int *)((a4 + 0x20))) >> 1) == 1) && (t185 = (((struct o6C_int *)(a4))->v), t185 != 0)) {
        t188 = kmiConvertUVnum((*(int *)((((((struct o6C_int *)(a4))->v)) + 0xC))));
        *(unsigned int *)(((int)stk + 0)) = ((t180 & 0xFFFFFFC7) | ((t188 << 2) << 1));
        t194 = ((((t180 & 0xFFFFFFC7) | ((t188 << 2) << 1)) & 0xFFFFFFF8) | (kmiConvertUVnum((*(int *)((((((struct o6C_int *)(a4))->v)) + 0x10))))));
    }
    if (((*(int *)((a4 + 0x20))) >> 1) == 1) {
        if (((((struct o6C_int *)(a4))->v)) != 0) {
            t204 = (((struct o6C_int *)(a4))->v);
            t205 = *(int *)(((int)stk + 8));
            t206 = *(int *)((t204 + 0x18));
            t209 = ((0x1 & t206) & 0x1);
            t207 = (int)(((unsigned int)t209 >> 1) | ((unsigned int)t209 << 31));
            t210 = *(int *)((t204 + 0x8));
            if (((((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000)) & 0x38000000) != 0x28000000) && ((((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000)) & 0x38000000) != 0x30000000)) {
                t211 = (((struct o6C_int *)(a4))->v);
                *(unsigned int *)(((int)stk + 16)) = t211;
                t212 = *(int *)((t211 + 0x18));
                t219 = ((0xFDFFFFFF & ((((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000)) & 0xFBFFFFFF) | ((((~(0x4 & t212)) & 0x4) << 16) << 8))) | ((t212 & 0x10) << 21));
            } else {
                t219 = ((0xF81FFFFF & ((((((t205 & 0x7FFFFFFF) | t207) & 0xBFFFFFFF) | ((t206 & 0x8) << 27)) & 0xC7FFFFFF) | (t210 & 0x38000000))) | ((((((struct o68_int *)(a4))->v)) & 0x3F) << 21));
            }
            *(unsigned int *)(((int)stk + 8)) = ((t219 & 0xFFE00000) | ((unsigned int)((unsigned int)(*(int *)((((((struct o6C_int *)(a4))->v)) + 0x1C))) >> 2) >> 1));
        }
    }
    t248 = t3;
    if ((0x100000 & t8) != 0) {
        t237 = *(int *)((a4 + 0x4));
        t238 = t3;
        if (t237 == 0) {
            t238 = (0x80000000 | (t3 & 0x1FFFFFFF));
        }
        t241 = t238;
        if (t237 == 1) {
            t241 = (0x80000000 | (t238 & 0x1FFFFFFF));
        }
        t248 = t241;
        if (t237 == 2) {
            t248 = (0xA0000000 | (0x1FFFFFFF & t241));
        }
    }
    t255 = t248;
    if ((0x200000 & t8) != 0) {
        t255 = ((0xF8FFFFFF & t248) | (((*(int *)((a4 + 0x8))) << 16) << 8));
    }
    if ((0x8000000 & t8) != 0) {
        t262 = ((((struct oB8_int *)(a4))->v));
    } else {
        t262 = (*(int *)0xC2EA85C);
    }
    t268 = (((t262 << 16) << 2) | (0xFFF3FFFF & (t255 | 0x800000)));
    if ((0x10000000 & t8) != 0) {
        t268 = ((0xFFFCFFFF & (((t262 << 16) << 2) | (0xFFF3FFFF & (t255 | 0x800000)))) | (((((struct oBC_int *)(a4))->v)) << 16));
    }
    t273 = (0xFFFFFF3F & t268);
    if (((((((struct oA0_int *)(a4))->v)) & 0x60000000) != 0) && (t271 = *(int *)((a4 + 0x8)), (t271 & 1) != 0)) {
        t273 = (0x40 | (0xFFFFFF3F & t268));
    }
    t281 = t273;
    if (((0x10 & t8) != 0) && (t274 = *(int *)((a4 + 0x24)), (t274 & 1) != 0)) {
        t281 = ((0xFFFFFFBF & ((0xFFFFFF7F & t273) | ((*(int *)((a4 + 0x24))) << 7))) | ((((*(int *)0xC1782FC) << 2) << 2) << 2));
    }
    t286 = t281;
    if ((t8 & 0x400000) != 0) {
        t286 = ((0xFFFFFFCF & t281) | (((*(int *)((a4 + 0xC))) << 2) << 2));
    }
    t298 = t286;
    if ((0x8 & t8) != 0) {
        t289 = *(int *)((a4 + 0x20));
        t298 = ((0xFFFFFFF7 & t286) | ((((unsigned int)t289 >> 1) << 2) << 1));
        if ((0x8 & t8) != 0) {
            t298 = ((0xFFFFFFFD & ((0xFFFFFFF7 & t286) | ((((unsigned int)t289 >> 1) << 2) << 1))) | (((*(int *)((a4 + 0x20))) & 0x1) << 1));
        }
    }
    t310 = t298;
    if ((*(int *)(((int)stk + 12))) != 0) {
        t310 = (t298 & 0xFFFFFFFB);
        if (((((struct o40_int *)(a4))->v)) != 0) {
            t310 = (t298 | 0x4);
        }
    }
    t315 = t310;
    if ((*(int *)(((int)stk + 4))) != 0) {
        t315 = ((*(int *)((a4 + 0x10))) | (0xFFFFFFFE & t310));
    }
    (((struct o94_uint *)(a4))->v) = (t61 & 0xFFD00000);
    (((struct o98_uint *)(a4))->v) = t194;
    (((struct o9C_uint *)(a4))->v) = (*(int *)(((int)stk + 8)));
    (((struct o90_uint *)(a4))->v) = (t315 & 0xE78F00FF);
    return 0x0;
}
