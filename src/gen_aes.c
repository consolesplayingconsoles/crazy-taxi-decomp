/* Straight-line functions with calls and guards (batch gen_aes): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
float nlInnerProduct(int, int);
int psgUpdatePartTracks(int, float);
int psgJolt(int a4, int a5, float f4);

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
    u20 = *(float *)((a5 + 0x4));
    u21 = *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x4));
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
    t64 = *(int *)((a4 + 0x154));
    u65 = *(float *)((((short)((short)t64 * (short)0xCC) + 0xC2ADCE4) + 0x4));
    u66 = *(float *)((((unsigned char)((unsigned short)t64 * (unsigned short)0x1C) + 0xC2AE278) + 0x0));
    *(float *)((((short)((short)t64 * (short)0xCC) + 0xC2ADCE4) + 0x4)) = (u65 + u66);
    t67 = *(int *)((a4 + 0x154));
    t68 = *(int *)((a5 + 0x44));
    t69 = *(int *)((((short)((short)t67 * (short)0xCC) + 0xC2ADCE4) + 0x44));
    *(unsigned int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = ((*(int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) + (-(int)((R1008) * 2730.0f)));
    t72 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t72 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = ((*(int *)((((unsigned char)((unsigned short)t72 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) - (int)(((float)(t69 - t68) * 0.5f) / 65.0f));
    t74 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t74 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t74 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) * 0.849999964f);
    t76 = *(int *)((a4 + 0x154));
    *(unsigned int *)((((short)((short)t76 * (short)0xCC) + 0xC2ADCE4) + 0x44)) = ((*(int *)((((short)((short)t76 * (short)0xCC) + 0xC2ADCE4) + 0x44))) + (*(int *)((((unsigned char)((unsigned short)t76 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))));
    if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x44))) > (int)0xE39) {
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x44)) = 0xE39;
    } else {
        if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x44))) < (int)0xFFFFF1C7) {
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x44)) = 0xFFFFF1C7;
        }
    }
    t95 = *(int *)((a4 + 0x154));
    R1004 = t95;
    t96 = *(int *)((a5 + 0x4C));
    t98 = R1004;
    t99 = *(int *)((((short)((short)t95 * (short)0xCC) + 0xC2ADCE4) + 0x4C));
    *(unsigned int *)((((unsigned char)((unsigned short)t98 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = ((*(int *)((((unsigned char)((unsigned short)t98 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) + (-(int)((R1008) * 2730.0f)));
    t101 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t101 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = ((*(int *)((((unsigned char)((unsigned short)t101 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) - (int)(((float)(t99 - t96) * 3.0f) / 15.0f));
    t103 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t103 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t103 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) * 0.799999952f);
    t105 = *(int *)((a4 + 0x154));
    *(unsigned int *)((((short)((short)t105 * (short)0xCC) + 0xC2ADCE4) + 0x4C)) = ((*(int *)((((short)((short)t105 * (short)0xCC) + 0xC2ADCE4) + 0x4C))) + (*(int *)((((unsigned char)((unsigned short)t105 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))));
    if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x4C))) > (int)0xE39) {
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x4C)) = 0xE39;
    } else {
        if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x4C))) < (int)0xFFFFF1C7) {
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x4C)) = 0xFFFFF1C7;
        }
    }
    t124 = *(int *)((a4 + 0x154));
    t125 = *(int *)((a5 + 0x50));
    t126 = *(int *)((((short)((short)t124 * (short)0xCC) + 0xC2ADCE4) + 0x50));
    *(unsigned int *)((((unsigned char)((unsigned short)t124 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = ((*(int *)((((unsigned char)((unsigned short)t124 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) + ((int)((R1016) * 2730.0f) - (int)((R1012) * 2730.0f)));
    t130 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t130 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = ((*(int *)((((unsigned char)((unsigned short)t130 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) - (int)(((float)(t126 - t125) * 0.599999964f) / 15.0f));
    t132 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t132 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t132 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) * 0.949999988f);
    t134 = *(int *)((a4 + 0x154));
    *(unsigned int *)((((short)((short)t134 * (short)0xCC) + 0xC2ADCE4) + 0x50)) = ((*(int *)((((short)((short)t134 * (short)0xCC) + 0xC2ADCE4) + 0x50))) + (*(int *)((((unsigned char)((unsigned short)t134 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))));
    if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x50))) > (int)0x4E39) {
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x50)) = 0x4E39;
    } else {
        if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x50))) < (int)0x2000) {
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x50)) = 0x2000;
        }
    }
    t153 = *(int *)((a4 + 0x154));
    t155 = *(int *)((a5 + 0x54));
    t156 = *(int *)((((short)((short)t153 * (short)0xCC) + 0xC2ADCE4) + 0x54));
    *(unsigned int *)((((unsigned char)((unsigned short)t153 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = ((*(int *)((((unsigned char)((unsigned short)t153 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) + (-(int)((R1008) * 2730.0f)));
    t158 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t158 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = ((*(int *)((((unsigned char)((unsigned short)t158 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) - (int)(((float)(t156 - t155) * 1.0f) / 7.0f));
    t160 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t160 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t160 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) * 0.799999952f);
    t162 = *(int *)((a4 + 0x154));
    *(unsigned int *)((((short)((short)t162 * (short)0xCC) + 0xC2ADCE4) + 0x54)) = ((*(int *)((((short)((short)t162 * (short)0xCC) + 0xC2ADCE4) + 0x54))) + (*(int *)((((unsigned char)((unsigned short)t162 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))));
    if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x54))) > (int)0x1555) {
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x54)) = 0x1555;
    } else {
        if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x54))) < (int)0xFFFFEAAB) {
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x54)) = 0xFFFFEAAB;
        }
    }
    t182 = *(int *)((a4 + 0x154));
    t183 = *(int *)((a5 + 0x5C));
    t184 = *(int *)((((short)((short)t182 * (short)0xCC) + 0xC2ADCE4) + 0x5C));
    *(unsigned int *)((((unsigned char)((unsigned short)t182 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = ((*(int *)((((unsigned char)((unsigned short)t182 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) + (int)((R1016) * 8192.0f));
    t187 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t187 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = ((*(int *)((((unsigned char)((unsigned short)t187 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) - (int)(((float)(t184 - t183) * 0.5f) / 7.0f));
    t189 = *(signed char *)((a4 + 0x154));
    *(unsigned int *)((((unsigned char)((unsigned short)t189 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = (int)((float)(*(int *)((((unsigned char)((unsigned short)t189 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) * 0.919999957f);
    t191 = *(int *)((a4 + 0x154));
    *(unsigned int *)((((short)((short)t191 * (short)0xCC) + 0xC2ADCE4) + 0x5C)) = ((*(int *)((((short)((short)t191 * (short)0xCC) + 0xC2ADCE4) + 0x5C))) + (*(int *)(((0xC2AE278 + (unsigned char)((unsigned short)t191 * (unsigned short)0x1C)) + 0x18))));
    if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x5C))) > (int)0x2000) {
        *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x5C)) = 0x2000;
    } else {
        if ((int)(*(int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x5C))) < (int)0xFFFFE000) {
            *(unsigned int *)(((0xC2ADCE4 + (short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC)) + 0x5C)) = 0xFFFFE000;
        }
    }
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x0)) = (*(float *)((a5 + 0x0)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x8)) = (*(float *)((a5 + 0x8)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xC)) = (*(float *)((a5 + 0xC)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x10)) = (*(float *)((a5 + 0x10)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x14)) = (*(float *)((a5 + 0x14)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x18)) = (*(float *)((a5 + 0x18)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x1C)) = (*(float *)((a5 + 0x1C)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x20)) = (*(float *)((a5 + 0x20)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x24)) = (*(float *)((a5 + 0x24)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x28)) = (*(float *)((a5 + 0x28)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x2C)) = (*(float *)((a5 + 0x2C)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x30)) = (*(float *)((a5 + 0x30)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x34)) = (*(float *)((a5 + 0x34)));
    *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x38)) = (*(float *)((a5 + 0x38)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x3C)) = (*(int *)((a5 + 0x3C)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x40)) = (*(int *)((a5 + 0x40)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x48)) = (*(int *)((a5 + 0x48)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x58)) = (*(int *)((a5 + 0x58)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x60)) = (*(int *)((a5 + 0x60)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x64)) = (*(int *)((a5 + 0x64)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x68)) = (*(int *)((a5 + 0x68)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x6C)) = (*(int *)((a5 + 0x6C)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x70)) = (*(int *)((a5 + 0x70)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x74)) = (*(int *)((a5 + 0x74)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x78)) = (*(int *)((a5 + 0x78)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x7C)) = (*(int *)((a5 + 0x7C)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x80)) = (*(int *)((a5 + 0x80)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x84)) = (*(int *)((a5 + 0x84)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x88)) = (*(int *)((a5 + 0x88)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x8C)) = (*(int *)((a5 + 0x8C)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x90)) = (*(int *)((a5 + 0x90)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x94)) = (*(int *)((a5 + 0x94)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x98)) = (*(int *)((a5 + 0x98)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x9C)) = (*(int *)((a5 + 0x9C)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xA0)) = (*(int *)((a5 + 0xA0)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xA4)) = (*(int *)((a5 + 0xA4)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xA8)) = (*(int *)((a5 + 0xA8)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xAC)) = (*(int *)((a5 + 0xAC)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xB0)) = (*(int *)((a5 + 0xB0)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xB4)) = (*(int *)((a5 + 0xB4)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xB8)) = (*(int *)((a5 + 0xB8)));
    *(unsigned int *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0xBC)) = (*(int *)((a5 + 0xBC)));
    *(unsigned int *)((((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x0)) = (*(int *)((((a5 + 0x3C) + 0x84) + 0x0)));
    *(unsigned int *)((((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x4)) = (*(int *)((((a5 + 0x3C) + 0x84) + 0x4)));
    *(unsigned int *)((((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x3C) + 0x84) + 0x8)) = (*(int *)((((a5 + 0x3C) + 0x84) + 0x8)));
    psgUpdatePartTracks(a4, 0.919999957f);
    return (FcvPlayBuffer(((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4), (*(int *)((a4 + 0x0)))));
}
