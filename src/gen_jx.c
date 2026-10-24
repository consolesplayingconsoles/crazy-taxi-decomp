/* Straight-line functions with calls and guards (batch gen_jx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int gdc_CourseReq(int, int, float);
float nlLength(int, int);
typedef struct { float x, y, z; } NLpoint3;
float gdc_CoursePointLoadReq(NLpoint3 p, float f4);

/* manual: the point goes on the stack by value (3 words, read through its address); r4 and r5 are overwritten before use */
float gdc_CoursePointLoadReq(NLpoint3 p, float f4)
{
    int t11;
    float t24;
    float t35;
    float t47;
    int stk[25];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F4;
    float F14;
    float F15;
    int T_;
    *(NLpoint3 *)&stk[13] = p;
    F4 = f4;
    L_C02EE20:;
    R0 = (0x34);
    R11 = (0xC26E104);
    R12 = (0xC078AE0);
    R14 = ((*(int *)0xC1EE800));
    R9 = (0x0);
    F14 = (F4);
    F15 = (0.0f);
    if (((*(int *)0xC1EE234) != 0)) goto L_C02EE9C;
    goto L_C02EE4E;
    L_C02EE4E:;
    t11 = *(int *)0xC1EE20C;
    R0 = (t11);
    if ((t11 != 1)) goto L_C02EE9C;
    goto L_C02EE56;
    L_C02EE56:;
    R10 = (0x9);
    R13 = (R9);
    goto L_C02EE92;
    L_C02EE92:;
    if (((int)R13 < (int)(*(int *)((R11 + 0x0))))) goto L_C02EE5C;
    goto L_C02EE98;
    L_C02EE98:;
    goto L_C02EED2;
    L_C02EED2:;
    R11 = (0xC26E108);
    R13 = ((*(int *)0xC1EE804));
    R14 = (R9);
    goto L_C02EF08;
    L_C02EF08:;
    if (((int)R14 < (int)(*(int *)((R11 + 0x0))))) goto L_C02EEDC;
    goto L_C02EF0E;
    L_C02EF0E:;
    return F0;
    L_C02EEDC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R13 + 0x4)); }
    *(float *)(((int)stk + 8)) = F15;
    t24 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
    F0 = (t24);
    F4 = (t24);
    if ((!(((*(float *)((R13 + 0x0))) + F14) > t24))) goto L_C02EF04;
    goto L_C02EEFE;
    L_C02EEFE:;
    R0 = ((gdc_CourseReq(R14, 0x1, F4)));
    goto L_C02EF04;
    L_C02EF04:;
    R13 = ((R13 + 0x14));
    R14 = ((R14 + 0x1));
    goto L_C02EF08;
    L_C02EE5C:;
    if (((int)R13 < (int)R10)) goto L_C02EE66;
    goto L_C02EE60;
    L_C02EE60:;
    if (((int)R13 <= (int)0x1C)) goto L_C02EE8E;
    goto L_C02EE66;
    L_C02EE66:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R14 + 0x4)); }
    *(float *)(((int)stk + 8)) = F15;
    t35 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
    F0 = (t35);
    F4 = (t35);
    if ((!(((*(float *)((R14 + 0x0))) + F14) > t35))) goto L_C02EE8E;
    goto L_C02EE88;
    L_C02EE88:;
    R0 = ((gdc_CourseReq(R13, 0x0, F4)));
    goto L_C02EE8E;
    L_C02EE8E:;
    R13 = ((R13 + 0x1));
    R14 = ((R14 + 0x14));
    goto L_C02EE92;
    L_C02EE9C:;
    R13 = (R9);
    goto L_C02EECC;
    L_C02EECC:;
    if (((int)R13 < (int)(*(int *)((R11 + 0x0))))) goto L_C02EEA0;
    goto L_C02EED2;
    L_C02EEA0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((R14 + 0x4)); }
    *(float *)(((int)stk + 8)) = F15;
    t47 = nlLength(((int)stk + 4), (((int)stk + 4) + 0x30));
    F0 = (t47);
    F4 = (t47);
    if ((!(((*(float *)((R14 + 0x0))) + F14) > t47))) goto L_C02EEC8;
    goto L_C02EEC2;
    L_C02EEC2:;
    R0 = ((gdc_CourseReq(R13, 0x0, F4)));
    goto L_C02EEC8;
    L_C02EEC8:;
    R13 = ((R13 + 0x1));
    R14 = ((R14 + 0x14));
    goto L_C02EECC;
}
