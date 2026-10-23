/* Straight-line functions with calls and guards (batch gen_yb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
float nlInnerProduct(int, int);
int psgUpdatePartTracks(int);
int psgJolt(int a4, int a5, float f4);

int psgJolt(int a4, int a5, float f4)
{
    float u12;
    float u16;
    float u20;
    float u21;
    int t22;
    float u25;
    int t33;
    int t35;
    int t45;
    int t64;
    int t67;
    int t68;
    int t69;
    int t72;
    int t74;
    int t76;
    int t95;
    int t96;
    int t98;
    int t99;
    int t101;
    int t103;
    int t105;
    int t124;
    int t125;
    int t126;
    int t130;
    int t132;
    int t134;
    int t153;
    int t155;
    int t156;
    int t158;
    int t160;
    int t162;
    int t182;
    int t183;
    int t184;
    int t187;
    int t189;
    int t191;
    int t39;
    float u42;
    int stk[14];

    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (nlInnerProduct(0xC2AD288, 0xC2AD1E0));
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (nlInnerProduct(0xC2AD288, 0xC2AD1EC));
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (nlInnerProduct(0xC2AD288, 0xC2AD1F8));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * (f4 / 4.0f));
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x4))) * (f4 / (1.0f + 1.0f)));
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x8))) * (f4 / (1.0f + 1.0f)));
    if ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 1.0f;
    } else {
        if ((-1.0f) > (*(float *)(((((int)stk + 4) + 0x4) + 0x0)))) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (-1.0f);
        }
    }
    u12 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
    if (u12 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = 1.0f;
    } else {
        if (0.0f > u12) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = 0.0f;
        }
    }
    u16 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    if (u16 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = 1.0f;
    } else {
        if ((-1.0f) > u16) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (-1.0f);
        }
    }
    u20 = *(float *)((a5 + 0x4));
    u21 = *(float *)((((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4) + 0x4));
    if (((u21 - u20) > -0.5f) && (0.5f > (u21 - u20))) {
        t22 = *(signed char *)((a4 + 0x154));
        u25 = (*(float *)((((unsigned char)((unsigned short)t22 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)));
        u25 = u25 + 0.5f * (*(float *)(((((int)stk + 4) + 0x4) + 0x4)));
        *(float *)((((unsigned char)((unsigned short)t22 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = u25;
    }
    if (!(0.0f > (u21 - u20))) {
        t33 = *(signed char *)((a4 + 0x154));
        t39 = (0xC2AE278 + (unsigned char)((unsigned short)t33 * (unsigned short)0x1C));
        u42 = ((*(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t33 * (unsigned short)0x1C)) + 0x0))) - ((0.849999964f * (u21 - u20)) / 65.0f));
    } else {
        t35 = *(signed char *)((a4 + 0x154));
        t39 = (0xC2AE278 + (unsigned char)((unsigned short)t35 * (unsigned short)0x1C));
        u42 = ((*(float *)(((0xC2AE278 + (unsigned char)((unsigned short)t35 * (unsigned short)0x1C)) + 0x0))) - ((7.0f * (u21 - u20)) / 65.0f));
    }
    *(float *)((t39 + 0x0)) = u42;
    t45 = *(signed char *)((a4 + 0x154));
    *(float *)((((unsigned char)((unsigned short)t45 * (unsigned short)0x1C) + 0xC2AE278) + 0x0)) = ((*(float *)((((unsigned char)((unsigned short)t45 * (unsigned short)0x1C) + 0xC2AE278) + 0x0))) * 0.799999952f);
    if ((*(float *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C) + 0xC2AE278) + 0x0))) > 5.0f) {
        *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C)) + 0x0)) = 5.0f;
    } else {
        if ((-1.0f) > (*(float *)((((unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C) + 0xC2AE278) + 0x0)))) {
            *(float *)(((0xC2AE278 + (unsigned char)((unsigned short)(*(signed char *)((a4 + 0x154))) * (unsigned short)0x1C)) + 0x0)) = (-1.0f);
        }
    }
    t64 = *(int *)((a4 + 0x154));
    *(float *)((((short)((short)t64 * (short)0xCC) + 0xC2ADCE4) + 0x4)) = ((*(float *)((((short)((short)t64 * (short)0xCC) + 0xC2ADCE4) + 0x4))) + (*(float *)((((unsigned char)((unsigned short)t64 * (unsigned short)0x1C) + 0xC2AE278) + 0x0))));
    t67 = *(int *)((a4 + 0x154));
    t68 = *(int *)((a5 + 0x44));
    t69 = *(int *)((((short)((short)t67 * (short)0xCC) + 0xC2ADCE4) + 0x44));
    *(unsigned int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4)) = ((*(int *)((((unsigned char)((unsigned short)t67 * (unsigned short)0x1C) + 0xC2AE278) + 0x4))) + (-(int)((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * 2730.0f)));
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
    *(unsigned int *)(((int)stk + 4)) = t95;
    t96 = *(int *)((a5 + 0x4C));
    t98 = *(int *)(((int)stk + 4));
    t99 = *(int *)((((short)((short)t95 * (short)0xCC) + 0xC2ADCE4) + 0x4C));
    *(unsigned int *)((((unsigned char)((unsigned short)t98 * (unsigned short)0x1C) + 0xC2AE278) + 0xC)) = ((*(int *)((((unsigned char)((unsigned short)t98 * (unsigned short)0x1C) + 0xC2AE278) + 0xC))) + (-(int)((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * 2730.0f)));
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
    *(unsigned int *)((((unsigned char)((unsigned short)t124 * (unsigned short)0x1C) + 0xC2AE278) + 0x10)) = ((*(int *)((((unsigned char)((unsigned short)t124 * (unsigned short)0x1C) + 0xC2AE278) + 0x10))) + ((int)((*(float *)(((((int)stk + 4) + 0x4) + 0x8))) * 2730.0f) - (int)((*(float *)(((((int)stk + 4) + 0x4) + 0x4))) * 2730.0f)));
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
    *(unsigned int *)((((unsigned char)((unsigned short)t153 * (unsigned short)0x1C) + 0xC2AE278) + 0x14)) = ((*(int *)((((unsigned char)((unsigned short)t153 * (unsigned short)0x1C) + 0xC2AE278) + 0x14))) + (-(int)((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * 2730.0f)));
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
    *(unsigned int *)((((unsigned char)((unsigned short)t182 * (unsigned short)0x1C) + 0xC2AE278) + 0x18)) = ((*(int *)((((unsigned char)((unsigned short)t182 * (unsigned short)0x1C) + 0xC2AE278) + 0x18))) + (int)((*(float *)(((((int)stk + 4) + 0x4) + 0x8))) * 8192.0f));
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
    psgUpdatePartTracks(a4);
    return (FcvPlayBuffer(((short)((short)(*(short *)((a4 + 0x154))) * (short)0xCC) + 0xC2ADCE4), (*(int *)((a4 + 0x0)))));
}
