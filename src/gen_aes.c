/* Straight-line functions with calls and guards (batch gen_aes): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
float nlInnerProduct(int, int);
int psgUpdatePartTracks(int, float);
int psgJolt(int a4, int a5, float f4);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o154_int { char p[0x154]; int v; };
struct o154_short { char p[0x154]; short v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_int { char p[0x70]; int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o74_int { char p[0x74]; int v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct o94_uint { char p[0x94]; unsigned int v; };
struct o98_int { char p[0x98]; int v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_int { char p[0xA8]; int v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oAC_int { char p[0xAC]; int v; };
struct oAC_uint { char p[0xAC]; unsigned int v; };
struct oB0_int { char p[0xB0]; int v; };
struct oB0_uint { char p[0xB0]; unsigned int v; };
struct oB4_int { char p[0xB4]; int v; };
struct oB4_uint { char p[0xB4]; unsigned int v; };
struct oB8_int { char p[0xB8]; int v; };
struct oB8_uint { char p[0xB8]; unsigned int v; };
struct oBC_int { char p[0xBC]; int v; };
struct oBC_uint { char p[0xBC]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


int psgJolt(int a4, int a5, float f4)
{
    int stk[14];
    register float u12;
    register float u16;
    register float u20;
    register float u21;
    register int t22;
    register float u25;
    register int t33;
    register float u34;
    register int t35;
    register float u36;
    register int t45;
    register float u46;
    register int t64;
    register float u65;
    register float u66;
    register int t67;
    register int t68;
    register int t69;
    register int t72;
    register int t74;
    register int t76;
    register int t95;
    register int t96;
    register int t98;
    register int t99;
    register int t101;
    register int t103;
    register int t105;
    register int t124;
    register int t125;
    register int t126;
    register int t130;
    register int t132;
    register int t134;
    register int t153;
    register int t155;
    register int t156;
    register int t158;
    register int t160;
    register int t162;
    register int t182;
    register int t183;
    register int t184;
    register int t187;
    register int t189;
    register int t191;
    register int t39;
    register float u42;
    int R1004;
    float R1008;
    float R1012;
    float R1016;

    R1004 = *(int *)((int)stk + 4);
    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);

    R1008 = (nlInnerProduct(0xC2AD288, 0xC2AD1E0));
    R1012 = (nlInnerProduct(0xC2AD288, 0xC2AD1EC));
    R1016 = (nlInnerProduct(0xC2AD288, 0xC2AD1F8));
    R1008 = ((R1008) * (f4 / 4.0f));
    R1012 = ((R1012) * (f4 / (1.0f + 1.0f)));
    R1016 = ((R1016) * (f4 / (1.0f + 1.0f)));
    if ((R1008) > 1.0f) {
        R1008 = 1.0f;
    } else {
        if ((-1.0f) > (R1008)) {
            R1008 = (-1.0f);
        }
    }
    u12 = R1012;
    if (u12 > 1.0f) {
        R1012 = 1.0f;
    } else {
        if (0.0f > u12) {
            R1012 = 0.0f;
        }
    }
    u16 = R1016;
    if (u16 > 1.0f) {
        R1016 = 1.0f;
    } else {
        if ((-1.0f) > u16) {
            R1016 = (-1.0f);
        }
    }
    u20 = (((struct o4_float *)(a5))->v);
    u21 = (((struct o4_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v);
    if (((u21 - u20) > -0.5f) && (0.5f > (u21 - u20))) {
        t22 = *(signed char *)((a4 + 0x154));
        u25 = (*(float *)((((unsigned char)((unsigned short)t22 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)));
        u25 = u25 + 0.5f * (R1012);
        *(float *)((((unsigned char)((unsigned short)t22 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = u25;
    }
    if (!(0.0f > (u21 - u20))) {
        t33 = *(signed char *)((a4 + 0x154));
        u34 = *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t33 * (unsigned short)0x1C)) + 0x0));
        t39 = (0xC2AE278 + (unsigned char)((unsigned short)t33 * (unsigned short)0x1C));
        u42 = (u34 - ((0.849999964f * (u21 - u20)) / 65.0f));
    } else {
        t35 = *(signed char *)((a4 + 0x154));
        u36 = *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t35 * (unsigned short)0x1C)) + 0x0));
        t39 = (0xC2AE278 + (unsigned char)((unsigned short)t35 * (unsigned short)0x1C));
        u42 = (u36 - ((7.0f * (u21 - u20)) / 65.0f));
    }
    *(float *)((t39 + 0x0)) = u42;
    t45 = *(signed char *)((a4 + 0x154));
    u46 = *(float *)((((unsigned char)((unsigned short)t45 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
    *(float *)((((unsigned char)((unsigned short)t45 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = (u46 * 0.799999952f);
    if ((*(float *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C) + 0xC2AE278) + 0x0))) > 5.0f) {
        *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C)) + 0x0)) = 5.0f;
    } else {
        if ((-1.0f) > (*(float *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C) + 0xC2AE278) + 0x0)))) {
            *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C)) + 0x0)) = (-1.0f);
        }
    }
    t64 = (((struct o154_int *)(a4))->v);
    u65 = (((struct o4_float *)(((short)((short)t64 * (short)0xCC) + 0xC2ADCE4)))->v);
    u66 = *(float *)((((unsigned char)((unsigned short)t64 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
    (((struct o4_float *)(((short)((short)t64 * (short)0xCC) + 0xC2ADCE4)))->v) = (u65 + u66);
    t67 = (((struct o154_int *)(a4))->v);
    t68 = (((struct o44_int *)(a5))->v);
    t69 = (((struct o44_int *)(((short)((short)t67 * (short)0xCC) + 0xC2ADCE4)))->v);
    *(unsigned int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = ((*(int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) + (-(int)((R1008) * 2730.0f)));
    t72 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t72 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = ((*(int *)((((unsigned char)((unsigned short)t72 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) - (int)(((float)(t69 - t68) * 0.5f) / 65.0f));
    t74 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t74 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t74 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) * 0.849999964f);
    t76 = (((struct o154_int *)(a4))->v);
    (((struct o44_uint *)(((short)((short)t76 * (short)0xCC) + 0xC2ADCE4)))->v) = (((((struct o44_int *)(((short)((short)t76 * (short)0xCC) + 0xC2ADCE4)))->v)) + (*(int *)((((unsigned char)((unsigned short)t76 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))));
    if ((int)((((struct o44_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) > (int)0xE39) {
        (((struct o44_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0xE39;
    } else {
        if ((int)((((struct o44_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) < (int)0xFFFFF1C7) {
            (((struct o44_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0xFFFFF1C7;
        }
    }
    t95 = (((struct o154_int *)(a4))->v);
    R1004 = t95;
    t96 = (((struct o4C_int *)(a5))->v);
    t98 = R1004;
    t99 = (((struct o4C_int *)(((short)((short)t95 * (short)0xCC) + 0xC2ADCE4)))->v);
    *(unsigned int *)((((unsigned char)((unsigned short)t98 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = ((*(int *)((((unsigned char)((unsigned short)t98 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) + (-(int)((R1008) * 2730.0f)));
    t101 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t101 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = ((*(int *)((((unsigned char)((unsigned short)t101 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) - (int)(((float)(t99 - t96) * 3.0f) / 15.0f));
    t103 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t103 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t103 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) * 0.799999952f);
    t105 = (((struct o154_int *)(a4))->v);
    (((struct o4C_uint *)(((short)((short)t105 * (short)0xCC) + 0xC2ADCE4)))->v) = (((((struct o4C_int *)(((short)((short)t105 * (short)0xCC) + 0xC2ADCE4)))->v)) + (*(int *)((((unsigned char)((unsigned short)t105 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))));
    if ((int)((((struct o4C_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) > (int)0xE39) {
        (((struct o4C_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0xE39;
    } else {
        if ((int)((((struct o4C_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) < (int)0xFFFFF1C7) {
            (((struct o4C_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0xFFFFF1C7;
        }
    }
    t124 = (((struct o154_int *)(a4))->v);
    t125 = (((struct o50_int *)(a5))->v);
    t126 = (((struct o50_int *)(((short)((short)t124 * (short)0xCC) + 0xC2ADCE4)))->v);
    *(unsigned int *)((((unsigned char)((unsigned short)t124 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = ((*(int *)((((unsigned char)((unsigned short)t124 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) + ((int)((R1016) * 2730.0f) - (int)((R1012) * 2730.0f)));
    t130 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t130 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = ((*(int *)((((unsigned char)((unsigned short)t130 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) - (int)(((float)(t126 - t125) * 0.599999964f) / 15.0f));
    t132 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t132 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t132 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) * 0.949999988f);
    t134 = (((struct o154_int *)(a4))->v);
    (((struct o50_uint *)(((short)((short)t134 * (short)0xCC) + 0xC2ADCE4)))->v) = (((((struct o50_int *)(((short)((short)t134 * (short)0xCC) + 0xC2ADCE4)))->v)) + (*(int *)((((unsigned char)((unsigned short)t134 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))));
    if ((int)((((struct o50_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) > (int)0x4E39) {
        (((struct o50_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0x4E39;
    } else {
        if ((int)((((struct o50_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) < (int)0x2000) {
            (((struct o50_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0x2000;
        }
    }
    t153 = (((struct o154_int *)(a4))->v);
    t155 = (((struct o54_int *)(a5))->v);
    t156 = (((struct o54_int *)(((short)((short)t153 * (short)0xCC) + 0xC2ADCE4)))->v);
    *(unsigned int *)((((unsigned char)((unsigned short)t153 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = ((*(int *)((((unsigned char)((unsigned short)t153 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) + (-(int)((R1008) * 2730.0f)));
    t158 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t158 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = ((*(int *)((((unsigned char)((unsigned short)t158 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) - (int)(((float)(t156 - t155) * 1.0f) / 7.0f));
    t160 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t160 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t160 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) * 0.799999952f);
    t162 = (((struct o154_int *)(a4))->v);
    (((struct o54_uint *)(((short)((short)t162 * (short)0xCC) + 0xC2ADCE4)))->v) = (((((struct o54_int *)(((short)((short)t162 * (short)0xCC) + 0xC2ADCE4)))->v)) + (*(int *)((((unsigned char)((unsigned short)t162 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))));
    if ((int)((((struct o54_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) > (int)0x1555) {
        (((struct o54_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0x1555;
    } else {
        if ((int)((((struct o54_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) < (int)0xFFFFEAAB) {
            (((struct o54_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0xFFFFEAAB;
        }
    }
    t182 = (((struct o154_int *)(a4))->v);
    t183 = (((struct o5C_int *)(a5))->v);
    t184 = (((struct o5C_int *)(((short)((short)t182 * (short)0xCC) + 0xC2ADCE4)))->v);
    *(unsigned int *)((((unsigned char)((unsigned short)t182 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = ((*(int *)((((unsigned char)((unsigned short)t182 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) + (int)((R1016) * 8192.0f));
    t187 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t187 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = ((*(int *)((((unsigned char)((unsigned short)t187 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) - (int)(((float)(t184 - t183) * 0.5f) / 7.0f));
    t189 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t189 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t189 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) * 0.919999957f);
    t191 = (((struct o154_int *)(a4))->v);
    (((struct o5C_uint *)(((short)((short)t191 * (short)0xCC) + 0xC2ADCE4)))->v) = (((((struct o5C_int *)(((short)((short)t191 * (short)0xCC) + 0xC2ADCE4)))->v)) + (*(int *)(((0xC2AE278 + (unsigned char)((unsigned short)t191 * (unsigned short)0x1C)) + 0x18))));
    if ((int)((((struct o5C_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) > (int)0x2000) {
        (((struct o5C_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0x2000;
    } else {
        if ((int)((((struct o5C_int *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v)) < (int)0xFFFFE000) {
            (((struct o5C_uint *)((0xC2ADCE4 + (short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC))))->v) = 0xFFFFE000;
        }
    }
    *(float *)((((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4) + 0x0)) = (*(float *)((a5 + 0x0)));
    (((struct o8_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o8_float *)(a5))->v));
    (((struct oC_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oC_float *)(a5))->v));
    (((struct o10_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o10_float *)(a5))->v));
    (((struct o14_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o14_float *)(a5))->v));
    (((struct o18_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o18_float *)(a5))->v));
    (((struct o1C_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o1C_float *)(a5))->v));
    (((struct o20_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o20_float *)(a5))->v));
    (((struct o24_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o24_float *)(a5))->v));
    (((struct o28_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o28_float *)(a5))->v));
    (((struct o2C_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o2C_float *)(a5))->v));
    (((struct o30_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o30_float *)(a5))->v));
    (((struct o34_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o34_float *)(a5))->v));
    (((struct o38_float *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o38_float *)(a5))->v));
    *(unsigned int *)((((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4) + 0x3C)) = (*(int *)((a5 + 0x3C)));
    (((struct o40_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o40_int *)(a5))->v));
    (((struct o48_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o48_int *)(a5))->v));
    (((struct o58_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o58_int *)(a5))->v));
    (((struct o60_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o60_int *)(a5))->v));
    (((struct o64_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o64_int *)(a5))->v));
    (((struct o68_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o68_int *)(a5))->v));
    (((struct o6C_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o6C_int *)(a5))->v));
    (((struct o70_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o70_int *)(a5))->v));
    (((struct o74_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o74_int *)(a5))->v));
    (((struct o78_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o78_int *)(a5))->v));
    (((struct o7C_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o7C_int *)(a5))->v));
    (((struct o80_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o80_int *)(a5))->v));
    (((struct o84_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o84_int *)(a5))->v));
    (((struct o88_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o88_int *)(a5))->v));
    (((struct o8C_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o8C_int *)(a5))->v));
    (((struct o90_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o90_int *)(a5))->v));
    (((struct o94_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o94_int *)(a5))->v));
    (((struct o98_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o98_int *)(a5))->v));
    (((struct o9C_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct o9C_int *)(a5))->v));
    (((struct oA0_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oA0_int *)(a5))->v));
    (((struct oA4_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oA4_int *)(a5))->v));
    (((struct oA8_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oA8_int *)(a5))->v));
    (((struct oAC_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oAC_int *)(a5))->v));
    (((struct oB0_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oB0_int *)(a5))->v));
    (((struct oB4_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oB4_int *)(a5))->v));
    (((struct oB8_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oB8_int *)(a5))->v));
    (((struct oBC_uint *)(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4)))->v) = ((((struct oBC_int *)(a5))->v));
    (((struct o84_uint *)((((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4) + 0x3C)))->v) = ((((struct o84_int *)((a5 + 0x3C)))->v));
    *(unsigned int *)((((((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x4)) = (*(int *)((((a5 + 0x3C) + 0x84) + 0x4)));
    *(unsigned int *)((((((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x8)) = (*(int *)((((a5 + 0x3C) + 0x84) + 0x8)));
    psgUpdatePartTracks(a4, 0.919999957f);
    return (FcvPlayBuffer(((short)((short)((((struct o154_short *)(a4))->v)) * (short)0xCC) + 0xC2ADCE4), (*(int *)((a4 + 0x0)))));
}
