/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int CourseSplineGet(int);
int CourseSplineNumGet(int);
int FUN_0c02e2ca(int);
int FUN_0c02eb86(int, int, float);
int FUN_0c03bea0(int, int, int);
int FUN_0c04e194(void);
int FUN_0c060160(void);
int FUN_0c0601f0(void);
int FUN_0c0603a2(void);
int FUN_0c061b14(void);
int FUN_0c061da8(int);
int FUN_0c072dd4(void);
float FUN_0c089de0(int);
int PutCourse_CheckPiece(int, int, int, int, float, float, float);
int Put_Build_Patch(void);
int SetMVShadow(void);
int SetSEvolume(void);
int extRand(void);
int findSplineSection(int, int, int);
int getAreaFromPos(int, int);
int getNearLineIndex(int, int, int, int);
int getPieceWindow(int, int, int);
int menuPutSprites(int, int, int, int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlProjectScreen3D(int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int putString(int, int, float, float, float);
int FUN_0c03d80a(int a4, int a5);
int psgEnterState5(int a4, int a5);
int psgEnterState6(int a4, int a5);
int Exec_Fog(void);
int PutCourse(void);

int FUN_0c03d80a(int a4, int a5)
{
    int t0;
    int t3;
    float u5;
    float u6;
    int t10;
    int t11;
    int t12;
    int t28;
    int t35;
    int t29;
    int t30;
    int t31;
    int t33;
    int stk[12] = {0};

    t0 = *(int *)0xC2A1ADC;
    t3 = 0xC28A4ED;
    u5 = 290.0f;
    u6 = (float)(t0 + 0x1DE);
    if (a5 == 4) {
        t3 = 0xC28A4EC;
        u5 = 256.0f;
        u6 = (float)(0x1DE - t0);
    }
    t10 = *(signed char *)((t3 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (unsigned char)t10;
    if (a4 != 0) {
        t11 = FUN_0c03bea0(0x0, ((int)stk + 4), 0x9);
        if (t11 == 1) {
            t12 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t3 + 0x0)) = t12;
            SetSEvolume();
            FUN_0c072dd4();
            FUN_0c02e2ca(0x7F);
        }
    }
    putString(0x28, 0xC0A2058, (u6 + -82.0f), (u5 + -7.0f), 1.0f);
    t28 = putString(0x20, 0xC0A205C, (u6 + 82.0f), (u5 + -7.0f), 1.0f);
    t35 = t28;
    if ((int)0x8 > 0) {
        t29 = 0x0;
        for (;;) {
            t30 = *(int *)(((int)stk + 4));
            t31 = 0xC0A0868;
            if ((int)t29 < (int)t30) {
                t31 = 0xC0A0858;
            }
            t33 = menuPutSprites(t31, 0xC2A1A84, (int)((float)(((((t29 - 3) << 2) + (t29 - 3)) << 2) - 10) + u6), (int)u5);
            t29 = (t29 + 0x1);
            if ((int)t29 >= (int)0x8) {
                break;
            }
        }
        t35 = t33;
    }
    return t35;
}

int psgEnterState5(int a4, int a5)
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
    int t12;
    int t13;
    int t14;
    int t21;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t43;
    int t44;
    int t45;
    int t46;
    int t36;
    int stk[20] = {0};

    t0 = *(int *)0xC0D5EF4;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x8)) = t0;
    t1 = *(int *)0xC0D5EF0;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x4)) = t1;
    t2 = *(int *)0xC0D5EEC;
    *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = t2;
    t3 = *(int *)0xC0D5F00;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x8)) = t3;
    t4 = *(int *)0xC0D5EFC;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x4)) = t4;
    t5 = *(int *)0xC0D5EF8;
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = t5;
    t6 = *(int *)0xC0D5F0C;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = t6;
    t7 = *(int *)0xC0D5F08;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = t7;
    t8 = *(int *)0xC0D5F04;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t8;
    t9 = *(int *)0xC0D5F18;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x8)) = t9;
    t10 = *(int *)0xC0D5F14;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x4)) = t10;
    t11 = *(int *)0xC0D5F10;
    *(unsigned int *)(((((int)stk + 4) + 0xC) + 0x0)) = t11;
    t12 = *(int *)0xC0D5F24;
    *(unsigned int *)((((int)stk + 4) + 0x8)) = t12;
    t13 = *(int *)0xC0D5F20;
    *(unsigned int *)((((int)stk + 4) + 0x4)) = t13;
    t14 = *(int *)0xC0D5F1C;
    *(unsigned int *)((((int)stk + 4) + 0x0)) = t14;
    if (a5 != 0) {
        if (a5 != 1) {
            t21 = a5;
            if (a5 != 2) {
            } else {
                t15 = extRand();
                t16 = (int)((unsigned int)t15 % (unsigned int)0x3);
                t17 = *(int *)((((t16 << 2) + ((int)stk + 4)) + 0x0));
                *(unsigned int *)((a4 + 0x34)) = t17;
                *(float *)((a4 + 0x38)) = 0.0f;
                t18 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t18 & 0x7F);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 0.0f;
                t19 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t19 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                t20 = FUN_0c061b14();
                t21 = t20;
            }
            t36 = t21;
        } else {
            t28 = extRand();
            t29 = (int)((unsigned int)t28 % (unsigned int)0x3);
            t30 = *(int *)((((t29 << 2) + (((int)stk + 4) + 0x30)) + 0x0));
            *(unsigned int *)((a4 + 0x34)) = t30;
            *(float *)((a4 + 0x38)) = 0.0f;
            t31 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t31 & 0x7F);
            *(float *)((a4 + 0x108)) = 0.0f;
            *(float *)((a4 + 0x10C)) = 0.0f;
            t32 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t32 & 0xF9);
            t33 = *(int *)((((((int)stk + 4) + 0x24) + (t29 << 2)) + 0x0));
            *(unsigned int *)(((0x124 + a4) + 0x0)) = t33;
            t34 = *(int *)((((t29 << 2) + (((int)stk + 4) + 0x18)) + 0x0));
            *(unsigned int *)((a4 + 0x128)) = t34;
            t35 = FUN_0c061b14();
            t36 = t35;
        }
        t46 = t36;
    } else {
        *(unsigned int *)((a4 + 0x34)) = 0xC945094;
        *(float *)((a4 + 0x38)) = 0.0f;
        t43 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t43 & 0x7F);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 0.0f;
        t44 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t44 & 0xF9);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
        t45 = FUN_0c061b14();
        t46 = t45;
    }
    return t46;
}

int psgEnterState6(int a4, int a5)
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
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t20;
    int t21;
    int t22;
    float t24;
    int t25;
    int t26;
    float t31;
    int t32;
    int t33;
    int t34;
    float u38;
    int t39;
    int t40;
    int t41;
    int t42;
    float u45;
    int t54;
    int t55;
    int t56;
    int t57;
    int stk[27] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = *(int *)0xC0D5F34;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0xC)) = t0;
    t1 = *(int *)0xC0D5F30;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x8)) = t1;
    t2 = *(int *)0xC0D5F2C;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x4)) = t2;
    t3 = *(int *)0xC0D5F28;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x0)) = t3;
    t4 = *(int *)0xC0D5F44;
    *(unsigned int *)(((((int)stk + 4) + 0x38) + 0xC)) = t4;
    t5 = *(int *)0xC0D5F40;
    *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x8)) = t5;
    t6 = *(int *)0xC0D5F3C;
    *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x4)) = t6;
    t7 = *(int *)0xC0D5F38;
    *(unsigned int *)(((((int)stk + 4) + 0x38) + 0x0)) = t7;
    t8 = *(int *)0xC0D5F54;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0xC)) = t8;
    t9 = *(int *)0xC0D5F50;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x8)) = t9;
    t10 = *(int *)0xC0D5F4C;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x4)) = t10;
    t11 = *(int *)0xC0D5F48;
    *(unsigned int *)(((((int)stk + 4) + 0x28) + 0x0)) = t11;
    t12 = *(int *)0xC0D5F58;
    *(unsigned int *)(((int)stk + 40)) = t12;
    t13 = *(int *)0xC0D5F5C;
    *(unsigned int *)(((int)stk + 36)) = t13;
    t14 = *(int *)0xC0D5F60;
    *(unsigned int *)(((int)stk + 32)) = t14;
    t15 = nlRand();
    t16 = *(int *)(((int)stk + 4));
    if (t16 != 0) {
        
        t57 = t16;
    } else {
        nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x4), 0xC179144);
        *(float *)(((int)stk + 24)) = 0.0f;
        nlUnitVector((((int)stk + 4) + 0x10));
        t20 = *(int *)0xC2AD1E8;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t20;
        t21 = *(int *)0xC2AD1E4;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t21;
        t22 = *(int *)0xC2AD1E0;
        *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t22;
        *(float *)(((int)stk + 12)) = 0.0f;
        nlUnitVector((((int)stk + 4) + 0x4));
        t24 = nlInnerProduct((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4));
        if (t24 > 0.0f) {
            t25 = *(signed char *)(((0x14B + a4) + 0x0));
            *(unsigned char *)(((0x14B + a4) + 0x0)) = (t25 & 0xFB);
        } else {
            t26 = *(signed char *)(((0x14B + a4) + 0x0));
            *(unsigned char *)(((0x14B + a4) + 0x0)) = (t26 | 0x4);
        }
        t31 = nlLength(0xC179144, (a4 + 0x4));
        if (75.0f > t31) {
            t32 = *(signed char *)((a4 + 0x14B));
            if ((t32 & 4) != 0) {
                t33 = *(int *)(((int)stk + 40));
                *(unsigned int *)((a4 + 0x110)) = t33;
            } else {
                t34 = *(int *)(((int)stk + 36));
                *(unsigned int *)((a4 + 0x110)) = t34;
            }
            u38 = *(float *)(((int)stk + 32));
            *(float *)((a4 + 0x114)) = u38;
        } else {
            t39 = (int)((unsigned int)t15 % (unsigned int)0x4);
            t40 = *(signed char *)((a4 + 0x14B));
            if ((t40 & 4) != 0) {
                t41 = *(int *)((((((int)stk + 4) + 0x48) + (t39 << 2)) + 0x0));
                *(unsigned int *)(((0x110 + a4) + 0x0)) = t41;
            } else {
                t42 = *(int *)((((((int)stk + 4) + 0x38) + (t39 << 2)) + 0x0));
                *(unsigned int *)(((0x110 + a4) + 0x0)) = t42;
            }
            u45 = *(float *)((((t39 << 2) + (((int)stk + 4) + 0x28)) + 0x0));
            *(float *)(((0x114 + a4) + 0x0)) = u45;
        }
        t54 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t54 | 0x80);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 10.0f;
        t55 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((t55 & 0xF9) | 0x4);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
        t56 = FUN_0c061da8(a4);
        t57 = t56;
    }
    return t57;
}

int Exec_Fog(void)
{
    int t0;
    int t1;
    int t180;
    int t2;
    float u3;
    float u4;
    int t6;
    float u7;
    float u8;
    int t9;
    float u10;
    int t11;
    int t24;
    float u25;
    float u26;
    int t27;
    float u28;
    float u29;
    int t30;
    float u31;
    float u32;
    int t74;
    int t34;
    float u35;
    float u36;
    int t66;
    int t37;
    float u38;
    float u39;
    int t59;
    int t40;
    float u41;
    float u42;
    int t53;
    int t43;
    float u44;
    int t45;
    float u46;
    int t47;
    float u48;
    float u49;
    float u50;
    float u51;
    int t52;
    int t83;
    float u84;
    float u85;
    int t115;
    int t86;
    float u87;
    float u88;
    int t108;
    int t89;
    float u90;
    float u91;
    int t102;
    int t92;
    float u93;
    int t94;
    float u95;
    int t96;
    float u97;
    float u98;
    float u99;
    float u100;
    int t101;
    int t132;
    float u133;
    float u134;
    int t164;
    int t135;
    float u136;
    float u137;
    int t157;
    int t138;
    float u139;
    float u140;
    int t151;
    int t141;
    float u142;
    int t143;
    float u144;
    int t145;
    float u146;
    float u147;
    float u148;
    float u149;
    int t150;
    int t191;
    int t192;
    int t172;
    int t123;

    t0 = FUN_0c0603a2();
    t1 = *(int *)0xC2A9F6C;
    t180 = t0;
    if ((int)t1 >= (int)0x2) {
    } else {
        t2 = *(int *)0xC2A9F64;
        u3 = *(float *)0xC2A9F70;
        u4 = *(float *)((((signed char)(((t2 << 2) + t2) << 2) + 0xC1322C0) + 0x0));
        if (!(100.0f > ((u4 - u3) < 0.0f ? -(u4 - u3) : (u4 - u3)))) {
            FUN_0c060160();
            t6 = *(int *)0xC2A9F64;
            u7 = *(float *)0xC2A9F70;
            u8 = *(float *)((((signed char)(((t6 << 2) + t6) << 2) + 0xC1322C0) + 0x0));
            if (100.0f > ((u8 - u7) < 0.0f ? -(u8 - u7) : (u8 - u7))) {
                t9 = *(int *)0xC2A9F64;
                u10 = *(float *)((((signed char)(((t9 << 2) + t9) << 2) + 0xC1322C0) + 0x0));
                *(float *)0xC2A9F70 = u10;
                *(float *)0xC0E4E48 = u10;
                t11 = *(int *)0xC2A9F6C;
                *(unsigned int *)0xC2A9F6C = (t11 + 0x1);
            }
        }
        t24 = *(int *)0xC2A9F64;
        u25 = *(float *)0xC2A9F74;
        u26 = *(float *)((((signed char)(((t24 << 2) + t24) << 2) + 0xC1322C0) + 0x4));
        if ((1.0f + 1.0f) > ((u26 - u25) < 0.0f ? -(u26 - u25) : (u26 - u25))) {
            t27 = *(signed char *)0xC2A9F64;
            u28 = *(float *)0xC2A9F78;
            u29 = *(float *)((((signed char)(((t27 << 2) + t27) << 2) + 0xC1322C0) + 0x8));
            if ((1.0f + 1.0f) > ((u29 - u28) < 0.0f ? -(u29 - u28) : (u29 - u28))) {
                t30 = *(int *)0xC2A9F64;
                u31 = *(float *)0xC2A9F7C;
                u32 = *(float *)((0xC + ((signed char)(((t30 << 2) + t30) << 2) + 0xC1322C0)));
                t74 = ((signed char)(((t30 << 2) + t30) << 2) + 0xC1322C0);
                if (!((1.0f + 1.0f) > ((u32 - u31) < 0.0f ? -(u32 - u31) : (u32 - u31)))) {
                    FUN_0c0601f0();
                    t34 = *(int *)0xC2A9F64;
                    u35 = *(float *)0xC2A9F74;
                    u36 = *(float *)((((signed char)(((t34 << 2) + t34) << 2) + 0xC1322C0) + 0x4));
                    t66 = 0x4;
                    if ((1.0f + 1.0f) > ((u36 - u35) < 0.0f ? -(u36 - u35) : (u36 - u35))) {
                        t37 = *(signed char *)0xC2A9F64;
                        u38 = *(float *)0xC2A9F78;
                        u39 = *(float *)((((signed char)(((t37 << 2) + t37) << 2) + 0xC1322C0) + 0x8));
                        t59 = 0x8;
                        if ((1.0f + 1.0f) > ((u39 - u38) < 0.0f ? -(u39 - u38) : (u39 - u38))) {
                            t40 = *(int *)0xC2A9F64;
                            u41 = *(float *)0xC2A9F7C;
                            u42 = *(float *)((0xC + ((signed char)(((t40 << 2) + t40) << 2) + 0xC1322C0)));
                            t53 = ((signed char)(((t40 << 2) + t40) << 2) + 0xC1322C0);
                            if ((1.0f + 1.0f) > ((u42 - u41) < 0.0f ? -(u42 - u41) : (u42 - u41))) {
                                t43 = *(int *)0xC2A9F64;
                                u44 = *(float *)((((signed char)(((t43 << 2) + t43) << 2) + 0xC1322C0) + 0x4));
                                *(float *)0xC2A9F74 = u44;
                                t45 = *(int *)0xC2A9F64;
                                u46 = *(float *)((((signed char)(((t45 << 2) + t45) << 2) + 0xC1322C0) + 0x8));
                                *(float *)0xC2A9F78 = u46;
                                t47 = *(int *)0xC2A9F64;
                                u48 = *(float *)((((signed char)(((t47 << 2) + t47) << 2) + 0xC1322C0) + 0xC));
                                *(float *)0xC2A9F7C = u48;
                                u49 = *(float *)0xC2A9F74;
                                u50 = *(float *)0xC2A9F78;
                                u51 = *(float *)0xC2A9F7C;
                                *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u49 << 16) | ((int)u50 << 8)) | (int)u51));
                                t52 = *(int *)0xC2A9F6C;
                                *(unsigned int *)0xC2A9F6C = (t52 + 0x1);
                                t53 = 0xC;
                            }
                            t59 = t53;
                        }
                        t66 = t59;
                    }
                    t74 = t66;
                }
                t123 = t74;
            } else {
                FUN_0c0601f0();
                t83 = *(int *)0xC2A9F64;
                u84 = *(float *)0xC2A9F74;
                u85 = *(float *)((((signed char)(((t83 << 2) + t83) << 2) + 0xC1322C0) + 0x4));
                t115 = 0x4;
                if ((1.0f + 1.0f) > ((u85 - u84) < 0.0f ? -(u85 - u84) : (u85 - u84))) {
                    t86 = *(signed char *)0xC2A9F64;
                    u87 = *(float *)0xC2A9F78;
                    u88 = *(float *)((((signed char)(((t86 << 2) + t86) << 2) + 0xC1322C0) + 0x8));
                    t108 = 0x8;
                    if ((1.0f + 1.0f) > ((u88 - u87) < 0.0f ? -(u88 - u87) : (u88 - u87))) {
                        t89 = *(int *)0xC2A9F64;
                        u90 = *(float *)0xC2A9F7C;
                        u91 = *(float *)((0xC + ((signed char)(((t89 << 2) + t89) << 2) + 0xC1322C0)));
                        t102 = ((signed char)(((t89 << 2) + t89) << 2) + 0xC1322C0);
                        if ((1.0f + 1.0f) > ((u91 - u90) < 0.0f ? -(u91 - u90) : (u91 - u90))) {
                            t92 = *(int *)0xC2A9F64;
                            u93 = *(float *)((((signed char)(((t92 << 2) + t92) << 2) + 0xC1322C0) + 0x4));
                            *(float *)0xC2A9F74 = u93;
                            t94 = *(int *)0xC2A9F64;
                            u95 = *(float *)((((signed char)(((t94 << 2) + t94) << 2) + 0xC1322C0) + 0x8));
                            *(float *)0xC2A9F78 = u95;
                            t96 = *(int *)0xC2A9F64;
                            u97 = *(float *)((((signed char)(((t96 << 2) + t96) << 2) + 0xC1322C0) + 0xC));
                            *(float *)0xC2A9F7C = u97;
                            u98 = *(float *)0xC2A9F74;
                            u99 = *(float *)0xC2A9F78;
                            u100 = *(float *)0xC2A9F7C;
                            *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u98 << 16) | ((int)u99 << 8)) | (int)u100));
                            t101 = *(int *)0xC2A9F6C;
                            *(unsigned int *)0xC2A9F6C = (t101 + 0x1);
                            t102 = 0xC;
                        }
                        t108 = t102;
                    }
                    t115 = t108;
                }
                t123 = t115;
            }
            t172 = t123;
        } else {
            FUN_0c0601f0();
            t132 = *(int *)0xC2A9F64;
            u133 = *(float *)0xC2A9F74;
            u134 = *(float *)((((signed char)(((t132 << 2) + t132) << 2) + 0xC1322C0) + 0x4));
            t164 = 0x4;
            if ((1.0f + 1.0f) > ((u134 - u133) < 0.0f ? -(u134 - u133) : (u134 - u133))) {
                t135 = *(signed char *)0xC2A9F64;
                u136 = *(float *)0xC2A9F78;
                u137 = *(float *)((((signed char)(((t135 << 2) + t135) << 2) + 0xC1322C0) + 0x8));
                t157 = 0x8;
                if ((1.0f + 1.0f) > ((u137 - u136) < 0.0f ? -(u137 - u136) : (u137 - u136))) {
                    t138 = *(int *)0xC2A9F64;
                    u139 = *(float *)0xC2A9F7C;
                    u140 = *(float *)((0xC + ((signed char)(((t138 << 2) + t138) << 2) + 0xC1322C0)));
                    t151 = ((signed char)(((t138 << 2) + t138) << 2) + 0xC1322C0);
                    if ((1.0f + 1.0f) > ((u140 - u139) < 0.0f ? -(u140 - u139) : (u140 - u139))) {
                        t141 = *(int *)0xC2A9F64;
                        u142 = *(float *)((((signed char)(((t141 << 2) + t141) << 2) + 0xC1322C0) + 0x4));
                        *(float *)0xC2A9F74 = u142;
                        t143 = *(int *)0xC2A9F64;
                        u144 = *(float *)((((signed char)(((t143 << 2) + t143) << 2) + 0xC1322C0) + 0x8));
                        *(float *)0xC2A9F78 = u144;
                        t145 = *(int *)0xC2A9F64;
                        u146 = *(float *)((((signed char)(((t145 << 2) + t145) << 2) + 0xC1322C0) + 0xC));
                        *(float *)0xC2A9F7C = u146;
                        u147 = *(float *)0xC2A9F74;
                        u148 = *(float *)0xC2A9F78;
                        u149 = *(float *)0xC2A9F7C;
                        *(unsigned int *)0xC0E4E40 = (0x0 | ((((int)u147 << 16) | ((int)u148 << 8)) | (int)u149));
                        t150 = *(int *)0xC2A9F6C;
                        *(unsigned int *)0xC2A9F6C = (t150 + 0x1);
                        t151 = 0xC;
                    }
                    t157 = t151;
                }
                t164 = t157;
            }
            t172 = t164;
        }
        t180 = t172;
    }
    t191 = *(int *)0xC2A9F64;
    t192 = *(int *)0xC2A9F68;
    if (t192 != t191) {
        *(unsigned int *)0xC2A9F68 = t191;
    }
    return t180;
}

int PutCourse(void)
{
    int t1;
    float u2;
    float t3;
    int t4;
    int t5;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    float u22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    float t33;
    int t34;
    float u35;
    int t36;
    int t37;
    float u38;
    int t39;
    int t55;
    int t56;
    float u59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    float t70;
    int t71;
    float u72;
    int t73;
    int t74;
    float u75;
    int t76;
    int t92;
    int t93;
    float u96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    float t107;
    int t108;
    float u109;
    int t110;
    int t111;
    float u112;
    int t113;
    int t129;
    int t130;
    float u133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    float t144;
    int t145;
    float u146;
    int t147;
    int t148;
    float u149;
    int t150;
    int t166;
    float u169;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t177;
    float t179;
    float u180;
    int t181;
    int t182;
    float u183;
    int t184;
    int t202;
    int t203;
    float u206;
    int t207;
    int t208;
    int t209;
    int t210;
    int t211;
    int t212;
    int t213;
    int t214;
    int t215;
    float t217;
    int t218;
    float u219;
    int t220;
    int t221;
    float u222;
    int t223;
    int t240;
    int t241;
    float u244;
    int t245;
    int t246;
    int t247;
    int t248;
    int t249;
    int t250;
    int t251;
    int t252;
    int t253;
    float t255;
    int t256;
    float u257;
    int t258;
    int t259;
    float u260;
    int t261;
    int t278;
    int t279;
    float u282;
    int t283;
    int t284;
    int t285;
    int t286;
    int t287;
    int t288;
    int t289;
    int t290;
    int t291;
    float t293;
    int t294;
    float u295;
    int t296;
    int t297;
    float u298;
    int t299;
    int t316;
    int t317;
    float u320;
    int t321;
    int t322;
    int t323;
    int t324;
    int t325;
    int t326;
    int t327;
    int t328;
    int t329;
    float t331;
    int t332;
    float u333;
    int t334;
    int t335;
    float u336;
    int t337;
    int t354;
    int t355;
    float u358;
    int t359;
    int t360;
    int t361;
    int t362;
    int t363;
    int t364;
    int t365;
    int t366;
    int t367;
    float t369;
    int t370;
    float u371;
    int t372;
    int t373;
    float u374;
    int t375;
    int t392;
    int t393;
    float u396;
    int t397;
    int t398;
    int t399;
    int t400;
    int t401;
    int t402;
    int t403;
    int t404;
    int t405;
    float t407;
    int t408;
    float u409;
    int t410;
    int t411;
    float u412;
    int t413;
    int t430;
    int t431;
    float u434;
    int t435;
    int t436;
    int t437;
    int t438;
    int t439;
    int t440;
    int t441;
    int t442;
    int t443;
    float t445;
    int t446;
    float u447;
    int t448;
    int t449;
    float u450;
    int t451;
    int t469;
    int t470;
    int t474;
    int t471;
    int t472;
    int t482;
    int t483;
    int t484;
    int t485;
    int t487;
    float u493;
    int t494;
    int t495;
    int t496;
    int t497;
    int t498;
    int t499;
    int t500;
    float u504;
    int t505;
    float t506;
    float t507;
    int t508;
    float u509;
    float u510;
    float u615;
    float u616;
    float u617;
    int t511;
    float u550;
    float u551;
    float u552;
    float u525;
    float u526;
    float u527;
    int t512;
    int t538;
    float u542;
    float u543;
    float u544;
    int t529;
    float u563;
    float u564;
    float u565;
    int t554;
    int t575;
    int t602;
    float u606;
    float u607;
    float u608;
    int t585;
    float u589;
    float u590;
    float u591;
    int t576;
    int t593;
    int t651;
    int t652;
    int t653;
    int t654;
    float u658;
    int t659;
    float t660;
    float t661;
    int t662;
    float u663;
    float u664;
    float u769;
    float u770;
    float u771;
    int t665;
    float u704;
    float u705;
    float u706;
    float u679;
    float u680;
    float u681;
    int t666;
    int t692;
    float u696;
    float u697;
    float u698;
    int t683;
    float u717;
    float u718;
    float u719;
    int t708;
    int t729;
    int t756;
    float u760;
    float u761;
    float u762;
    int t739;
    float u743;
    float u744;
    float u745;
    int t730;
    int t747;
    int t805;
    int t806;
    int t807;
    int t809;
    float u815;
    int t816;
    int t817;
    int t818;
    int t819;
    int t820;
    int t821;
    int t822;
    float u826;
    int t827;
    float t828;
    float t829;
    int t830;
    float u831;
    float u832;
    float u937;
    float u938;
    float u939;
    int t833;
    float u872;
    float u873;
    float u874;
    float u847;
    float u848;
    float u849;
    int t834;
    int t860;
    float u864;
    float u865;
    float u866;
    int t851;
    float u885;
    float u886;
    float u887;
    int t876;
    int t897;
    int t924;
    float u928;
    float u929;
    float u930;
    int t907;
    float u911;
    float u912;
    float u913;
    int t898;
    int t915;
    int t973;
    int t974;
    int t975;
    int t976;
    float u980;
    int t981;
    float t982;
    float t983;
    int t984;
    float u985;
    float u986;
    float u1091;
    float u1092;
    float u1093;
    int t987;
    float u1026;
    float u1027;
    float u1028;
    float u1001;
    float u1002;
    float u1003;
    int t988;
    int t1014;
    float u1018;
    float u1019;
    float u1020;
    int t1005;
    float u1039;
    float u1040;
    float u1041;
    int t1030;
    int t1051;
    int t1078;
    float u1082;
    float u1083;
    float u1084;
    int t1061;
    float u1065;
    float u1066;
    float u1067;
    int t1052;
    int t1069;
    int t1142;
    int t1143;
    int t1144;
    int t1146;
    float u1152;
    int t1153;
    int t1154;
    int t1155;
    int t1156;
    int t1157;
    int t1158;
    int t1159;
    float u1163;
    int t1164;
    float t1165;
    float t1166;
    int t1167;
    float u1168;
    float u1169;
    float u1274;
    float u1275;
    float u1276;
    int t1170;
    float u1209;
    float u1210;
    float u1211;
    float u1184;
    float u1185;
    float u1186;
    int t1171;
    int t1197;
    float u1201;
    float u1202;
    float u1203;
    int t1188;
    float u1222;
    float u1223;
    float u1224;
    int t1213;
    int t1234;
    int t1261;
    float u1265;
    float u1266;
    float u1267;
    int t1244;
    float u1248;
    float u1249;
    float u1250;
    int t1235;
    int t1252;
    int t1310;
    int t1311;
    int t1312;
    int t1313;
    float u1317;
    int t1318;
    float t1319;
    float t1320;
    int t1321;
    float u1322;
    float u1323;
    float u1428;
    float u1429;
    float u1430;
    int t1324;
    float u1363;
    float u1364;
    float u1365;
    float u1338;
    float u1339;
    float u1340;
    int t1325;
    int t1351;
    float u1355;
    float u1356;
    float u1357;
    int t1342;
    float u1376;
    float u1377;
    float u1378;
    int t1367;
    int t1388;
    int t1415;
    float u1419;
    float u1420;
    float u1421;
    int t1398;
    float u1402;
    float u1403;
    float u1404;
    int t1389;
    int t1406;
    int t1656;
    int t1643;
    int t1479;
    int t1480;
    int t1481;
    int t1482;
    int t1483;
    float u1484;
    float u1485;
    float u1486;
    float u1487;
    int t1488;
    int t1489;
    int t1490;
    int t1491;
    int t1492;
    int t1493;
    int t1494;
    int t1495;
    float t1496;
    int t1497;
    int t1498;
    int t1509;
    int t1510;
    int t1511;
    float t1512;
    int t1513;
    int t1514;
    int t1525;
    int t1526;
    int t1527;
    float t1528;
    int t1529;
    int t1530;
    int t1541;
    int t1542;
    int t1543;
    float t1544;
    int t1545;
    int t1546;
    int t1557;
    int t1558;
    int t1559;
    float t1560;
    int t1561;
    int t1562;
    int t1583;
    int t1584;
    int t1585;
    float t1586;
    int t1587;
    int t1588;
    int t1599;
    int t1600;
    int t1601;
    float t1602;
    int t1603;
    int t1604;
    int t1625;
    int t1626;
    int t1627;
    float t1628;
    int t1629;
    int t1630;
    int t1641;
    int t1642;
    int t1670;
    int t1671;
    int t1672;
    int t1673;
    int t1674;
    float u1675;
    float u1676;
    float u1677;
    float u1678;
    int t1679;
    int t1680;
    int t1681;
    int t1682;
    int t1683;
    int t1684;
    int t1685;
    int t1686;
    float t1687;
    int t1688;
    int t1689;
    int t1700;
    int t1701;
    int t1702;
    float t1703;
    int t1704;
    int t1705;
    int t1716;
    int t1717;
    int t1718;
    float t1719;
    int t1720;
    int t1721;
    int t1732;
    int t1733;
    int t1734;
    float t1735;
    int t1736;
    int t1737;
    int t1748;
    int t1749;
    int t1750;
    float t1751;
    int t1752;
    int t1753;
    int t1774;
    int t1775;
    int t1776;
    float t1777;
    int t1778;
    int t1779;
    int t1790;
    int t1791;
    int t1792;
    float t1793;
    int t1794;
    int t1795;
    int t1816;
    int t1817;
    int t1818;
    float t1819;
    int t1820;
    int t1821;
    int t1832;
    int t1833;
    int t2024;
    int t2011;
    int t1847;
    int t1848;
    int t1849;
    int t1850;
    int t1851;
    float u1852;
    float u1853;
    float u1854;
    float u1855;
    int t1856;
    int t1857;
    int t1858;
    int t1859;
    int t1860;
    int t1861;
    int t1862;
    int t1863;
    float t1864;
    int t1865;
    int t1866;
    int t1877;
    int t1878;
    int t1879;
    float t1880;
    int t1881;
    int t1882;
    int t1893;
    int t1894;
    int t1895;
    float t1896;
    int t1897;
    int t1898;
    int t1909;
    int t1910;
    int t1911;
    float t1912;
    int t1913;
    int t1914;
    int t1925;
    int t1926;
    int t1927;
    float t1928;
    int t1929;
    int t1930;
    int t1951;
    int t1952;
    int t1953;
    float t1954;
    int t1955;
    int t1956;
    int t1967;
    int t1968;
    int t1969;
    float t1970;
    int t1971;
    int t1972;
    int t1993;
    int t1994;
    int t1995;
    float t1996;
    int t1997;
    int t1998;
    int t2009;
    int t2010;
    int t2052;
    int t2053;
    int t2054;
    int t2055;
    int t2056;
    float u2057;
    float u2058;
    float u2059;
    float u2060;
    int t2061;
    int t2062;
    int t2063;
    int t2064;
    int t2065;
    int t2066;
    int t2067;
    int t2068;
    float t2069;
    int t2070;
    int t2071;
    int t2082;
    int t2083;
    int t2084;
    float t2085;
    int t2086;
    int t2087;
    int t2098;
    int t2099;
    int t2100;
    float t2101;
    int t2102;
    int t2103;
    int t2114;
    int t2115;
    int t2116;
    float t2117;
    int t2118;
    int t2119;
    int t2130;
    int t2131;
    int t2132;
    float t2133;
    int t2134;
    int t2135;
    int t2156;
    int t2157;
    int t2158;
    float t2159;
    int t2160;
    int t2161;
    int t2172;
    int t2173;
    int t2174;
    float t2175;
    int t2176;
    int t2177;
    int t2198;
    int t2199;
    int t2200;
    float t2201;
    int t2202;
    int t2203;
    int t2214;
    int t2215;
    int t2406;
    int t2393;
    int t2229;
    int t2230;
    int t2231;
    int t2232;
    int t2233;
    float u2234;
    float u2235;
    float u2236;
    float u2237;
    int t2238;
    int t2239;
    int t2240;
    int t2241;
    int t2242;
    int t2243;
    int t2244;
    int t2245;
    float t2246;
    int t2247;
    int t2248;
    int t2259;
    int t2260;
    int t2261;
    float t2262;
    int t2263;
    int t2264;
    int t2275;
    int t2276;
    int t2277;
    float t2278;
    int t2279;
    int t2280;
    int t2291;
    int t2292;
    int t2293;
    float t2294;
    int t2295;
    int t2296;
    int t2307;
    int t2308;
    int t2309;
    float t2310;
    int t2311;
    int t2312;
    int t2333;
    int t2334;
    int t2335;
    float t2336;
    int t2337;
    int t2338;
    int t2349;
    int t2350;
    int t2351;
    float t2352;
    int t2353;
    int t2354;
    int t2375;
    int t2376;
    int t2377;
    float t2378;
    int t2379;
    int t2380;
    int t2391;
    int t2392;
    int t2420;
    int t2421;
    int t2422;
    int t2423;
    int t2424;
    float u2425;
    float u2426;
    float u2427;
    float u2428;
    int t2429;
    int t2430;
    int t2431;
    int t2432;
    int t2433;
    int t2434;
    int t2435;
    int t2436;
    float t2437;
    int t2438;
    int t2439;
    int t2450;
    int t2451;
    int t2452;
    float t2453;
    int t2454;
    int t2455;
    int t2466;
    int t2467;
    int t2468;
    float t2469;
    int t2470;
    int t2471;
    int t2482;
    int t2483;
    int t2484;
    float t2485;
    int t2486;
    int t2487;
    int t2498;
    int t2499;
    int t2500;
    float t2501;
    int t2502;
    int t2503;
    int t2524;
    int t2525;
    int t2526;
    float t2527;
    int t2528;
    int t2529;
    int t2540;
    int t2541;
    int t2542;
    float t2543;
    int t2544;
    int t2545;
    int t2566;
    int t2567;
    int t2568;
    float t2569;
    int t2570;
    int t2571;
    int t2582;
    int t2583;
    int t2774;
    int t2761;
    int t2597;
    int t2598;
    int t2599;
    int t2600;
    int t2601;
    float u2602;
    float u2603;
    float u2604;
    float u2605;
    int t2606;
    int t2607;
    int t2608;
    int t2609;
    int t2610;
    int t2611;
    int t2612;
    int t2613;
    float t2614;
    int t2615;
    int t2616;
    int t2627;
    int t2628;
    int t2629;
    float t2630;
    int t2631;
    int t2632;
    int t2643;
    int t2644;
    int t2645;
    float t2646;
    int t2647;
    int t2648;
    int t2659;
    int t2660;
    int t2661;
    float t2662;
    int t2663;
    int t2664;
    int t2675;
    int t2676;
    int t2677;
    float t2678;
    int t2679;
    int t2680;
    int t2701;
    int t2702;
    int t2703;
    float t2704;
    int t2705;
    int t2706;
    int t2717;
    int t2718;
    int t2719;
    float t2720;
    int t2721;
    int t2722;
    int t2743;
    int t2744;
    int t2745;
    float t2746;
    int t2747;
    int t2748;
    int t2759;
    int t2760;
    int t2816;
    int t2817;
    int t2818;
    int t2819;
    int t2820;
    float u2821;
    float u2822;
    float u2823;
    float u2824;
    int t2825;
    int t2826;
    int t2827;
    int t2828;
    int t2829;
    int t2830;
    int t2831;
    int t2832;
    float t2833;
    int t2834;
    int t2835;
    int t2846;
    int t2847;
    int t2848;
    float t2849;
    int t2850;
    int t2851;
    int t2862;
    int t2863;
    int t2864;
    float t2865;
    int t2866;
    int t2867;
    int t2878;
    int t2879;
    int t2880;
    float t2881;
    int t2882;
    int t2883;
    int t2894;
    int t2895;
    int t2896;
    float t2897;
    int t2898;
    int t2899;
    int t2920;
    int t2921;
    int t2922;
    float t2923;
    int t2924;
    int t2925;
    int t2936;
    int t2937;
    int t2938;
    float t2939;
    int t2940;
    int t2941;
    int t2962;
    int t2963;
    int t2964;
    float t2965;
    int t2966;
    int t2967;
    int t2978;
    int t2979;
    int t2993;
    int t2994;
    int t2995;
    int t2996;
    int t2997;
    float u2998;
    float u2999;
    float u3000;
    float u3001;
    int t3002;
    int t3003;
    int t3004;
    int t3005;
    int t3006;
    int t3007;
    int t3008;
    int t3009;
    float t3010;
    int t3011;
    int t3012;
    int t3023;
    int t3024;
    int t3025;
    float t3026;
    int t3027;
    int t3028;
    int t3039;
    int t3040;
    int t3041;
    float t3042;
    int t3043;
    int t3044;
    int t3055;
    int t3056;
    int t3057;
    float t3058;
    int t3059;
    int t3060;
    int t3071;
    int t3072;
    int t3073;
    float t3074;
    int t3075;
    int t3076;
    int t3097;
    int t3098;
    int t3099;
    float t3100;
    int t3101;
    int t3102;
    int t3113;
    int t3114;
    int t3115;
    float t3116;
    int t3117;
    int t3118;
    int t3139;
    int t3140;
    int t3141;
    float t3142;
    int t3143;
    int t3144;
    int t3155;
    int t3156;
    int t3170;
    int t3171;
    int t3172;
    int t3173;
    int t3174;
    float u3175;
    float u3176;
    float u3177;
    float u3178;
    int t3179;
    int t3180;
    int t3181;
    int t3182;
    int t3183;
    int t3184;
    int t3185;
    int t3186;
    float t3187;
    int t3188;
    int t3189;
    int t3200;
    int t3201;
    int t3202;
    float t3203;
    int t3204;
    int t3205;
    int t3216;
    int t3217;
    int t3218;
    float t3219;
    int t3220;
    int t3221;
    int t3232;
    int t3233;
    int t3234;
    float t3235;
    int t3236;
    int t3237;
    int t3248;
    int t3249;
    int t3250;
    float t3251;
    int t3252;
    int t3253;
    int t3274;
    int t3275;
    int t3276;
    float t3277;
    int t3278;
    int t3279;
    int t3290;
    int t3291;
    int t3292;
    float t3293;
    int t3294;
    int t3295;
    int t3316;
    int t3317;
    int t3318;
    float t3319;
    int t3320;
    int t3321;
    int t3332;
    int t3333;
    int t3347;
    int t3348;
    int t3349;
    int t3350;
    int t3351;
    float u3352;
    float u3353;
    float u3354;
    float u3355;
    int t3356;
    int t3357;
    int t3358;
    int t3359;
    int t3360;
    int t3361;
    int t3362;
    int t3363;
    float t3364;
    int t3365;
    int t3366;
    int t3377;
    int t3378;
    int t3379;
    float t3380;
    int t3381;
    int t3382;
    int t3393;
    int t3394;
    int t3395;
    float t3396;
    int t3397;
    int t3398;
    int t3409;
    int t3410;
    int t3411;
    float t3412;
    int t3413;
    int t3414;
    int t3425;
    int t3426;
    int t3427;
    float t3428;
    int t3429;
    int t3430;
    int t3451;
    int t3452;
    int t3453;
    float t3454;
    int t3455;
    int t3456;
    int t3467;
    int t3468;
    int t3469;
    float t3470;
    int t3471;
    int t3472;
    int t3493;
    int t3494;
    int t3495;
    float t3496;
    int t3497;
    int t3498;
    int t3509;
    int t3510;
    int t3524;
    int t3525;
    int t3526;
    int t3527;
    int t3528;
    float u3529;
    float u3530;
    float u3531;
    float u3532;
    int t3533;
    int t3534;
    int t3535;
    int t3536;
    int t3537;
    int t3538;
    int t3539;
    int t3540;
    float t3541;
    int t3542;
    int t3543;
    int t3554;
    int t3555;
    int t3556;
    float t3557;
    int t3558;
    int t3559;
    int t3570;
    int t3571;
    int t3572;
    float t3573;
    int t3574;
    int t3575;
    int t3586;
    int t3587;
    int t3588;
    float t3589;
    int t3590;
    int t3591;
    int t3602;
    int t3603;
    int t3604;
    float t3605;
    int t3606;
    int t3607;
    int t3628;
    int t3629;
    int t3630;
    float t3631;
    int t3632;
    int t3633;
    int t3644;
    int t3645;
    int t3646;
    float t3647;
    int t3648;
    int t3649;
    int t3670;
    int t3671;
    int t3672;
    float t3673;
    int t3674;
    int t3675;
    int t3686;
    int t3687;
    int t3722;
    int t3711;
    int t3701;
    int t3702;
    int t3703;
    int t3704;
    float u3705;
    int t3706;
    int t3709;
    float t3707;
    int t3708;
    float u3733;
    float t3734;
    int t3735;
    int t3736;
    int t3738;
    int t5463;
    int t3741;
    int t3742;
    int t3743;
    float u3744;
    int t3745;
    int t3746;
    int t3747;
    int t3748;
    int t3749;
    int t3750;
    int t3751;
    int t3752;
    int t3753;
    float t3754;
    int t3755;
    int t3756;
    float u3757;
    int t3758;
    int t3759;
    int t3760;
    int t3761;
    float u3762;
    float u3763;
    int t3764;
    int t3765;
    int t3766;
    int t3767;
    int t3770;
    int t3771;
    int t3772;
    float u3773;
    int t3774;
    int t3775;
    int t3776;
    int t3777;
    int t3778;
    int t3779;
    int t3780;
    int t3781;
    int t3782;
    float t3783;
    int t3784;
    int t3785;
    float u3786;
    int t3787;
    int t3788;
    int t3789;
    int t3790;
    float u3791;
    float u3792;
    int t3793;
    int t3794;
    int t3795;
    int t3796;
    int t3799;
    float u3800;
    int t3801;
    int t3802;
    int t3803;
    int t3804;
    int t3805;
    int t3806;
    int t3807;
    int t3808;
    int t3809;
    int t3810;
    float t3812;
    int t3813;
    int t3814;
    float u3815;
    int t3816;
    int t3817;
    int t3818;
    int t3819;
    float u3820;
    float u3821;
    int t3822;
    int t3823;
    int t3824;
    int t3830;
    int t3831;
    float u3842;
    int t3843;
    int t3844;
    int t3845;
    int t3846;
    int t3847;
    int t3848;
    int t3849;
    int t3850;
    int t3851;
    int t3852;
    float t3854;
    int t3855;
    int t3856;
    float u3857;
    int t3858;
    int t3859;
    int t3860;
    int t3861;
    float u3862;
    float u3863;
    int t3864;
    int t3865;
    int t3866;
    int t3872;
    int t3873;
    int t3879;
    int t3880;
    float u3881;
    int t3882;
    int t3883;
    int t3884;
    int t3885;
    int t3886;
    int t3887;
    int t3888;
    int t3889;
    int t3890;
    float t3891;
    int t3892;
    int t3893;
    float u3894;
    int t3895;
    int t3896;
    int t3897;
    int t3898;
    float u3899;
    float u3900;
    int t3901;
    int t3902;
    int t3903;
    int t3904;
    int t3907;
    int t3908;
    int t3909;
    float u3910;
    int t3911;
    int t3912;
    int t3913;
    int t3914;
    int t3915;
    int t3916;
    int t3917;
    int t3918;
    int t3919;
    float t3920;
    int t3921;
    int t3922;
    float u3923;
    int t3924;
    int t3925;
    int t3926;
    int t3927;
    float u3928;
    float u3929;
    int t3930;
    int t3931;
    int t3932;
    int t3933;
    int t3936;
    float u3937;
    int t3938;
    int t3939;
    int t3940;
    int t3941;
    int t3942;
    int t3943;
    int t3944;
    int t3945;
    int t3946;
    int t3947;
    float t3949;
    int t3950;
    int t3951;
    float u3952;
    int t3953;
    int t3954;
    int t3955;
    int t3956;
    float u3957;
    float u3958;
    int t3959;
    int t3960;
    int t3961;
    int t3967;
    int t3968;
    float u3985;
    int t3986;
    int t3987;
    int t3988;
    int t3989;
    int t3990;
    int t3991;
    int t3992;
    int t3993;
    int t3994;
    int t3995;
    float t3997;
    int t3998;
    int t3999;
    float u4000;
    int t4001;
    int t4002;
    int t4003;
    int t4004;
    float u4005;
    float u4006;
    int t4007;
    int t4008;
    int t4009;
    int t4015;
    int t4016;
    int t4022;
    int t4023;
    float u4024;
    int t4025;
    int t4026;
    int t4027;
    int t4028;
    int t4029;
    int t4030;
    int t4031;
    int t4032;
    int t4033;
    float t4034;
    int t4035;
    int t4036;
    float u4037;
    int t4038;
    int t4039;
    int t4040;
    int t4041;
    float u4042;
    float u4043;
    int t4044;
    int t4045;
    int t4046;
    int t4047;
    int t4050;
    int t4051;
    int t4052;
    float u4053;
    int t4054;
    int t4055;
    int t4056;
    int t4057;
    int t4058;
    int t4059;
    int t4060;
    int t4061;
    int t4062;
    float t4063;
    int t4064;
    int t4065;
    float u4066;
    int t4067;
    int t4068;
    int t4069;
    int t4070;
    float u4071;
    float u4072;
    int t4073;
    int t4074;
    int t4075;
    int t4076;
    int t4079;
    float u4080;
    int t4081;
    int t4082;
    int t4083;
    int t4084;
    int t4085;
    int t4086;
    int t4087;
    int t4088;
    int t4089;
    int t4090;
    float t4092;
    int t4093;
    int t4094;
    float u4095;
    int t4096;
    int t4097;
    int t4098;
    int t4099;
    float u4100;
    float u4101;
    int t4102;
    int t4103;
    int t4104;
    int t4110;
    int t4111;
    float u4122;
    int t4123;
    int t4124;
    int t4125;
    int t4126;
    int t4127;
    int t4128;
    int t4129;
    int t4130;
    int t4131;
    int t4132;
    float t4134;
    int t4135;
    int t4136;
    float u4137;
    int t4138;
    int t4139;
    int t4140;
    int t4141;
    float u4142;
    float u4143;
    int t4144;
    int t4145;
    int t4146;
    int t4152;
    int t4153;
    int t4159;
    int t4160;
    float u4161;
    int t4162;
    int t4163;
    int t4164;
    int t4165;
    int t4166;
    int t4167;
    int t4168;
    int t4169;
    int t4170;
    float t4171;
    int t4172;
    int t4173;
    float u4174;
    int t4175;
    int t4176;
    int t4177;
    int t4178;
    float u4179;
    float u4180;
    int t4181;
    int t4182;
    int t4183;
    int t4184;
    int t4187;
    int t4188;
    int t4189;
    float u4190;
    int t4191;
    int t4192;
    int t4193;
    int t4194;
    int t4195;
    int t4196;
    int t4197;
    int t4198;
    int t4199;
    float t4200;
    int t4201;
    int t4202;
    float u4203;
    int t4204;
    int t4205;
    int t4206;
    int t4207;
    float u4208;
    float u4209;
    int t4210;
    int t4211;
    int t4212;
    int t4213;
    int t4216;
    float u4217;
    int t4218;
    int t4219;
    int t4220;
    int t4221;
    int t4222;
    int t4223;
    int t4224;
    int t4225;
    int t4226;
    int t4227;
    float t4229;
    int t4230;
    int t4231;
    float u4232;
    int t4233;
    int t4234;
    int t4235;
    int t4236;
    float u4237;
    float u4238;
    int t4239;
    int t4240;
    int t4241;
    int t4247;
    int t4248;
    float u4271;
    int t4272;
    int t4273;
    int t4274;
    int t4275;
    int t4276;
    int t4277;
    int t4278;
    int t4279;
    int t4280;
    int t4281;
    float t4283;
    int t4284;
    int t4285;
    float u4286;
    int t4287;
    int t4288;
    int t4289;
    int t4290;
    float u4291;
    float u4292;
    int t4293;
    int t4294;
    int t4295;
    int t4301;
    int t4302;
    int t4309;
    int t4310;
    int t4311;
    int t4312;
    float u4313;
    int t4314;
    int t4315;
    int t4316;
    int t4317;
    int t4318;
    int t4319;
    int t4320;
    int t4321;
    int t4322;
    float t4323;
    int t4324;
    int t4325;
    float u4326;
    int t4327;
    int t4328;
    int t4329;
    float u4330;
    int t4331;
    float u4332;
    int t4333;
    int t4334;
    int t4337;
    int t4338;
    int t4339;
    int t4340;
    float u4341;
    int t4342;
    int t4343;
    int t4344;
    int t4345;
    int t4346;
    int t4347;
    int t4348;
    int t4349;
    int t4350;
    float t4351;
    int t4352;
    int t4353;
    float u4354;
    int t4355;
    int t4356;
    int t4357;
    float u4358;
    int t4359;
    float u4360;
    int t4361;
    int t4362;
    int t4365;
    float u4366;
    int t4367;
    int t4368;
    int t4369;
    int t4370;
    int t4371;
    int t4372;
    int t4373;
    int t4374;
    int t4375;
    int t4376;
    float t4378;
    int t4379;
    int t4380;
    float u4381;
    int t4382;
    int t4383;
    int t4384;
    int t4385;
    float u4386;
    float u4387;
    int t4388;
    int t4389;
    int t4390;
    int t4396;
    int t4397;
    float u4410;
    int t4411;
    int t4412;
    int t4413;
    int t4414;
    int t4415;
    int t4416;
    int t4417;
    int t4418;
    int t4419;
    int t4420;
    float t4422;
    int t4423;
    int t4424;
    float u4425;
    int t4426;
    int t4427;
    int t4428;
    int t4429;
    float u4430;
    float u4431;
    int t4432;
    int t4433;
    int t4434;
    int t4440;
    int t4441;
    int t4448;
    int t4449;
    int t4450;
    float u4451;
    int t4452;
    int t4453;
    int t4454;
    int t4455;
    int t4456;
    int t4457;
    int t4458;
    int t4459;
    int t4460;
    float t4461;
    int t4462;
    int t4463;
    float u4464;
    int t4465;
    int t4466;
    int t4467;
    float u4468;
    int t4469;
    float u4470;
    int t4471;
    int t4472;
    int t4475;
    int t4476;
    int t4477;
    int t4478;
    float u4479;
    int t4480;
    int t4481;
    int t4482;
    int t4483;
    int t4484;
    int t4485;
    int t4486;
    int t4487;
    int t4488;
    float t4489;
    int t4490;
    int t4491;
    float u4492;
    int t4493;
    int t4494;
    int t4495;
    float u4496;
    int t4497;
    float u4498;
    int t4499;
    int t4500;
    int t4503;
    float u4504;
    int t4505;
    int t4506;
    int t4507;
    int t4508;
    int t4509;
    int t4510;
    int t4511;
    int t4512;
    int t4513;
    int t4514;
    float t4516;
    int t4517;
    int t4518;
    float u4519;
    int t4520;
    int t4521;
    int t4522;
    int t4523;
    float u4524;
    float u4525;
    int t4526;
    int t4527;
    int t4528;
    int t4534;
    int t4535;
    float u4555;
    int t4556;
    int t4557;
    int t4558;
    int t4559;
    int t4560;
    int t4561;
    int t4562;
    int t4563;
    int t4564;
    int t4565;
    float t4567;
    int t4568;
    int t4569;
    float u4570;
    int t4571;
    int t4572;
    int t4573;
    int t4574;
    float u4575;
    float u4576;
    int t4577;
    int t4578;
    int t4579;
    int t4585;
    int t4586;
    int t4593;
    int t4594;
    int t4595;
    float u4596;
    int t4597;
    int t4598;
    int t4599;
    int t4600;
    int t4601;
    int t4602;
    int t4603;
    int t4604;
    int t4605;
    float t4606;
    int t4607;
    int t4608;
    float u4609;
    int t4610;
    int t4611;
    int t4612;
    float u4613;
    int t4614;
    float u4615;
    int t4616;
    int t4617;
    int t4620;
    int t4621;
    int t4622;
    int t4623;
    float u4624;
    int t4625;
    int t4626;
    int t4627;
    int t4628;
    int t4629;
    int t4630;
    int t4631;
    int t4632;
    int t4633;
    float t4634;
    int t4635;
    int t4636;
    float u4637;
    int t4638;
    int t4639;
    int t4640;
    float u4641;
    int t4642;
    float u4643;
    int t4644;
    int t4645;
    int t4648;
    float u4649;
    int t4650;
    int t4651;
    int t4652;
    int t4653;
    int t4654;
    int t4655;
    int t4656;
    int t4657;
    int t4658;
    int t4659;
    float t4661;
    int t4662;
    int t4663;
    float u4664;
    int t4665;
    int t4666;
    int t4667;
    int t4668;
    float u4669;
    float u4670;
    int t4671;
    int t4672;
    int t4673;
    int t4679;
    int t4680;
    float u4693;
    int t4694;
    int t4695;
    int t4696;
    int t4697;
    int t4698;
    int t4699;
    int t4700;
    int t4701;
    int t4702;
    int t4703;
    float t4705;
    int t4706;
    int t4707;
    float u4708;
    int t4709;
    int t4710;
    int t4711;
    int t4712;
    float u4713;
    float u4714;
    int t4715;
    int t4716;
    int t4717;
    int t4723;
    int t4724;
    int t4731;
    int t4732;
    int t4733;
    float u4734;
    int t4735;
    int t4736;
    int t4737;
    int t4738;
    int t4739;
    int t4740;
    int t4741;
    int t4742;
    int t4743;
    float t4744;
    int t4745;
    int t4746;
    float u4747;
    int t4748;
    int t4749;
    int t4750;
    float u4751;
    int t4752;
    float u4753;
    int t4754;
    int t4755;
    int t4758;
    int t4759;
    int t4760;
    int t4761;
    float u4762;
    int t4763;
    int t4764;
    int t4765;
    int t4766;
    int t4767;
    int t4768;
    int t4769;
    int t4770;
    int t4771;
    float t4772;
    int t4773;
    int t4774;
    float u4775;
    int t4776;
    int t4777;
    int t4778;
    float u4779;
    int t4780;
    float u4781;
    int t4782;
    int t4783;
    int t4786;
    float u4787;
    int t4788;
    int t4789;
    int t4790;
    int t4791;
    int t4792;
    int t4793;
    int t4794;
    int t4795;
    int t4796;
    int t4797;
    float t4799;
    int t4800;
    int t4801;
    float u4802;
    int t4803;
    int t4804;
    int t4805;
    int t4806;
    float u4807;
    float u4808;
    int t4809;
    int t4810;
    int t4811;
    int t4817;
    int t4818;
    float u4845;
    int t4846;
    int t4847;
    int t4848;
    int t4849;
    int t4850;
    int t4851;
    int t4852;
    int t4853;
    int t4854;
    int t4855;
    float t4857;
    int t4858;
    int t4859;
    float u4860;
    int t4861;
    int t4862;
    int t4863;
    int t4864;
    float u4865;
    float u4866;
    int t4867;
    int t4868;
    int t4869;
    int t4875;
    int t4876;
    int t4883;
    int t4884;
    int t4885;
    float u4886;
    int t4887;
    int t4888;
    int t4889;
    int t4890;
    int t4891;
    int t4892;
    int t4893;
    int t4894;
    int t4895;
    float t4896;
    int t4897;
    int t4898;
    float u4899;
    int t4900;
    int t4901;
    int t4902;
    float u4903;
    int t4904;
    float u4905;
    int t4906;
    int t4907;
    int t4910;
    int t4911;
    int t4912;
    int t4913;
    float u4914;
    int t4915;
    int t4916;
    int t4917;
    int t4918;
    int t4919;
    int t4920;
    int t4921;
    int t4922;
    int t4923;
    float t4924;
    int t4925;
    int t4926;
    float u4927;
    int t4928;
    int t4929;
    int t4930;
    float u4931;
    int t4932;
    float u4933;
    int t4934;
    int t4935;
    int t4938;
    float u4939;
    int t4940;
    int t4941;
    int t4942;
    int t4943;
    int t4944;
    int t4945;
    int t4946;
    int t4947;
    int t4948;
    int t4949;
    float t4951;
    int t4952;
    int t4953;
    float u4954;
    int t4955;
    int t4956;
    int t4957;
    int t4958;
    float u4959;
    float u4960;
    int t4961;
    int t4962;
    int t4963;
    int t4969;
    int t4970;
    float u4983;
    int t4984;
    int t4985;
    int t4986;
    int t4987;
    int t4988;
    int t4989;
    int t4990;
    int t4991;
    int t4992;
    int t4993;
    float t4995;
    int t4996;
    int t4997;
    float u4998;
    int t4999;
    int t5000;
    int t5001;
    int t5002;
    float u5003;
    float u5004;
    int t5005;
    int t5006;
    int t5007;
    int t5013;
    int t5014;
    int t5021;
    int t5022;
    int t5023;
    float u5024;
    int t5025;
    int t5026;
    int t5027;
    int t5028;
    int t5029;
    int t5030;
    int t5031;
    int t5032;
    int t5033;
    float t5034;
    int t5035;
    int t5036;
    float u5037;
    int t5038;
    int t5039;
    int t5040;
    float u5041;
    int t5042;
    float u5043;
    int t5044;
    int t5045;
    int t5048;
    int t5049;
    int t5050;
    int t5051;
    float u5052;
    int t5053;
    int t5054;
    int t5055;
    int t5056;
    int t5057;
    int t5058;
    int t5059;
    int t5060;
    int t5061;
    float t5062;
    int t5063;
    int t5064;
    float u5065;
    int t5066;
    int t5067;
    int t5068;
    float u5069;
    int t5070;
    float u5071;
    int t5072;
    int t5073;
    int t5076;
    float u5077;
    int t5078;
    int t5079;
    int t5080;
    int t5081;
    int t5082;
    int t5083;
    int t5084;
    int t5085;
    int t5086;
    int t5087;
    float t5089;
    int t5090;
    int t5091;
    float u5092;
    int t5093;
    int t5094;
    int t5095;
    int t5096;
    float u5097;
    float u5098;
    int t5099;
    int t5100;
    int t5101;
    int t5107;
    int t5108;
    float u5128;
    int t5129;
    int t5130;
    int t5131;
    int t5132;
    int t5133;
    int t5134;
    int t5135;
    int t5136;
    int t5137;
    int t5138;
    float t5140;
    int t5141;
    int t5142;
    float u5143;
    int t5144;
    int t5145;
    int t5146;
    int t5147;
    float u5148;
    float u5149;
    int t5150;
    int t5151;
    int t5152;
    int t5158;
    int t5159;
    int t5166;
    int t5167;
    int t5168;
    float u5169;
    int t5170;
    int t5171;
    int t5172;
    int t5173;
    int t5174;
    int t5175;
    int t5176;
    int t5177;
    int t5178;
    float t5179;
    int t5180;
    int t5181;
    float u5182;
    int t5183;
    int t5184;
    int t5185;
    float u5186;
    int t5187;
    float u5188;
    int t5189;
    int t5190;
    int t5193;
    int t5194;
    int t5195;
    int t5196;
    float u5197;
    int t5198;
    int t5199;
    int t5200;
    int t5201;
    int t5202;
    int t5203;
    int t5204;
    int t5205;
    int t5206;
    float t5207;
    int t5208;
    int t5209;
    float u5210;
    int t5211;
    int t5212;
    int t5213;
    float u5214;
    int t5215;
    float u5216;
    int t5217;
    int t5218;
    int t5221;
    float u5222;
    int t5223;
    int t5224;
    int t5225;
    int t5226;
    int t5227;
    int t5228;
    int t5229;
    int t5230;
    int t5231;
    int t5232;
    float t5234;
    int t5235;
    int t5236;
    float u5237;
    int t5238;
    int t5239;
    int t5240;
    int t5241;
    float u5242;
    float u5243;
    int t5244;
    int t5245;
    int t5246;
    int t5252;
    int t5253;
    float u5266;
    int t5267;
    int t5268;
    int t5269;
    int t5270;
    int t5271;
    int t5272;
    int t5273;
    int t5274;
    int t5275;
    int t5276;
    float t5278;
    int t5279;
    int t5280;
    float u5281;
    int t5282;
    int t5283;
    int t5284;
    int t5285;
    float u5286;
    float u5287;
    int t5288;
    int t5289;
    int t5290;
    int t5296;
    int t5297;
    int t5304;
    int t5305;
    int t5306;
    float u5307;
    int t5308;
    int t5309;
    int t5310;
    int t5311;
    int t5312;
    int t5313;
    int t5314;
    int t5315;
    int t5316;
    float t5317;
    int t5318;
    int t5319;
    float u5320;
    int t5321;
    int t5322;
    int t5323;
    float u5324;
    int t5325;
    float u5326;
    int t5327;
    int t5328;
    int t5331;
    int t5332;
    int t5333;
    int t5334;
    float u5335;
    int t5336;
    int t5337;
    int t5338;
    int t5339;
    int t5340;
    int t5341;
    int t5342;
    int t5343;
    int t5344;
    float t5345;
    int t5346;
    int t5347;
    float u5348;
    int t5349;
    int t5350;
    int t5351;
    float u5352;
    int t5353;
    float u5354;
    int t5355;
    int t5356;
    int t5359;
    float u5360;
    int t5361;
    int t5362;
    int t5363;
    int t5364;
    int t5365;
    int t5366;
    int t5367;
    int t5368;
    int t5369;
    int t5370;
    float t5372;
    int t5373;
    int t5374;
    float u5375;
    int t5376;
    int t5377;
    int t5378;
    int t5379;
    float u5380;
    float u5381;
    int t5382;
    int t5383;
    int t5384;
    int t5390;
    int t5391;
    float u5425;
    int t5426;
    int t5427;
    int t5428;
    int t5429;
    int t5430;
    int t5431;
    int t5432;
    int t5433;
    int t5434;
    int t5435;
    float t5437;
    int t5438;
    int t5439;
    float u5440;
    int t5441;
    int t5442;
    int t5443;
    int t5444;
    float u5445;
    float u5446;
    int t5447;
    int t5448;
    int t5449;
    int t5455;
    int t5456;
    int t459;
    int t421;
    int t383;
    int t345;
    int t307;
    int t269;
    int t231;
    int t193;
    int t158;
    int t121;
    int t84;
    int t47;
    float u20;
    float u21;
    float u45;
    float u57;
    float u58;
    float u82;
    float u94;
    float u95;
    float u119;
    float u131;
    float u132;
    float u156;
    float u167;
    float u168;
    float u190;
    float u191;
    float u204;
    float u205;
    float u229;
    float u242;
    float u243;
    float u267;
    float u280;
    float u281;
    float u305;
    float u318;
    float u319;
    float u343;
    float u356;
    float u357;
    float u381;
    float u394;
    float u395;
    float u419;
    float u432;
    float u433;
    float u457;
    float u1472;
    float u1473;
    float u1477;
    float u1478;
    float u1135;
    float u1136;
    float u1140;
    float u1141;
    int t486;
    float u488;
    float u489;
    float u490;
    float u491;
    float u492;
    int t793;
    int t794;
    float u800;
    float u801;
    float u802;
    float u803;
    int t639;
    int t640;
    float u646;
    float u647;
    float u648;
    float u649;
    int t502;
    int t628;
    int t629;
    float u634;
    float u635;
    float u636;
    float u637;
    int t619;
    float u624;
    float u625;
    float u626;
    int t610;
    int t567;
    float u571;
    float u572;
    float u573;
    int t546;
    int t521;
    int t513;
    float u517;
    float u518;
    float u519;
    int t530;
    float u534;
    float u535;
    float u536;
    float u557;
    float u558;
    float u559;
    int t594;
    float u598;
    float u599;
    float u600;
    int t577;
    float u581;
    float u582;
    float u583;
    int t656;
    int t782;
    int t783;
    float u788;
    float u789;
    float u790;
    float u791;
    int t773;
    float u778;
    float u779;
    float u780;
    int t764;
    int t721;
    float u725;
    float u726;
    float u727;
    int t700;
    int t675;
    int t667;
    float u671;
    float u672;
    float u673;
    int t684;
    float u688;
    float u689;
    float u690;
    float u711;
    float u712;
    float u713;
    int t748;
    float u752;
    float u753;
    float u754;
    int t731;
    float u735;
    float u736;
    float u737;
    int t808;
    float u810;
    float u811;
    float u812;
    float u813;
    float u814;
    int t1115;
    int t1116;
    float u1122;
    float u1123;
    float u1124;
    float u1125;
    int t961;
    int t962;
    float u968;
    float u969;
    float u970;
    float u971;
    int t824;
    int t950;
    int t951;
    float u956;
    float u957;
    float u958;
    float u959;
    int t941;
    float u946;
    float u947;
    float u948;
    int t932;
    int t889;
    float u893;
    float u894;
    float u895;
    int t868;
    int t843;
    int t835;
    float u839;
    float u840;
    float u841;
    int t852;
    float u856;
    float u857;
    float u858;
    float u879;
    float u880;
    float u881;
    int t916;
    float u920;
    float u921;
    float u922;
    int t899;
    float u903;
    float u904;
    float u905;
    int t978;
    int t1104;
    int t1105;
    float u1110;
    float u1111;
    float u1112;
    float u1113;
    int t1095;
    float u1100;
    float u1101;
    float u1102;
    int t1086;
    int t1043;
    float u1047;
    float u1048;
    float u1049;
    int t1022;
    int t997;
    int t989;
    float u993;
    float u994;
    float u995;
    int t1006;
    float u1010;
    float u1011;
    float u1012;
    float u1033;
    float u1034;
    float u1035;
    int t1070;
    float u1074;
    float u1075;
    float u1076;
    int t1053;
    float u1057;
    float u1058;
    float u1059;
    int t1145;
    float u1147;
    float u1148;
    float u1149;
    float u1150;
    float u1151;
    int t1452;
    int t1453;
    float u1459;
    float u1460;
    float u1461;
    float u1462;
    int t1298;
    int t1299;
    float u1305;
    float u1306;
    float u1307;
    float u1308;
    int t1161;
    int t1287;
    int t1288;
    float u1293;
    float u1294;
    float u1295;
    float u1296;
    int t1278;
    float u1283;
    float u1284;
    float u1285;
    int t1269;
    int t1226;
    float u1230;
    float u1231;
    float u1232;
    int t1205;
    int t1180;
    int t1172;
    float u1176;
    float u1177;
    float u1178;
    int t1189;
    float u1193;
    float u1194;
    float u1195;
    float u1216;
    float u1217;
    float u1218;
    int t1253;
    float u1257;
    float u1258;
    float u1259;
    int t1236;
    float u1240;
    float u1241;
    float u1242;
    int t1315;
    int t1441;
    int t1442;
    float u1447;
    float u1448;
    float u1449;
    float u1450;
    int t1432;
    float u1437;
    float u1438;
    float u1439;
    int t1423;
    int t1380;
    float u1384;
    float u1385;
    float u1386;
    int t1359;
    int t1334;
    int t1326;
    float u1330;
    float u1331;
    float u1332;
    int t1343;
    float u1347;
    float u1348;
    float u1349;
    float u1370;
    float u1371;
    float u1372;
    int t1407;
    float u1411;
    float u1412;
    float u1413;
    int t1390;
    float u1394;
    float u1395;
    float u1396;
    int t3688;
    int t3511;
    int t3334;
    int t3157;
    int t2980;
    int t2802;
    int t2216;
    int t2038;
    int t1834;
    int t1634;
    int t1635;
    float u1636;
    float u1637;
    float u1638;
    float u1639;
    int t1618;
    int t1619;
    float u1620;
    float u1621;
    float u1622;
    float u1623;
    int t1576;
    int t1577;
    float u1578;
    float u1579;
    float u1580;
    float u1581;
    int t1534;
    int t1535;
    float u1536;
    float u1537;
    float u1538;
    float u1539;
    int t1518;
    int t1519;
    float u1520;
    float u1521;
    float u1522;
    float u1523;
    int t1502;
    int t1503;
    float u1504;
    float u1505;
    float u1506;
    float u1507;
    int t1566;
    int t1567;
    float u1568;
    float u1569;
    float u1570;
    float u1571;
    int t1550;
    int t1551;
    float u1552;
    float u1553;
    float u1554;
    float u1555;
    int t1608;
    int t1609;
    float u1610;
    float u1611;
    float u1612;
    float u1613;
    int t1592;
    int t1593;
    float u1594;
    float u1595;
    float u1596;
    float u1597;
    int t1825;
    int t1826;
    float u1827;
    float u1828;
    float u1829;
    float u1830;
    int t1809;
    int t1810;
    float u1811;
    float u1812;
    float u1813;
    float u1814;
    int t1767;
    int t1768;
    float u1769;
    float u1770;
    float u1771;
    float u1772;
    int t1725;
    int t1726;
    float u1727;
    float u1728;
    float u1729;
    float u1730;
    int t1709;
    int t1710;
    float u1711;
    float u1712;
    float u1713;
    float u1714;
    int t1693;
    int t1694;
    float u1695;
    float u1696;
    float u1697;
    float u1698;
    int t1757;
    int t1758;
    float u1759;
    float u1760;
    float u1761;
    float u1762;
    int t1741;
    int t1742;
    float u1743;
    float u1744;
    float u1745;
    float u1746;
    int t1799;
    int t1800;
    float u1801;
    float u1802;
    float u1803;
    float u1804;
    int t1783;
    int t1784;
    float u1785;
    float u1786;
    float u1787;
    float u1788;
    int t2002;
    int t2003;
    float u2004;
    float u2005;
    float u2006;
    float u2007;
    int t1986;
    int t1987;
    float u1988;
    float u1989;
    float u1990;
    float u1991;
    int t1944;
    int t1945;
    float u1946;
    float u1947;
    float u1948;
    float u1949;
    int t1902;
    int t1903;
    float u1904;
    float u1905;
    float u1906;
    float u1907;
    int t1886;
    int t1887;
    float u1888;
    float u1889;
    float u1890;
    float u1891;
    int t1870;
    int t1871;
    float u1872;
    float u1873;
    float u1874;
    float u1875;
    int t1934;
    int t1935;
    float u1936;
    float u1937;
    float u1938;
    float u1939;
    int t1918;
    int t1919;
    float u1920;
    float u1921;
    float u1922;
    float u1923;
    int t1976;
    int t1977;
    float u1978;
    float u1979;
    float u1980;
    float u1981;
    int t1960;
    int t1961;
    float u1962;
    float u1963;
    float u1964;
    float u1965;
    int t2207;
    int t2208;
    float u2209;
    float u2210;
    float u2211;
    float u2212;
    int t2191;
    int t2192;
    float u2193;
    float u2194;
    float u2195;
    float u2196;
    int t2149;
    int t2150;
    float u2151;
    float u2152;
    float u2153;
    float u2154;
    int t2107;
    int t2108;
    float u2109;
    float u2110;
    float u2111;
    float u2112;
    int t2091;
    int t2092;
    float u2093;
    float u2094;
    float u2095;
    float u2096;
    int t2075;
    int t2076;
    float u2077;
    float u2078;
    float u2079;
    float u2080;
    int t2139;
    int t2140;
    float u2141;
    float u2142;
    float u2143;
    float u2144;
    int t2123;
    int t2124;
    float u2125;
    float u2126;
    float u2127;
    float u2128;
    int t2181;
    int t2182;
    float u2183;
    float u2184;
    float u2185;
    float u2186;
    int t2165;
    int t2166;
    float u2167;
    float u2168;
    float u2169;
    float u2170;
    int t2788;
    int t2584;
    int t2384;
    int t2385;
    float u2386;
    float u2387;
    float u2388;
    float u2389;
    int t2368;
    int t2369;
    float u2370;
    float u2371;
    float u2372;
    float u2373;
    int t2326;
    int t2327;
    float u2328;
    float u2329;
    float u2330;
    float u2331;
    int t2284;
    int t2285;
    float u2286;
    float u2287;
    float u2288;
    float u2289;
    int t2268;
    int t2269;
    float u2270;
    float u2271;
    float u2272;
    float u2273;
    int t2252;
    int t2253;
    float u2254;
    float u2255;
    float u2256;
    float u2257;
    int t2316;
    int t2317;
    float u2318;
    float u2319;
    float u2320;
    float u2321;
    int t2300;
    int t2301;
    float u2302;
    float u2303;
    float u2304;
    float u2305;
    int t2358;
    int t2359;
    float u2360;
    float u2361;
    float u2362;
    float u2363;
    int t2342;
    int t2343;
    float u2344;
    float u2345;
    float u2346;
    float u2347;
    int t2575;
    int t2576;
    float u2577;
    float u2578;
    float u2579;
    float u2580;
    int t2559;
    int t2560;
    float u2561;
    float u2562;
    float u2563;
    float u2564;
    int t2517;
    int t2518;
    float u2519;
    float u2520;
    float u2521;
    float u2522;
    int t2475;
    int t2476;
    float u2477;
    float u2478;
    float u2479;
    float u2480;
    int t2459;
    int t2460;
    float u2461;
    float u2462;
    float u2463;
    float u2464;
    int t2443;
    int t2444;
    float u2445;
    float u2446;
    float u2447;
    float u2448;
    int t2507;
    int t2508;
    float u2509;
    float u2510;
    float u2511;
    float u2512;
    int t2491;
    int t2492;
    float u2493;
    float u2494;
    float u2495;
    float u2496;
    int t2549;
    int t2550;
    float u2551;
    float u2552;
    float u2553;
    float u2554;
    int t2533;
    int t2534;
    float u2535;
    float u2536;
    float u2537;
    float u2538;
    int t2752;
    int t2753;
    float u2754;
    float u2755;
    float u2756;
    float u2757;
    int t2736;
    int t2737;
    float u2738;
    float u2739;
    float u2740;
    float u2741;
    int t2694;
    int t2695;
    float u2696;
    float u2697;
    float u2698;
    float u2699;
    int t2652;
    int t2653;
    float u2654;
    float u2655;
    float u2656;
    float u2657;
    int t2636;
    int t2637;
    float u2638;
    float u2639;
    float u2640;
    float u2641;
    int t2620;
    int t2621;
    float u2622;
    float u2623;
    float u2624;
    float u2625;
    int t2684;
    int t2685;
    float u2686;
    float u2687;
    float u2688;
    float u2689;
    int t2668;
    int t2669;
    float u2670;
    float u2671;
    float u2672;
    float u2673;
    int t2726;
    int t2727;
    float u2728;
    float u2729;
    float u2730;
    float u2731;
    int t2710;
    int t2711;
    float u2712;
    float u2713;
    float u2714;
    float u2715;
    int t2971;
    int t2972;
    float u2973;
    float u2974;
    float u2975;
    float u2976;
    int t2955;
    int t2956;
    float u2957;
    float u2958;
    float u2959;
    float u2960;
    int t2913;
    int t2914;
    float u2915;
    float u2916;
    float u2917;
    float u2918;
    int t2871;
    int t2872;
    float u2873;
    float u2874;
    float u2875;
    float u2876;
    int t2855;
    int t2856;
    float u2857;
    float u2858;
    float u2859;
    float u2860;
    int t2839;
    int t2840;
    float u2841;
    float u2842;
    float u2843;
    float u2844;
    int t2903;
    int t2904;
    float u2905;
    float u2906;
    float u2907;
    float u2908;
    int t2887;
    int t2888;
    float u2889;
    float u2890;
    float u2891;
    float u2892;
    int t2945;
    int t2946;
    float u2947;
    float u2948;
    float u2949;
    float u2950;
    int t2929;
    int t2930;
    float u2931;
    float u2932;
    float u2933;
    float u2934;
    int t3148;
    int t3149;
    float u3150;
    float u3151;
    float u3152;
    float u3153;
    int t3132;
    int t3133;
    float u3134;
    float u3135;
    float u3136;
    float u3137;
    int t3090;
    int t3091;
    float u3092;
    float u3093;
    float u3094;
    float u3095;
    int t3048;
    int t3049;
    float u3050;
    float u3051;
    float u3052;
    float u3053;
    int t3032;
    int t3033;
    float u3034;
    float u3035;
    float u3036;
    float u3037;
    int t3016;
    int t3017;
    float u3018;
    float u3019;
    float u3020;
    float u3021;
    int t3080;
    int t3081;
    float u3082;
    float u3083;
    float u3084;
    float u3085;
    int t3064;
    int t3065;
    float u3066;
    float u3067;
    float u3068;
    float u3069;
    int t3122;
    int t3123;
    float u3124;
    float u3125;
    float u3126;
    float u3127;
    int t3106;
    int t3107;
    float u3108;
    float u3109;
    float u3110;
    float u3111;
    int t3325;
    int t3326;
    float u3327;
    float u3328;
    float u3329;
    float u3330;
    int t3309;
    int t3310;
    float u3311;
    float u3312;
    float u3313;
    float u3314;
    int t3267;
    int t3268;
    float u3269;
    float u3270;
    float u3271;
    float u3272;
    int t3225;
    int t3226;
    float u3227;
    float u3228;
    float u3229;
    float u3230;
    int t3209;
    int t3210;
    float u3211;
    float u3212;
    float u3213;
    float u3214;
    int t3193;
    int t3194;
    float u3195;
    float u3196;
    float u3197;
    float u3198;
    int t3257;
    int t3258;
    float u3259;
    float u3260;
    float u3261;
    float u3262;
    int t3241;
    int t3242;
    float u3243;
    float u3244;
    float u3245;
    float u3246;
    int t3299;
    int t3300;
    float u3301;
    float u3302;
    float u3303;
    float u3304;
    int t3283;
    int t3284;
    float u3285;
    float u3286;
    float u3287;
    float u3288;
    int t3502;
    int t3503;
    float u3504;
    float u3505;
    float u3506;
    float u3507;
    int t3486;
    int t3487;
    float u3488;
    float u3489;
    float u3490;
    float u3491;
    int t3444;
    int t3445;
    float u3446;
    float u3447;
    float u3448;
    float u3449;
    int t3402;
    int t3403;
    float u3404;
    float u3405;
    float u3406;
    float u3407;
    int t3386;
    int t3387;
    float u3388;
    float u3389;
    float u3390;
    float u3391;
    int t3370;
    int t3371;
    float u3372;
    float u3373;
    float u3374;
    float u3375;
    int t3434;
    int t3435;
    float u3436;
    float u3437;
    float u3438;
    float u3439;
    int t3418;
    int t3419;
    float u3420;
    float u3421;
    float u3422;
    float u3423;
    int t3476;
    int t3477;
    float u3478;
    float u3479;
    float u3480;
    float u3481;
    int t3460;
    int t3461;
    float u3462;
    float u3463;
    float u3464;
    float u3465;
    int t3679;
    int t3680;
    float u3681;
    float u3682;
    float u3683;
    float u3684;
    int t3663;
    int t3664;
    float u3665;
    float u3666;
    float u3667;
    float u3668;
    int t3621;
    int t3622;
    float u3623;
    float u3624;
    float u3625;
    float u3626;
    int t3579;
    int t3580;
    float u3581;
    float u3582;
    float u3583;
    float u3584;
    int t3563;
    int t3564;
    float u3565;
    float u3566;
    float u3567;
    float u3568;
    int t3547;
    int t3548;
    float u3549;
    float u3550;
    float u3551;
    float u3552;
    int t3611;
    int t3612;
    float u3613;
    float u3614;
    float u3615;
    float u3616;
    int t3595;
    int t3596;
    float u3597;
    float u3598;
    float u3599;
    float u3600;
    int t3653;
    int t3654;
    float u3655;
    float u3656;
    float u3657;
    float u3658;
    int t3637;
    int t3638;
    float u3639;
    float u3640;
    float u3641;
    float u3642;
    float u4307;
    float u4269;
    float u4021;
    float u3983;
    float u3878;
    float u3841;
    float u3836;
    float u3978;
    float u3973;
    float u4263;
    float u4158;
    float u4121;
    float u4116;
    float u4258;
    float u4253;
    int t5457;
    int t5418;
    int t4877;
    int t4838;
    int t4587;
    int t4548;
    int t4442;
    int t4404;
    int t4398;
    int t4542;
    int t4536;
    int t4831;
    int t4725;
    int t4687;
    int t4681;
    int t4825;
    int t4819;
    int t5411;
    int t5160;
    int t5121;
    int t5015;
    int t4977;
    int t4971;
    int t5115;
    int t5109;
    int t5404;
    int t5298;
    int t5260;
    int t5254;
    int t5398;
    int t5392;
    int stk[28] = {0};

    FUN_0c04e194();
    t1 = *(int *)0xC1EE20C;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            *(float *)(((int)stk + 80)) = 3000.0f;
            u2 = *(float *)0xC1798A4;
            t3 = FUN_0c089de0((((int)(((u2 * 32768.0f) / 360.0f) + 0.5f) & 0xFFFF) + 0x1));
            *(float *)0xC2A6AC8 = (1.0f / t3);
            t4 = CourseSplineGet(0x0);
            t5 = CourseSplineNumGet(0x0);
            getNearLineIndex(0x0, t5, t4, 0xC2A6EC0);
            SetMVShadow();
            t8 = *(int *)0xC1EE214;
            if (t8 != 0) {
                if (t8 != 2) {
                    if (t8 != 3) {
                        if (t8 != 4) {
                            if (t8 != 5) {
                                if (t8 != 7) {
                                    if (t8 != 8) {
                                        if (t8 != 9) {
                                            if (t8 != 10) {
                                                if (t8 != 11) {
                                                    if (t8 != 12) {
                                                        if (t8 != 14) {
                                                            t9 = *(int *)0xC118670;
                                                            t10 = *(int *)0xC1EE800;
                                                            t11 = *(int *)(((((((t9 << 2) + t9) << 2) + t10) + 0x4) + 0x8));
                                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t11;
                                                            t12 = *(int *)(((((((t9 << 2) + t9) << 2) + t10) + 0x4) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t12;
                                                            t13 = *(int *)(((((((t9 << 2) + t9) << 2) + t10) + 0x4) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t13;
                                                            nlProjectScreen3D((((int)stk + 44) + 0x10));
                                                            t15 = *(int *)0xC1EE214;
                                                            t16 = *(int *)(((t15 << 2) + 0xC0C835C));
                                                            t17 = FUN_0c02eb86(t16, 0x0, 1000000.0f);
                                                            t47 = t17;
                                                        } else {
                                                            t18 = *(int *)(((t8 << 2) + 0xC0C835C));
                                                            t19 = t18;
                                                            u22 = 3000.0f;
                                                            for (;;) {
                                                                t23 = *(int *)0xC118670;
                                                                t24 = *(int *)0xC1EE214;
                                                                t25 = *(int *)((((t23 << 2) + 0xC1244E0) + 0x0));
                                                                t26 = *(int *)(((t24 << 2) + t25));
                                                                t27 = *(int *)(((t24 << 2) + 0xC0C835C));
                                                                if ((int)t19 >= (int)(t26 + t27)) {
                                                                    break;
                                                                }
                                                                *(unsigned int *)(((int)stk + 44)) = (((t19 << 2) + t19) << 2);
                                                                t28 = *(int *)0xC1EE800;
                                                                t29 = *(int *)(((((((t19 << 2) + t19) << 2) + t28) + 0x4) + 0x8));
                                                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t29;
                                                                t30 = *(int *)(((((((t19 << 2) + t19) << 2) + t28) + 0x4) + 0x4));
                                                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t30;
                                                                t31 = *(int *)(((((((t19 << 2) + t19) << 2) + t28) + 0x4) + 0x0));
                                                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t31;
                                                                nlProjectScreen3D((((int)stk + 44) + 0x10));
                                                                t33 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                                                t34 = *(int *)0xC1EE214;
                                                                u20 = t33;
                                                                u22 = t33;
                                                                u35 = *(float *)(((t34 << 2) + 0xC118630));
                                                                u21 = u35;
                                                                if (u21 > u22) {
                                                                    t36 = *(int *)(((int)stk + 44));
                                                                    t37 = *(int *)0xC1EE800;
                                                                    u38 = *(float *)(((t36 + t37) + 0x0));
                                                                    t39 = CheckClipping(u38);
                                                                    if (t39 != 0) {
                                                                        FUN_0c02eb86(t19, 0x0, u22);
                                                                    }
                                                                } else {
                                                                    u45 = u20;
                                                                }
                                                                u20 = u45;
                                                                t19 = (t19 + 0x1);
                                                            }
                                                            t47 = 0xC0C835C;
                                                        }
                                                        t84 = t47;
                                                    } else {
                                                        t55 = *(int *)(((t8 << 2) + 0xC0C835C));
                                                        t56 = t55;
                                                        u59 = 3000.0f;
                                                        for (;;) {
                                                            t60 = *(int *)0xC118670;
                                                            t61 = *(int *)0xC1EE214;
                                                            t62 = *(int *)((((t60 << 2) + 0xC1244E0) + 0x0));
                                                            t63 = *(int *)(((t61 << 2) + t62));
                                                            t64 = *(int *)(((t61 << 2) + 0xC0C835C));
                                                            if ((int)t56 >= (int)(t63 + t64)) {
                                                                break;
                                                            }
                                                            *(unsigned int *)(((int)stk + 44)) = (((t56 << 2) + t56) << 2);
                                                            t65 = *(int *)0xC1EE800;
                                                            t66 = *(int *)(((((((t56 << 2) + t56) << 2) + t65) + 0x4) + 0x8));
                                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t66;
                                                            t67 = *(int *)(((((((t56 << 2) + t56) << 2) + t65) + 0x4) + 0x4));
                                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t67;
                                                            t68 = *(int *)(((((((t56 << 2) + t56) << 2) + t65) + 0x4) + 0x0));
                                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t68;
                                                            nlProjectScreen3D((((int)stk + 44) + 0x10));
                                                            t70 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                                            u57 = t70;
                                                            t71 = *(int *)0xC1EE214;
                                                            u59 = u57;
                                                            u72 = *(float *)(((t71 << 2) + 0xC118630));
                                                            u58 = u72;
                                                            if (u58 > u59) {
                                                                t73 = *(int *)(((int)stk + 44));
                                                                t74 = *(int *)0xC1EE800;
                                                                u75 = *(float *)(((t73 + t74) + 0x0));
                                                                t76 = CheckClipping(u75);
                                                                if (t76 != 0) {
                                                                    FUN_0c02eb86(t56, 0x0, u59);
                                                                }
                                                            } else {
                                                                u82 = u57;
                                                            }
                                                            u57 = u82;
                                                            t56 = (t56 + 0x1);
                                                        }
                                                        t84 = 0xC0C835C;
                                                    }
                                                    t121 = t84;
                                                } else {
                                                    t92 = *(int *)(((t8 << 2) + 0xC0C835C));
                                                    t93 = t92;
                                                    u96 = 3000.0f;
                                                    for (;;) {
                                                        t97 = *(int *)0xC118670;
                                                        t98 = *(int *)0xC1EE214;
                                                        t99 = *(int *)((((t97 << 2) + 0xC1244E0) + 0x0));
                                                        t100 = *(int *)(((t98 << 2) + t99));
                                                        t101 = *(int *)(((t98 << 2) + 0xC0C835C));
                                                        if ((int)t93 >= (int)(t100 + t101)) {
                                                            break;
                                                        }
                                                        *(unsigned int *)(((int)stk + 44)) = (((t93 << 2) + t93) << 2);
                                                        t102 = *(int *)0xC1EE800;
                                                        t103 = *(int *)(((((((t93 << 2) + t93) << 2) + t102) + 0x4) + 0x8));
                                                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t103;
                                                        t104 = *(int *)(((((((t93 << 2) + t93) << 2) + t102) + 0x4) + 0x4));
                                                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t104;
                                                        t105 = *(int *)(((((((t93 << 2) + t93) << 2) + t102) + 0x4) + 0x0));
                                                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t105;
                                                        nlProjectScreen3D((((int)stk + 44) + 0x10));
                                                        t107 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                                        u94 = t107;
                                                        t108 = *(int *)0xC1EE214;
                                                        u96 = u94;
                                                        u109 = *(float *)(((t108 << 2) + 0xC118630));
                                                        u95 = u109;
                                                        if (u95 > u96) {
                                                            t110 = *(int *)(((int)stk + 44));
                                                            t111 = *(int *)0xC1EE800;
                                                            u112 = *(float *)(((t110 + t111) + 0x0));
                                                            t113 = CheckClipping(u112);
                                                            if (t113 != 0) {
                                                                FUN_0c02eb86(t93, 0x0, u96);
                                                            }
                                                        } else {
                                                            u119 = u94;
                                                        }
                                                        u94 = u119;
                                                        t93 = (t93 + 0x1);
                                                    }
                                                    t121 = 0xC0C835C;
                                                }
                                                t158 = t121;
                                            } else {
                                                t129 = *(int *)(((t8 << 2) + 0xC0C835C));
                                                t130 = t129;
                                                u133 = 3000.0f;
                                                for (;;) {
                                                    t134 = *(int *)0xC118670;
                                                    t135 = *(int *)0xC1EE214;
                                                    t136 = *(int *)((((t134 << 2) + 0xC1244E0) + 0x0));
                                                    t137 = *(int *)(((t135 << 2) + t136));
                                                    t138 = *(int *)(((t135 << 2) + 0xC0C835C));
                                                    if ((int)t130 >= (int)(t137 + t138)) {
                                                        break;
                                                    }
                                                    *(unsigned int *)(((int)stk + 44)) = (((t130 << 2) + t130) << 2);
                                                    t139 = *(int *)0xC1EE800;
                                                    t140 = *(int *)(((((((t130 << 2) + t130) << 2) + t139) + 0x4) + 0x8));
                                                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t140;
                                                    t141 = *(int *)(((((((t130 << 2) + t130) << 2) + t139) + 0x4) + 0x4));
                                                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t141;
                                                    t142 = *(int *)(((((((t130 << 2) + t130) << 2) + t139) + 0x4) + 0x0));
                                                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t142;
                                                    nlProjectScreen3D((((int)stk + 44) + 0x10));
                                                    t144 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                                    u131 = t144;
                                                    t145 = *(int *)0xC1EE214;
                                                    u133 = u131;
                                                    u146 = *(float *)(((t145 << 2) + 0xC118630));
                                                    u132 = u146;
                                                    if (u132 > u133) {
                                                        t147 = *(int *)(((int)stk + 44));
                                                        t148 = *(int *)0xC1EE800;
                                                        u149 = *(float *)(((t147 + t148) + 0x0));
                                                        t150 = CheckClipping(u149);
                                                        if (t150 != 0) {
                                                            FUN_0c02eb86(t130, 0x0, u133);
                                                        }
                                                    } else {
                                                        u156 = u131;
                                                    }
                                                    u131 = u156;
                                                    t130 = (t130 + 0x1);
                                                }
                                                t158 = 0xC0C835C;
                                            }
                                            t193 = t158;
                                        } else {
                                            t166 = 0x43;
                                            u169 = 3000.0f;
                                            for (;;) {
                                                t170 = *(int *)0xC118670;
                                                t171 = *(int *)0xC1EE214;
                                                t172 = *(int *)((0xC1244E0 + (t170 << 2)));
                                                t173 = *(int *)(((t171 << 2) + t172));
                                                if ((int)t166 >= (int)(t173 + 0x43)) {
                                                    break;
                                                }
                                                *(unsigned int *)(((int)stk + 44)) = (((t166 << 2) + t166) << 2);
                                                t174 = *(int *)0xC1EE800;
                                                t175 = *(int *)(((((((t166 << 2) + t166) << 2) + t174) + 0x4) + 0x8));
                                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t175;
                                                t176 = *(int *)(((((((t166 << 2) + t166) << 2) + t174) + 0x4) + 0x4));
                                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t176;
                                                t177 = *(int *)(((((((t166 << 2) + t166) << 2) + t174) + 0x4) + 0x0));
                                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t177;
                                                nlProjectScreen3D((((int)stk + 44) + 0x10));
                                                t179 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                                u167 = t179;
                                                u169 = u167;
                                                u180 = *(float *)((((t166 - 67) << 2) + 0xC0C8398));
                                                u168 = u180;
                                                if (u168 > u169) {
                                                    t181 = *(int *)(((int)stk + 44));
                                                    t182 = *(int *)0xC1EE800;
                                                    u183 = *(float *)(((t181 + t182) + 0x0));
                                                    t184 = CheckClipping(u183);
                                                    if (t184 != 0) {
                                                        FUN_0c02eb86(t166, 0x0, u169);
                                                    }
                                                } else {
                                                    u190 = u167;
                                                    u191 = u168;
                                                }
                                                u167 = u190;
                                                u168 = u191;
                                                t166 = (t166 + 0x1);
                                            }
                                            t193 = t172;
                                        }
                                        t231 = t193;
                                    } else {
                                        t202 = *(int *)(((t8 << 2) + 0xC0C835C));
                                        t203 = t202;
                                        u206 = 3000.0f;
                                        for (;;) {
                                            t207 = *(int *)0xC118670;
                                            t208 = *(int *)0xC1EE214;
                                            t209 = *(int *)((((t207 << 2) + 0xC1244E0) + 0x0));
                                            t210 = *(int *)(((t208 << 2) + t209));
                                            t211 = *(int *)(((t208 << 2) + 0xC0C835C));
                                            if ((int)t203 >= (int)(t210 + t211)) {
                                                break;
                                            }
                                            *(unsigned int *)(((int)stk + 44)) = (((t203 << 2) + t203) << 2);
                                            t212 = *(int *)0xC1EE800;
                                            t213 = *(int *)(((((((t203 << 2) + t203) << 2) + t212) + 0x4) + 0x8));
                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t213;
                                            t214 = *(int *)(((((((t203 << 2) + t203) << 2) + t212) + 0x4) + 0x4));
                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t214;
                                            t215 = *(int *)(((((((t203 << 2) + t203) << 2) + t212) + 0x4) + 0x0));
                                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t215;
                                            nlProjectScreen3D((((int)stk + 44) + 0x10));
                                            t217 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                            u204 = t217;
                                            t218 = *(int *)0xC1EE214;
                                            u206 = u204;
                                            u219 = *(float *)(((t218 << 2) + 0xC118630));
                                            u205 = u219;
                                            if (u205 > u206) {
                                                t220 = *(int *)(((int)stk + 44));
                                                t221 = *(int *)0xC1EE800;
                                                u222 = *(float *)(((t220 + t221) + 0x0));
                                                t223 = CheckClipping(u222);
                                                if (t223 != 0) {
                                                    FUN_0c02eb86(t203, 0x0, u206);
                                                }
                                            } else {
                                                u229 = u204;
                                            }
                                            u204 = u229;
                                            t203 = (t203 + 0x1);
                                        }
                                        t231 = 0xC0C835C;
                                    }
                                    t269 = t231;
                                } else {
                                    t240 = *(int *)(((t8 << 2) + 0xC0C835C));
                                    t241 = t240;
                                    u244 = 3000.0f;
                                    for (;;) {
                                        t245 = *(int *)0xC118670;
                                        t246 = *(int *)0xC1EE214;
                                        t247 = *(int *)((((t245 << 2) + 0xC1244E0) + 0x0));
                                        t248 = *(int *)(((t246 << 2) + t247));
                                        t249 = *(int *)(((t246 << 2) + 0xC0C835C));
                                        if ((int)t241 >= (int)(t248 + t249)) {
                                            break;
                                        }
                                        *(unsigned int *)(((int)stk + 44)) = (((t241 << 2) + t241) << 2);
                                        t250 = *(int *)0xC1EE800;
                                        t251 = *(int *)(((((((t241 << 2) + t241) << 2) + t250) + 0x4) + 0x8));
                                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t251;
                                        t252 = *(int *)(((((((t241 << 2) + t241) << 2) + t250) + 0x4) + 0x4));
                                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t252;
                                        t253 = *(int *)(((((((t241 << 2) + t241) << 2) + t250) + 0x4) + 0x0));
                                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t253;
                                        nlProjectScreen3D((((int)stk + 44) + 0x10));
                                        t255 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                        u242 = t255;
                                        t256 = *(int *)0xC1EE214;
                                        u244 = u242;
                                        u257 = *(float *)(((t256 << 2) + 0xC118630));
                                        u243 = u257;
                                        if (u243 > u244) {
                                            t258 = *(int *)(((int)stk + 44));
                                            t259 = *(int *)0xC1EE800;
                                            u260 = *(float *)(((t258 + t259) + 0x0));
                                            t261 = CheckClipping(u260);
                                            if (t261 != 0) {
                                                FUN_0c02eb86(t241, 0x0, u244);
                                            }
                                        } else {
                                            u267 = u242;
                                        }
                                        u242 = u267;
                                        t241 = (t241 + 0x1);
                                    }
                                    t269 = 0xC0C835C;
                                }
                                t307 = t269;
                            } else {
                                t278 = *(int *)(((t8 << 2) + 0xC0C835C));
                                t279 = t278;
                                u282 = 3000.0f;
                                for (;;) {
                                    t283 = *(int *)0xC118670;
                                    t284 = *(int *)0xC1EE214;
                                    t285 = *(int *)((((t283 << 2) + 0xC1244E0) + 0x0));
                                    t286 = *(int *)(((t284 << 2) + t285));
                                    t287 = *(int *)(((t284 << 2) + 0xC0C835C));
                                    if ((int)t279 >= (int)(t286 + t287)) {
                                        break;
                                    }
                                    *(unsigned int *)(((int)stk + 44)) = (((t279 << 2) + t279) << 2);
                                    t288 = *(int *)0xC1EE800;
                                    t289 = *(int *)(((((((t279 << 2) + t279) << 2) + t288) + 0x4) + 0x8));
                                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t289;
                                    t290 = *(int *)(((((((t279 << 2) + t279) << 2) + t288) + 0x4) + 0x4));
                                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t290;
                                    t291 = *(int *)(((((((t279 << 2) + t279) << 2) + t288) + 0x4) + 0x0));
                                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t291;
                                    nlProjectScreen3D((((int)stk + 44) + 0x10));
                                    t293 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                    u280 = t293;
                                    t294 = *(int *)0xC1EE214;
                                    u282 = u280;
                                    u295 = *(float *)(((t294 << 2) + 0xC118630));
                                    u281 = u295;
                                    if (u281 > u282) {
                                        t296 = *(int *)(((int)stk + 44));
                                        t297 = *(int *)0xC1EE800;
                                        u298 = *(float *)(((t296 + t297) + 0x0));
                                        t299 = CheckClipping(u298);
                                        if (t299 != 0) {
                                            FUN_0c02eb86(t279, 0x0, u282);
                                        }
                                    } else {
                                        u305 = u280;
                                    }
                                    u280 = u305;
                                    t279 = (t279 + 0x1);
                                }
                                t307 = 0xC0C835C;
                            }
                            t345 = t307;
                        } else {
                            t316 = *(int *)(((t8 << 2) + 0xC0C835C));
                            t317 = t316;
                            u320 = 3000.0f;
                            for (;;) {
                                t321 = *(int *)0xC118670;
                                t322 = *(int *)0xC1EE214;
                                t323 = *(int *)((((t321 << 2) + 0xC1244E0) + 0x0));
                                t324 = *(int *)(((t322 << 2) + t323));
                                t325 = *(int *)(((t322 << 2) + 0xC0C835C));
                                if ((int)t317 >= (int)(t324 + t325)) {
                                    break;
                                }
                                *(unsigned int *)(((int)stk + 44)) = (((t317 << 2) + t317) << 2);
                                t326 = *(int *)0xC1EE800;
                                t327 = *(int *)(((((((t317 << 2) + t317) << 2) + t326) + 0x4) + 0x8));
                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t327;
                                t328 = *(int *)(((((((t317 << 2) + t317) << 2) + t326) + 0x4) + 0x4));
                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t328;
                                t329 = *(int *)(((((((t317 << 2) + t317) << 2) + t326) + 0x4) + 0x0));
                                *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t329;
                                nlProjectScreen3D((((int)stk + 44) + 0x10));
                                t331 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                                u318 = t331;
                                t332 = *(int *)0xC1EE214;
                                u320 = u318;
                                u333 = *(float *)(((t332 << 2) + 0xC118630));
                                u319 = u333;
                                if (u319 > u320) {
                                    t334 = *(int *)(((int)stk + 44));
                                    t335 = *(int *)0xC1EE800;
                                    u336 = *(float *)(((t334 + t335) + 0x0));
                                    t337 = CheckClipping(u336);
                                    if (t337 != 0) {
                                        FUN_0c02eb86(t317, 0x0, u320);
                                    }
                                } else {
                                    u343 = u318;
                                }
                                u318 = u343;
                                t317 = (t317 + 0x1);
                            }
                            t345 = 0xC0C835C;
                        }
                        t383 = t345;
                    } else {
                        t354 = *(int *)(((t8 << 2) + 0xC0C835C));
                        t355 = t354;
                        u358 = 3000.0f;
                        for (;;) {
                            t359 = *(int *)0xC118670;
                            t360 = *(int *)0xC1EE214;
                            t361 = *(int *)((((t359 << 2) + 0xC1244E0) + 0x0));
                            t362 = *(int *)(((t360 << 2) + t361));
                            t363 = *(int *)(((t360 << 2) + 0xC0C835C));
                            if ((int)t355 >= (int)(t362 + t363)) {
                                break;
                            }
                            *(unsigned int *)(((int)stk + 44)) = (((t355 << 2) + t355) << 2);
                            t364 = *(int *)0xC1EE800;
                            t365 = *(int *)(((((((t355 << 2) + t355) << 2) + t364) + 0x4) + 0x8));
                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t365;
                            t366 = *(int *)(((((((t355 << 2) + t355) << 2) + t364) + 0x4) + 0x4));
                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t366;
                            t367 = *(int *)(((((((t355 << 2) + t355) << 2) + t364) + 0x4) + 0x0));
                            *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t367;
                            nlProjectScreen3D((((int)stk + 44) + 0x10));
                            t369 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                            u356 = t369;
                            t370 = *(int *)0xC1EE214;
                            u358 = u356;
                            u371 = *(float *)(((t370 << 2) + 0xC118630));
                            u357 = u371;
                            if (u357 > u358) {
                                t372 = *(int *)(((int)stk + 44));
                                t373 = *(int *)0xC1EE800;
                                u374 = *(float *)(((t372 + t373) + 0x0));
                                t375 = CheckClipping(u374);
                                if (t375 != 0) {
                                    FUN_0c02eb86(t355, 0x0, u358);
                                }
                            } else {
                                u381 = u356;
                            }
                            u356 = u381;
                            t355 = (t355 + 0x1);
                        }
                        t383 = 0xC0C835C;
                    }
                    t421 = t383;
                } else {
                    t392 = *(int *)(((t8 << 2) + 0xC0C835C));
                    t393 = t392;
                    u396 = 3000.0f;
                    for (;;) {
                        t397 = *(int *)0xC118670;
                        t398 = *(int *)0xC1EE214;
                        t399 = *(int *)((((t397 << 2) + 0xC1244E0) + 0x0));
                        t400 = *(int *)(((t398 << 2) + t399));
                        t401 = *(int *)(((t398 << 2) + 0xC0C835C));
                        if ((int)t393 >= (int)(t400 + t401)) {
                            break;
                        }
                        *(unsigned int *)(((int)stk + 44)) = (((t393 << 2) + t393) << 2);
                        t402 = *(int *)0xC1EE800;
                        t403 = *(int *)(((((((t393 << 2) + t393) << 2) + t402) + 0x4) + 0x8));
                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t403;
                        t404 = *(int *)(((((((t393 << 2) + t393) << 2) + t402) + 0x4) + 0x4));
                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t404;
                        t405 = *(int *)(((((((t393 << 2) + t393) << 2) + t402) + 0x4) + 0x0));
                        *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t405;
                        nlProjectScreen3D((((int)stk + 44) + 0x10));
                        t407 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                        u394 = t407;
                        t408 = *(int *)0xC1EE214;
                        u396 = u394;
                        u409 = *(float *)(((t408 << 2) + 0xC118630));
                        u395 = u409;
                        if (u395 > u396) {
                            t410 = *(int *)(((int)stk + 44));
                            t411 = *(int *)0xC1EE800;
                            u412 = *(float *)(((t410 + t411) + 0x0));
                            t413 = CheckClipping(u412);
                            if (t413 != 0) {
                                FUN_0c02eb86(t393, 0x0, u396);
                            }
                        } else {
                            u419 = u394;
                        }
                        u394 = u419;
                        t393 = (t393 + 0x1);
                    }
                    t421 = 0xC0C835C;
                }
                t459 = t421;
            } else {
                t430 = *(int *)(((t8 << 2) + 0xC0C835C));
                t431 = t430;
                u434 = 3000.0f;
                for (;;) {
                    t435 = *(int *)0xC118670;
                    t436 = *(int *)0xC1EE214;
                    t437 = *(int *)((((t435 << 2) + 0xC1244E0) + 0x0));
                    t438 = *(int *)(((t436 << 2) + t437));
                    t439 = *(int *)(((t436 << 2) + 0xC0C835C));
                    if ((int)t431 >= (int)(t438 + t439)) {
                        break;
                    }
                    *(unsigned int *)(((int)stk + 44)) = (((t431 << 2) + t431) << 2);
                    t440 = *(int *)0xC1EE800;
                    t441 = *(int *)(((((((t431 << 2) + t431) << 2) + t440) + 0x4) + 0x8));
                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x8)) = t441;
                    t442 = *(int *)(((((((t431 << 2) + t431) << 2) + t440) + 0x4) + 0x4));
                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x4)) = t442;
                    t443 = *(int *)(((((((t431 << 2) + t431) << 2) + t440) + 0x4) + 0x0));
                    *(unsigned int *)(((((int)stk + 44) + 0x10) + 0x0)) = t443;
                    nlProjectScreen3D((((int)stk + 44) + 0x10));
                    t445 = nlLength((((int)stk + 44) + 0x10), 0xC179840);
                    u432 = t445;
                    t446 = *(int *)0xC1EE214;
                    u434 = u432;
                    u447 = *(float *)(((t446 << 2) + 0xC118630));
                    u433 = u447;
                    if (u433 > u434) {
                        t448 = *(int *)(((int)stk + 44));
                        t449 = *(int *)0xC1EE800;
                        u450 = *(float *)(((t448 + t449) + 0x0));
                        t451 = CheckClipping(u450);
                        if (t451 != 0) {
                            FUN_0c02eb86(t431, 0x0, u434);
                        }
                    } else {
                        u457 = u432;
                    }
                    u432 = u457;
                    t431 = (t431 + 0x1);
                }
                t459 = 0xC0C835C;
            }
            return t459;
        }
        *(float *)(((int)stk + 80)) = 3000.0f;
        SetMVShadow();
        t469 = *(int *)0xC2A6EBC;
        t470 = getAreaFromPos(0xC179840, t469);
        t474 = 0x0;
        if ((int)t470 >= 0) {
            t471 = *(int *)0xC2A6EBC;
            t472 = getAreaFromPos(0xC179840, t471);
            t474 = t472;
        }
        if (t474 != 76) {
            if (t474 == 77) {
                Put_Build_Patch();
            }
        } else {
            Put_Build_Patch();
        }
        *(unsigned int *)0xC2A6EC4 = 0xC111700;
        t482 = *(int *)0xC2A6EC4;
        *(unsigned int *)0xC2A6EC4 = (t482 + (((((t474 << 1) + t474) << 2) << 2) << 1));
        if (t474 != 20) {
            if (t474 != 24) {
                t483 = t474;
                t484 = (t482 + (((((t474 << 1) + t474) << 2) << 2) << 1));
                t485 = 0x0;
                t487 = 0x0;
                u493 = 3000.0f;
                for (;;) {
                    t494 = *(int *)0xC2A6EC4;
                    t495 = *(signed char *)(((t494 + t485) + 0x0));
                    if ((unsigned char)t495 != 0xFE) {
                        t486 = t494;
                        t486 = (t486 + t485);
                        t496 = *(signed char *)((t486 + 0x0));
                        t486 = t496;
                        t486 = (unsigned char)t486;
                        if (t487 == 0) {
                            if (t486 == 0xFF) {
                                t487 = (t487 + 0x1);
                                t639 = t483;
                                t640 = t484;
                                u646 = u488;
                                u647 = u489;
                                u648 = u490;
                                u649 = u491;
                            } else {
                                if (t487 != 0) {
                                    t484 = 0xC1EE804;
                                    t497 = *(int *)((t484 + 0x0));
                                    t484 = ((int)stk + 24);
                                    t484 = (t484 + 0x20);
                                    t483 = 0xC;
                                    t498 = 0;
                                    for (; t498 < (int)t483; t498++) *(unsigned char *)(t484 + t498) = *(unsigned char *)(((t497 + (((t486 << 2) + t486) << 2)) + 0x4) + t498);
                                    t502 = (t497 + (((t486 << 2) + t486) << 2));
                                } else {
                                    t484 = ((int)stk + 24);
                                    t484 = (t484 + 0x20);
                                    t499 = *(int *)0xC1EE800;
                                    t483 = 0xC;
                                    t500 = 0;
                                    for (; t500 < (int)t483; t500++) *(unsigned char *)(t484 + t500) = *(unsigned char *)(((t499 + (((t486 << 2) + t486) << 2)) + 0x4) + t500);
                                    t502 = (t499 + (((t486 << 2) + t486) << 2));
                                }
                                u504 = *(float *)((t502 + 0x0));
                                u493 = u504;
                                t505 = nlProjectScreen3D((((int)stk + 24) + 0x20));
                                t483 = t505;
                                t506 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                                u488 = t506;
                                u492 = u488;
                                t507 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                                u488 = t507;
                                if (2500.0f > u488) {
                                    t508 = CheckClipping(u493);
                                    t483 = t508;
                                    if (t483 != 0) {
                                        t483 = 0x14;
                                        u489 = u493;
                                        u509 = *(float *)((((int)stk + 24) + t483));
                                        u491 = u509;
                                        t483 = 0xC04DE14;
                                        u510 = *(float *)((t483 + 0x0));
                                        u490 = u510;
                                        u491 = (u491 < 0.0f ? -u491 : u491);
                                        u489 = (u489 + u490);
                                        u615 = u489;
                                        u616 = u490;
                                        u617 = u491;
                                        if (u489 > u491) {
                                            t511 = *(int *)0xC2A9D60;
                                            if ((int)t511 >= (int)0x1) {
                                                u550 = u489;
                                                u551 = u490;
                                                u552 = u491;
                                                if (t487 == 0) {
                                                    u525 = u489;
                                                    u526 = u490;
                                                    u527 = u491;
                                                    if ((int)t486 >= (int)0x9) {
                                                        t484 = 0x1C;
                                                        if ((int)t486 <= (int)t484) {
                                                            t512 = FUN_0c02eb86(t486, t487, u492);
                                                            t483 = t512;
                                                        } else {
                                                            t513 = t484;
                                                            u517 = u489;
                                                            u518 = u490;
                                                            u519 = u491;
                                                        }
                                                        t521 = t513;
                                                        u525 = u517;
                                                        u526 = u518;
                                                        u527 = u519;
                                                    }
                                                    u489 = u525;
                                                    u490 = u526;
                                                    u491 = u527;
                                                    t484 = t521;
                                                    t538 = t484;
                                                    u542 = u489;
                                                    u543 = u490;
                                                    u544 = u491;
                                                    if (t487 == 0) {
                                                        if ((int)t486 <= (int)0x8) {
                                                            t529 = FUN_0c02eb86(t486, t487, u492);
                                                            t483 = t529;
                                                        } else {
                                                            t530 = t484;
                                                            u534 = u489;
                                                            u535 = u490;
                                                            u536 = u491;
                                                        }
                                                        t538 = t530;
                                                        u542 = u534;
                                                        u543 = u535;
                                                        u544 = u536;
                                                    }
                                                    t546 = t538;
                                                    u550 = u542;
                                                    u551 = u543;
                                                    u552 = u544;
                                                }
                                                t567 = t546;
                                                u571 = u550;
                                                u572 = u551;
                                                u573 = u552;
                                            } else {
                                                u563 = u489;
                                                u564 = u490;
                                                u565 = u491;
                                                if (t487 == 0) {
                                                    if ((int)t486 <= (int)0x8) {
                                                        t554 = FUN_0c02eb86(t486, t487, u492);
                                                        t483 = t554;
                                                    } else {
                                                        u557 = u489;
                                                        u558 = u490;
                                                        u559 = u491;
                                                    }
                                                    u563 = u557;
                                                    u564 = u558;
                                                    u565 = u559;
                                                }
                                                u571 = u563;
                                                u572 = u564;
                                                u573 = u565;
                                            }
                                            t575 = *(int *)0xC2A9D60;
                                            u489 = u571;
                                            u490 = u572;
                                            u491 = u573;
                                            t483 = t575;
                                            t484 = t567;
                                            t602 = t484;
                                            u606 = u489;
                                            u607 = u490;
                                            u608 = u491;
                                            if (t483 != 2) {
                                                if (t487 == 0) {
                                                    t585 = t484;
                                                    u589 = u489;
                                                    u590 = u490;
                                                    u591 = u491;
                                                    if (t487 == 0) {
                                                        if ((int)t486 >= (int)0x1D) {
                                                            t576 = FUN_0c02eb86(t486, t487, u492);
                                                            t483 = t576;
                                                        } else {
                                                            t577 = t484;
                                                            u581 = u489;
                                                            u582 = u490;
                                                            u583 = u491;
                                                        }
                                                        t585 = t577;
                                                        u589 = u581;
                                                        u590 = u582;
                                                        u591 = u583;
                                                    }
                                                    t594 = t585;
                                                    u598 = u589;
                                                    u599 = u590;
                                                    u600 = u591;
                                                } else {
                                                    t593 = FUN_0c02eb86(t486, t487, u492);
                                                    t483 = t593;
                                                }
                                                t602 = t594;
                                                u606 = u598;
                                                u607 = u599;
                                                u608 = u600;
                                            }
                                            t610 = t602;
                                            u615 = u606;
                                            u616 = u607;
                                            u617 = u608;
                                        }
                                        t619 = t610;
                                        u624 = u615;
                                        u625 = u616;
                                        u626 = u617;
                                    }
                                    t628 = t483;
                                    t629 = t619;
                                    u635 = u624;
                                    u636 = u625;
                                    u637 = u626;
                                } else {
                                    u634 = u488;
                                }
                                t639 = t628;
                                t640 = t629;
                                u646 = u634;
                                u647 = u635;
                                u648 = u636;
                                u649 = u637;
                            }
                            t793 = t639;
                            t794 = t640;
                            u800 = u646;
                            u801 = u647;
                            u802 = u648;
                            u803 = u649;
                        } else {
                            if (t487 != 0) {
                                t484 = 0xC1EE804;
                                t651 = *(int *)((t484 + 0x0));
                                t484 = ((int)stk + 24);
                                t484 = (t484 + 0x20);
                                t483 = 0xC;
                                t652 = 0;
                                for (; t652 < (int)t483; t652++) *(unsigned char *)(t484 + t652) = *(unsigned char *)(((t651 + (((t486 << 2) + t486) << 2)) + 0x4) + t652);
                                t656 = (t651 + (((t486 << 2) + t486) << 2));
                            } else {
                                t484 = ((int)stk + 24);
                                t484 = (t484 + 0x20);
                                t653 = *(int *)0xC1EE800;
                                t483 = 0xC;
                                t654 = 0;
                                for (; t654 < (int)t483; t654++) *(unsigned char *)(t484 + t654) = *(unsigned char *)(((t653 + (((t486 << 2) + t486) << 2)) + 0x4) + t654);
                                t656 = (t653 + (((t486 << 2) + t486) << 2));
                            }
                            u658 = *(float *)((t656 + 0x0));
                            u493 = u658;
                            t659 = nlProjectScreen3D((((int)stk + 24) + 0x20));
                            t483 = t659;
                            t660 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                            u488 = t660;
                            u492 = u488;
                            t661 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                            u488 = t661;
                            if (2500.0f > u488) {
                                t662 = CheckClipping(u493);
                                t483 = t662;
                                if (t483 != 0) {
                                    t483 = 0x14;
                                    u489 = u493;
                                    u663 = *(float *)((((int)stk + 24) + t483));
                                    u491 = u663;
                                    t483 = 0xC04DE14;
                                    u664 = *(float *)((t483 + 0x0));
                                    u490 = u664;
                                    u491 = (u491 < 0.0f ? -u491 : u491);
                                    u489 = (u489 + u490);
                                    u769 = u489;
                                    u770 = u490;
                                    u771 = u491;
                                    if (u489 > u491) {
                                        t665 = *(int *)0xC2A9D60;
                                        if ((int)t665 >= (int)0x1) {
                                            u704 = u489;
                                            u705 = u490;
                                            u706 = u491;
                                            if (t487 == 0) {
                                                u679 = u489;
                                                u680 = u490;
                                                u681 = u491;
                                                if ((int)t486 >= (int)0x9) {
                                                    t484 = 0x1C;
                                                    if ((int)t486 <= (int)t484) {
                                                        t666 = FUN_0c02eb86(t486, t487, u492);
                                                        t483 = t666;
                                                    } else {
                                                        t667 = t484;
                                                        u671 = u489;
                                                        u672 = u490;
                                                        u673 = u491;
                                                    }
                                                    t675 = t667;
                                                    u679 = u671;
                                                    u680 = u672;
                                                    u681 = u673;
                                                }
                                                u489 = u679;
                                                u490 = u680;
                                                u491 = u681;
                                                t484 = t675;
                                                t692 = t484;
                                                u696 = u489;
                                                u697 = u490;
                                                u698 = u491;
                                                if (t487 == 0) {
                                                    if ((int)t486 <= (int)0x8) {
                                                        t683 = FUN_0c02eb86(t486, t487, u492);
                                                        t483 = t683;
                                                    } else {
                                                        t684 = t484;
                                                        u688 = u489;
                                                        u689 = u490;
                                                        u690 = u491;
                                                    }
                                                    t692 = t684;
                                                    u696 = u688;
                                                    u697 = u689;
                                                    u698 = u690;
                                                }
                                                t700 = t692;
                                                u704 = u696;
                                                u705 = u697;
                                                u706 = u698;
                                            }
                                            t721 = t700;
                                            u725 = u704;
                                            u726 = u705;
                                            u727 = u706;
                                        } else {
                                            u717 = u489;
                                            u718 = u490;
                                            u719 = u491;
                                            if (t487 == 0) {
                                                if ((int)t486 <= (int)0x8) {
                                                    t708 = FUN_0c02eb86(t486, t487, u492);
                                                    t483 = t708;
                                                } else {
                                                    u711 = u489;
                                                    u712 = u490;
                                                    u713 = u491;
                                                }
                                                u717 = u711;
                                                u718 = u712;
                                                u719 = u713;
                                            }
                                            u725 = u717;
                                            u726 = u718;
                                            u727 = u719;
                                        }
                                        t729 = *(int *)0xC2A9D60;
                                        u489 = u725;
                                        u490 = u726;
                                        u491 = u727;
                                        t483 = t729;
                                        t484 = t721;
                                        t756 = t484;
                                        u760 = u489;
                                        u761 = u490;
                                        u762 = u491;
                                        if (t483 != 2) {
                                            if (t487 == 0) {
                                                t739 = t484;
                                                u743 = u489;
                                                u744 = u490;
                                                u745 = u491;
                                                if (t487 == 0) {
                                                    if ((int)t486 >= (int)0x1D) {
                                                        t730 = FUN_0c02eb86(t486, t487, u492);
                                                        t483 = t730;
                                                    } else {
                                                        t731 = t484;
                                                        u735 = u489;
                                                        u736 = u490;
                                                        u737 = u491;
                                                    }
                                                    t739 = t731;
                                                    u743 = u735;
                                                    u744 = u736;
                                                    u745 = u737;
                                                }
                                                t748 = t739;
                                                u752 = u743;
                                                u753 = u744;
                                                u754 = u745;
                                            } else {
                                                t747 = FUN_0c02eb86(t486, t487, u492);
                                                t483 = t747;
                                            }
                                            t756 = t748;
                                            u760 = u752;
                                            u761 = u753;
                                            u762 = u754;
                                        }
                                        t764 = t756;
                                        u769 = u760;
                                        u770 = u761;
                                        u771 = u762;
                                    }
                                    t773 = t764;
                                    u778 = u769;
                                    u779 = u770;
                                    u780 = u771;
                                }
                                t782 = t483;
                                t783 = t773;
                                u789 = u778;
                                u790 = u779;
                                u791 = u780;
                            } else {
                                u788 = u488;
                            }
                            t793 = t782;
                            t794 = t783;
                            u800 = u788;
                            u801 = u789;
                            u802 = u790;
                            u803 = u791;
                        }
                        u488 = u800;
                        u489 = u801;
                        u490 = u802;
                        u491 = u803;
                        t483 = t793;
                        t484 = t794;
                        t485 = (t485 + 0x1);
                        continue;
                    }
                    break;
                }
                u1135 = u488;
                u1136 = u489;
                u1140 = u490;
                u1141 = u491;
            } else {
                t805 = 0xC04DCFC;
                t806 = (t482 + (((((t474 << 1) + t474) << 2) << 2) << 1));
                t807 = 0x0;
                t809 = 0x0;
                u815 = 3000.0f;
                for (;;) {
                    t816 = *(int *)0xC2A6EC4;
                    t817 = *(signed char *)(((t816 + t807) + 0x0));
                    if ((unsigned char)t817 != 0xFE) {
                        t808 = t816;
                        t808 = (t808 + t807);
                        t818 = *(signed char *)((t808 + 0x0));
                        t808 = t818;
                        t808 = (unsigned char)t808;
                        if (t809 == 0) {
                            if (t808 == 0xFF) {
                                t809 = (t809 + 0x1);
                                t961 = t805;
                                t962 = t806;
                                u968 = u810;
                                u969 = u811;
                                u970 = u812;
                                u971 = u813;
                            } else {
                                if (t809 != 0) {
                                    t806 = 0xC1EE804;
                                    t819 = *(int *)((t806 + 0x0));
                                    t806 = ((int)stk + 24);
                                    t806 = (t806 + 0x20);
                                    t805 = 0xC;
                                    t820 = 0;
                                    for (; t820 < (int)t805; t820++) *(unsigned char *)(t806 + t820) = *(unsigned char *)(((t819 + (((t808 << 2) + t808) << 2)) + 0x4) + t820);
                                    t824 = (t819 + (((t808 << 2) + t808) << 2));
                                } else {
                                    t806 = ((int)stk + 24);
                                    t806 = (t806 + 0x20);
                                    t821 = *(int *)0xC1EE800;
                                    t805 = 0xC;
                                    t822 = 0;
                                    for (; t822 < (int)t805; t822++) *(unsigned char *)(t806 + t822) = *(unsigned char *)(((t821 + (((t808 << 2) + t808) << 2)) + 0x4) + t822);
                                    t824 = (t821 + (((t808 << 2) + t808) << 2));
                                }
                                u826 = *(float *)((t824 + 0x0));
                                u815 = u826;
                                t827 = nlProjectScreen3D((((int)stk + 24) + 0x20));
                                t805 = t827;
                                t828 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                                u810 = t828;
                                u814 = u810;
                                t829 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                                u810 = t829;
                                if (2200.0f > u810) {
                                    t830 = CheckClipping(u815);
                                    t805 = t830;
                                    if (t805 != 0) {
                                        t805 = 0x14;
                                        u811 = u815;
                                        u831 = *(float *)((((int)stk + 24) + t805));
                                        u813 = u831;
                                        t805 = 0xC04DE14;
                                        u832 = *(float *)((t805 + 0x0));
                                        u812 = u832;
                                        u813 = (u813 < 0.0f ? -u813 : u813);
                                        u811 = (u811 + u812);
                                        u937 = u811;
                                        u938 = u812;
                                        u939 = u813;
                                        if (u811 > u813) {
                                            t833 = *(int *)0xC2A9D60;
                                            if ((int)t833 >= (int)0x1) {
                                                u872 = u811;
                                                u873 = u812;
                                                u874 = u813;
                                                if (t809 == 0) {
                                                    u847 = u811;
                                                    u848 = u812;
                                                    u849 = u813;
                                                    if ((int)t808 >= (int)0x9) {
                                                        t806 = 0x1C;
                                                        if ((int)t808 <= (int)t806) {
                                                            t834 = FUN_0c02eb86(t808, t809, u814);
                                                            t805 = t834;
                                                        } else {
                                                            t835 = t806;
                                                            u839 = u811;
                                                            u840 = u812;
                                                            u841 = u813;
                                                        }
                                                        t843 = t835;
                                                        u847 = u839;
                                                        u848 = u840;
                                                        u849 = u841;
                                                    }
                                                    u811 = u847;
                                                    u812 = u848;
                                                    u813 = u849;
                                                    t806 = t843;
                                                    t860 = t806;
                                                    u864 = u811;
                                                    u865 = u812;
                                                    u866 = u813;
                                                    if (t809 == 0) {
                                                        if ((int)t808 <= (int)0x8) {
                                                            t851 = FUN_0c02eb86(t808, t809, u814);
                                                            t805 = t851;
                                                        } else {
                                                            t852 = t806;
                                                            u856 = u811;
                                                            u857 = u812;
                                                            u858 = u813;
                                                        }
                                                        t860 = t852;
                                                        u864 = u856;
                                                        u865 = u857;
                                                        u866 = u858;
                                                    }
                                                    t868 = t860;
                                                    u872 = u864;
                                                    u873 = u865;
                                                    u874 = u866;
                                                }
                                                t889 = t868;
                                                u893 = u872;
                                                u894 = u873;
                                                u895 = u874;
                                            } else {
                                                u885 = u811;
                                                u886 = u812;
                                                u887 = u813;
                                                if (t809 == 0) {
                                                    if ((int)t808 <= (int)0x8) {
                                                        t876 = FUN_0c02eb86(t808, t809, u814);
                                                        t805 = t876;
                                                    } else {
                                                        u879 = u811;
                                                        u880 = u812;
                                                        u881 = u813;
                                                    }
                                                    u885 = u879;
                                                    u886 = u880;
                                                    u887 = u881;
                                                }
                                                u893 = u885;
                                                u894 = u886;
                                                u895 = u887;
                                            }
                                            t897 = *(int *)0xC2A9D60;
                                            u811 = u893;
                                            u812 = u894;
                                            u813 = u895;
                                            t805 = t897;
                                            t806 = t889;
                                            t924 = t806;
                                            u928 = u811;
                                            u929 = u812;
                                            u930 = u813;
                                            if (t805 != 2) {
                                                if (t809 == 0) {
                                                    t907 = t806;
                                                    u911 = u811;
                                                    u912 = u812;
                                                    u913 = u813;
                                                    if (t809 == 0) {
                                                        if ((int)t808 >= (int)0x1D) {
                                                            t898 = FUN_0c02eb86(t808, t809, u814);
                                                            t805 = t898;
                                                        } else {
                                                            t899 = t806;
                                                            u903 = u811;
                                                            u904 = u812;
                                                            u905 = u813;
                                                        }
                                                        t907 = t899;
                                                        u911 = u903;
                                                        u912 = u904;
                                                        u913 = u905;
                                                    }
                                                    t916 = t907;
                                                    u920 = u911;
                                                    u921 = u912;
                                                    u922 = u913;
                                                } else {
                                                    t915 = FUN_0c02eb86(t808, t809, u814);
                                                    t805 = t915;
                                                }
                                                t924 = t916;
                                                u928 = u920;
                                                u929 = u921;
                                                u930 = u922;
                                            }
                                            t932 = t924;
                                            u937 = u928;
                                            u938 = u929;
                                            u939 = u930;
                                        }
                                        t941 = t932;
                                        u946 = u937;
                                        u947 = u938;
                                        u948 = u939;
                                    }
                                    t950 = t805;
                                    t951 = t941;
                                    u957 = u946;
                                    u958 = u947;
                                    u959 = u948;
                                } else {
                                    u956 = u810;
                                }
                                t961 = t950;
                                t962 = t951;
                                u968 = u956;
                                u969 = u957;
                                u970 = u958;
                                u971 = u959;
                            }
                            t1115 = t961;
                            t1116 = t962;
                            u1122 = u968;
                            u1123 = u969;
                            u1124 = u970;
                            u1125 = u971;
                        } else {
                            if (t809 != 0) {
                                t806 = 0xC1EE804;
                                t973 = *(int *)((t806 + 0x0));
                                t806 = ((int)stk + 24);
                                t806 = (t806 + 0x20);
                                t805 = 0xC;
                                t974 = 0;
                                for (; t974 < (int)t805; t974++) *(unsigned char *)(t806 + t974) = *(unsigned char *)(((t973 + (((t808 << 2) + t808) << 2)) + 0x4) + t974);
                                t978 = (t973 + (((t808 << 2) + t808) << 2));
                            } else {
                                t806 = ((int)stk + 24);
                                t806 = (t806 + 0x20);
                                t975 = *(int *)0xC1EE800;
                                t805 = 0xC;
                                t976 = 0;
                                for (; t976 < (int)t805; t976++) *(unsigned char *)(t806 + t976) = *(unsigned char *)(((t975 + (((t808 << 2) + t808) << 2)) + 0x4) + t976);
                                t978 = (t975 + (((t808 << 2) + t808) << 2));
                            }
                            u980 = *(float *)((t978 + 0x0));
                            u815 = u980;
                            t981 = nlProjectScreen3D((((int)stk + 24) + 0x20));
                            t805 = t981;
                            t982 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                            u810 = t982;
                            u814 = u810;
                            t983 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                            u810 = t983;
                            if (2200.0f > u810) {
                                t984 = CheckClipping(u815);
                                t805 = t984;
                                if (t805 != 0) {
                                    t805 = 0x14;
                                    u811 = u815;
                                    u985 = *(float *)((((int)stk + 24) + t805));
                                    u813 = u985;
                                    t805 = 0xC04DE14;
                                    u986 = *(float *)((t805 + 0x0));
                                    u812 = u986;
                                    u813 = (u813 < 0.0f ? -u813 : u813);
                                    u811 = (u811 + u812);
                                    u1091 = u811;
                                    u1092 = u812;
                                    u1093 = u813;
                                    if (u811 > u813) {
                                        t987 = *(int *)0xC2A9D60;
                                        if ((int)t987 >= (int)0x1) {
                                            u1026 = u811;
                                            u1027 = u812;
                                            u1028 = u813;
                                            if (t809 == 0) {
                                                u1001 = u811;
                                                u1002 = u812;
                                                u1003 = u813;
                                                if ((int)t808 >= (int)0x9) {
                                                    t806 = 0x1C;
                                                    if ((int)t808 <= (int)t806) {
                                                        t988 = FUN_0c02eb86(t808, t809, u814);
                                                        t805 = t988;
                                                    } else {
                                                        t989 = t806;
                                                        u993 = u811;
                                                        u994 = u812;
                                                        u995 = u813;
                                                    }
                                                    t997 = t989;
                                                    u1001 = u993;
                                                    u1002 = u994;
                                                    u1003 = u995;
                                                }
                                                u811 = u1001;
                                                u812 = u1002;
                                                u813 = u1003;
                                                t806 = t997;
                                                t1014 = t806;
                                                u1018 = u811;
                                                u1019 = u812;
                                                u1020 = u813;
                                                if (t809 == 0) {
                                                    if ((int)t808 <= (int)0x8) {
                                                        t1005 = FUN_0c02eb86(t808, t809, u814);
                                                        t805 = t1005;
                                                    } else {
                                                        t1006 = t806;
                                                        u1010 = u811;
                                                        u1011 = u812;
                                                        u1012 = u813;
                                                    }
                                                    t1014 = t1006;
                                                    u1018 = u1010;
                                                    u1019 = u1011;
                                                    u1020 = u1012;
                                                }
                                                t1022 = t1014;
                                                u1026 = u1018;
                                                u1027 = u1019;
                                                u1028 = u1020;
                                            }
                                            t1043 = t1022;
                                            u1047 = u1026;
                                            u1048 = u1027;
                                            u1049 = u1028;
                                        } else {
                                            u1039 = u811;
                                            u1040 = u812;
                                            u1041 = u813;
                                            if (t809 == 0) {
                                                if ((int)t808 <= (int)0x8) {
                                                    t1030 = FUN_0c02eb86(t808, t809, u814);
                                                    t805 = t1030;
                                                } else {
                                                    u1033 = u811;
                                                    u1034 = u812;
                                                    u1035 = u813;
                                                }
                                                u1039 = u1033;
                                                u1040 = u1034;
                                                u1041 = u1035;
                                            }
                                            u1047 = u1039;
                                            u1048 = u1040;
                                            u1049 = u1041;
                                        }
                                        t1051 = *(int *)0xC2A9D60;
                                        u811 = u1047;
                                        u812 = u1048;
                                        u813 = u1049;
                                        t805 = t1051;
                                        t806 = t1043;
                                        t1078 = t806;
                                        u1082 = u811;
                                        u1083 = u812;
                                        u1084 = u813;
                                        if (t805 != 2) {
                                            if (t809 == 0) {
                                                t1061 = t806;
                                                u1065 = u811;
                                                u1066 = u812;
                                                u1067 = u813;
                                                if (t809 == 0) {
                                                    if ((int)t808 >= (int)0x1D) {
                                                        t1052 = FUN_0c02eb86(t808, t809, u814);
                                                        t805 = t1052;
                                                    } else {
                                                        t1053 = t806;
                                                        u1057 = u811;
                                                        u1058 = u812;
                                                        u1059 = u813;
                                                    }
                                                    t1061 = t1053;
                                                    u1065 = u1057;
                                                    u1066 = u1058;
                                                    u1067 = u1059;
                                                }
                                                t1070 = t1061;
                                                u1074 = u1065;
                                                u1075 = u1066;
                                                u1076 = u1067;
                                            } else {
                                                t1069 = FUN_0c02eb86(t808, t809, u814);
                                                t805 = t1069;
                                            }
                                            t1078 = t1070;
                                            u1082 = u1074;
                                            u1083 = u1075;
                                            u1084 = u1076;
                                        }
                                        t1086 = t1078;
                                        u1091 = u1082;
                                        u1092 = u1083;
                                        u1093 = u1084;
                                    }
                                    t1095 = t1086;
                                    u1100 = u1091;
                                    u1101 = u1092;
                                    u1102 = u1093;
                                }
                                t1104 = t805;
                                t1105 = t1095;
                                u1111 = u1100;
                                u1112 = u1101;
                                u1113 = u1102;
                            } else {
                                u1110 = u810;
                            }
                            t1115 = t1104;
                            t1116 = t1105;
                            u1122 = u1110;
                            u1123 = u1111;
                            u1124 = u1112;
                            u1125 = u1113;
                        }
                        u810 = u1122;
                        u811 = u1123;
                        u812 = u1124;
                        u813 = u1125;
                        t805 = t1115;
                        t806 = t1116;
                        t807 = (t807 + 0x1);
                        continue;
                    }
                    break;
                }
                u1135 = u810;
                u1136 = u811;
                u1140 = u812;
                u1141 = u813;
            }
            u1472 = u1135;
            u1473 = u1136;
            u1477 = u1140;
            u1478 = u1141;
        } else {
            t1142 = 0xC04DCFC;
            t1143 = (t482 + (((((t474 << 1) + t474) << 2) << 2) << 1));
            t1144 = 0x0;
            t1146 = 0x0;
            u1152 = 3000.0f;
            for (;;) {
                t1153 = *(int *)0xC2A6EC4;
                t1154 = *(signed char *)(((t1153 + t1144) + 0x0));
                if ((unsigned char)t1154 != 0xFE) {
                    t1145 = t1153;
                    t1145 = (t1145 + t1144);
                    t1155 = *(signed char *)((t1145 + 0x0));
                    t1145 = t1155;
                    t1145 = (unsigned char)t1145;
                    if (t1146 == 0) {
                        if (t1145 == 0xFF) {
                            t1146 = (t1146 + 0x1);
                            t1298 = t1142;
                            t1299 = t1143;
                            u1305 = u1147;
                            u1306 = u1148;
                            u1307 = u1149;
                            u1308 = u1150;
                        } else {
                            if (t1146 != 0) {
                                t1143 = 0xC1EE804;
                                t1156 = *(int *)((t1143 + 0x0));
                                t1143 = ((int)stk + 24);
                                t1143 = (t1143 + 0x20);
                                t1142 = 0xC;
                                t1157 = 0;
                                for (; t1157 < (int)t1142; t1157++) *(unsigned char *)(t1143 + t1157) = *(unsigned char *)(((t1156 + (((t1145 << 2) + t1145) << 2)) + 0x4) + t1157);
                                t1161 = (t1156 + (((t1145 << 2) + t1145) << 2));
                            } else {
                                t1143 = ((int)stk + 24);
                                t1143 = (t1143 + 0x20);
                                t1158 = *(int *)0xC1EE800;
                                t1142 = 0xC;
                                t1159 = 0;
                                for (; t1159 < (int)t1142; t1159++) *(unsigned char *)(t1143 + t1159) = *(unsigned char *)(((t1158 + (((t1145 << 2) + t1145) << 2)) + 0x4) + t1159);
                                t1161 = (t1158 + (((t1145 << 2) + t1145) << 2));
                            }
                            u1163 = *(float *)((t1161 + 0x0));
                            u1152 = u1163;
                            t1164 = nlProjectScreen3D((((int)stk + 24) + 0x20));
                            t1142 = t1164;
                            t1165 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                            u1147 = t1165;
                            u1151 = u1147;
                            t1166 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                            u1147 = t1166;
                            if (2200.0f > u1147) {
                                t1167 = CheckClipping(u1152);
                                t1142 = t1167;
                                if (t1142 != 0) {
                                    t1142 = 0x14;
                                    u1148 = u1152;
                                    u1168 = *(float *)((((int)stk + 24) + t1142));
                                    u1150 = u1168;
                                    t1142 = 0xC04DE14;
                                    u1169 = *(float *)((t1142 + 0x0));
                                    u1149 = u1169;
                                    u1150 = (u1150 < 0.0f ? -u1150 : u1150);
                                    u1148 = (u1148 + u1149);
                                    u1274 = u1148;
                                    u1275 = u1149;
                                    u1276 = u1150;
                                    if (u1148 > u1150) {
                                        t1170 = *(int *)0xC2A9D60;
                                        if ((int)t1170 >= (int)0x1) {
                                            u1209 = u1148;
                                            u1210 = u1149;
                                            u1211 = u1150;
                                            if (t1146 == 0) {
                                                u1184 = u1148;
                                                u1185 = u1149;
                                                u1186 = u1150;
                                                if ((int)t1145 >= (int)0x9) {
                                                    t1143 = 0x1C;
                                                    if ((int)t1145 <= (int)t1143) {
                                                        t1171 = FUN_0c02eb86(t1145, t1146, u1151);
                                                        t1142 = t1171;
                                                    } else {
                                                        t1172 = t1143;
                                                        u1176 = u1148;
                                                        u1177 = u1149;
                                                        u1178 = u1150;
                                                    }
                                                    t1180 = t1172;
                                                    u1184 = u1176;
                                                    u1185 = u1177;
                                                    u1186 = u1178;
                                                }
                                                u1148 = u1184;
                                                u1149 = u1185;
                                                u1150 = u1186;
                                                t1143 = t1180;
                                                t1197 = t1143;
                                                u1201 = u1148;
                                                u1202 = u1149;
                                                u1203 = u1150;
                                                if (t1146 == 0) {
                                                    if ((int)t1145 <= (int)0x8) {
                                                        t1188 = FUN_0c02eb86(t1145, t1146, u1151);
                                                        t1142 = t1188;
                                                    } else {
                                                        t1189 = t1143;
                                                        u1193 = u1148;
                                                        u1194 = u1149;
                                                        u1195 = u1150;
                                                    }
                                                    t1197 = t1189;
                                                    u1201 = u1193;
                                                    u1202 = u1194;
                                                    u1203 = u1195;
                                                }
                                                t1205 = t1197;
                                                u1209 = u1201;
                                                u1210 = u1202;
                                                u1211 = u1203;
                                            }
                                            t1226 = t1205;
                                            u1230 = u1209;
                                            u1231 = u1210;
                                            u1232 = u1211;
                                        } else {
                                            u1222 = u1148;
                                            u1223 = u1149;
                                            u1224 = u1150;
                                            if (t1146 == 0) {
                                                if ((int)t1145 <= (int)0x8) {
                                                    t1213 = FUN_0c02eb86(t1145, t1146, u1151);
                                                    t1142 = t1213;
                                                } else {
                                                    u1216 = u1148;
                                                    u1217 = u1149;
                                                    u1218 = u1150;
                                                }
                                                u1222 = u1216;
                                                u1223 = u1217;
                                                u1224 = u1218;
                                            }
                                            u1230 = u1222;
                                            u1231 = u1223;
                                            u1232 = u1224;
                                        }
                                        t1234 = *(int *)0xC2A9D60;
                                        u1148 = u1230;
                                        u1149 = u1231;
                                        u1150 = u1232;
                                        t1142 = t1234;
                                        t1143 = t1226;
                                        t1261 = t1143;
                                        u1265 = u1148;
                                        u1266 = u1149;
                                        u1267 = u1150;
                                        if (t1142 != 2) {
                                            if (t1146 == 0) {
                                                t1244 = t1143;
                                                u1248 = u1148;
                                                u1249 = u1149;
                                                u1250 = u1150;
                                                if (t1146 == 0) {
                                                    if ((int)t1145 >= (int)0x1D) {
                                                        t1235 = FUN_0c02eb86(t1145, t1146, u1151);
                                                        t1142 = t1235;
                                                    } else {
                                                        t1236 = t1143;
                                                        u1240 = u1148;
                                                        u1241 = u1149;
                                                        u1242 = u1150;
                                                    }
                                                    t1244 = t1236;
                                                    u1248 = u1240;
                                                    u1249 = u1241;
                                                    u1250 = u1242;
                                                }
                                                t1253 = t1244;
                                                u1257 = u1248;
                                                u1258 = u1249;
                                                u1259 = u1250;
                                            } else {
                                                t1252 = FUN_0c02eb86(t1145, t1146, u1151);
                                                t1142 = t1252;
                                            }
                                            t1261 = t1253;
                                            u1265 = u1257;
                                            u1266 = u1258;
                                            u1267 = u1259;
                                        }
                                        t1269 = t1261;
                                        u1274 = u1265;
                                        u1275 = u1266;
                                        u1276 = u1267;
                                    }
                                    t1278 = t1269;
                                    u1283 = u1274;
                                    u1284 = u1275;
                                    u1285 = u1276;
                                }
                                t1287 = t1142;
                                t1288 = t1278;
                                u1294 = u1283;
                                u1295 = u1284;
                                u1296 = u1285;
                            } else {
                                u1293 = u1147;
                            }
                            t1298 = t1287;
                            t1299 = t1288;
                            u1305 = u1293;
                            u1306 = u1294;
                            u1307 = u1295;
                            u1308 = u1296;
                        }
                        t1452 = t1298;
                        t1453 = t1299;
                        u1459 = u1305;
                        u1460 = u1306;
                        u1461 = u1307;
                        u1462 = u1308;
                    } else {
                        if (t1146 != 0) {
                            t1143 = 0xC1EE804;
                            t1310 = *(int *)((t1143 + 0x0));
                            t1143 = ((int)stk + 24);
                            t1143 = (t1143 + 0x20);
                            t1142 = 0xC;
                            t1311 = 0;
                            for (; t1311 < (int)t1142; t1311++) *(unsigned char *)(t1143 + t1311) = *(unsigned char *)(((t1310 + (((t1145 << 2) + t1145) << 2)) + 0x4) + t1311);
                            t1315 = (t1310 + (((t1145 << 2) + t1145) << 2));
                        } else {
                            t1143 = ((int)stk + 24);
                            t1143 = (t1143 + 0x20);
                            t1312 = *(int *)0xC1EE800;
                            t1142 = 0xC;
                            t1313 = 0;
                            for (; t1313 < (int)t1142; t1313++) *(unsigned char *)(t1143 + t1313) = *(unsigned char *)(((t1312 + (((t1145 << 2) + t1145) << 2)) + 0x4) + t1313);
                            t1315 = (t1312 + (((t1145 << 2) + t1145) << 2));
                        }
                        u1317 = *(float *)((t1315 + 0x0));
                        u1152 = u1317;
                        t1318 = nlProjectScreen3D((((int)stk + 24) + 0x20));
                        t1142 = t1318;
                        t1319 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                        u1147 = t1319;
                        u1151 = u1147;
                        t1320 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                        u1147 = t1320;
                        if (2200.0f > u1147) {
                            t1321 = CheckClipping(u1152);
                            t1142 = t1321;
                            if (t1142 != 0) {
                                t1142 = 0x14;
                                u1148 = u1152;
                                u1322 = *(float *)((((int)stk + 24) + t1142));
                                u1150 = u1322;
                                t1142 = 0xC04DE14;
                                u1323 = *(float *)((t1142 + 0x0));
                                u1149 = u1323;
                                u1150 = (u1150 < 0.0f ? -u1150 : u1150);
                                u1148 = (u1148 + u1149);
                                u1428 = u1148;
                                u1429 = u1149;
                                u1430 = u1150;
                                if (u1148 > u1150) {
                                    t1324 = *(int *)0xC2A9D60;
                                    if ((int)t1324 >= (int)0x1) {
                                        u1363 = u1148;
                                        u1364 = u1149;
                                        u1365 = u1150;
                                        if (t1146 == 0) {
                                            u1338 = u1148;
                                            u1339 = u1149;
                                            u1340 = u1150;
                                            if ((int)t1145 >= (int)0x9) {
                                                t1143 = 0x1C;
                                                if ((int)t1145 <= (int)t1143) {
                                                    t1325 = FUN_0c02eb86(t1145, t1146, u1151);
                                                    t1142 = t1325;
                                                } else {
                                                    t1326 = t1143;
                                                    u1330 = u1148;
                                                    u1331 = u1149;
                                                    u1332 = u1150;
                                                }
                                                t1334 = t1326;
                                                u1338 = u1330;
                                                u1339 = u1331;
                                                u1340 = u1332;
                                            }
                                            u1148 = u1338;
                                            u1149 = u1339;
                                            u1150 = u1340;
                                            t1143 = t1334;
                                            t1351 = t1143;
                                            u1355 = u1148;
                                            u1356 = u1149;
                                            u1357 = u1150;
                                            if (t1146 == 0) {
                                                if ((int)t1145 <= (int)0x8) {
                                                    t1342 = FUN_0c02eb86(t1145, t1146, u1151);
                                                    t1142 = t1342;
                                                } else {
                                                    t1343 = t1143;
                                                    u1347 = u1148;
                                                    u1348 = u1149;
                                                    u1349 = u1150;
                                                }
                                                t1351 = t1343;
                                                u1355 = u1347;
                                                u1356 = u1348;
                                                u1357 = u1349;
                                            }
                                            t1359 = t1351;
                                            u1363 = u1355;
                                            u1364 = u1356;
                                            u1365 = u1357;
                                        }
                                        t1380 = t1359;
                                        u1384 = u1363;
                                        u1385 = u1364;
                                        u1386 = u1365;
                                    } else {
                                        u1376 = u1148;
                                        u1377 = u1149;
                                        u1378 = u1150;
                                        if (t1146 == 0) {
                                            if ((int)t1145 <= (int)0x8) {
                                                t1367 = FUN_0c02eb86(t1145, t1146, u1151);
                                                t1142 = t1367;
                                            } else {
                                                u1370 = u1148;
                                                u1371 = u1149;
                                                u1372 = u1150;
                                            }
                                            u1376 = u1370;
                                            u1377 = u1371;
                                            u1378 = u1372;
                                        }
                                        u1384 = u1376;
                                        u1385 = u1377;
                                        u1386 = u1378;
                                    }
                                    t1388 = *(int *)0xC2A9D60;
                                    u1148 = u1384;
                                    u1149 = u1385;
                                    u1150 = u1386;
                                    t1142 = t1388;
                                    t1143 = t1380;
                                    t1415 = t1143;
                                    u1419 = u1148;
                                    u1420 = u1149;
                                    u1421 = u1150;
                                    if (t1142 != 2) {
                                        if (t1146 == 0) {
                                            t1398 = t1143;
                                            u1402 = u1148;
                                            u1403 = u1149;
                                            u1404 = u1150;
                                            if (t1146 == 0) {
                                                if ((int)t1145 >= (int)0x1D) {
                                                    t1389 = FUN_0c02eb86(t1145, t1146, u1151);
                                                    t1142 = t1389;
                                                } else {
                                                    t1390 = t1143;
                                                    u1394 = u1148;
                                                    u1395 = u1149;
                                                    u1396 = u1150;
                                                }
                                                t1398 = t1390;
                                                u1402 = u1394;
                                                u1403 = u1395;
                                                u1404 = u1396;
                                            }
                                            t1407 = t1398;
                                            u1411 = u1402;
                                            u1412 = u1403;
                                            u1413 = u1404;
                                        } else {
                                            t1406 = FUN_0c02eb86(t1145, t1146, u1151);
                                            t1142 = t1406;
                                        }
                                        t1415 = t1407;
                                        u1419 = u1411;
                                        u1420 = u1412;
                                        u1421 = u1413;
                                    }
                                    t1423 = t1415;
                                    u1428 = u1419;
                                    u1429 = u1420;
                                    u1430 = u1421;
                                }
                                t1432 = t1423;
                                u1437 = u1428;
                                u1438 = u1429;
                                u1439 = u1430;
                            }
                            t1441 = t1142;
                            t1442 = t1432;
                            u1448 = u1437;
                            u1449 = u1438;
                            u1450 = u1439;
                        } else {
                            u1447 = u1147;
                        }
                        t1452 = t1441;
                        t1453 = t1442;
                        u1459 = u1447;
                        u1460 = u1448;
                        u1461 = u1449;
                        u1462 = u1450;
                    }
                    u1147 = u1459;
                    u1148 = u1460;
                    u1149 = u1461;
                    u1150 = u1462;
                    t1142 = t1452;
                    t1143 = t1453;
                    t1144 = (t1144 + 0x1);
                    continue;
                }
                break;
            }
            u1472 = u1147;
            u1473 = u1148;
            u1477 = u1149;
            u1478 = u1150;
        }
        if (t474 != 5) {
            if (t474 != 6) {
                if (t474 != 50) {
                    if (t474 != 51) {
                        if (t474 != 62) {
                            if ((int)t474 >= (int)0xD) {
                                if ((int)t474 > (int)0xF) {
                                    if ((int)t474 >= (int)0x19) {
                                        if ((int)t474 > (int)0x1C) {
                                            t1656 = t474;
                                            if ((int)t474 >= (int)0x24) {
                                                t1643 = t474;
                                                if ((int)t474 <= (int)0x28) {
                                                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                                                    *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                                    t1479 = t474;
                                                    t1480 = 0xC118600;
                                                    t1481 = 0xFE;
                                                    t1482 = 0xC118600;
                                                    t1483 = 0xC118600;
                                                    u1484 = u1472;
                                                    u1485 = u1473;
                                                    u1486 = u1477;
                                                    u1487 = u1478;
                                                    for (;;) {
                                                        t1488 = *(int *)(((int)stk + 24));
                                                        t1489 = *(int *)0xC0C8358;
                                                        if ((int)t1488 >= (int)t1489) {
                                                            break;
                                                        }
                                                        if ((int)t474 >= (int)0x25) {
                                                            if ((int)t474 <= (int)0x28) {
                                                                t1490 = *(int *)((t1482 + 0x0));
                                                                t1479 = t1490;
                                                                if (t1479 != 109) {
                                                                    t1491 = *(int *)(((int)stk + 28));
                                                                    t1479 = t1491;
                                                                    t1492 = *(int *)((t1479 + 0x0));
                                                                    t1479 = t1492;
                                                                    if (t1479 == 110) {
                                                                        if ((int)t474 >= (int)0x25) {
                                                                            if ((int)t474 > (int)0x28) {
                                                                                t1493 = *(int *)((t1483 + 0x0));
                                                                                t1479 = 0xC1EE800;
                                                                                t1494 = *(int *)((t1479 + 0x0));
                                                                                t1479 = 0xC;
                                                                                t1495 = 0;
                                                                                for (; t1495 < (int)t1479; t1495++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1495) = *(unsigned char *)((((((t1493 << 2) + t1493) << 2) + t1494) + 0x4) + t1495);
                                                                                t1481 = 0xC179840;
                                                                                t1480 = ((int)stk + 24);
                                                                                t1480 = (t1480 + 0x20);
                                                                                t1496 = nlLength(t1480, t1481);
                                                                                u1484 = t1496;
                                                                                t1481 = 0x0;
                                                                                t1497 = *(int *)((t1483 + 0x0));
                                                                                t1480 = t1497;
                                                                                t1498 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                                t1479 = t1498;
                                                                            } else {
                                                                                t1502 = t1480;
                                                                                t1503 = t1481;
                                                                                u1504 = u1484;
                                                                                u1505 = u1485;
                                                                                u1506 = u1486;
                                                                                u1507 = u1487;
                                                                            }
                                                                            t1518 = t1502;
                                                                            t1519 = t1503;
                                                                            u1520 = u1504;
                                                                            u1521 = u1505;
                                                                            u1522 = u1506;
                                                                            u1523 = u1507;
                                                                        } else {
                                                                            t1509 = *(int *)((t1483 + 0x0));
                                                                            t1479 = 0xC1EE800;
                                                                            t1510 = *(int *)((t1479 + 0x0));
                                                                            t1479 = 0xC;
                                                                            t1511 = 0;
                                                                            for (; t1511 < (int)t1479; t1511++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1511) = *(unsigned char *)((((((t1509 << 2) + t1509) << 2) + t1510) + 0x4) + t1511);
                                                                            t1481 = 0xC179840;
                                                                            t1480 = ((int)stk + 24);
                                                                            t1480 = (t1480 + 0x20);
                                                                            t1512 = nlLength(t1480, t1481);
                                                                            u1484 = t1512;
                                                                            t1481 = 0x0;
                                                                            t1513 = *(int *)((t1483 + 0x0));
                                                                            t1480 = t1513;
                                                                            t1514 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                            t1479 = t1514;
                                                                        }
                                                                        t1534 = t1518;
                                                                        t1535 = t1519;
                                                                        u1536 = u1520;
                                                                        u1537 = u1521;
                                                                        u1538 = u1522;
                                                                        u1539 = u1523;
                                                                    } else {
                                                                        t1525 = *(int *)((t1483 + 0x0));
                                                                        t1479 = 0xC1EE800;
                                                                        t1526 = *(int *)((t1479 + 0x0));
                                                                        t1479 = 0xC;
                                                                        t1527 = 0;
                                                                        for (; t1527 < (int)t1479; t1527++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1527) = *(unsigned char *)((((((t1525 << 2) + t1525) << 2) + t1526) + 0x4) + t1527);
                                                                        t1481 = 0xC179840;
                                                                        t1480 = ((int)stk + 24);
                                                                        t1480 = (t1480 + 0x20);
                                                                        t1528 = nlLength(t1480, t1481);
                                                                        u1484 = t1528;
                                                                        t1481 = 0x0;
                                                                        t1529 = *(int *)((t1483 + 0x0));
                                                                        t1480 = t1529;
                                                                        t1530 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                        t1479 = t1530;
                                                                    }
                                                                    t1576 = t1534;
                                                                    t1577 = t1535;
                                                                    u1578 = u1536;
                                                                    u1579 = u1537;
                                                                    u1580 = u1538;
                                                                    u1581 = u1539;
                                                                } else {
                                                                    if ((int)t474 >= (int)0x25) {
                                                                        if ((int)t474 > (int)0x28) {
                                                                            t1541 = *(int *)((t1483 + 0x0));
                                                                            t1479 = 0xC1EE800;
                                                                            t1542 = *(int *)((t1479 + 0x0));
                                                                            t1479 = 0xC;
                                                                            t1543 = 0;
                                                                            for (; t1543 < (int)t1479; t1543++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1543) = *(unsigned char *)((((((t1541 << 2) + t1541) << 2) + t1542) + 0x4) + t1543);
                                                                            t1481 = 0xC179840;
                                                                            t1480 = ((int)stk + 24);
                                                                            t1480 = (t1480 + 0x20);
                                                                            t1544 = nlLength(t1480, t1481);
                                                                            u1484 = t1544;
                                                                            t1481 = 0x0;
                                                                            t1545 = *(int *)((t1483 + 0x0));
                                                                            t1480 = t1545;
                                                                            t1546 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                            t1479 = t1546;
                                                                        } else {
                                                                            t1550 = t1480;
                                                                            t1551 = t1481;
                                                                            u1552 = u1484;
                                                                            u1553 = u1485;
                                                                            u1554 = u1486;
                                                                            u1555 = u1487;
                                                                        }
                                                                        t1566 = t1550;
                                                                        t1567 = t1551;
                                                                        u1568 = u1552;
                                                                        u1569 = u1553;
                                                                        u1570 = u1554;
                                                                        u1571 = u1555;
                                                                    } else {
                                                                        t1557 = *(int *)((t1483 + 0x0));
                                                                        t1479 = 0xC1EE800;
                                                                        t1558 = *(int *)((t1479 + 0x0));
                                                                        t1479 = 0xC;
                                                                        t1559 = 0;
                                                                        for (; t1559 < (int)t1479; t1559++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1559) = *(unsigned char *)((((((t1557 << 2) + t1557) << 2) + t1558) + 0x4) + t1559);
                                                                        t1481 = 0xC179840;
                                                                        t1480 = ((int)stk + 24);
                                                                        t1480 = (t1480 + 0x20);
                                                                        t1560 = nlLength(t1480, t1481);
                                                                        u1484 = t1560;
                                                                        t1481 = 0x0;
                                                                        t1561 = *(int *)((t1483 + 0x0));
                                                                        t1480 = t1561;
                                                                        t1562 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                        t1479 = t1562;
                                                                    }
                                                                    t1576 = t1566;
                                                                    t1577 = t1567;
                                                                    u1578 = u1568;
                                                                    u1579 = u1569;
                                                                    u1580 = u1570;
                                                                    u1581 = u1571;
                                                                }
                                                                t1618 = t1576;
                                                                t1619 = t1577;
                                                                u1620 = u1578;
                                                                u1621 = u1579;
                                                                u1622 = u1580;
                                                                u1623 = u1581;
                                                            } else {
                                                                if ((int)t474 >= (int)0x25) {
                                                                    if ((int)t474 > (int)0x28) {
                                                                        t1583 = *(int *)((t1483 + 0x0));
                                                                        t1479 = 0xC1EE800;
                                                                        t1584 = *(int *)((t1479 + 0x0));
                                                                        t1479 = 0xC;
                                                                        t1585 = 0;
                                                                        for (; t1585 < (int)t1479; t1585++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1585) = *(unsigned char *)((((((t1583 << 2) + t1583) << 2) + t1584) + 0x4) + t1585);
                                                                        t1481 = 0xC179840;
                                                                        t1480 = ((int)stk + 24);
                                                                        t1480 = (t1480 + 0x20);
                                                                        t1586 = nlLength(t1480, t1481);
                                                                        u1484 = t1586;
                                                                        t1481 = 0x0;
                                                                        t1587 = *(int *)((t1483 + 0x0));
                                                                        t1480 = t1587;
                                                                        t1588 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                        t1479 = t1588;
                                                                    } else {
                                                                        t1592 = t1480;
                                                                        t1593 = t1481;
                                                                        u1594 = u1484;
                                                                        u1595 = u1485;
                                                                        u1596 = u1486;
                                                                        u1597 = u1487;
                                                                    }
                                                                    t1608 = t1592;
                                                                    t1609 = t1593;
                                                                    u1610 = u1594;
                                                                    u1611 = u1595;
                                                                    u1612 = u1596;
                                                                    u1613 = u1597;
                                                                } else {
                                                                    t1599 = *(int *)((t1483 + 0x0));
                                                                    t1479 = 0xC1EE800;
                                                                    t1600 = *(int *)((t1479 + 0x0));
                                                                    t1479 = 0xC;
                                                                    t1601 = 0;
                                                                    for (; t1601 < (int)t1479; t1601++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1601) = *(unsigned char *)((((((t1599 << 2) + t1599) << 2) + t1600) + 0x4) + t1601);
                                                                    t1481 = 0xC179840;
                                                                    t1480 = ((int)stk + 24);
                                                                    t1480 = (t1480 + 0x20);
                                                                    t1602 = nlLength(t1480, t1481);
                                                                    u1484 = t1602;
                                                                    t1481 = 0x0;
                                                                    t1603 = *(int *)((t1483 + 0x0));
                                                                    t1480 = t1603;
                                                                    t1604 = FUN_0c02eb86(t1480, t1481, u1484);
                                                                    t1479 = t1604;
                                                                }
                                                                t1618 = t1608;
                                                                t1619 = t1609;
                                                                u1620 = u1610;
                                                                u1621 = u1611;
                                                                u1622 = u1612;
                                                                u1623 = u1613;
                                                            }
                                                            t1634 = t1618;
                                                            t1635 = t1619;
                                                            u1636 = u1620;
                                                            u1637 = u1621;
                                                            u1638 = u1622;
                                                            u1639 = u1623;
                                                        } else {
                                                            t1625 = *(int *)((t1483 + 0x0));
                                                            t1479 = 0xC1EE800;
                                                            t1626 = *(int *)((t1479 + 0x0));
                                                            t1479 = 0xC;
                                                            t1627 = 0;
                                                            for (; t1627 < (int)t1479; t1627++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1627) = *(unsigned char *)((((((t1625 << 2) + t1625) << 2) + t1626) + 0x4) + t1627);
                                                            t1481 = 0xC179840;
                                                            t1480 = ((int)stk + 24);
                                                            t1480 = (t1480 + 0x20);
                                                            t1628 = nlLength(t1480, t1481);
                                                            u1484 = t1628;
                                                            t1481 = 0x0;
                                                            t1629 = *(int *)((t1483 + 0x0));
                                                            t1480 = t1629;
                                                            t1630 = FUN_0c02eb86(t1480, t1481, u1484);
                                                            t1479 = t1630;
                                                        }
                                                        t1641 = *(int *)(((int)stk + 24));
                                                        u1484 = u1636;
                                                        u1485 = u1637;
                                                        u1486 = u1638;
                                                        u1487 = u1639;
                                                        t1480 = t1634;
                                                        t1481 = t1635;
                                                        t1482 = (t1482 + 0x4);
                                                        t1483 = (t1483 + 0x4);
                                                        *(unsigned int *)(((int)stk + 24)) = (t1641 + 0x1);
                                                        t1642 = *(int *)(((int)stk + 28));
                                                        *(unsigned int *)(((int)stk + 28)) = (t1642 + 0x4);
                                                    }
                                                    t1643 = t1479;
                                                }
                                                t1656 = t1643;
                                            }
                                            t1834 = t1656;
                                        } else {
                                            *(unsigned int *)(((int)stk + 24)) = 0x0;
                                            *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                            t1670 = t474;
                                            t1671 = 0xC118600;
                                            t1672 = 0xFE;
                                            t1673 = 0xC118600;
                                            t1674 = 0xC118600;
                                            u1675 = u1472;
                                            u1676 = u1473;
                                            u1677 = u1477;
                                            u1678 = u1478;
                                            for (;;) {
                                                t1679 = *(int *)(((int)stk + 24));
                                                t1680 = *(int *)0xC0C8358;
                                                if ((int)t1679 >= (int)t1680) {
                                                    break;
                                                }
                                                if ((int)t474 >= (int)0x25) {
                                                    if ((int)t474 <= (int)0x28) {
                                                        t1681 = *(int *)((t1673 + 0x0));
                                                        t1670 = t1681;
                                                        if (t1670 != 109) {
                                                            t1682 = *(int *)(((int)stk + 28));
                                                            t1670 = t1682;
                                                            t1683 = *(int *)((t1670 + 0x0));
                                                            t1670 = t1683;
                                                            if (t1670 == 110) {
                                                                if ((int)t474 >= (int)0x25) {
                                                                    if ((int)t474 > (int)0x28) {
                                                                        t1684 = *(int *)((t1674 + 0x0));
                                                                        t1670 = 0xC1EE800;
                                                                        t1685 = *(int *)((t1670 + 0x0));
                                                                        t1670 = 0xC;
                                                                        t1686 = 0;
                                                                        for (; t1686 < (int)t1670; t1686++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1686) = *(unsigned char *)((((((t1684 << 2) + t1684) << 2) + t1685) + 0x4) + t1686);
                                                                        t1672 = 0xC179840;
                                                                        t1671 = ((int)stk + 24);
                                                                        t1671 = (t1671 + 0x20);
                                                                        t1687 = nlLength(t1671, t1672);
                                                                        u1675 = t1687;
                                                                        t1672 = 0x0;
                                                                        t1688 = *(int *)((t1674 + 0x0));
                                                                        t1671 = t1688;
                                                                        t1689 = FUN_0c02eb86(t1671, t1672, u1675);
                                                                        t1670 = t1689;
                                                                    } else {
                                                                        t1693 = t1671;
                                                                        t1694 = t1672;
                                                                        u1695 = u1675;
                                                                        u1696 = u1676;
                                                                        u1697 = u1677;
                                                                        u1698 = u1678;
                                                                    }
                                                                    t1709 = t1693;
                                                                    t1710 = t1694;
                                                                    u1711 = u1695;
                                                                    u1712 = u1696;
                                                                    u1713 = u1697;
                                                                    u1714 = u1698;
                                                                } else {
                                                                    t1700 = *(int *)((t1674 + 0x0));
                                                                    t1670 = 0xC1EE800;
                                                                    t1701 = *(int *)((t1670 + 0x0));
                                                                    t1670 = 0xC;
                                                                    t1702 = 0;
                                                                    for (; t1702 < (int)t1670; t1702++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1702) = *(unsigned char *)((((((t1700 << 2) + t1700) << 2) + t1701) + 0x4) + t1702);
                                                                    t1672 = 0xC179840;
                                                                    t1671 = ((int)stk + 24);
                                                                    t1671 = (t1671 + 0x20);
                                                                    t1703 = nlLength(t1671, t1672);
                                                                    u1675 = t1703;
                                                                    t1672 = 0x0;
                                                                    t1704 = *(int *)((t1674 + 0x0));
                                                                    t1671 = t1704;
                                                                    t1705 = FUN_0c02eb86(t1671, t1672, u1675);
                                                                    t1670 = t1705;
                                                                }
                                                                t1725 = t1709;
                                                                t1726 = t1710;
                                                                u1727 = u1711;
                                                                u1728 = u1712;
                                                                u1729 = u1713;
                                                                u1730 = u1714;
                                                            } else {
                                                                t1716 = *(int *)((t1674 + 0x0));
                                                                t1670 = 0xC1EE800;
                                                                t1717 = *(int *)((t1670 + 0x0));
                                                                t1670 = 0xC;
                                                                t1718 = 0;
                                                                for (; t1718 < (int)t1670; t1718++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1718) = *(unsigned char *)((((((t1716 << 2) + t1716) << 2) + t1717) + 0x4) + t1718);
                                                                t1672 = 0xC179840;
                                                                t1671 = ((int)stk + 24);
                                                                t1671 = (t1671 + 0x20);
                                                                t1719 = nlLength(t1671, t1672);
                                                                u1675 = t1719;
                                                                t1672 = 0x0;
                                                                t1720 = *(int *)((t1674 + 0x0));
                                                                t1671 = t1720;
                                                                t1721 = FUN_0c02eb86(t1671, t1672, u1675);
                                                                t1670 = t1721;
                                                            }
                                                            t1767 = t1725;
                                                            t1768 = t1726;
                                                            u1769 = u1727;
                                                            u1770 = u1728;
                                                            u1771 = u1729;
                                                            u1772 = u1730;
                                                        } else {
                                                            if ((int)t474 >= (int)0x25) {
                                                                if ((int)t474 > (int)0x28) {
                                                                    t1732 = *(int *)((t1674 + 0x0));
                                                                    t1670 = 0xC1EE800;
                                                                    t1733 = *(int *)((t1670 + 0x0));
                                                                    t1670 = 0xC;
                                                                    t1734 = 0;
                                                                    for (; t1734 < (int)t1670; t1734++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1734) = *(unsigned char *)((((((t1732 << 2) + t1732) << 2) + t1733) + 0x4) + t1734);
                                                                    t1672 = 0xC179840;
                                                                    t1671 = ((int)stk + 24);
                                                                    t1671 = (t1671 + 0x20);
                                                                    t1735 = nlLength(t1671, t1672);
                                                                    u1675 = t1735;
                                                                    t1672 = 0x0;
                                                                    t1736 = *(int *)((t1674 + 0x0));
                                                                    t1671 = t1736;
                                                                    t1737 = FUN_0c02eb86(t1671, t1672, u1675);
                                                                    t1670 = t1737;
                                                                } else {
                                                                    t1741 = t1671;
                                                                    t1742 = t1672;
                                                                    u1743 = u1675;
                                                                    u1744 = u1676;
                                                                    u1745 = u1677;
                                                                    u1746 = u1678;
                                                                }
                                                                t1757 = t1741;
                                                                t1758 = t1742;
                                                                u1759 = u1743;
                                                                u1760 = u1744;
                                                                u1761 = u1745;
                                                                u1762 = u1746;
                                                            } else {
                                                                t1748 = *(int *)((t1674 + 0x0));
                                                                t1670 = 0xC1EE800;
                                                                t1749 = *(int *)((t1670 + 0x0));
                                                                t1670 = 0xC;
                                                                t1750 = 0;
                                                                for (; t1750 < (int)t1670; t1750++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1750) = *(unsigned char *)((((((t1748 << 2) + t1748) << 2) + t1749) + 0x4) + t1750);
                                                                t1672 = 0xC179840;
                                                                t1671 = ((int)stk + 24);
                                                                t1671 = (t1671 + 0x20);
                                                                t1751 = nlLength(t1671, t1672);
                                                                u1675 = t1751;
                                                                t1672 = 0x0;
                                                                t1752 = *(int *)((t1674 + 0x0));
                                                                t1671 = t1752;
                                                                t1753 = FUN_0c02eb86(t1671, t1672, u1675);
                                                                t1670 = t1753;
                                                            }
                                                            t1767 = t1757;
                                                            t1768 = t1758;
                                                            u1769 = u1759;
                                                            u1770 = u1760;
                                                            u1771 = u1761;
                                                            u1772 = u1762;
                                                        }
                                                        t1809 = t1767;
                                                        t1810 = t1768;
                                                        u1811 = u1769;
                                                        u1812 = u1770;
                                                        u1813 = u1771;
                                                        u1814 = u1772;
                                                    } else {
                                                        if ((int)t474 >= (int)0x25) {
                                                            if ((int)t474 > (int)0x28) {
                                                                t1774 = *(int *)((t1674 + 0x0));
                                                                t1670 = 0xC1EE800;
                                                                t1775 = *(int *)((t1670 + 0x0));
                                                                t1670 = 0xC;
                                                                t1776 = 0;
                                                                for (; t1776 < (int)t1670; t1776++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1776) = *(unsigned char *)((((((t1774 << 2) + t1774) << 2) + t1775) + 0x4) + t1776);
                                                                t1672 = 0xC179840;
                                                                t1671 = ((int)stk + 24);
                                                                t1671 = (t1671 + 0x20);
                                                                t1777 = nlLength(t1671, t1672);
                                                                u1675 = t1777;
                                                                t1672 = 0x0;
                                                                t1778 = *(int *)((t1674 + 0x0));
                                                                t1671 = t1778;
                                                                t1779 = FUN_0c02eb86(t1671, t1672, u1675);
                                                                t1670 = t1779;
                                                            } else {
                                                                t1783 = t1671;
                                                                t1784 = t1672;
                                                                u1785 = u1675;
                                                                u1786 = u1676;
                                                                u1787 = u1677;
                                                                u1788 = u1678;
                                                            }
                                                            t1799 = t1783;
                                                            t1800 = t1784;
                                                            u1801 = u1785;
                                                            u1802 = u1786;
                                                            u1803 = u1787;
                                                            u1804 = u1788;
                                                        } else {
                                                            t1790 = *(int *)((t1674 + 0x0));
                                                            t1670 = 0xC1EE800;
                                                            t1791 = *(int *)((t1670 + 0x0));
                                                            t1670 = 0xC;
                                                            t1792 = 0;
                                                            for (; t1792 < (int)t1670; t1792++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1792) = *(unsigned char *)((((((t1790 << 2) + t1790) << 2) + t1791) + 0x4) + t1792);
                                                            t1672 = 0xC179840;
                                                            t1671 = ((int)stk + 24);
                                                            t1671 = (t1671 + 0x20);
                                                            t1793 = nlLength(t1671, t1672);
                                                            u1675 = t1793;
                                                            t1672 = 0x0;
                                                            t1794 = *(int *)((t1674 + 0x0));
                                                            t1671 = t1794;
                                                            t1795 = FUN_0c02eb86(t1671, t1672, u1675);
                                                            t1670 = t1795;
                                                        }
                                                        t1809 = t1799;
                                                        t1810 = t1800;
                                                        u1811 = u1801;
                                                        u1812 = u1802;
                                                        u1813 = u1803;
                                                        u1814 = u1804;
                                                    }
                                                    t1825 = t1809;
                                                    t1826 = t1810;
                                                    u1827 = u1811;
                                                    u1828 = u1812;
                                                    u1829 = u1813;
                                                    u1830 = u1814;
                                                } else {
                                                    t1816 = *(int *)((t1674 + 0x0));
                                                    t1670 = 0xC1EE800;
                                                    t1817 = *(int *)((t1670 + 0x0));
                                                    t1670 = 0xC;
                                                    t1818 = 0;
                                                    for (; t1818 < (int)t1670; t1818++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1818) = *(unsigned char *)((((((t1816 << 2) + t1816) << 2) + t1817) + 0x4) + t1818);
                                                    t1672 = 0xC179840;
                                                    t1671 = ((int)stk + 24);
                                                    t1671 = (t1671 + 0x20);
                                                    t1819 = nlLength(t1671, t1672);
                                                    u1675 = t1819;
                                                    t1672 = 0x0;
                                                    t1820 = *(int *)((t1674 + 0x0));
                                                    t1671 = t1820;
                                                    t1821 = FUN_0c02eb86(t1671, t1672, u1675);
                                                    t1670 = t1821;
                                                }
                                                t1832 = *(int *)(((int)stk + 24));
                                                u1675 = u1827;
                                                u1676 = u1828;
                                                u1677 = u1829;
                                                u1678 = u1830;
                                                t1671 = t1825;
                                                t1672 = t1826;
                                                t1673 = (t1673 + 0x4);
                                                t1674 = (t1674 + 0x4);
                                                *(unsigned int *)(((int)stk + 24)) = (t1832 + 0x1);
                                                t1833 = *(int *)(((int)stk + 28));
                                                *(unsigned int *)(((int)stk + 28)) = (t1833 + 0x4);
                                            }
                                            t1834 = t1670;
                                        }
                                        t2038 = t1834;
                                    } else {
                                        t2024 = t474;
                                        if ((int)t474 >= (int)0x24) {
                                            t2011 = t474;
                                            if ((int)t474 <= (int)0x28) {
                                                *(unsigned int *)(((int)stk + 24)) = 0x0;
                                                *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                                t1847 = t474;
                                                t1848 = 0xC118600;
                                                t1849 = 0xFE;
                                                t1850 = 0xC118600;
                                                t1851 = 0xC118600;
                                                u1852 = u1472;
                                                u1853 = u1473;
                                                u1854 = u1477;
                                                u1855 = u1478;
                                                for (;;) {
                                                    t1856 = *(int *)(((int)stk + 24));
                                                    t1857 = *(int *)0xC0C8358;
                                                    if ((int)t1856 >= (int)t1857) {
                                                        break;
                                                    }
                                                    if ((int)t474 >= (int)0x25) {
                                                        if ((int)t474 <= (int)0x28) {
                                                            t1858 = *(int *)((t1850 + 0x0));
                                                            t1847 = t1858;
                                                            if (t1847 != 109) {
                                                                t1859 = *(int *)(((int)stk + 28));
                                                                t1847 = t1859;
                                                                t1860 = *(int *)((t1847 + 0x0));
                                                                t1847 = t1860;
                                                                if (t1847 == 110) {
                                                                    if ((int)t474 >= (int)0x25) {
                                                                        if ((int)t474 > (int)0x28) {
                                                                            t1861 = *(int *)((t1851 + 0x0));
                                                                            t1847 = 0xC1EE800;
                                                                            t1862 = *(int *)((t1847 + 0x0));
                                                                            t1847 = 0xC;
                                                                            t1863 = 0;
                                                                            for (; t1863 < (int)t1847; t1863++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1863) = *(unsigned char *)((((((t1861 << 2) + t1861) << 2) + t1862) + 0x4) + t1863);
                                                                            t1849 = 0xC179840;
                                                                            t1848 = ((int)stk + 24);
                                                                            t1848 = (t1848 + 0x20);
                                                                            t1864 = nlLength(t1848, t1849);
                                                                            u1852 = t1864;
                                                                            t1849 = 0x0;
                                                                            t1865 = *(int *)((t1851 + 0x0));
                                                                            t1848 = t1865;
                                                                            t1866 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                            t1847 = t1866;
                                                                        } else {
                                                                            t1870 = t1848;
                                                                            t1871 = t1849;
                                                                            u1872 = u1852;
                                                                            u1873 = u1853;
                                                                            u1874 = u1854;
                                                                            u1875 = u1855;
                                                                        }
                                                                        t1886 = t1870;
                                                                        t1887 = t1871;
                                                                        u1888 = u1872;
                                                                        u1889 = u1873;
                                                                        u1890 = u1874;
                                                                        u1891 = u1875;
                                                                    } else {
                                                                        t1877 = *(int *)((t1851 + 0x0));
                                                                        t1847 = 0xC1EE800;
                                                                        t1878 = *(int *)((t1847 + 0x0));
                                                                        t1847 = 0xC;
                                                                        t1879 = 0;
                                                                        for (; t1879 < (int)t1847; t1879++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1879) = *(unsigned char *)((((((t1877 << 2) + t1877) << 2) + t1878) + 0x4) + t1879);
                                                                        t1849 = 0xC179840;
                                                                        t1848 = ((int)stk + 24);
                                                                        t1848 = (t1848 + 0x20);
                                                                        t1880 = nlLength(t1848, t1849);
                                                                        u1852 = t1880;
                                                                        t1849 = 0x0;
                                                                        t1881 = *(int *)((t1851 + 0x0));
                                                                        t1848 = t1881;
                                                                        t1882 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                        t1847 = t1882;
                                                                    }
                                                                    t1902 = t1886;
                                                                    t1903 = t1887;
                                                                    u1904 = u1888;
                                                                    u1905 = u1889;
                                                                    u1906 = u1890;
                                                                    u1907 = u1891;
                                                                } else {
                                                                    t1893 = *(int *)((t1851 + 0x0));
                                                                    t1847 = 0xC1EE800;
                                                                    t1894 = *(int *)((t1847 + 0x0));
                                                                    t1847 = 0xC;
                                                                    t1895 = 0;
                                                                    for (; t1895 < (int)t1847; t1895++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1895) = *(unsigned char *)((((((t1893 << 2) + t1893) << 2) + t1894) + 0x4) + t1895);
                                                                    t1849 = 0xC179840;
                                                                    t1848 = ((int)stk + 24);
                                                                    t1848 = (t1848 + 0x20);
                                                                    t1896 = nlLength(t1848, t1849);
                                                                    u1852 = t1896;
                                                                    t1849 = 0x0;
                                                                    t1897 = *(int *)((t1851 + 0x0));
                                                                    t1848 = t1897;
                                                                    t1898 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                    t1847 = t1898;
                                                                }
                                                                t1944 = t1902;
                                                                t1945 = t1903;
                                                                u1946 = u1904;
                                                                u1947 = u1905;
                                                                u1948 = u1906;
                                                                u1949 = u1907;
                                                            } else {
                                                                if ((int)t474 >= (int)0x25) {
                                                                    if ((int)t474 > (int)0x28) {
                                                                        t1909 = *(int *)((t1851 + 0x0));
                                                                        t1847 = 0xC1EE800;
                                                                        t1910 = *(int *)((t1847 + 0x0));
                                                                        t1847 = 0xC;
                                                                        t1911 = 0;
                                                                        for (; t1911 < (int)t1847; t1911++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1911) = *(unsigned char *)((((((t1909 << 2) + t1909) << 2) + t1910) + 0x4) + t1911);
                                                                        t1849 = 0xC179840;
                                                                        t1848 = ((int)stk + 24);
                                                                        t1848 = (t1848 + 0x20);
                                                                        t1912 = nlLength(t1848, t1849);
                                                                        u1852 = t1912;
                                                                        t1849 = 0x0;
                                                                        t1913 = *(int *)((t1851 + 0x0));
                                                                        t1848 = t1913;
                                                                        t1914 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                        t1847 = t1914;
                                                                    } else {
                                                                        t1918 = t1848;
                                                                        t1919 = t1849;
                                                                        u1920 = u1852;
                                                                        u1921 = u1853;
                                                                        u1922 = u1854;
                                                                        u1923 = u1855;
                                                                    }
                                                                    t1934 = t1918;
                                                                    t1935 = t1919;
                                                                    u1936 = u1920;
                                                                    u1937 = u1921;
                                                                    u1938 = u1922;
                                                                    u1939 = u1923;
                                                                } else {
                                                                    t1925 = *(int *)((t1851 + 0x0));
                                                                    t1847 = 0xC1EE800;
                                                                    t1926 = *(int *)((t1847 + 0x0));
                                                                    t1847 = 0xC;
                                                                    t1927 = 0;
                                                                    for (; t1927 < (int)t1847; t1927++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1927) = *(unsigned char *)((((((t1925 << 2) + t1925) << 2) + t1926) + 0x4) + t1927);
                                                                    t1849 = 0xC179840;
                                                                    t1848 = ((int)stk + 24);
                                                                    t1848 = (t1848 + 0x20);
                                                                    t1928 = nlLength(t1848, t1849);
                                                                    u1852 = t1928;
                                                                    t1849 = 0x0;
                                                                    t1929 = *(int *)((t1851 + 0x0));
                                                                    t1848 = t1929;
                                                                    t1930 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                    t1847 = t1930;
                                                                }
                                                                t1944 = t1934;
                                                                t1945 = t1935;
                                                                u1946 = u1936;
                                                                u1947 = u1937;
                                                                u1948 = u1938;
                                                                u1949 = u1939;
                                                            }
                                                            t1986 = t1944;
                                                            t1987 = t1945;
                                                            u1988 = u1946;
                                                            u1989 = u1947;
                                                            u1990 = u1948;
                                                            u1991 = u1949;
                                                        } else {
                                                            if ((int)t474 >= (int)0x25) {
                                                                if ((int)t474 > (int)0x28) {
                                                                    t1951 = *(int *)((t1851 + 0x0));
                                                                    t1847 = 0xC1EE800;
                                                                    t1952 = *(int *)((t1847 + 0x0));
                                                                    t1847 = 0xC;
                                                                    t1953 = 0;
                                                                    for (; t1953 < (int)t1847; t1953++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1953) = *(unsigned char *)((((((t1951 << 2) + t1951) << 2) + t1952) + 0x4) + t1953);
                                                                    t1849 = 0xC179840;
                                                                    t1848 = ((int)stk + 24);
                                                                    t1848 = (t1848 + 0x20);
                                                                    t1954 = nlLength(t1848, t1849);
                                                                    u1852 = t1954;
                                                                    t1849 = 0x0;
                                                                    t1955 = *(int *)((t1851 + 0x0));
                                                                    t1848 = t1955;
                                                                    t1956 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                    t1847 = t1956;
                                                                } else {
                                                                    t1960 = t1848;
                                                                    t1961 = t1849;
                                                                    u1962 = u1852;
                                                                    u1963 = u1853;
                                                                    u1964 = u1854;
                                                                    u1965 = u1855;
                                                                }
                                                                t1976 = t1960;
                                                                t1977 = t1961;
                                                                u1978 = u1962;
                                                                u1979 = u1963;
                                                                u1980 = u1964;
                                                                u1981 = u1965;
                                                            } else {
                                                                t1967 = *(int *)((t1851 + 0x0));
                                                                t1847 = 0xC1EE800;
                                                                t1968 = *(int *)((t1847 + 0x0));
                                                                t1847 = 0xC;
                                                                t1969 = 0;
                                                                for (; t1969 < (int)t1847; t1969++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1969) = *(unsigned char *)((((((t1967 << 2) + t1967) << 2) + t1968) + 0x4) + t1969);
                                                                t1849 = 0xC179840;
                                                                t1848 = ((int)stk + 24);
                                                                t1848 = (t1848 + 0x20);
                                                                t1970 = nlLength(t1848, t1849);
                                                                u1852 = t1970;
                                                                t1849 = 0x0;
                                                                t1971 = *(int *)((t1851 + 0x0));
                                                                t1848 = t1971;
                                                                t1972 = FUN_0c02eb86(t1848, t1849, u1852);
                                                                t1847 = t1972;
                                                            }
                                                            t1986 = t1976;
                                                            t1987 = t1977;
                                                            u1988 = u1978;
                                                            u1989 = u1979;
                                                            u1990 = u1980;
                                                            u1991 = u1981;
                                                        }
                                                        t2002 = t1986;
                                                        t2003 = t1987;
                                                        u2004 = u1988;
                                                        u2005 = u1989;
                                                        u2006 = u1990;
                                                        u2007 = u1991;
                                                    } else {
                                                        t1993 = *(int *)((t1851 + 0x0));
                                                        t1847 = 0xC1EE800;
                                                        t1994 = *(int *)((t1847 + 0x0));
                                                        t1847 = 0xC;
                                                        t1995 = 0;
                                                        for (; t1995 < (int)t1847; t1995++) *(unsigned char *)((((int)stk + 24) + 0x20) + t1995) = *(unsigned char *)((((((t1993 << 2) + t1993) << 2) + t1994) + 0x4) + t1995);
                                                        t1849 = 0xC179840;
                                                        t1848 = ((int)stk + 24);
                                                        t1848 = (t1848 + 0x20);
                                                        t1996 = nlLength(t1848, t1849);
                                                        u1852 = t1996;
                                                        t1849 = 0x0;
                                                        t1997 = *(int *)((t1851 + 0x0));
                                                        t1848 = t1997;
                                                        t1998 = FUN_0c02eb86(t1848, t1849, u1852);
                                                        t1847 = t1998;
                                                    }
                                                    t2009 = *(int *)(((int)stk + 24));
                                                    u1852 = u2004;
                                                    u1853 = u2005;
                                                    u1854 = u2006;
                                                    u1855 = u2007;
                                                    t1848 = t2002;
                                                    t1849 = t2003;
                                                    t1850 = (t1850 + 0x4);
                                                    t1851 = (t1851 + 0x4);
                                                    *(unsigned int *)(((int)stk + 24)) = (t2009 + 0x1);
                                                    t2010 = *(int *)(((int)stk + 28));
                                                    *(unsigned int *)(((int)stk + 28)) = (t2010 + 0x4);
                                                }
                                                t2011 = t1847;
                                            }
                                            t2024 = t2011;
                                        }
                                        t2038 = t2024;
                                    }
                                    t2216 = t2038;
                                } else {
                                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                                    *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                    t2052 = t474;
                                    t2053 = 0xC118600;
                                    t2054 = 0xFE;
                                    t2055 = 0xC118600;
                                    t2056 = 0xC118600;
                                    u2057 = u1472;
                                    u2058 = u1473;
                                    u2059 = u1477;
                                    u2060 = u1478;
                                    for (;;) {
                                        t2061 = *(int *)(((int)stk + 24));
                                        t2062 = *(int *)0xC0C8358;
                                        if ((int)t2061 >= (int)t2062) {
                                            break;
                                        }
                                        if ((int)t474 >= (int)0x25) {
                                            if ((int)t474 <= (int)0x28) {
                                                t2063 = *(int *)((t2055 + 0x0));
                                                t2052 = t2063;
                                                if (t2052 != 109) {
                                                    t2064 = *(int *)(((int)stk + 28));
                                                    t2052 = t2064;
                                                    t2065 = *(int *)((t2052 + 0x0));
                                                    t2052 = t2065;
                                                    if (t2052 == 110) {
                                                        if ((int)t474 >= (int)0x25) {
                                                            if ((int)t474 > (int)0x28) {
                                                                t2066 = *(int *)((t2056 + 0x0));
                                                                t2052 = 0xC1EE800;
                                                                t2067 = *(int *)((t2052 + 0x0));
                                                                t2052 = 0xC;
                                                                t2068 = 0;
                                                                for (; t2068 < (int)t2052; t2068++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2068) = *(unsigned char *)((((((t2066 << 2) + t2066) << 2) + t2067) + 0x4) + t2068);
                                                                t2054 = 0xC179840;
                                                                t2053 = ((int)stk + 24);
                                                                t2053 = (t2053 + 0x20);
                                                                t2069 = nlLength(t2053, t2054);
                                                                u2057 = t2069;
                                                                t2054 = 0x0;
                                                                t2070 = *(int *)((t2056 + 0x0));
                                                                t2053 = t2070;
                                                                t2071 = FUN_0c02eb86(t2053, t2054, u2057);
                                                                t2052 = t2071;
                                                            } else {
                                                                t2075 = t2053;
                                                                t2076 = t2054;
                                                                u2077 = u2057;
                                                                u2078 = u2058;
                                                                u2079 = u2059;
                                                                u2080 = u2060;
                                                            }
                                                            t2091 = t2075;
                                                            t2092 = t2076;
                                                            u2093 = u2077;
                                                            u2094 = u2078;
                                                            u2095 = u2079;
                                                            u2096 = u2080;
                                                        } else {
                                                            t2082 = *(int *)((t2056 + 0x0));
                                                            t2052 = 0xC1EE800;
                                                            t2083 = *(int *)((t2052 + 0x0));
                                                            t2052 = 0xC;
                                                            t2084 = 0;
                                                            for (; t2084 < (int)t2052; t2084++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2084) = *(unsigned char *)((((((t2082 << 2) + t2082) << 2) + t2083) + 0x4) + t2084);
                                                            t2054 = 0xC179840;
                                                            t2053 = ((int)stk + 24);
                                                            t2053 = (t2053 + 0x20);
                                                            t2085 = nlLength(t2053, t2054);
                                                            u2057 = t2085;
                                                            t2054 = 0x0;
                                                            t2086 = *(int *)((t2056 + 0x0));
                                                            t2053 = t2086;
                                                            t2087 = FUN_0c02eb86(t2053, t2054, u2057);
                                                            t2052 = t2087;
                                                        }
                                                        t2107 = t2091;
                                                        t2108 = t2092;
                                                        u2109 = u2093;
                                                        u2110 = u2094;
                                                        u2111 = u2095;
                                                        u2112 = u2096;
                                                    } else {
                                                        t2098 = *(int *)((t2056 + 0x0));
                                                        t2052 = 0xC1EE800;
                                                        t2099 = *(int *)((t2052 + 0x0));
                                                        t2052 = 0xC;
                                                        t2100 = 0;
                                                        for (; t2100 < (int)t2052; t2100++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2100) = *(unsigned char *)((((((t2098 << 2) + t2098) << 2) + t2099) + 0x4) + t2100);
                                                        t2054 = 0xC179840;
                                                        t2053 = ((int)stk + 24);
                                                        t2053 = (t2053 + 0x20);
                                                        t2101 = nlLength(t2053, t2054);
                                                        u2057 = t2101;
                                                        t2054 = 0x0;
                                                        t2102 = *(int *)((t2056 + 0x0));
                                                        t2053 = t2102;
                                                        t2103 = FUN_0c02eb86(t2053, t2054, u2057);
                                                        t2052 = t2103;
                                                    }
                                                    t2149 = t2107;
                                                    t2150 = t2108;
                                                    u2151 = u2109;
                                                    u2152 = u2110;
                                                    u2153 = u2111;
                                                    u2154 = u2112;
                                                } else {
                                                    if ((int)t474 >= (int)0x25) {
                                                        if ((int)t474 > (int)0x28) {
                                                            t2114 = *(int *)((t2056 + 0x0));
                                                            t2052 = 0xC1EE800;
                                                            t2115 = *(int *)((t2052 + 0x0));
                                                            t2052 = 0xC;
                                                            t2116 = 0;
                                                            for (; t2116 < (int)t2052; t2116++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2116) = *(unsigned char *)((((((t2114 << 2) + t2114) << 2) + t2115) + 0x4) + t2116);
                                                            t2054 = 0xC179840;
                                                            t2053 = ((int)stk + 24);
                                                            t2053 = (t2053 + 0x20);
                                                            t2117 = nlLength(t2053, t2054);
                                                            u2057 = t2117;
                                                            t2054 = 0x0;
                                                            t2118 = *(int *)((t2056 + 0x0));
                                                            t2053 = t2118;
                                                            t2119 = FUN_0c02eb86(t2053, t2054, u2057);
                                                            t2052 = t2119;
                                                        } else {
                                                            t2123 = t2053;
                                                            t2124 = t2054;
                                                            u2125 = u2057;
                                                            u2126 = u2058;
                                                            u2127 = u2059;
                                                            u2128 = u2060;
                                                        }
                                                        t2139 = t2123;
                                                        t2140 = t2124;
                                                        u2141 = u2125;
                                                        u2142 = u2126;
                                                        u2143 = u2127;
                                                        u2144 = u2128;
                                                    } else {
                                                        t2130 = *(int *)((t2056 + 0x0));
                                                        t2052 = 0xC1EE800;
                                                        t2131 = *(int *)((t2052 + 0x0));
                                                        t2052 = 0xC;
                                                        t2132 = 0;
                                                        for (; t2132 < (int)t2052; t2132++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2132) = *(unsigned char *)((((((t2130 << 2) + t2130) << 2) + t2131) + 0x4) + t2132);
                                                        t2054 = 0xC179840;
                                                        t2053 = ((int)stk + 24);
                                                        t2053 = (t2053 + 0x20);
                                                        t2133 = nlLength(t2053, t2054);
                                                        u2057 = t2133;
                                                        t2054 = 0x0;
                                                        t2134 = *(int *)((t2056 + 0x0));
                                                        t2053 = t2134;
                                                        t2135 = FUN_0c02eb86(t2053, t2054, u2057);
                                                        t2052 = t2135;
                                                    }
                                                    t2149 = t2139;
                                                    t2150 = t2140;
                                                    u2151 = u2141;
                                                    u2152 = u2142;
                                                    u2153 = u2143;
                                                    u2154 = u2144;
                                                }
                                                t2191 = t2149;
                                                t2192 = t2150;
                                                u2193 = u2151;
                                                u2194 = u2152;
                                                u2195 = u2153;
                                                u2196 = u2154;
                                            } else {
                                                if ((int)t474 >= (int)0x25) {
                                                    if ((int)t474 > (int)0x28) {
                                                        t2156 = *(int *)((t2056 + 0x0));
                                                        t2052 = 0xC1EE800;
                                                        t2157 = *(int *)((t2052 + 0x0));
                                                        t2052 = 0xC;
                                                        t2158 = 0;
                                                        for (; t2158 < (int)t2052; t2158++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2158) = *(unsigned char *)((((((t2156 << 2) + t2156) << 2) + t2157) + 0x4) + t2158);
                                                        t2054 = 0xC179840;
                                                        t2053 = ((int)stk + 24);
                                                        t2053 = (t2053 + 0x20);
                                                        t2159 = nlLength(t2053, t2054);
                                                        u2057 = t2159;
                                                        t2054 = 0x0;
                                                        t2160 = *(int *)((t2056 + 0x0));
                                                        t2053 = t2160;
                                                        t2161 = FUN_0c02eb86(t2053, t2054, u2057);
                                                        t2052 = t2161;
                                                    } else {
                                                        t2165 = t2053;
                                                        t2166 = t2054;
                                                        u2167 = u2057;
                                                        u2168 = u2058;
                                                        u2169 = u2059;
                                                        u2170 = u2060;
                                                    }
                                                    t2181 = t2165;
                                                    t2182 = t2166;
                                                    u2183 = u2167;
                                                    u2184 = u2168;
                                                    u2185 = u2169;
                                                    u2186 = u2170;
                                                } else {
                                                    t2172 = *(int *)((t2056 + 0x0));
                                                    t2052 = 0xC1EE800;
                                                    t2173 = *(int *)((t2052 + 0x0));
                                                    t2052 = 0xC;
                                                    t2174 = 0;
                                                    for (; t2174 < (int)t2052; t2174++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2174) = *(unsigned char *)((((((t2172 << 2) + t2172) << 2) + t2173) + 0x4) + t2174);
                                                    t2054 = 0xC179840;
                                                    t2053 = ((int)stk + 24);
                                                    t2053 = (t2053 + 0x20);
                                                    t2175 = nlLength(t2053, t2054);
                                                    u2057 = t2175;
                                                    t2054 = 0x0;
                                                    t2176 = *(int *)((t2056 + 0x0));
                                                    t2053 = t2176;
                                                    t2177 = FUN_0c02eb86(t2053, t2054, u2057);
                                                    t2052 = t2177;
                                                }
                                                t2191 = t2181;
                                                t2192 = t2182;
                                                u2193 = u2183;
                                                u2194 = u2184;
                                                u2195 = u2185;
                                                u2196 = u2186;
                                            }
                                            t2207 = t2191;
                                            t2208 = t2192;
                                            u2209 = u2193;
                                            u2210 = u2194;
                                            u2211 = u2195;
                                            u2212 = u2196;
                                        } else {
                                            t2198 = *(int *)((t2056 + 0x0));
                                            t2052 = 0xC1EE800;
                                            t2199 = *(int *)((t2052 + 0x0));
                                            t2052 = 0xC;
                                            t2200 = 0;
                                            for (; t2200 < (int)t2052; t2200++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2200) = *(unsigned char *)((((((t2198 << 2) + t2198) << 2) + t2199) + 0x4) + t2200);
                                            t2054 = 0xC179840;
                                            t2053 = ((int)stk + 24);
                                            t2053 = (t2053 + 0x20);
                                            t2201 = nlLength(t2053, t2054);
                                            u2057 = t2201;
                                            t2054 = 0x0;
                                            t2202 = *(int *)((t2056 + 0x0));
                                            t2053 = t2202;
                                            t2203 = FUN_0c02eb86(t2053, t2054, u2057);
                                            t2052 = t2203;
                                        }
                                        t2214 = *(int *)(((int)stk + 24));
                                        u2057 = u2209;
                                        u2058 = u2210;
                                        u2059 = u2211;
                                        u2060 = u2212;
                                        t2053 = t2207;
                                        t2054 = t2208;
                                        t2055 = (t2055 + 0x4);
                                        t2056 = (t2056 + 0x4);
                                        *(unsigned int *)(((int)stk + 24)) = (t2214 + 0x1);
                                        t2215 = *(int *)(((int)stk + 28));
                                        *(unsigned int *)(((int)stk + 28)) = (t2215 + 0x4);
                                    }
                                    t2216 = t2052;
                                }
                                t2802 = t2216;
                            } else {
                                if ((int)t474 >= (int)0x19) {
                                    if ((int)t474 > (int)0x1C) {
                                        t2406 = t474;
                                        if ((int)t474 >= (int)0x24) {
                                            t2393 = t474;
                                            if ((int)t474 <= (int)0x28) {
                                                *(unsigned int *)(((int)stk + 24)) = 0x0;
                                                *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                                t2229 = t474;
                                                t2230 = 0xC118600;
                                                t2231 = 0xFE;
                                                t2232 = 0xC118600;
                                                t2233 = 0xC118600;
                                                u2234 = u1472;
                                                u2235 = u1473;
                                                u2236 = u1477;
                                                u2237 = u1478;
                                                for (;;) {
                                                    t2238 = *(int *)(((int)stk + 24));
                                                    t2239 = *(int *)0xC0C8358;
                                                    if ((int)t2238 >= (int)t2239) {
                                                        break;
                                                    }
                                                    if ((int)t474 >= (int)0x25) {
                                                        if ((int)t474 <= (int)0x28) {
                                                            t2240 = *(int *)((t2232 + 0x0));
                                                            t2229 = t2240;
                                                            if (t2229 != 109) {
                                                                t2241 = *(int *)(((int)stk + 28));
                                                                t2229 = t2241;
                                                                t2242 = *(int *)((t2229 + 0x0));
                                                                t2229 = t2242;
                                                                if (t2229 == 110) {
                                                                    if ((int)t474 >= (int)0x25) {
                                                                        if ((int)t474 > (int)0x28) {
                                                                            t2243 = *(int *)((t2233 + 0x0));
                                                                            t2229 = 0xC1EE800;
                                                                            t2244 = *(int *)((t2229 + 0x0));
                                                                            t2229 = 0xC;
                                                                            t2245 = 0;
                                                                            for (; t2245 < (int)t2229; t2245++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2245) = *(unsigned char *)((((((t2243 << 2) + t2243) << 2) + t2244) + 0x4) + t2245);
                                                                            t2231 = 0xC179840;
                                                                            t2230 = ((int)stk + 24);
                                                                            t2230 = (t2230 + 0x20);
                                                                            t2246 = nlLength(t2230, t2231);
                                                                            u2234 = t2246;
                                                                            t2231 = 0x0;
                                                                            t2247 = *(int *)((t2233 + 0x0));
                                                                            t2230 = t2247;
                                                                            t2248 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                            t2229 = t2248;
                                                                        } else {
                                                                            t2252 = t2230;
                                                                            t2253 = t2231;
                                                                            u2254 = u2234;
                                                                            u2255 = u2235;
                                                                            u2256 = u2236;
                                                                            u2257 = u2237;
                                                                        }
                                                                        t2268 = t2252;
                                                                        t2269 = t2253;
                                                                        u2270 = u2254;
                                                                        u2271 = u2255;
                                                                        u2272 = u2256;
                                                                        u2273 = u2257;
                                                                    } else {
                                                                        t2259 = *(int *)((t2233 + 0x0));
                                                                        t2229 = 0xC1EE800;
                                                                        t2260 = *(int *)((t2229 + 0x0));
                                                                        t2229 = 0xC;
                                                                        t2261 = 0;
                                                                        for (; t2261 < (int)t2229; t2261++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2261) = *(unsigned char *)((((((t2259 << 2) + t2259) << 2) + t2260) + 0x4) + t2261);
                                                                        t2231 = 0xC179840;
                                                                        t2230 = ((int)stk + 24);
                                                                        t2230 = (t2230 + 0x20);
                                                                        t2262 = nlLength(t2230, t2231);
                                                                        u2234 = t2262;
                                                                        t2231 = 0x0;
                                                                        t2263 = *(int *)((t2233 + 0x0));
                                                                        t2230 = t2263;
                                                                        t2264 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                        t2229 = t2264;
                                                                    }
                                                                    t2284 = t2268;
                                                                    t2285 = t2269;
                                                                    u2286 = u2270;
                                                                    u2287 = u2271;
                                                                    u2288 = u2272;
                                                                    u2289 = u2273;
                                                                } else {
                                                                    t2275 = *(int *)((t2233 + 0x0));
                                                                    t2229 = 0xC1EE800;
                                                                    t2276 = *(int *)((t2229 + 0x0));
                                                                    t2229 = 0xC;
                                                                    t2277 = 0;
                                                                    for (; t2277 < (int)t2229; t2277++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2277) = *(unsigned char *)((((((t2275 << 2) + t2275) << 2) + t2276) + 0x4) + t2277);
                                                                    t2231 = 0xC179840;
                                                                    t2230 = ((int)stk + 24);
                                                                    t2230 = (t2230 + 0x20);
                                                                    t2278 = nlLength(t2230, t2231);
                                                                    u2234 = t2278;
                                                                    t2231 = 0x0;
                                                                    t2279 = *(int *)((t2233 + 0x0));
                                                                    t2230 = t2279;
                                                                    t2280 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                    t2229 = t2280;
                                                                }
                                                                t2326 = t2284;
                                                                t2327 = t2285;
                                                                u2328 = u2286;
                                                                u2329 = u2287;
                                                                u2330 = u2288;
                                                                u2331 = u2289;
                                                            } else {
                                                                if ((int)t474 >= (int)0x25) {
                                                                    if ((int)t474 > (int)0x28) {
                                                                        t2291 = *(int *)((t2233 + 0x0));
                                                                        t2229 = 0xC1EE800;
                                                                        t2292 = *(int *)((t2229 + 0x0));
                                                                        t2229 = 0xC;
                                                                        t2293 = 0;
                                                                        for (; t2293 < (int)t2229; t2293++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2293) = *(unsigned char *)((((((t2291 << 2) + t2291) << 2) + t2292) + 0x4) + t2293);
                                                                        t2231 = 0xC179840;
                                                                        t2230 = ((int)stk + 24);
                                                                        t2230 = (t2230 + 0x20);
                                                                        t2294 = nlLength(t2230, t2231);
                                                                        u2234 = t2294;
                                                                        t2231 = 0x0;
                                                                        t2295 = *(int *)((t2233 + 0x0));
                                                                        t2230 = t2295;
                                                                        t2296 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                        t2229 = t2296;
                                                                    } else {
                                                                        t2300 = t2230;
                                                                        t2301 = t2231;
                                                                        u2302 = u2234;
                                                                        u2303 = u2235;
                                                                        u2304 = u2236;
                                                                        u2305 = u2237;
                                                                    }
                                                                    t2316 = t2300;
                                                                    t2317 = t2301;
                                                                    u2318 = u2302;
                                                                    u2319 = u2303;
                                                                    u2320 = u2304;
                                                                    u2321 = u2305;
                                                                } else {
                                                                    t2307 = *(int *)((t2233 + 0x0));
                                                                    t2229 = 0xC1EE800;
                                                                    t2308 = *(int *)((t2229 + 0x0));
                                                                    t2229 = 0xC;
                                                                    t2309 = 0;
                                                                    for (; t2309 < (int)t2229; t2309++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2309) = *(unsigned char *)((((((t2307 << 2) + t2307) << 2) + t2308) + 0x4) + t2309);
                                                                    t2231 = 0xC179840;
                                                                    t2230 = ((int)stk + 24);
                                                                    t2230 = (t2230 + 0x20);
                                                                    t2310 = nlLength(t2230, t2231);
                                                                    u2234 = t2310;
                                                                    t2231 = 0x0;
                                                                    t2311 = *(int *)((t2233 + 0x0));
                                                                    t2230 = t2311;
                                                                    t2312 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                    t2229 = t2312;
                                                                }
                                                                t2326 = t2316;
                                                                t2327 = t2317;
                                                                u2328 = u2318;
                                                                u2329 = u2319;
                                                                u2330 = u2320;
                                                                u2331 = u2321;
                                                            }
                                                            t2368 = t2326;
                                                            t2369 = t2327;
                                                            u2370 = u2328;
                                                            u2371 = u2329;
                                                            u2372 = u2330;
                                                            u2373 = u2331;
                                                        } else {
                                                            if ((int)t474 >= (int)0x25) {
                                                                if ((int)t474 > (int)0x28) {
                                                                    t2333 = *(int *)((t2233 + 0x0));
                                                                    t2229 = 0xC1EE800;
                                                                    t2334 = *(int *)((t2229 + 0x0));
                                                                    t2229 = 0xC;
                                                                    t2335 = 0;
                                                                    for (; t2335 < (int)t2229; t2335++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2335) = *(unsigned char *)((((((t2333 << 2) + t2333) << 2) + t2334) + 0x4) + t2335);
                                                                    t2231 = 0xC179840;
                                                                    t2230 = ((int)stk + 24);
                                                                    t2230 = (t2230 + 0x20);
                                                                    t2336 = nlLength(t2230, t2231);
                                                                    u2234 = t2336;
                                                                    t2231 = 0x0;
                                                                    t2337 = *(int *)((t2233 + 0x0));
                                                                    t2230 = t2337;
                                                                    t2338 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                    t2229 = t2338;
                                                                } else {
                                                                    t2342 = t2230;
                                                                    t2343 = t2231;
                                                                    u2344 = u2234;
                                                                    u2345 = u2235;
                                                                    u2346 = u2236;
                                                                    u2347 = u2237;
                                                                }
                                                                t2358 = t2342;
                                                                t2359 = t2343;
                                                                u2360 = u2344;
                                                                u2361 = u2345;
                                                                u2362 = u2346;
                                                                u2363 = u2347;
                                                            } else {
                                                                t2349 = *(int *)((t2233 + 0x0));
                                                                t2229 = 0xC1EE800;
                                                                t2350 = *(int *)((t2229 + 0x0));
                                                                t2229 = 0xC;
                                                                t2351 = 0;
                                                                for (; t2351 < (int)t2229; t2351++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2351) = *(unsigned char *)((((((t2349 << 2) + t2349) << 2) + t2350) + 0x4) + t2351);
                                                                t2231 = 0xC179840;
                                                                t2230 = ((int)stk + 24);
                                                                t2230 = (t2230 + 0x20);
                                                                t2352 = nlLength(t2230, t2231);
                                                                u2234 = t2352;
                                                                t2231 = 0x0;
                                                                t2353 = *(int *)((t2233 + 0x0));
                                                                t2230 = t2353;
                                                                t2354 = FUN_0c02eb86(t2230, t2231, u2234);
                                                                t2229 = t2354;
                                                            }
                                                            t2368 = t2358;
                                                            t2369 = t2359;
                                                            u2370 = u2360;
                                                            u2371 = u2361;
                                                            u2372 = u2362;
                                                            u2373 = u2363;
                                                        }
                                                        t2384 = t2368;
                                                        t2385 = t2369;
                                                        u2386 = u2370;
                                                        u2387 = u2371;
                                                        u2388 = u2372;
                                                        u2389 = u2373;
                                                    } else {
                                                        t2375 = *(int *)((t2233 + 0x0));
                                                        t2229 = 0xC1EE800;
                                                        t2376 = *(int *)((t2229 + 0x0));
                                                        t2229 = 0xC;
                                                        t2377 = 0;
                                                        for (; t2377 < (int)t2229; t2377++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2377) = *(unsigned char *)((((((t2375 << 2) + t2375) << 2) + t2376) + 0x4) + t2377);
                                                        t2231 = 0xC179840;
                                                        t2230 = ((int)stk + 24);
                                                        t2230 = (t2230 + 0x20);
                                                        t2378 = nlLength(t2230, t2231);
                                                        u2234 = t2378;
                                                        t2231 = 0x0;
                                                        t2379 = *(int *)((t2233 + 0x0));
                                                        t2230 = t2379;
                                                        t2380 = FUN_0c02eb86(t2230, t2231, u2234);
                                                        t2229 = t2380;
                                                    }
                                                    t2391 = *(int *)(((int)stk + 24));
                                                    u2234 = u2386;
                                                    u2235 = u2387;
                                                    u2236 = u2388;
                                                    u2237 = u2389;
                                                    t2230 = t2384;
                                                    t2231 = t2385;
                                                    t2232 = (t2232 + 0x4);
                                                    t2233 = (t2233 + 0x4);
                                                    *(unsigned int *)(((int)stk + 24)) = (t2391 + 0x1);
                                                    t2392 = *(int *)(((int)stk + 28));
                                                    *(unsigned int *)(((int)stk + 28)) = (t2392 + 0x4);
                                                }
                                                t2393 = t2229;
                                            }
                                            t2406 = t2393;
                                        }
                                        t2584 = t2406;
                                    } else {
                                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                                        *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                        t2420 = t474;
                                        t2421 = 0xC118600;
                                        t2422 = 0xFE;
                                        t2423 = 0xC118600;
                                        t2424 = 0xC118600;
                                        u2425 = u1472;
                                        u2426 = u1473;
                                        u2427 = u1477;
                                        u2428 = u1478;
                                        for (;;) {
                                            t2429 = *(int *)(((int)stk + 24));
                                            t2430 = *(int *)0xC0C8358;
                                            if ((int)t2429 >= (int)t2430) {
                                                break;
                                            }
                                            if ((int)t474 >= (int)0x25) {
                                                if ((int)t474 <= (int)0x28) {
                                                    t2431 = *(int *)((t2423 + 0x0));
                                                    t2420 = t2431;
                                                    if (t2420 != 109) {
                                                        t2432 = *(int *)(((int)stk + 28));
                                                        t2420 = t2432;
                                                        t2433 = *(int *)((t2420 + 0x0));
                                                        t2420 = t2433;
                                                        if (t2420 == 110) {
                                                            if ((int)t474 >= (int)0x25) {
                                                                if ((int)t474 > (int)0x28) {
                                                                    t2434 = *(int *)((t2424 + 0x0));
                                                                    t2420 = 0xC1EE800;
                                                                    t2435 = *(int *)((t2420 + 0x0));
                                                                    t2420 = 0xC;
                                                                    t2436 = 0;
                                                                    for (; t2436 < (int)t2420; t2436++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2436) = *(unsigned char *)((((((t2434 << 2) + t2434) << 2) + t2435) + 0x4) + t2436);
                                                                    t2422 = 0xC179840;
                                                                    t2421 = ((int)stk + 24);
                                                                    t2421 = (t2421 + 0x20);
                                                                    t2437 = nlLength(t2421, t2422);
                                                                    u2425 = t2437;
                                                                    t2422 = 0x0;
                                                                    t2438 = *(int *)((t2424 + 0x0));
                                                                    t2421 = t2438;
                                                                    t2439 = FUN_0c02eb86(t2421, t2422, u2425);
                                                                    t2420 = t2439;
                                                                } else {
                                                                    t2443 = t2421;
                                                                    t2444 = t2422;
                                                                    u2445 = u2425;
                                                                    u2446 = u2426;
                                                                    u2447 = u2427;
                                                                    u2448 = u2428;
                                                                }
                                                                t2459 = t2443;
                                                                t2460 = t2444;
                                                                u2461 = u2445;
                                                                u2462 = u2446;
                                                                u2463 = u2447;
                                                                u2464 = u2448;
                                                            } else {
                                                                t2450 = *(int *)((t2424 + 0x0));
                                                                t2420 = 0xC1EE800;
                                                                t2451 = *(int *)((t2420 + 0x0));
                                                                t2420 = 0xC;
                                                                t2452 = 0;
                                                                for (; t2452 < (int)t2420; t2452++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2452) = *(unsigned char *)((((((t2450 << 2) + t2450) << 2) + t2451) + 0x4) + t2452);
                                                                t2422 = 0xC179840;
                                                                t2421 = ((int)stk + 24);
                                                                t2421 = (t2421 + 0x20);
                                                                t2453 = nlLength(t2421, t2422);
                                                                u2425 = t2453;
                                                                t2422 = 0x0;
                                                                t2454 = *(int *)((t2424 + 0x0));
                                                                t2421 = t2454;
                                                                t2455 = FUN_0c02eb86(t2421, t2422, u2425);
                                                                t2420 = t2455;
                                                            }
                                                            t2475 = t2459;
                                                            t2476 = t2460;
                                                            u2477 = u2461;
                                                            u2478 = u2462;
                                                            u2479 = u2463;
                                                            u2480 = u2464;
                                                        } else {
                                                            t2466 = *(int *)((t2424 + 0x0));
                                                            t2420 = 0xC1EE800;
                                                            t2467 = *(int *)((t2420 + 0x0));
                                                            t2420 = 0xC;
                                                            t2468 = 0;
                                                            for (; t2468 < (int)t2420; t2468++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2468) = *(unsigned char *)((((((t2466 << 2) + t2466) << 2) + t2467) + 0x4) + t2468);
                                                            t2422 = 0xC179840;
                                                            t2421 = ((int)stk + 24);
                                                            t2421 = (t2421 + 0x20);
                                                            t2469 = nlLength(t2421, t2422);
                                                            u2425 = t2469;
                                                            t2422 = 0x0;
                                                            t2470 = *(int *)((t2424 + 0x0));
                                                            t2421 = t2470;
                                                            t2471 = FUN_0c02eb86(t2421, t2422, u2425);
                                                            t2420 = t2471;
                                                        }
                                                        t2517 = t2475;
                                                        t2518 = t2476;
                                                        u2519 = u2477;
                                                        u2520 = u2478;
                                                        u2521 = u2479;
                                                        u2522 = u2480;
                                                    } else {
                                                        if ((int)t474 >= (int)0x25) {
                                                            if ((int)t474 > (int)0x28) {
                                                                t2482 = *(int *)((t2424 + 0x0));
                                                                t2420 = 0xC1EE800;
                                                                t2483 = *(int *)((t2420 + 0x0));
                                                                t2420 = 0xC;
                                                                t2484 = 0;
                                                                for (; t2484 < (int)t2420; t2484++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2484) = *(unsigned char *)((((((t2482 << 2) + t2482) << 2) + t2483) + 0x4) + t2484);
                                                                t2422 = 0xC179840;
                                                                t2421 = ((int)stk + 24);
                                                                t2421 = (t2421 + 0x20);
                                                                t2485 = nlLength(t2421, t2422);
                                                                u2425 = t2485;
                                                                t2422 = 0x0;
                                                                t2486 = *(int *)((t2424 + 0x0));
                                                                t2421 = t2486;
                                                                t2487 = FUN_0c02eb86(t2421, t2422, u2425);
                                                                t2420 = t2487;
                                                            } else {
                                                                t2491 = t2421;
                                                                t2492 = t2422;
                                                                u2493 = u2425;
                                                                u2494 = u2426;
                                                                u2495 = u2427;
                                                                u2496 = u2428;
                                                            }
                                                            t2507 = t2491;
                                                            t2508 = t2492;
                                                            u2509 = u2493;
                                                            u2510 = u2494;
                                                            u2511 = u2495;
                                                            u2512 = u2496;
                                                        } else {
                                                            t2498 = *(int *)((t2424 + 0x0));
                                                            t2420 = 0xC1EE800;
                                                            t2499 = *(int *)((t2420 + 0x0));
                                                            t2420 = 0xC;
                                                            t2500 = 0;
                                                            for (; t2500 < (int)t2420; t2500++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2500) = *(unsigned char *)((((((t2498 << 2) + t2498) << 2) + t2499) + 0x4) + t2500);
                                                            t2422 = 0xC179840;
                                                            t2421 = ((int)stk + 24);
                                                            t2421 = (t2421 + 0x20);
                                                            t2501 = nlLength(t2421, t2422);
                                                            u2425 = t2501;
                                                            t2422 = 0x0;
                                                            t2502 = *(int *)((t2424 + 0x0));
                                                            t2421 = t2502;
                                                            t2503 = FUN_0c02eb86(t2421, t2422, u2425);
                                                            t2420 = t2503;
                                                        }
                                                        t2517 = t2507;
                                                        t2518 = t2508;
                                                        u2519 = u2509;
                                                        u2520 = u2510;
                                                        u2521 = u2511;
                                                        u2522 = u2512;
                                                    }
                                                    t2559 = t2517;
                                                    t2560 = t2518;
                                                    u2561 = u2519;
                                                    u2562 = u2520;
                                                    u2563 = u2521;
                                                    u2564 = u2522;
                                                } else {
                                                    if ((int)t474 >= (int)0x25) {
                                                        if ((int)t474 > (int)0x28) {
                                                            t2524 = *(int *)((t2424 + 0x0));
                                                            t2420 = 0xC1EE800;
                                                            t2525 = *(int *)((t2420 + 0x0));
                                                            t2420 = 0xC;
                                                            t2526 = 0;
                                                            for (; t2526 < (int)t2420; t2526++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2526) = *(unsigned char *)((((((t2524 << 2) + t2524) << 2) + t2525) + 0x4) + t2526);
                                                            t2422 = 0xC179840;
                                                            t2421 = ((int)stk + 24);
                                                            t2421 = (t2421 + 0x20);
                                                            t2527 = nlLength(t2421, t2422);
                                                            u2425 = t2527;
                                                            t2422 = 0x0;
                                                            t2528 = *(int *)((t2424 + 0x0));
                                                            t2421 = t2528;
                                                            t2529 = FUN_0c02eb86(t2421, t2422, u2425);
                                                            t2420 = t2529;
                                                        } else {
                                                            t2533 = t2421;
                                                            t2534 = t2422;
                                                            u2535 = u2425;
                                                            u2536 = u2426;
                                                            u2537 = u2427;
                                                            u2538 = u2428;
                                                        }
                                                        t2549 = t2533;
                                                        t2550 = t2534;
                                                        u2551 = u2535;
                                                        u2552 = u2536;
                                                        u2553 = u2537;
                                                        u2554 = u2538;
                                                    } else {
                                                        t2540 = *(int *)((t2424 + 0x0));
                                                        t2420 = 0xC1EE800;
                                                        t2541 = *(int *)((t2420 + 0x0));
                                                        t2420 = 0xC;
                                                        t2542 = 0;
                                                        for (; t2542 < (int)t2420; t2542++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2542) = *(unsigned char *)((((((t2540 << 2) + t2540) << 2) + t2541) + 0x4) + t2542);
                                                        t2422 = 0xC179840;
                                                        t2421 = ((int)stk + 24);
                                                        t2421 = (t2421 + 0x20);
                                                        t2543 = nlLength(t2421, t2422);
                                                        u2425 = t2543;
                                                        t2422 = 0x0;
                                                        t2544 = *(int *)((t2424 + 0x0));
                                                        t2421 = t2544;
                                                        t2545 = FUN_0c02eb86(t2421, t2422, u2425);
                                                        t2420 = t2545;
                                                    }
                                                    t2559 = t2549;
                                                    t2560 = t2550;
                                                    u2561 = u2551;
                                                    u2562 = u2552;
                                                    u2563 = u2553;
                                                    u2564 = u2554;
                                                }
                                                t2575 = t2559;
                                                t2576 = t2560;
                                                u2577 = u2561;
                                                u2578 = u2562;
                                                u2579 = u2563;
                                                u2580 = u2564;
                                            } else {
                                                t2566 = *(int *)((t2424 + 0x0));
                                                t2420 = 0xC1EE800;
                                                t2567 = *(int *)((t2420 + 0x0));
                                                t2420 = 0xC;
                                                t2568 = 0;
                                                for (; t2568 < (int)t2420; t2568++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2568) = *(unsigned char *)((((((t2566 << 2) + t2566) << 2) + t2567) + 0x4) + t2568);
                                                t2422 = 0xC179840;
                                                t2421 = ((int)stk + 24);
                                                t2421 = (t2421 + 0x20);
                                                t2569 = nlLength(t2421, t2422);
                                                u2425 = t2569;
                                                t2422 = 0x0;
                                                t2570 = *(int *)((t2424 + 0x0));
                                                t2421 = t2570;
                                                t2571 = FUN_0c02eb86(t2421, t2422, u2425);
                                                t2420 = t2571;
                                            }
                                            t2582 = *(int *)(((int)stk + 24));
                                            u2425 = u2577;
                                            u2426 = u2578;
                                            u2427 = u2579;
                                            u2428 = u2580;
                                            t2421 = t2575;
                                            t2422 = t2576;
                                            t2423 = (t2423 + 0x4);
                                            t2424 = (t2424 + 0x4);
                                            *(unsigned int *)(((int)stk + 24)) = (t2582 + 0x1);
                                            t2583 = *(int *)(((int)stk + 28));
                                            *(unsigned int *)(((int)stk + 28)) = (t2583 + 0x4);
                                        }
                                        t2584 = t2420;
                                    }
                                    t2788 = t2584;
                                } else {
                                    t2774 = t474;
                                    if ((int)t474 >= (int)0x24) {
                                        t2761 = t474;
                                        if ((int)t474 <= (int)0x28) {
                                            *(unsigned int *)(((int)stk + 24)) = 0x0;
                                            *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                                            t2597 = t474;
                                            t2598 = 0xC118600;
                                            t2599 = 0xFE;
                                            t2600 = 0xC118600;
                                            t2601 = 0xC118600;
                                            u2602 = u1472;
                                            u2603 = u1473;
                                            u2604 = u1477;
                                            u2605 = u1478;
                                            for (;;) {
                                                t2606 = *(int *)(((int)stk + 24));
                                                t2607 = *(int *)0xC0C8358;
                                                if ((int)t2606 >= (int)t2607) {
                                                    break;
                                                }
                                                if ((int)t474 >= (int)0x25) {
                                                    if ((int)t474 <= (int)0x28) {
                                                        t2608 = *(int *)((t2600 + 0x0));
                                                        t2597 = t2608;
                                                        if (t2597 != 109) {
                                                            t2609 = *(int *)(((int)stk + 28));
                                                            t2597 = t2609;
                                                            t2610 = *(int *)((t2597 + 0x0));
                                                            t2597 = t2610;
                                                            if (t2597 == 110) {
                                                                if ((int)t474 >= (int)0x25) {
                                                                    if ((int)t474 > (int)0x28) {
                                                                        t2611 = *(int *)((t2601 + 0x0));
                                                                        t2597 = 0xC1EE800;
                                                                        t2612 = *(int *)((t2597 + 0x0));
                                                                        t2597 = 0xC;
                                                                        t2613 = 0;
                                                                        for (; t2613 < (int)t2597; t2613++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2613) = *(unsigned char *)((((((t2611 << 2) + t2611) << 2) + t2612) + 0x4) + t2613);
                                                                        t2599 = 0xC179840;
                                                                        t2598 = ((int)stk + 24);
                                                                        t2598 = (t2598 + 0x20);
                                                                        t2614 = nlLength(t2598, t2599);
                                                                        u2602 = t2614;
                                                                        t2599 = 0x0;
                                                                        t2615 = *(int *)((t2601 + 0x0));
                                                                        t2598 = t2615;
                                                                        t2616 = FUN_0c02eb86(t2598, t2599, u2602);
                                                                        t2597 = t2616;
                                                                    } else {
                                                                        t2620 = t2598;
                                                                        t2621 = t2599;
                                                                        u2622 = u2602;
                                                                        u2623 = u2603;
                                                                        u2624 = u2604;
                                                                        u2625 = u2605;
                                                                    }
                                                                    t2636 = t2620;
                                                                    t2637 = t2621;
                                                                    u2638 = u2622;
                                                                    u2639 = u2623;
                                                                    u2640 = u2624;
                                                                    u2641 = u2625;
                                                                } else {
                                                                    t2627 = *(int *)((t2601 + 0x0));
                                                                    t2597 = 0xC1EE800;
                                                                    t2628 = *(int *)((t2597 + 0x0));
                                                                    t2597 = 0xC;
                                                                    t2629 = 0;
                                                                    for (; t2629 < (int)t2597; t2629++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2629) = *(unsigned char *)((((((t2627 << 2) + t2627) << 2) + t2628) + 0x4) + t2629);
                                                                    t2599 = 0xC179840;
                                                                    t2598 = ((int)stk + 24);
                                                                    t2598 = (t2598 + 0x20);
                                                                    t2630 = nlLength(t2598, t2599);
                                                                    u2602 = t2630;
                                                                    t2599 = 0x0;
                                                                    t2631 = *(int *)((t2601 + 0x0));
                                                                    t2598 = t2631;
                                                                    t2632 = FUN_0c02eb86(t2598, t2599, u2602);
                                                                    t2597 = t2632;
                                                                }
                                                                t2652 = t2636;
                                                                t2653 = t2637;
                                                                u2654 = u2638;
                                                                u2655 = u2639;
                                                                u2656 = u2640;
                                                                u2657 = u2641;
                                                            } else {
                                                                t2643 = *(int *)((t2601 + 0x0));
                                                                t2597 = 0xC1EE800;
                                                                t2644 = *(int *)((t2597 + 0x0));
                                                                t2597 = 0xC;
                                                                t2645 = 0;
                                                                for (; t2645 < (int)t2597; t2645++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2645) = *(unsigned char *)((((((t2643 << 2) + t2643) << 2) + t2644) + 0x4) + t2645);
                                                                t2599 = 0xC179840;
                                                                t2598 = ((int)stk + 24);
                                                                t2598 = (t2598 + 0x20);
                                                                t2646 = nlLength(t2598, t2599);
                                                                u2602 = t2646;
                                                                t2599 = 0x0;
                                                                t2647 = *(int *)((t2601 + 0x0));
                                                                t2598 = t2647;
                                                                t2648 = FUN_0c02eb86(t2598, t2599, u2602);
                                                                t2597 = t2648;
                                                            }
                                                            t2694 = t2652;
                                                            t2695 = t2653;
                                                            u2696 = u2654;
                                                            u2697 = u2655;
                                                            u2698 = u2656;
                                                            u2699 = u2657;
                                                        } else {
                                                            if ((int)t474 >= (int)0x25) {
                                                                if ((int)t474 > (int)0x28) {
                                                                    t2659 = *(int *)((t2601 + 0x0));
                                                                    t2597 = 0xC1EE800;
                                                                    t2660 = *(int *)((t2597 + 0x0));
                                                                    t2597 = 0xC;
                                                                    t2661 = 0;
                                                                    for (; t2661 < (int)t2597; t2661++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2661) = *(unsigned char *)((((((t2659 << 2) + t2659) << 2) + t2660) + 0x4) + t2661);
                                                                    t2599 = 0xC179840;
                                                                    t2598 = ((int)stk + 24);
                                                                    t2598 = (t2598 + 0x20);
                                                                    t2662 = nlLength(t2598, t2599);
                                                                    u2602 = t2662;
                                                                    t2599 = 0x0;
                                                                    t2663 = *(int *)((t2601 + 0x0));
                                                                    t2598 = t2663;
                                                                    t2664 = FUN_0c02eb86(t2598, t2599, u2602);
                                                                    t2597 = t2664;
                                                                } else {
                                                                    t2668 = t2598;
                                                                    t2669 = t2599;
                                                                    u2670 = u2602;
                                                                    u2671 = u2603;
                                                                    u2672 = u2604;
                                                                    u2673 = u2605;
                                                                }
                                                                t2684 = t2668;
                                                                t2685 = t2669;
                                                                u2686 = u2670;
                                                                u2687 = u2671;
                                                                u2688 = u2672;
                                                                u2689 = u2673;
                                                            } else {
                                                                t2675 = *(int *)((t2601 + 0x0));
                                                                t2597 = 0xC1EE800;
                                                                t2676 = *(int *)((t2597 + 0x0));
                                                                t2597 = 0xC;
                                                                t2677 = 0;
                                                                for (; t2677 < (int)t2597; t2677++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2677) = *(unsigned char *)((((((t2675 << 2) + t2675) << 2) + t2676) + 0x4) + t2677);
                                                                t2599 = 0xC179840;
                                                                t2598 = ((int)stk + 24);
                                                                t2598 = (t2598 + 0x20);
                                                                t2678 = nlLength(t2598, t2599);
                                                                u2602 = t2678;
                                                                t2599 = 0x0;
                                                                t2679 = *(int *)((t2601 + 0x0));
                                                                t2598 = t2679;
                                                                t2680 = FUN_0c02eb86(t2598, t2599, u2602);
                                                                t2597 = t2680;
                                                            }
                                                            t2694 = t2684;
                                                            t2695 = t2685;
                                                            u2696 = u2686;
                                                            u2697 = u2687;
                                                            u2698 = u2688;
                                                            u2699 = u2689;
                                                        }
                                                        t2736 = t2694;
                                                        t2737 = t2695;
                                                        u2738 = u2696;
                                                        u2739 = u2697;
                                                        u2740 = u2698;
                                                        u2741 = u2699;
                                                    } else {
                                                        if ((int)t474 >= (int)0x25) {
                                                            if ((int)t474 > (int)0x28) {
                                                                t2701 = *(int *)((t2601 + 0x0));
                                                                t2597 = 0xC1EE800;
                                                                t2702 = *(int *)((t2597 + 0x0));
                                                                t2597 = 0xC;
                                                                t2703 = 0;
                                                                for (; t2703 < (int)t2597; t2703++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2703) = *(unsigned char *)((((((t2701 << 2) + t2701) << 2) + t2702) + 0x4) + t2703);
                                                                t2599 = 0xC179840;
                                                                t2598 = ((int)stk + 24);
                                                                t2598 = (t2598 + 0x20);
                                                                t2704 = nlLength(t2598, t2599);
                                                                u2602 = t2704;
                                                                t2599 = 0x0;
                                                                t2705 = *(int *)((t2601 + 0x0));
                                                                t2598 = t2705;
                                                                t2706 = FUN_0c02eb86(t2598, t2599, u2602);
                                                                t2597 = t2706;
                                                            } else {
                                                                t2710 = t2598;
                                                                t2711 = t2599;
                                                                u2712 = u2602;
                                                                u2713 = u2603;
                                                                u2714 = u2604;
                                                                u2715 = u2605;
                                                            }
                                                            t2726 = t2710;
                                                            t2727 = t2711;
                                                            u2728 = u2712;
                                                            u2729 = u2713;
                                                            u2730 = u2714;
                                                            u2731 = u2715;
                                                        } else {
                                                            t2717 = *(int *)((t2601 + 0x0));
                                                            t2597 = 0xC1EE800;
                                                            t2718 = *(int *)((t2597 + 0x0));
                                                            t2597 = 0xC;
                                                            t2719 = 0;
                                                            for (; t2719 < (int)t2597; t2719++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2719) = *(unsigned char *)((((((t2717 << 2) + t2717) << 2) + t2718) + 0x4) + t2719);
                                                            t2599 = 0xC179840;
                                                            t2598 = ((int)stk + 24);
                                                            t2598 = (t2598 + 0x20);
                                                            t2720 = nlLength(t2598, t2599);
                                                            u2602 = t2720;
                                                            t2599 = 0x0;
                                                            t2721 = *(int *)((t2601 + 0x0));
                                                            t2598 = t2721;
                                                            t2722 = FUN_0c02eb86(t2598, t2599, u2602);
                                                            t2597 = t2722;
                                                        }
                                                        t2736 = t2726;
                                                        t2737 = t2727;
                                                        u2738 = u2728;
                                                        u2739 = u2729;
                                                        u2740 = u2730;
                                                        u2741 = u2731;
                                                    }
                                                    t2752 = t2736;
                                                    t2753 = t2737;
                                                    u2754 = u2738;
                                                    u2755 = u2739;
                                                    u2756 = u2740;
                                                    u2757 = u2741;
                                                } else {
                                                    t2743 = *(int *)((t2601 + 0x0));
                                                    t2597 = 0xC1EE800;
                                                    t2744 = *(int *)((t2597 + 0x0));
                                                    t2597 = 0xC;
                                                    t2745 = 0;
                                                    for (; t2745 < (int)t2597; t2745++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2745) = *(unsigned char *)((((((t2743 << 2) + t2743) << 2) + t2744) + 0x4) + t2745);
                                                    t2599 = 0xC179840;
                                                    t2598 = ((int)stk + 24);
                                                    t2598 = (t2598 + 0x20);
                                                    t2746 = nlLength(t2598, t2599);
                                                    u2602 = t2746;
                                                    t2599 = 0x0;
                                                    t2747 = *(int *)((t2601 + 0x0));
                                                    t2598 = t2747;
                                                    t2748 = FUN_0c02eb86(t2598, t2599, u2602);
                                                    t2597 = t2748;
                                                }
                                                t2759 = *(int *)(((int)stk + 24));
                                                u2602 = u2754;
                                                u2603 = u2755;
                                                u2604 = u2756;
                                                u2605 = u2757;
                                                t2598 = t2752;
                                                t2599 = t2753;
                                                t2600 = (t2600 + 0x4);
                                                t2601 = (t2601 + 0x4);
                                                *(unsigned int *)(((int)stk + 24)) = (t2759 + 0x1);
                                                t2760 = *(int *)(((int)stk + 28));
                                                *(unsigned int *)(((int)stk + 28)) = (t2760 + 0x4);
                                            }
                                            t2761 = t2597;
                                        }
                                        t2774 = t2761;
                                    }
                                    t2788 = t2774;
                                }
                                t2802 = t2788;
                            }
                            t2980 = t2802;
                        } else {
                            *(unsigned int *)(((int)stk + 24)) = 0x0;
                            *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                            t2816 = t474;
                            t2817 = 0xC118600;
                            t2818 = 0xFE;
                            t2819 = 0xC118600;
                            t2820 = 0xC118600;
                            u2821 = u1472;
                            u2822 = u1473;
                            u2823 = u1477;
                            u2824 = u1478;
                            for (;;) {
                                t2825 = *(int *)(((int)stk + 24));
                                t2826 = *(int *)0xC0C8358;
                                if ((int)t2825 >= (int)t2826) {
                                    break;
                                }
                                if ((int)t474 >= (int)0x25) {
                                    if ((int)t474 <= (int)0x28) {
                                        t2827 = *(int *)((t2819 + 0x0));
                                        t2816 = t2827;
                                        if (t2816 != 109) {
                                            t2828 = *(int *)(((int)stk + 28));
                                            t2816 = t2828;
                                            t2829 = *(int *)((t2816 + 0x0));
                                            t2816 = t2829;
                                            if (t2816 == 110) {
                                                if ((int)t474 >= (int)0x25) {
                                                    if ((int)t474 > (int)0x28) {
                                                        t2830 = *(int *)((t2820 + 0x0));
                                                        t2816 = 0xC1EE800;
                                                        t2831 = *(int *)((t2816 + 0x0));
                                                        t2816 = 0xC;
                                                        t2832 = 0;
                                                        for (; t2832 < (int)t2816; t2832++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2832) = *(unsigned char *)((((((t2830 << 2) + t2830) << 2) + t2831) + 0x4) + t2832);
                                                        t2818 = 0xC179840;
                                                        t2817 = ((int)stk + 24);
                                                        t2817 = (t2817 + 0x20);
                                                        t2833 = nlLength(t2817, t2818);
                                                        u2821 = t2833;
                                                        t2818 = 0x0;
                                                        t2834 = *(int *)((t2820 + 0x0));
                                                        t2817 = t2834;
                                                        t2835 = FUN_0c02eb86(t2817, t2818, u2821);
                                                        t2816 = t2835;
                                                    } else {
                                                        t2839 = t2817;
                                                        t2840 = t2818;
                                                        u2841 = u2821;
                                                        u2842 = u2822;
                                                        u2843 = u2823;
                                                        u2844 = u2824;
                                                    }
                                                    t2855 = t2839;
                                                    t2856 = t2840;
                                                    u2857 = u2841;
                                                    u2858 = u2842;
                                                    u2859 = u2843;
                                                    u2860 = u2844;
                                                } else {
                                                    t2846 = *(int *)((t2820 + 0x0));
                                                    t2816 = 0xC1EE800;
                                                    t2847 = *(int *)((t2816 + 0x0));
                                                    t2816 = 0xC;
                                                    t2848 = 0;
                                                    for (; t2848 < (int)t2816; t2848++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2848) = *(unsigned char *)((((((t2846 << 2) + t2846) << 2) + t2847) + 0x4) + t2848);
                                                    t2818 = 0xC179840;
                                                    t2817 = ((int)stk + 24);
                                                    t2817 = (t2817 + 0x20);
                                                    t2849 = nlLength(t2817, t2818);
                                                    u2821 = t2849;
                                                    t2818 = 0x0;
                                                    t2850 = *(int *)((t2820 + 0x0));
                                                    t2817 = t2850;
                                                    t2851 = FUN_0c02eb86(t2817, t2818, u2821);
                                                    t2816 = t2851;
                                                }
                                                t2871 = t2855;
                                                t2872 = t2856;
                                                u2873 = u2857;
                                                u2874 = u2858;
                                                u2875 = u2859;
                                                u2876 = u2860;
                                            } else {
                                                t2862 = *(int *)((t2820 + 0x0));
                                                t2816 = 0xC1EE800;
                                                t2863 = *(int *)((t2816 + 0x0));
                                                t2816 = 0xC;
                                                t2864 = 0;
                                                for (; t2864 < (int)t2816; t2864++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2864) = *(unsigned char *)((((((t2862 << 2) + t2862) << 2) + t2863) + 0x4) + t2864);
                                                t2818 = 0xC179840;
                                                t2817 = ((int)stk + 24);
                                                t2817 = (t2817 + 0x20);
                                                t2865 = nlLength(t2817, t2818);
                                                u2821 = t2865;
                                                t2818 = 0x0;
                                                t2866 = *(int *)((t2820 + 0x0));
                                                t2817 = t2866;
                                                t2867 = FUN_0c02eb86(t2817, t2818, u2821);
                                                t2816 = t2867;
                                            }
                                            t2913 = t2871;
                                            t2914 = t2872;
                                            u2915 = u2873;
                                            u2916 = u2874;
                                            u2917 = u2875;
                                            u2918 = u2876;
                                        } else {
                                            if ((int)t474 >= (int)0x25) {
                                                if ((int)t474 > (int)0x28) {
                                                    t2878 = *(int *)((t2820 + 0x0));
                                                    t2816 = 0xC1EE800;
                                                    t2879 = *(int *)((t2816 + 0x0));
                                                    t2816 = 0xC;
                                                    t2880 = 0;
                                                    for (; t2880 < (int)t2816; t2880++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2880) = *(unsigned char *)((((((t2878 << 2) + t2878) << 2) + t2879) + 0x4) + t2880);
                                                    t2818 = 0xC179840;
                                                    t2817 = ((int)stk + 24);
                                                    t2817 = (t2817 + 0x20);
                                                    t2881 = nlLength(t2817, t2818);
                                                    u2821 = t2881;
                                                    t2818 = 0x0;
                                                    t2882 = *(int *)((t2820 + 0x0));
                                                    t2817 = t2882;
                                                    t2883 = FUN_0c02eb86(t2817, t2818, u2821);
                                                    t2816 = t2883;
                                                } else {
                                                    t2887 = t2817;
                                                    t2888 = t2818;
                                                    u2889 = u2821;
                                                    u2890 = u2822;
                                                    u2891 = u2823;
                                                    u2892 = u2824;
                                                }
                                                t2903 = t2887;
                                                t2904 = t2888;
                                                u2905 = u2889;
                                                u2906 = u2890;
                                                u2907 = u2891;
                                                u2908 = u2892;
                                            } else {
                                                t2894 = *(int *)((t2820 + 0x0));
                                                t2816 = 0xC1EE800;
                                                t2895 = *(int *)((t2816 + 0x0));
                                                t2816 = 0xC;
                                                t2896 = 0;
                                                for (; t2896 < (int)t2816; t2896++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2896) = *(unsigned char *)((((((t2894 << 2) + t2894) << 2) + t2895) + 0x4) + t2896);
                                                t2818 = 0xC179840;
                                                t2817 = ((int)stk + 24);
                                                t2817 = (t2817 + 0x20);
                                                t2897 = nlLength(t2817, t2818);
                                                u2821 = t2897;
                                                t2818 = 0x0;
                                                t2898 = *(int *)((t2820 + 0x0));
                                                t2817 = t2898;
                                                t2899 = FUN_0c02eb86(t2817, t2818, u2821);
                                                t2816 = t2899;
                                            }
                                            t2913 = t2903;
                                            t2914 = t2904;
                                            u2915 = u2905;
                                            u2916 = u2906;
                                            u2917 = u2907;
                                            u2918 = u2908;
                                        }
                                        t2955 = t2913;
                                        t2956 = t2914;
                                        u2957 = u2915;
                                        u2958 = u2916;
                                        u2959 = u2917;
                                        u2960 = u2918;
                                    } else {
                                        if ((int)t474 >= (int)0x25) {
                                            if ((int)t474 > (int)0x28) {
                                                t2920 = *(int *)((t2820 + 0x0));
                                                t2816 = 0xC1EE800;
                                                t2921 = *(int *)((t2816 + 0x0));
                                                t2816 = 0xC;
                                                t2922 = 0;
                                                for (; t2922 < (int)t2816; t2922++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2922) = *(unsigned char *)((((((t2920 << 2) + t2920) << 2) + t2921) + 0x4) + t2922);
                                                t2818 = 0xC179840;
                                                t2817 = ((int)stk + 24);
                                                t2817 = (t2817 + 0x20);
                                                t2923 = nlLength(t2817, t2818);
                                                u2821 = t2923;
                                                t2818 = 0x0;
                                                t2924 = *(int *)((t2820 + 0x0));
                                                t2817 = t2924;
                                                t2925 = FUN_0c02eb86(t2817, t2818, u2821);
                                                t2816 = t2925;
                                            } else {
                                                t2929 = t2817;
                                                t2930 = t2818;
                                                u2931 = u2821;
                                                u2932 = u2822;
                                                u2933 = u2823;
                                                u2934 = u2824;
                                            }
                                            t2945 = t2929;
                                            t2946 = t2930;
                                            u2947 = u2931;
                                            u2948 = u2932;
                                            u2949 = u2933;
                                            u2950 = u2934;
                                        } else {
                                            t2936 = *(int *)((t2820 + 0x0));
                                            t2816 = 0xC1EE800;
                                            t2937 = *(int *)((t2816 + 0x0));
                                            t2816 = 0xC;
                                            t2938 = 0;
                                            for (; t2938 < (int)t2816; t2938++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2938) = *(unsigned char *)((((((t2936 << 2) + t2936) << 2) + t2937) + 0x4) + t2938);
                                            t2818 = 0xC179840;
                                            t2817 = ((int)stk + 24);
                                            t2817 = (t2817 + 0x20);
                                            t2939 = nlLength(t2817, t2818);
                                            u2821 = t2939;
                                            t2818 = 0x0;
                                            t2940 = *(int *)((t2820 + 0x0));
                                            t2817 = t2940;
                                            t2941 = FUN_0c02eb86(t2817, t2818, u2821);
                                            t2816 = t2941;
                                        }
                                        t2955 = t2945;
                                        t2956 = t2946;
                                        u2957 = u2947;
                                        u2958 = u2948;
                                        u2959 = u2949;
                                        u2960 = u2950;
                                    }
                                    t2971 = t2955;
                                    t2972 = t2956;
                                    u2973 = u2957;
                                    u2974 = u2958;
                                    u2975 = u2959;
                                    u2976 = u2960;
                                } else {
                                    t2962 = *(int *)((t2820 + 0x0));
                                    t2816 = 0xC1EE800;
                                    t2963 = *(int *)((t2816 + 0x0));
                                    t2816 = 0xC;
                                    t2964 = 0;
                                    for (; t2964 < (int)t2816; t2964++) *(unsigned char *)((((int)stk + 24) + 0x20) + t2964) = *(unsigned char *)((((((t2962 << 2) + t2962) << 2) + t2963) + 0x4) + t2964);
                                    t2818 = 0xC179840;
                                    t2817 = ((int)stk + 24);
                                    t2817 = (t2817 + 0x20);
                                    t2965 = nlLength(t2817, t2818);
                                    u2821 = t2965;
                                    t2818 = 0x0;
                                    t2966 = *(int *)((t2820 + 0x0));
                                    t2817 = t2966;
                                    t2967 = FUN_0c02eb86(t2817, t2818, u2821);
                                    t2816 = t2967;
                                }
                                t2978 = *(int *)(((int)stk + 24));
                                u2821 = u2973;
                                u2822 = u2974;
                                u2823 = u2975;
                                u2824 = u2976;
                                t2817 = t2971;
                                t2818 = t2972;
                                t2819 = (t2819 + 0x4);
                                t2820 = (t2820 + 0x4);
                                *(unsigned int *)(((int)stk + 24)) = (t2978 + 0x1);
                                t2979 = *(int *)(((int)stk + 28));
                                *(unsigned int *)(((int)stk + 28)) = (t2979 + 0x4);
                            }
                            t2980 = t2816;
                        }
                        t3157 = t2980;
                    } else {
                        *(unsigned int *)(((int)stk + 24)) = 0x0;
                        *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                        t2993 = t474;
                        t2994 = 0xC118600;
                        t2995 = 0xFE;
                        t2996 = 0xC118600;
                        t2997 = 0xC118600;
                        u2998 = u1472;
                        u2999 = u1473;
                        u3000 = u1477;
                        u3001 = u1478;
                        for (;;) {
                            t3002 = *(int *)(((int)stk + 24));
                            t3003 = *(int *)0xC0C8358;
                            if ((int)t3002 >= (int)t3003) {
                                break;
                            }
                            if ((int)t474 >= (int)0x25) {
                                if ((int)t474 <= (int)0x28) {
                                    t3004 = *(int *)((t2996 + 0x0));
                                    t2993 = t3004;
                                    if (t2993 != 109) {
                                        t3005 = *(int *)(((int)stk + 28));
                                        t2993 = t3005;
                                        t3006 = *(int *)((t2993 + 0x0));
                                        t2993 = t3006;
                                        if (t2993 == 110) {
                                            if ((int)t474 >= (int)0x25) {
                                                if ((int)t474 > (int)0x28) {
                                                    t3007 = *(int *)((t2997 + 0x0));
                                                    t2993 = 0xC1EE800;
                                                    t3008 = *(int *)((t2993 + 0x0));
                                                    t2993 = 0xC;
                                                    t3009 = 0;
                                                    for (; t3009 < (int)t2993; t3009++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3009) = *(unsigned char *)((((((t3007 << 2) + t3007) << 2) + t3008) + 0x4) + t3009);
                                                    t2995 = 0xC179840;
                                                    t2994 = ((int)stk + 24);
                                                    t2994 = (t2994 + 0x20);
                                                    t3010 = nlLength(t2994, t2995);
                                                    u2998 = t3010;
                                                    t2995 = 0x0;
                                                    t3011 = *(int *)((t2997 + 0x0));
                                                    t2994 = t3011;
                                                    t3012 = FUN_0c02eb86(t2994, t2995, u2998);
                                                    t2993 = t3012;
                                                } else {
                                                    t3016 = t2994;
                                                    t3017 = t2995;
                                                    u3018 = u2998;
                                                    u3019 = u2999;
                                                    u3020 = u3000;
                                                    u3021 = u3001;
                                                }
                                                t3032 = t3016;
                                                t3033 = t3017;
                                                u3034 = u3018;
                                                u3035 = u3019;
                                                u3036 = u3020;
                                                u3037 = u3021;
                                            } else {
                                                t3023 = *(int *)((t2997 + 0x0));
                                                t2993 = 0xC1EE800;
                                                t3024 = *(int *)((t2993 + 0x0));
                                                t2993 = 0xC;
                                                t3025 = 0;
                                                for (; t3025 < (int)t2993; t3025++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3025) = *(unsigned char *)((((((t3023 << 2) + t3023) << 2) + t3024) + 0x4) + t3025);
                                                t2995 = 0xC179840;
                                                t2994 = ((int)stk + 24);
                                                t2994 = (t2994 + 0x20);
                                                t3026 = nlLength(t2994, t2995);
                                                u2998 = t3026;
                                                t2995 = 0x0;
                                                t3027 = *(int *)((t2997 + 0x0));
                                                t2994 = t3027;
                                                t3028 = FUN_0c02eb86(t2994, t2995, u2998);
                                                t2993 = t3028;
                                            }
                                            t3048 = t3032;
                                            t3049 = t3033;
                                            u3050 = u3034;
                                            u3051 = u3035;
                                            u3052 = u3036;
                                            u3053 = u3037;
                                        } else {
                                            t3039 = *(int *)((t2997 + 0x0));
                                            t2993 = 0xC1EE800;
                                            t3040 = *(int *)((t2993 + 0x0));
                                            t2993 = 0xC;
                                            t3041 = 0;
                                            for (; t3041 < (int)t2993; t3041++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3041) = *(unsigned char *)((((((t3039 << 2) + t3039) << 2) + t3040) + 0x4) + t3041);
                                            t2995 = 0xC179840;
                                            t2994 = ((int)stk + 24);
                                            t2994 = (t2994 + 0x20);
                                            t3042 = nlLength(t2994, t2995);
                                            u2998 = t3042;
                                            t2995 = 0x0;
                                            t3043 = *(int *)((t2997 + 0x0));
                                            t2994 = t3043;
                                            t3044 = FUN_0c02eb86(t2994, t2995, u2998);
                                            t2993 = t3044;
                                        }
                                        t3090 = t3048;
                                        t3091 = t3049;
                                        u3092 = u3050;
                                        u3093 = u3051;
                                        u3094 = u3052;
                                        u3095 = u3053;
                                    } else {
                                        if ((int)t474 >= (int)0x25) {
                                            if ((int)t474 > (int)0x28) {
                                                t3055 = *(int *)((t2997 + 0x0));
                                                t2993 = 0xC1EE800;
                                                t3056 = *(int *)((t2993 + 0x0));
                                                t2993 = 0xC;
                                                t3057 = 0;
                                                for (; t3057 < (int)t2993; t3057++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3057) = *(unsigned char *)((((((t3055 << 2) + t3055) << 2) + t3056) + 0x4) + t3057);
                                                t2995 = 0xC179840;
                                                t2994 = ((int)stk + 24);
                                                t2994 = (t2994 + 0x20);
                                                t3058 = nlLength(t2994, t2995);
                                                u2998 = t3058;
                                                t2995 = 0x0;
                                                t3059 = *(int *)((t2997 + 0x0));
                                                t2994 = t3059;
                                                t3060 = FUN_0c02eb86(t2994, t2995, u2998);
                                                t2993 = t3060;
                                            } else {
                                                t3064 = t2994;
                                                t3065 = t2995;
                                                u3066 = u2998;
                                                u3067 = u2999;
                                                u3068 = u3000;
                                                u3069 = u3001;
                                            }
                                            t3080 = t3064;
                                            t3081 = t3065;
                                            u3082 = u3066;
                                            u3083 = u3067;
                                            u3084 = u3068;
                                            u3085 = u3069;
                                        } else {
                                            t3071 = *(int *)((t2997 + 0x0));
                                            t2993 = 0xC1EE800;
                                            t3072 = *(int *)((t2993 + 0x0));
                                            t2993 = 0xC;
                                            t3073 = 0;
                                            for (; t3073 < (int)t2993; t3073++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3073) = *(unsigned char *)((((((t3071 << 2) + t3071) << 2) + t3072) + 0x4) + t3073);
                                            t2995 = 0xC179840;
                                            t2994 = ((int)stk + 24);
                                            t2994 = (t2994 + 0x20);
                                            t3074 = nlLength(t2994, t2995);
                                            u2998 = t3074;
                                            t2995 = 0x0;
                                            t3075 = *(int *)((t2997 + 0x0));
                                            t2994 = t3075;
                                            t3076 = FUN_0c02eb86(t2994, t2995, u2998);
                                            t2993 = t3076;
                                        }
                                        t3090 = t3080;
                                        t3091 = t3081;
                                        u3092 = u3082;
                                        u3093 = u3083;
                                        u3094 = u3084;
                                        u3095 = u3085;
                                    }
                                    t3132 = t3090;
                                    t3133 = t3091;
                                    u3134 = u3092;
                                    u3135 = u3093;
                                    u3136 = u3094;
                                    u3137 = u3095;
                                } else {
                                    if ((int)t474 >= (int)0x25) {
                                        if ((int)t474 > (int)0x28) {
                                            t3097 = *(int *)((t2997 + 0x0));
                                            t2993 = 0xC1EE800;
                                            t3098 = *(int *)((t2993 + 0x0));
                                            t2993 = 0xC;
                                            t3099 = 0;
                                            for (; t3099 < (int)t2993; t3099++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3099) = *(unsigned char *)((((((t3097 << 2) + t3097) << 2) + t3098) + 0x4) + t3099);
                                            t2995 = 0xC179840;
                                            t2994 = ((int)stk + 24);
                                            t2994 = (t2994 + 0x20);
                                            t3100 = nlLength(t2994, t2995);
                                            u2998 = t3100;
                                            t2995 = 0x0;
                                            t3101 = *(int *)((t2997 + 0x0));
                                            t2994 = t3101;
                                            t3102 = FUN_0c02eb86(t2994, t2995, u2998);
                                            t2993 = t3102;
                                        } else {
                                            t3106 = t2994;
                                            t3107 = t2995;
                                            u3108 = u2998;
                                            u3109 = u2999;
                                            u3110 = u3000;
                                            u3111 = u3001;
                                        }
                                        t3122 = t3106;
                                        t3123 = t3107;
                                        u3124 = u3108;
                                        u3125 = u3109;
                                        u3126 = u3110;
                                        u3127 = u3111;
                                    } else {
                                        t3113 = *(int *)((t2997 + 0x0));
                                        t2993 = 0xC1EE800;
                                        t3114 = *(int *)((t2993 + 0x0));
                                        t2993 = 0xC;
                                        t3115 = 0;
                                        for (; t3115 < (int)t2993; t3115++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3115) = *(unsigned char *)((((((t3113 << 2) + t3113) << 2) + t3114) + 0x4) + t3115);
                                        t2995 = 0xC179840;
                                        t2994 = ((int)stk + 24);
                                        t2994 = (t2994 + 0x20);
                                        t3116 = nlLength(t2994, t2995);
                                        u2998 = t3116;
                                        t2995 = 0x0;
                                        t3117 = *(int *)((t2997 + 0x0));
                                        t2994 = t3117;
                                        t3118 = FUN_0c02eb86(t2994, t2995, u2998);
                                        t2993 = t3118;
                                    }
                                    t3132 = t3122;
                                    t3133 = t3123;
                                    u3134 = u3124;
                                    u3135 = u3125;
                                    u3136 = u3126;
                                    u3137 = u3127;
                                }
                                t3148 = t3132;
                                t3149 = t3133;
                                u3150 = u3134;
                                u3151 = u3135;
                                u3152 = u3136;
                                u3153 = u3137;
                            } else {
                                t3139 = *(int *)((t2997 + 0x0));
                                t2993 = 0xC1EE800;
                                t3140 = *(int *)((t2993 + 0x0));
                                t2993 = 0xC;
                                t3141 = 0;
                                for (; t3141 < (int)t2993; t3141++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3141) = *(unsigned char *)((((((t3139 << 2) + t3139) << 2) + t3140) + 0x4) + t3141);
                                t2995 = 0xC179840;
                                t2994 = ((int)stk + 24);
                                t2994 = (t2994 + 0x20);
                                t3142 = nlLength(t2994, t2995);
                                u2998 = t3142;
                                t2995 = 0x0;
                                t3143 = *(int *)((t2997 + 0x0));
                                t2994 = t3143;
                                t3144 = FUN_0c02eb86(t2994, t2995, u2998);
                                t2993 = t3144;
                            }
                            t3155 = *(int *)(((int)stk + 24));
                            u2998 = u3150;
                            u2999 = u3151;
                            u3000 = u3152;
                            u3001 = u3153;
                            t2994 = t3148;
                            t2995 = t3149;
                            t2996 = (t2996 + 0x4);
                            t2997 = (t2997 + 0x4);
                            *(unsigned int *)(((int)stk + 24)) = (t3155 + 0x1);
                            t3156 = *(int *)(((int)stk + 28));
                            *(unsigned int *)(((int)stk + 28)) = (t3156 + 0x4);
                        }
                        t3157 = t2993;
                    }
                    t3334 = t3157;
                } else {
                    *(unsigned int *)(((int)stk + 24)) = 0x0;
                    *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                    t3170 = t474;
                    t3171 = 0xC118600;
                    t3172 = 0xFE;
                    t3173 = 0xC118600;
                    t3174 = 0xC118600;
                    u3175 = u1472;
                    u3176 = u1473;
                    u3177 = u1477;
                    u3178 = u1478;
                    for (;;) {
                        t3179 = *(int *)(((int)stk + 24));
                        t3180 = *(int *)0xC0C8358;
                        if ((int)t3179 >= (int)t3180) {
                            break;
                        }
                        if ((int)t474 >= (int)0x25) {
                            if ((int)t474 <= (int)0x28) {
                                t3181 = *(int *)((t3173 + 0x0));
                                t3170 = t3181;
                                if (t3170 != 109) {
                                    t3182 = *(int *)(((int)stk + 28));
                                    t3170 = t3182;
                                    t3183 = *(int *)((t3170 + 0x0));
                                    t3170 = t3183;
                                    if (t3170 == 110) {
                                        if ((int)t474 >= (int)0x25) {
                                            if ((int)t474 > (int)0x28) {
                                                t3184 = *(int *)((t3174 + 0x0));
                                                t3170 = 0xC1EE800;
                                                t3185 = *(int *)((t3170 + 0x0));
                                                t3170 = 0xC;
                                                t3186 = 0;
                                                for (; t3186 < (int)t3170; t3186++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3186) = *(unsigned char *)((((((t3184 << 2) + t3184) << 2) + t3185) + 0x4) + t3186);
                                                t3172 = 0xC179840;
                                                t3171 = ((int)stk + 24);
                                                t3171 = (t3171 + 0x20);
                                                t3187 = nlLength(t3171, t3172);
                                                u3175 = t3187;
                                                t3172 = 0x0;
                                                t3188 = *(int *)((t3174 + 0x0));
                                                t3171 = t3188;
                                                t3189 = FUN_0c02eb86(t3171, t3172, u3175);
                                                t3170 = t3189;
                                            } else {
                                                t3193 = t3171;
                                                t3194 = t3172;
                                                u3195 = u3175;
                                                u3196 = u3176;
                                                u3197 = u3177;
                                                u3198 = u3178;
                                            }
                                            t3209 = t3193;
                                            t3210 = t3194;
                                            u3211 = u3195;
                                            u3212 = u3196;
                                            u3213 = u3197;
                                            u3214 = u3198;
                                        } else {
                                            t3200 = *(int *)((t3174 + 0x0));
                                            t3170 = 0xC1EE800;
                                            t3201 = *(int *)((t3170 + 0x0));
                                            t3170 = 0xC;
                                            t3202 = 0;
                                            for (; t3202 < (int)t3170; t3202++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3202) = *(unsigned char *)((((((t3200 << 2) + t3200) << 2) + t3201) + 0x4) + t3202);
                                            t3172 = 0xC179840;
                                            t3171 = ((int)stk + 24);
                                            t3171 = (t3171 + 0x20);
                                            t3203 = nlLength(t3171, t3172);
                                            u3175 = t3203;
                                            t3172 = 0x0;
                                            t3204 = *(int *)((t3174 + 0x0));
                                            t3171 = t3204;
                                            t3205 = FUN_0c02eb86(t3171, t3172, u3175);
                                            t3170 = t3205;
                                        }
                                        t3225 = t3209;
                                        t3226 = t3210;
                                        u3227 = u3211;
                                        u3228 = u3212;
                                        u3229 = u3213;
                                        u3230 = u3214;
                                    } else {
                                        t3216 = *(int *)((t3174 + 0x0));
                                        t3170 = 0xC1EE800;
                                        t3217 = *(int *)((t3170 + 0x0));
                                        t3170 = 0xC;
                                        t3218 = 0;
                                        for (; t3218 < (int)t3170; t3218++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3218) = *(unsigned char *)((((((t3216 << 2) + t3216) << 2) + t3217) + 0x4) + t3218);
                                        t3172 = 0xC179840;
                                        t3171 = ((int)stk + 24);
                                        t3171 = (t3171 + 0x20);
                                        t3219 = nlLength(t3171, t3172);
                                        u3175 = t3219;
                                        t3172 = 0x0;
                                        t3220 = *(int *)((t3174 + 0x0));
                                        t3171 = t3220;
                                        t3221 = FUN_0c02eb86(t3171, t3172, u3175);
                                        t3170 = t3221;
                                    }
                                    t3267 = t3225;
                                    t3268 = t3226;
                                    u3269 = u3227;
                                    u3270 = u3228;
                                    u3271 = u3229;
                                    u3272 = u3230;
                                } else {
                                    if ((int)t474 >= (int)0x25) {
                                        if ((int)t474 > (int)0x28) {
                                            t3232 = *(int *)((t3174 + 0x0));
                                            t3170 = 0xC1EE800;
                                            t3233 = *(int *)((t3170 + 0x0));
                                            t3170 = 0xC;
                                            t3234 = 0;
                                            for (; t3234 < (int)t3170; t3234++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3234) = *(unsigned char *)((((((t3232 << 2) + t3232) << 2) + t3233) + 0x4) + t3234);
                                            t3172 = 0xC179840;
                                            t3171 = ((int)stk + 24);
                                            t3171 = (t3171 + 0x20);
                                            t3235 = nlLength(t3171, t3172);
                                            u3175 = t3235;
                                            t3172 = 0x0;
                                            t3236 = *(int *)((t3174 + 0x0));
                                            t3171 = t3236;
                                            t3237 = FUN_0c02eb86(t3171, t3172, u3175);
                                            t3170 = t3237;
                                        } else {
                                            t3241 = t3171;
                                            t3242 = t3172;
                                            u3243 = u3175;
                                            u3244 = u3176;
                                            u3245 = u3177;
                                            u3246 = u3178;
                                        }
                                        t3257 = t3241;
                                        t3258 = t3242;
                                        u3259 = u3243;
                                        u3260 = u3244;
                                        u3261 = u3245;
                                        u3262 = u3246;
                                    } else {
                                        t3248 = *(int *)((t3174 + 0x0));
                                        t3170 = 0xC1EE800;
                                        t3249 = *(int *)((t3170 + 0x0));
                                        t3170 = 0xC;
                                        t3250 = 0;
                                        for (; t3250 < (int)t3170; t3250++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3250) = *(unsigned char *)((((((t3248 << 2) + t3248) << 2) + t3249) + 0x4) + t3250);
                                        t3172 = 0xC179840;
                                        t3171 = ((int)stk + 24);
                                        t3171 = (t3171 + 0x20);
                                        t3251 = nlLength(t3171, t3172);
                                        u3175 = t3251;
                                        t3172 = 0x0;
                                        t3252 = *(int *)((t3174 + 0x0));
                                        t3171 = t3252;
                                        t3253 = FUN_0c02eb86(t3171, t3172, u3175);
                                        t3170 = t3253;
                                    }
                                    t3267 = t3257;
                                    t3268 = t3258;
                                    u3269 = u3259;
                                    u3270 = u3260;
                                    u3271 = u3261;
                                    u3272 = u3262;
                                }
                                t3309 = t3267;
                                t3310 = t3268;
                                u3311 = u3269;
                                u3312 = u3270;
                                u3313 = u3271;
                                u3314 = u3272;
                            } else {
                                if ((int)t474 >= (int)0x25) {
                                    if ((int)t474 > (int)0x28) {
                                        t3274 = *(int *)((t3174 + 0x0));
                                        t3170 = 0xC1EE800;
                                        t3275 = *(int *)((t3170 + 0x0));
                                        t3170 = 0xC;
                                        t3276 = 0;
                                        for (; t3276 < (int)t3170; t3276++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3276) = *(unsigned char *)((((((t3274 << 2) + t3274) << 2) + t3275) + 0x4) + t3276);
                                        t3172 = 0xC179840;
                                        t3171 = ((int)stk + 24);
                                        t3171 = (t3171 + 0x20);
                                        t3277 = nlLength(t3171, t3172);
                                        u3175 = t3277;
                                        t3172 = 0x0;
                                        t3278 = *(int *)((t3174 + 0x0));
                                        t3171 = t3278;
                                        t3279 = FUN_0c02eb86(t3171, t3172, u3175);
                                        t3170 = t3279;
                                    } else {
                                        t3283 = t3171;
                                        t3284 = t3172;
                                        u3285 = u3175;
                                        u3286 = u3176;
                                        u3287 = u3177;
                                        u3288 = u3178;
                                    }
                                    t3299 = t3283;
                                    t3300 = t3284;
                                    u3301 = u3285;
                                    u3302 = u3286;
                                    u3303 = u3287;
                                    u3304 = u3288;
                                } else {
                                    t3290 = *(int *)((t3174 + 0x0));
                                    t3170 = 0xC1EE800;
                                    t3291 = *(int *)((t3170 + 0x0));
                                    t3170 = 0xC;
                                    t3292 = 0;
                                    for (; t3292 < (int)t3170; t3292++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3292) = *(unsigned char *)((((((t3290 << 2) + t3290) << 2) + t3291) + 0x4) + t3292);
                                    t3172 = 0xC179840;
                                    t3171 = ((int)stk + 24);
                                    t3171 = (t3171 + 0x20);
                                    t3293 = nlLength(t3171, t3172);
                                    u3175 = t3293;
                                    t3172 = 0x0;
                                    t3294 = *(int *)((t3174 + 0x0));
                                    t3171 = t3294;
                                    t3295 = FUN_0c02eb86(t3171, t3172, u3175);
                                    t3170 = t3295;
                                }
                                t3309 = t3299;
                                t3310 = t3300;
                                u3311 = u3301;
                                u3312 = u3302;
                                u3313 = u3303;
                                u3314 = u3304;
                            }
                            t3325 = t3309;
                            t3326 = t3310;
                            u3327 = u3311;
                            u3328 = u3312;
                            u3329 = u3313;
                            u3330 = u3314;
                        } else {
                            t3316 = *(int *)((t3174 + 0x0));
                            t3170 = 0xC1EE800;
                            t3317 = *(int *)((t3170 + 0x0));
                            t3170 = 0xC;
                            t3318 = 0;
                            for (; t3318 < (int)t3170; t3318++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3318) = *(unsigned char *)((((((t3316 << 2) + t3316) << 2) + t3317) + 0x4) + t3318);
                            t3172 = 0xC179840;
                            t3171 = ((int)stk + 24);
                            t3171 = (t3171 + 0x20);
                            t3319 = nlLength(t3171, t3172);
                            u3175 = t3319;
                            t3172 = 0x0;
                            t3320 = *(int *)((t3174 + 0x0));
                            t3171 = t3320;
                            t3321 = FUN_0c02eb86(t3171, t3172, u3175);
                            t3170 = t3321;
                        }
                        t3332 = *(int *)(((int)stk + 24));
                        u3175 = u3327;
                        u3176 = u3328;
                        u3177 = u3329;
                        u3178 = u3330;
                        t3171 = t3325;
                        t3172 = t3326;
                        t3173 = (t3173 + 0x4);
                        t3174 = (t3174 + 0x4);
                        *(unsigned int *)(((int)stk + 24)) = (t3332 + 0x1);
                        t3333 = *(int *)(((int)stk + 28));
                        *(unsigned int *)(((int)stk + 28)) = (t3333 + 0x4);
                    }
                    t3334 = t3170;
                }
                t3511 = t3334;
            } else {
                *(unsigned int *)(((int)stk + 24)) = 0x0;
                *(unsigned int *)(((int)stk + 28)) = 0xC118600;
                t3347 = t474;
                t3348 = 0xC118600;
                t3349 = 0xFE;
                t3350 = 0xC118600;
                t3351 = 0xC118600;
                u3352 = u1472;
                u3353 = u1473;
                u3354 = u1477;
                u3355 = u1478;
                for (;;) {
                    t3356 = *(int *)(((int)stk + 24));
                    t3357 = *(int *)0xC0C8358;
                    if ((int)t3356 >= (int)t3357) {
                        break;
                    }
                    if ((int)t474 >= (int)0x25) {
                        if ((int)t474 <= (int)0x28) {
                            t3358 = *(int *)((t3350 + 0x0));
                            t3347 = t3358;
                            if (t3347 != 109) {
                                t3359 = *(int *)(((int)stk + 28));
                                t3347 = t3359;
                                t3360 = *(int *)((t3347 + 0x0));
                                t3347 = t3360;
                                if (t3347 == 110) {
                                    if ((int)t474 >= (int)0x25) {
                                        if ((int)t474 > (int)0x28) {
                                            t3361 = *(int *)((t3351 + 0x0));
                                            t3347 = 0xC1EE800;
                                            t3362 = *(int *)((t3347 + 0x0));
                                            t3347 = 0xC;
                                            t3363 = 0;
                                            for (; t3363 < (int)t3347; t3363++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3363) = *(unsigned char *)((((((t3361 << 2) + t3361) << 2) + t3362) + 0x4) + t3363);
                                            t3349 = 0xC179840;
                                            t3348 = ((int)stk + 24);
                                            t3348 = (t3348 + 0x20);
                                            t3364 = nlLength(t3348, t3349);
                                            u3352 = t3364;
                                            t3349 = 0x0;
                                            t3365 = *(int *)((t3351 + 0x0));
                                            t3348 = t3365;
                                            t3366 = FUN_0c02eb86(t3348, t3349, u3352);
                                            t3347 = t3366;
                                        } else {
                                            t3370 = t3348;
                                            t3371 = t3349;
                                            u3372 = u3352;
                                            u3373 = u3353;
                                            u3374 = u3354;
                                            u3375 = u3355;
                                        }
                                        t3386 = t3370;
                                        t3387 = t3371;
                                        u3388 = u3372;
                                        u3389 = u3373;
                                        u3390 = u3374;
                                        u3391 = u3375;
                                    } else {
                                        t3377 = *(int *)((t3351 + 0x0));
                                        t3347 = 0xC1EE800;
                                        t3378 = *(int *)((t3347 + 0x0));
                                        t3347 = 0xC;
                                        t3379 = 0;
                                        for (; t3379 < (int)t3347; t3379++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3379) = *(unsigned char *)((((((t3377 << 2) + t3377) << 2) + t3378) + 0x4) + t3379);
                                        t3349 = 0xC179840;
                                        t3348 = ((int)stk + 24);
                                        t3348 = (t3348 + 0x20);
                                        t3380 = nlLength(t3348, t3349);
                                        u3352 = t3380;
                                        t3349 = 0x0;
                                        t3381 = *(int *)((t3351 + 0x0));
                                        t3348 = t3381;
                                        t3382 = FUN_0c02eb86(t3348, t3349, u3352);
                                        t3347 = t3382;
                                    }
                                    t3402 = t3386;
                                    t3403 = t3387;
                                    u3404 = u3388;
                                    u3405 = u3389;
                                    u3406 = u3390;
                                    u3407 = u3391;
                                } else {
                                    t3393 = *(int *)((t3351 + 0x0));
                                    t3347 = 0xC1EE800;
                                    t3394 = *(int *)((t3347 + 0x0));
                                    t3347 = 0xC;
                                    t3395 = 0;
                                    for (; t3395 < (int)t3347; t3395++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3395) = *(unsigned char *)((((((t3393 << 2) + t3393) << 2) + t3394) + 0x4) + t3395);
                                    t3349 = 0xC179840;
                                    t3348 = ((int)stk + 24);
                                    t3348 = (t3348 + 0x20);
                                    t3396 = nlLength(t3348, t3349);
                                    u3352 = t3396;
                                    t3349 = 0x0;
                                    t3397 = *(int *)((t3351 + 0x0));
                                    t3348 = t3397;
                                    t3398 = FUN_0c02eb86(t3348, t3349, u3352);
                                    t3347 = t3398;
                                }
                                t3444 = t3402;
                                t3445 = t3403;
                                u3446 = u3404;
                                u3447 = u3405;
                                u3448 = u3406;
                                u3449 = u3407;
                            } else {
                                if ((int)t474 >= (int)0x25) {
                                    if ((int)t474 > (int)0x28) {
                                        t3409 = *(int *)((t3351 + 0x0));
                                        t3347 = 0xC1EE800;
                                        t3410 = *(int *)((t3347 + 0x0));
                                        t3347 = 0xC;
                                        t3411 = 0;
                                        for (; t3411 < (int)t3347; t3411++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3411) = *(unsigned char *)((((((t3409 << 2) + t3409) << 2) + t3410) + 0x4) + t3411);
                                        t3349 = 0xC179840;
                                        t3348 = ((int)stk + 24);
                                        t3348 = (t3348 + 0x20);
                                        t3412 = nlLength(t3348, t3349);
                                        u3352 = t3412;
                                        t3349 = 0x0;
                                        t3413 = *(int *)((t3351 + 0x0));
                                        t3348 = t3413;
                                        t3414 = FUN_0c02eb86(t3348, t3349, u3352);
                                        t3347 = t3414;
                                    } else {
                                        t3418 = t3348;
                                        t3419 = t3349;
                                        u3420 = u3352;
                                        u3421 = u3353;
                                        u3422 = u3354;
                                        u3423 = u3355;
                                    }
                                    t3434 = t3418;
                                    t3435 = t3419;
                                    u3436 = u3420;
                                    u3437 = u3421;
                                    u3438 = u3422;
                                    u3439 = u3423;
                                } else {
                                    t3425 = *(int *)((t3351 + 0x0));
                                    t3347 = 0xC1EE800;
                                    t3426 = *(int *)((t3347 + 0x0));
                                    t3347 = 0xC;
                                    t3427 = 0;
                                    for (; t3427 < (int)t3347; t3427++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3427) = *(unsigned char *)((((((t3425 << 2) + t3425) << 2) + t3426) + 0x4) + t3427);
                                    t3349 = 0xC179840;
                                    t3348 = ((int)stk + 24);
                                    t3348 = (t3348 + 0x20);
                                    t3428 = nlLength(t3348, t3349);
                                    u3352 = t3428;
                                    t3349 = 0x0;
                                    t3429 = *(int *)((t3351 + 0x0));
                                    t3348 = t3429;
                                    t3430 = FUN_0c02eb86(t3348, t3349, u3352);
                                    t3347 = t3430;
                                }
                                t3444 = t3434;
                                t3445 = t3435;
                                u3446 = u3436;
                                u3447 = u3437;
                                u3448 = u3438;
                                u3449 = u3439;
                            }
                            t3486 = t3444;
                            t3487 = t3445;
                            u3488 = u3446;
                            u3489 = u3447;
                            u3490 = u3448;
                            u3491 = u3449;
                        } else {
                            if ((int)t474 >= (int)0x25) {
                                if ((int)t474 > (int)0x28) {
                                    t3451 = *(int *)((t3351 + 0x0));
                                    t3347 = 0xC1EE800;
                                    t3452 = *(int *)((t3347 + 0x0));
                                    t3347 = 0xC;
                                    t3453 = 0;
                                    for (; t3453 < (int)t3347; t3453++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3453) = *(unsigned char *)((((((t3451 << 2) + t3451) << 2) + t3452) + 0x4) + t3453);
                                    t3349 = 0xC179840;
                                    t3348 = ((int)stk + 24);
                                    t3348 = (t3348 + 0x20);
                                    t3454 = nlLength(t3348, t3349);
                                    u3352 = t3454;
                                    t3349 = 0x0;
                                    t3455 = *(int *)((t3351 + 0x0));
                                    t3348 = t3455;
                                    t3456 = FUN_0c02eb86(t3348, t3349, u3352);
                                    t3347 = t3456;
                                } else {
                                    t3460 = t3348;
                                    t3461 = t3349;
                                    u3462 = u3352;
                                    u3463 = u3353;
                                    u3464 = u3354;
                                    u3465 = u3355;
                                }
                                t3476 = t3460;
                                t3477 = t3461;
                                u3478 = u3462;
                                u3479 = u3463;
                                u3480 = u3464;
                                u3481 = u3465;
                            } else {
                                t3467 = *(int *)((t3351 + 0x0));
                                t3347 = 0xC1EE800;
                                t3468 = *(int *)((t3347 + 0x0));
                                t3347 = 0xC;
                                t3469 = 0;
                                for (; t3469 < (int)t3347; t3469++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3469) = *(unsigned char *)((((((t3467 << 2) + t3467) << 2) + t3468) + 0x4) + t3469);
                                t3349 = 0xC179840;
                                t3348 = ((int)stk + 24);
                                t3348 = (t3348 + 0x20);
                                t3470 = nlLength(t3348, t3349);
                                u3352 = t3470;
                                t3349 = 0x0;
                                t3471 = *(int *)((t3351 + 0x0));
                                t3348 = t3471;
                                t3472 = FUN_0c02eb86(t3348, t3349, u3352);
                                t3347 = t3472;
                            }
                            t3486 = t3476;
                            t3487 = t3477;
                            u3488 = u3478;
                            u3489 = u3479;
                            u3490 = u3480;
                            u3491 = u3481;
                        }
                        t3502 = t3486;
                        t3503 = t3487;
                        u3504 = u3488;
                        u3505 = u3489;
                        u3506 = u3490;
                        u3507 = u3491;
                    } else {
                        t3493 = *(int *)((t3351 + 0x0));
                        t3347 = 0xC1EE800;
                        t3494 = *(int *)((t3347 + 0x0));
                        t3347 = 0xC;
                        t3495 = 0;
                        for (; t3495 < (int)t3347; t3495++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3495) = *(unsigned char *)((((((t3493 << 2) + t3493) << 2) + t3494) + 0x4) + t3495);
                        t3349 = 0xC179840;
                        t3348 = ((int)stk + 24);
                        t3348 = (t3348 + 0x20);
                        t3496 = nlLength(t3348, t3349);
                        u3352 = t3496;
                        t3349 = 0x0;
                        t3497 = *(int *)((t3351 + 0x0));
                        t3348 = t3497;
                        t3498 = FUN_0c02eb86(t3348, t3349, u3352);
                        t3347 = t3498;
                    }
                    t3509 = *(int *)(((int)stk + 24));
                    u3352 = u3504;
                    u3353 = u3505;
                    u3354 = u3506;
                    u3355 = u3507;
                    t3348 = t3502;
                    t3349 = t3503;
                    t3350 = (t3350 + 0x4);
                    t3351 = (t3351 + 0x4);
                    *(unsigned int *)(((int)stk + 24)) = (t3509 + 0x1);
                    t3510 = *(int *)(((int)stk + 28));
                    *(unsigned int *)(((int)stk + 28)) = (t3510 + 0x4);
                }
                t3511 = t3347;
            }
            t3688 = t3511;
        } else {
            *(unsigned int *)(((int)stk + 24)) = 0x0;
            *(unsigned int *)(((int)stk + 28)) = 0xC118600;
            t3524 = t474;
            t3525 = 0xC118600;
            t3526 = 0xFE;
            t3527 = 0xC118600;
            t3528 = 0xC118600;
            u3529 = u1472;
            u3530 = u1473;
            u3531 = u1477;
            u3532 = u1478;
            for (;;) {
                t3533 = *(int *)(((int)stk + 24));
                t3534 = *(int *)0xC0C8358;
                if ((int)t3533 >= (int)t3534) {
                    break;
                }
                if ((int)t474 >= (int)0x25) {
                    if ((int)t474 <= (int)0x28) {
                        t3535 = *(int *)((t3527 + 0x0));
                        t3524 = t3535;
                        if (t3524 != 109) {
                            t3536 = *(int *)(((int)stk + 28));
                            t3524 = t3536;
                            t3537 = *(int *)((t3524 + 0x0));
                            t3524 = t3537;
                            if (t3524 == 110) {
                                if ((int)t474 >= (int)0x25) {
                                    if ((int)t474 > (int)0x28) {
                                        t3538 = *(int *)((t3528 + 0x0));
                                        t3524 = 0xC1EE800;
                                        t3539 = *(int *)((t3524 + 0x0));
                                        t3524 = 0xC;
                                        t3540 = 0;
                                        for (; t3540 < (int)t3524; t3540++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3540) = *(unsigned char *)((((((t3538 << 2) + t3538) << 2) + t3539) + 0x4) + t3540);
                                        t3526 = 0xC179840;
                                        t3525 = ((int)stk + 24);
                                        t3525 = (t3525 + 0x20);
                                        t3541 = nlLength(t3525, t3526);
                                        u3529 = t3541;
                                        t3526 = 0x0;
                                        t3542 = *(int *)((t3528 + 0x0));
                                        t3525 = t3542;
                                        t3543 = FUN_0c02eb86(t3525, t3526, u3529);
                                        t3524 = t3543;
                                    } else {
                                        t3547 = t3525;
                                        t3548 = t3526;
                                        u3549 = u3529;
                                        u3550 = u3530;
                                        u3551 = u3531;
                                        u3552 = u3532;
                                    }
                                    t3563 = t3547;
                                    t3564 = t3548;
                                    u3565 = u3549;
                                    u3566 = u3550;
                                    u3567 = u3551;
                                    u3568 = u3552;
                                } else {
                                    t3554 = *(int *)((t3528 + 0x0));
                                    t3524 = 0xC1EE800;
                                    t3555 = *(int *)((t3524 + 0x0));
                                    t3524 = 0xC;
                                    t3556 = 0;
                                    for (; t3556 < (int)t3524; t3556++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3556) = *(unsigned char *)((((((t3554 << 2) + t3554) << 2) + t3555) + 0x4) + t3556);
                                    t3526 = 0xC179840;
                                    t3525 = ((int)stk + 24);
                                    t3525 = (t3525 + 0x20);
                                    t3557 = nlLength(t3525, t3526);
                                    u3529 = t3557;
                                    t3526 = 0x0;
                                    t3558 = *(int *)((t3528 + 0x0));
                                    t3525 = t3558;
                                    t3559 = FUN_0c02eb86(t3525, t3526, u3529);
                                    t3524 = t3559;
                                }
                                t3579 = t3563;
                                t3580 = t3564;
                                u3581 = u3565;
                                u3582 = u3566;
                                u3583 = u3567;
                                u3584 = u3568;
                            } else {
                                t3570 = *(int *)((t3528 + 0x0));
                                t3524 = 0xC1EE800;
                                t3571 = *(int *)((t3524 + 0x0));
                                t3524 = 0xC;
                                t3572 = 0;
                                for (; t3572 < (int)t3524; t3572++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3572) = *(unsigned char *)((((((t3570 << 2) + t3570) << 2) + t3571) + 0x4) + t3572);
                                t3526 = 0xC179840;
                                t3525 = ((int)stk + 24);
                                t3525 = (t3525 + 0x20);
                                t3573 = nlLength(t3525, t3526);
                                u3529 = t3573;
                                t3526 = 0x0;
                                t3574 = *(int *)((t3528 + 0x0));
                                t3525 = t3574;
                                t3575 = FUN_0c02eb86(t3525, t3526, u3529);
                                t3524 = t3575;
                            }
                            t3621 = t3579;
                            t3622 = t3580;
                            u3623 = u3581;
                            u3624 = u3582;
                            u3625 = u3583;
                            u3626 = u3584;
                        } else {
                            if ((int)t474 >= (int)0x25) {
                                if ((int)t474 > (int)0x28) {
                                    t3586 = *(int *)((t3528 + 0x0));
                                    t3524 = 0xC1EE800;
                                    t3587 = *(int *)((t3524 + 0x0));
                                    t3524 = 0xC;
                                    t3588 = 0;
                                    for (; t3588 < (int)t3524; t3588++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3588) = *(unsigned char *)((((((t3586 << 2) + t3586) << 2) + t3587) + 0x4) + t3588);
                                    t3526 = 0xC179840;
                                    t3525 = ((int)stk + 24);
                                    t3525 = (t3525 + 0x20);
                                    t3589 = nlLength(t3525, t3526);
                                    u3529 = t3589;
                                    t3526 = 0x0;
                                    t3590 = *(int *)((t3528 + 0x0));
                                    t3525 = t3590;
                                    t3591 = FUN_0c02eb86(t3525, t3526, u3529);
                                    t3524 = t3591;
                                } else {
                                    t3595 = t3525;
                                    t3596 = t3526;
                                    u3597 = u3529;
                                    u3598 = u3530;
                                    u3599 = u3531;
                                    u3600 = u3532;
                                }
                                t3611 = t3595;
                                t3612 = t3596;
                                u3613 = u3597;
                                u3614 = u3598;
                                u3615 = u3599;
                                u3616 = u3600;
                            } else {
                                t3602 = *(int *)((t3528 + 0x0));
                                t3524 = 0xC1EE800;
                                t3603 = *(int *)((t3524 + 0x0));
                                t3524 = 0xC;
                                t3604 = 0;
                                for (; t3604 < (int)t3524; t3604++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3604) = *(unsigned char *)((((((t3602 << 2) + t3602) << 2) + t3603) + 0x4) + t3604);
                                t3526 = 0xC179840;
                                t3525 = ((int)stk + 24);
                                t3525 = (t3525 + 0x20);
                                t3605 = nlLength(t3525, t3526);
                                u3529 = t3605;
                                t3526 = 0x0;
                                t3606 = *(int *)((t3528 + 0x0));
                                t3525 = t3606;
                                t3607 = FUN_0c02eb86(t3525, t3526, u3529);
                                t3524 = t3607;
                            }
                            t3621 = t3611;
                            t3622 = t3612;
                            u3623 = u3613;
                            u3624 = u3614;
                            u3625 = u3615;
                            u3626 = u3616;
                        }
                        t3663 = t3621;
                        t3664 = t3622;
                        u3665 = u3623;
                        u3666 = u3624;
                        u3667 = u3625;
                        u3668 = u3626;
                    } else {
                        if ((int)t474 >= (int)0x25) {
                            if ((int)t474 > (int)0x28) {
                                t3628 = *(int *)((t3528 + 0x0));
                                t3524 = 0xC1EE800;
                                t3629 = *(int *)((t3524 + 0x0));
                                t3524 = 0xC;
                                t3630 = 0;
                                for (; t3630 < (int)t3524; t3630++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3630) = *(unsigned char *)((((((t3628 << 2) + t3628) << 2) + t3629) + 0x4) + t3630);
                                t3526 = 0xC179840;
                                t3525 = ((int)stk + 24);
                                t3525 = (t3525 + 0x20);
                                t3631 = nlLength(t3525, t3526);
                                u3529 = t3631;
                                t3526 = 0x0;
                                t3632 = *(int *)((t3528 + 0x0));
                                t3525 = t3632;
                                t3633 = FUN_0c02eb86(t3525, t3526, u3529);
                                t3524 = t3633;
                            } else {
                                t3637 = t3525;
                                t3638 = t3526;
                                u3639 = u3529;
                                u3640 = u3530;
                                u3641 = u3531;
                                u3642 = u3532;
                            }
                            t3653 = t3637;
                            t3654 = t3638;
                            u3655 = u3639;
                            u3656 = u3640;
                            u3657 = u3641;
                            u3658 = u3642;
                        } else {
                            t3644 = *(int *)((t3528 + 0x0));
                            t3524 = 0xC1EE800;
                            t3645 = *(int *)((t3524 + 0x0));
                            t3524 = 0xC;
                            t3646 = 0;
                            for (; t3646 < (int)t3524; t3646++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3646) = *(unsigned char *)((((((t3644 << 2) + t3644) << 2) + t3645) + 0x4) + t3646);
                            t3526 = 0xC179840;
                            t3525 = ((int)stk + 24);
                            t3525 = (t3525 + 0x20);
                            t3647 = nlLength(t3525, t3526);
                            u3529 = t3647;
                            t3526 = 0x0;
                            t3648 = *(int *)((t3528 + 0x0));
                            t3525 = t3648;
                            t3649 = FUN_0c02eb86(t3525, t3526, u3529);
                            t3524 = t3649;
                        }
                        t3663 = t3653;
                        t3664 = t3654;
                        u3665 = u3655;
                        u3666 = u3656;
                        u3667 = u3657;
                        u3668 = u3658;
                    }
                    t3679 = t3663;
                    t3680 = t3664;
                    u3681 = u3665;
                    u3682 = u3666;
                    u3683 = u3667;
                    u3684 = u3668;
                } else {
                    t3670 = *(int *)((t3528 + 0x0));
                    t3524 = 0xC1EE800;
                    t3671 = *(int *)((t3524 + 0x0));
                    t3524 = 0xC;
                    t3672 = 0;
                    for (; t3672 < (int)t3524; t3672++) *(unsigned char *)((((int)stk + 24) + 0x20) + t3672) = *(unsigned char *)((((((t3670 << 2) + t3670) << 2) + t3671) + 0x4) + t3672);
                    t3526 = 0xC179840;
                    t3525 = ((int)stk + 24);
                    t3525 = (t3525 + 0x20);
                    t3673 = nlLength(t3525, t3526);
                    u3529 = t3673;
                    t3526 = 0x0;
                    t3674 = *(int *)((t3528 + 0x0));
                    t3525 = t3674;
                    t3675 = FUN_0c02eb86(t3525, t3526, u3529);
                    t3524 = t3675;
                }
                t3686 = *(int *)(((int)stk + 24));
                u3529 = u3681;
                u3530 = u3682;
                u3531 = u3683;
                u3532 = u3684;
                t3525 = t3679;
                t3526 = t3680;
                t3527 = (t3527 + 0x4);
                t3528 = (t3528 + 0x4);
                *(unsigned int *)(((int)stk + 24)) = (t3686 + 0x1);
                t3687 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 28)) = (t3687 + 0x4);
            }
            t3688 = t3524;
        }
        t3722 = t3688;
        if ((int)t474 >= (int)0x43) {
            t3711 = t3688;
            if ((int)t474 <= (int)0x46) {
                t3701 = *(int *)0xC1EE804;
                t3702 = *(int *)((((t3701 + 0x8AC) + 0x4) + 0x8));
                *(unsigned int *)(((((int)stk + 24) + 0x20) + 0x8)) = t3702;
                t3703 = *(int *)((((t3701 + 0x8AC) + 0x4) + 0x4));
                *(unsigned int *)(((((int)stk + 24) + 0x20) + 0x4)) = t3703;
                t3704 = *(int *)((((t3701 + 0x8AC) + 0x4) + 0x0));
                *(unsigned int *)(((((int)stk + 24) + 0x20) + 0x0)) = t3704;
                u3705 = *(float *)(((t3701 + 0x8AC) + 0x0));
                t3706 = CheckClipping(u3705);
                t3709 = t3706;
                if (t3706 != 0) {
                    t3707 = nlLength((((int)stk + 24) + 0x20), 0xC179840);
                    t3708 = FUN_0c02eb86(0x6F, 0x1, t3707);
                    t3709 = t3708;
                }
                t3711 = t3709;
            }
            t3722 = t3711;
        }
        return t3722;
    }
    *(float *)(((int)stk + 80)) = 3000.0f;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    u3733 = *(float *)0xC1798A4;
    t3734 = FUN_0c089de0((((int)(((u3733 * 32768.0f) / 360.0f) + 0.5f) & 0xFFFF) + 0x1));
    *(float *)0xC2A6AC8 = (1.0f / t3734);
    t3735 = CourseSplineGet(0x0);
    t3736 = CourseSplineNumGet(0x0);
    getNearLineIndex(0x0, t3736, t3735, 0xC2A6EC0);
    t3738 = findSplineSection(0xC124358, 0xC0C8410, 0xC2A6EC0);
    *(unsigned int *)(((int)stk + 44)) = t3738;
    t5463 = t3738;
    if (t3738 == -1) {
    } else {
        getPieceWindow((((int)stk + 4) + 0x28), 0xC1243F8, 0xC0C8410);
        SetMVShadow();
        t3741 = *(int *)0xC17912C;
        if ((int)t3741 > (int)0x32) {
            if ((int)t3741 >= (int)0x3A) {
                if ((int)t3741 > (int)0x4E) {
                    if ((int)t3741 >= (int)0x75) {
                        if ((int)t3741 > (int)0x7A) {
                            if ((int)t3741 < (int)0x8A) {
                                t3742 = 0x60;
                                t3743 = 0x32;
                                u3744 = 3000.0f;
                                for (;;) {
                                    t3745 = *(int *)(((int)stk + 24));
                                    t3746 = *(int *)(((int)stk + 36));
                                    if ((int)t3745 >= (int)t3746) {
                                        break;
                                    }
                                    t3742 = 0xFF;
                                    t3747 = *(int *)(((int)stk + 24));
                                    t3743 = t3747;
                                    t3748 = *(int *)(((int)stk + 32));
                                    t3749 = (int)((int)(t3748 + t3743) % (int)t3742);
                                    t3742 = t3749;
                                    t3743 = 0xC081324;
                                    *(unsigned int *)(((int)stk + 20)) = t3742;
                                    *(unsigned int *)(((int)stk + 28)) = (((t3742 << 2) + t3742) << 2);
                                    t3750 = *(int *)0xC1EE800;
                                    t3751 = (((((t3742 << 2) + t3742) << 2) + t3750) + 0x4);
                                    t3742 = 0xC;
                                    t3752 = 0;
                                    for (; t3752 < (int)t3742; t3752++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t3752) = *(unsigned char *)(t3751 + t3752);
                                    t3753 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t3742 = t3753;
                                    t3754 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t3755 = *(int *)(((int)stk + 28));
                                    t3756 = *(int *)0xC1EE800;
                                    t3743 = t3756;
                                    u3744 = t3754;
                                    u3757 = *(float *)(((t3755 + t3743) + 0x0));
                                    t3758 = CheckClipping(u3757);
                                    t3742 = t3758;
                                    if (t3742 != 0) {
                                        t3759 = *(int *)(((int)stk + 20));
                                        t3742 = 0x20;
                                        t3760 = *(int *)0xC1EE800;
                                        t3743 = t3759;
                                        t3761 = *(int *)0xC2A6EC0;
                                        u3762 = *(float *)((((int)stk + 20) + t3742));
                                        u3763 = *(float *)((((((t3759 << 2) + t3743) << 2) + t3760) + 0x0));
                                        t3764 = *(int *)(((int)stk + 20));
                                        t3765 = PutCourse_CheckPiece(t3764, t3761, 0x0, (((int)stk + 20) + 0x2C), u3744, u3762, u3763);
                                        t3742 = t3765;
                                        if (t3742 == 1) {
                                            t3766 = *(int *)(((int)stk + 20));
                                            t3767 = FUN_0c02eb86(t3766, 0x0, u3744);
                                            t3742 = t3767;
                                        }
                                    }
                                    t3770 = *(int *)(((int)stk + 24));
                                    t3743 = t3770;
                                    t3743 = (t3743 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t3743;
                                }
                                u3841 = u3744;
                            } else {
                                if ((int)t3741 > (int)0x17B) {
                                    t3771 = 0x60;
                                    t3772 = 0x32;
                                    u3773 = 3000.0f;
                                    for (;;) {
                                        t3774 = *(int *)(((int)stk + 24));
                                        t3775 = *(int *)(((int)stk + 36));
                                        if ((int)t3774 >= (int)t3775) {
                                            break;
                                        }
                                        t3771 = 0xFF;
                                        t3776 = *(int *)(((int)stk + 24));
                                        t3772 = t3776;
                                        t3777 = *(int *)(((int)stk + 32));
                                        t3778 = (int)((int)(t3777 + t3772) % (int)t3771);
                                        t3771 = t3778;
                                        *(unsigned int *)(((int)stk + 20)) = t3771;
                                        *(unsigned int *)(((int)stk + 28)) = (((t3771 << 2) + t3771) << 2);
                                        t3779 = *(int *)0xC1EE800;
                                        t3780 = (((((t3771 << 2) + t3771) << 2) + t3779) + 0x4);
                                        t3771 = 0xC;
                                        t3781 = 0;
                                        for (; t3781 < (int)t3771; t3781++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t3781) = *(unsigned char *)(t3780 + t3781);
                                        t3782 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t3771 = t3782;
                                        t3783 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t3784 = *(int *)(((int)stk + 28));
                                        t3785 = *(int *)0xC1EE800;
                                        t3772 = t3785;
                                        u3773 = t3783;
                                        u3786 = *(float *)(((t3784 + t3772) + 0x0));
                                        t3787 = CheckClipping(u3786);
                                        t3771 = t3787;
                                        if (t3771 != 0) {
                                            t3788 = *(int *)(((int)stk + 20));
                                            t3771 = 0x20;
                                            t3789 = *(int *)0xC1EE800;
                                            t3772 = t3788;
                                            t3790 = *(int *)0xC2A6EC0;
                                            u3791 = *(float *)((((int)stk + 20) + t3771));
                                            u3792 = *(float *)((((((t3788 << 2) + t3772) << 2) + t3789) + 0x0));
                                            t3793 = *(int *)(((int)stk + 20));
                                            t3794 = PutCourse_CheckPiece(t3793, t3790, 0x0, (((int)stk + 20) + 0x2C), u3773, u3791, u3792);
                                            t3771 = t3794;
                                            if (t3771 == 1) {
                                                t3795 = *(int *)(((int)stk + 20));
                                                t3796 = FUN_0c02eb86(t3795, 0x0, u3773);
                                                t3771 = t3796;
                                            }
                                        }
                                        t3799 = *(int *)(((int)stk + 24));
                                        t3772 = t3799;
                                        t3772 = (t3772 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t3772;
                                    }
                                    u3836 = u3773;
                                } else {
                                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                                    u3800 = 3000.0f;
                                    for (;;) {
                                        t3801 = *(short *)0xC17912C;
                                        t3802 = *(int *)(((int)stk + 24));
                                        t3803 = *(int *)(((t3802 << 2) + ((unsigned short)(((((t3801 << 2) << 2) + t3801) << 2) << 1) + 0xC0F4588)));
                                        if (t3803 == -1) {
                                            break;
                                        }
                                        t3804 = *(short *)0xC17912C;
                                        t3805 = *(int *)(((int)stk + 28));
                                        t3806 = *(int *)((((0xC0F4588 + (unsigned short)(((((t3804 << 2) << 2) + t3804) << 2) << 1)) + t3805) + 0x0));
                                        *(unsigned int *)(((int)stk + 20)) = t3806;
                                        *(unsigned int *)(((int)stk + 40)) = (((t3806 << 2) + t3806) << 2);
                                        t3807 = *(int *)0xC1EE800;
                                        t3808 = *(int *)(((((((t3806 << 2) + t3806) << 2) + t3807) + 0x4) + 0x8));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t3808;
                                        t3809 = *(int *)(((((((t3806 << 2) + t3806) << 2) + t3807) + 0x4) + 0x4));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t3809;
                                        t3810 = *(int *)(((((((t3806 << 2) + t3806) << 2) + t3807) + 0x4) + 0x0));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t3810;
                                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t3812 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t3813 = *(int *)(((int)stk + 40));
                                        t3814 = *(int *)0xC1EE800;
                                        u3800 = t3812;
                                        u3815 = *(float *)(((t3813 + t3814) + 0x0));
                                        t3816 = CheckClipping(u3815);
                                        if (t3816 != 0) {
                                            t3817 = *(int *)(((int)stk + 20));
                                            t3818 = *(int *)0xC1EE800;
                                            t3819 = *(int *)0xC2A6EC0;
                                            u3820 = *(float *)(((int)stk + 52));
                                            u3821 = *(float *)((((((t3817 << 2) + t3817) << 2) + t3818) + 0x0));
                                            t3822 = *(int *)(((int)stk + 20));
                                            t3823 = PutCourse_CheckPiece(t3822, t3819, 0x0, (((int)stk + 20) + 0x2C), u3800, u3820, u3821);
                                            if (t3823 == 1) {
                                                t3824 = *(int *)(((int)stk + 20));
                                                FUN_0c02eb86(t3824, 0x0, u3800);
                                            }
                                        }
                                        t3830 = *(int *)(((int)stk + 24));
                                        *(unsigned int *)(((int)stk + 24)) = (t3830 + 0x1);
                                        t3831 = *(int *)(((int)stk + 28));
                                        *(unsigned int *)(((int)stk + 28)) = (t3831 + 0x4);
                                    }
                                    u3836 = u3800;
                                }
                                u3841 = u3836;
                            }
                            u3878 = u3841;
                        } else {
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            u3842 = 3000.0f;
                            for (;;) {
                                t3843 = *(short *)0xC17912C;
                                t3844 = *(int *)(((int)stk + 24));
                                t3845 = *(int *)(((t3844 << 2) + ((unsigned short)(((((t3843 << 2) << 2) + t3843) << 2) << 1) + 0xC0F4588)));
                                if (t3845 == -1) {
                                    break;
                                }
                                t3846 = *(short *)0xC17912C;
                                t3847 = *(int *)(((int)stk + 28));
                                t3848 = *(int *)((((0xC0F4588 + (unsigned short)(((((t3846 << 2) << 2) + t3846) << 2) << 1)) + t3847) + 0x0));
                                *(unsigned int *)(((int)stk + 20)) = t3848;
                                *(unsigned int *)(((int)stk + 40)) = (((t3848 << 2) + t3848) << 2);
                                t3849 = *(int *)0xC1EE800;
                                t3850 = *(int *)(((((((t3848 << 2) + t3848) << 2) + t3849) + 0x4) + 0x8));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t3850;
                                t3851 = *(int *)(((((((t3848 << 2) + t3848) << 2) + t3849) + 0x4) + 0x4));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t3851;
                                t3852 = *(int *)(((((((t3848 << 2) + t3848) << 2) + t3849) + 0x4) + 0x0));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t3852;
                                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t3854 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t3855 = *(int *)(((int)stk + 40));
                                t3856 = *(int *)0xC1EE800;
                                u3842 = t3854;
                                u3857 = *(float *)(((t3855 + t3856) + 0x0));
                                t3858 = CheckClipping(u3857);
                                if (t3858 != 0) {
                                    t3859 = *(int *)(((int)stk + 20));
                                    t3860 = *(int *)0xC1EE800;
                                    t3861 = *(int *)0xC2A6EC0;
                                    u3862 = *(float *)(((int)stk + 52));
                                    u3863 = *(float *)((((((t3859 << 2) + t3859) << 2) + t3860) + 0x0));
                                    t3864 = *(int *)(((int)stk + 20));
                                    t3865 = PutCourse_CheckPiece(t3864, t3861, 0x0, (((int)stk + 20) + 0x2C), u3842, u3862, u3863);
                                    if (t3865 == 1) {
                                        t3866 = *(int *)(((int)stk + 20));
                                        FUN_0c02eb86(t3866, 0x0, u3842);
                                    }
                                }
                                t3872 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t3872 + 0x1);
                                t3873 = *(int *)(((int)stk + 28));
                                *(unsigned int *)(((int)stk + 28)) = (t3873 + 0x4);
                            }
                            u3878 = u3842;
                        }
                        u3983 = u3878;
                    } else {
                        if ((int)t3741 < (int)0x8A) {
                            t3879 = 0x60;
                            t3880 = 0x32;
                            u3881 = 3000.0f;
                            for (;;) {
                                t3882 = *(int *)(((int)stk + 24));
                                t3883 = *(int *)(((int)stk + 36));
                                if ((int)t3882 >= (int)t3883) {
                                    break;
                                }
                                t3879 = 0xFF;
                                t3884 = *(int *)(((int)stk + 24));
                                t3880 = t3884;
                                t3885 = *(int *)(((int)stk + 32));
                                t3886 = (int)((int)(t3885 + t3880) % (int)t3879);
                                t3879 = t3886;
                                *(unsigned int *)(((int)stk + 20)) = t3879;
                                *(unsigned int *)(((int)stk + 28)) = (((t3879 << 2) + t3879) << 2);
                                t3887 = *(int *)0xC1EE800;
                                t3888 = (((((t3879 << 2) + t3879) << 2) + t3887) + 0x4);
                                t3879 = 0xC;
                                t3889 = 0;
                                for (; t3889 < (int)t3879; t3889++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t3889) = *(unsigned char *)(t3888 + t3889);
                                t3890 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t3879 = t3890;
                                t3891 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t3892 = *(int *)(((int)stk + 28));
                                t3893 = *(int *)0xC1EE800;
                                t3880 = t3893;
                                u3881 = t3891;
                                u3894 = *(float *)(((t3892 + t3880) + 0x0));
                                t3895 = CheckClipping(u3894);
                                t3879 = t3895;
                                if (t3879 != 0) {
                                    t3896 = *(int *)(((int)stk + 20));
                                    t3879 = 0x20;
                                    t3897 = *(int *)0xC1EE800;
                                    t3880 = t3896;
                                    t3898 = *(int *)0xC2A6EC0;
                                    u3899 = *(float *)((((int)stk + 20) + t3879));
                                    u3900 = *(float *)((((((t3896 << 2) + t3880) << 2) + t3897) + 0x0));
                                    t3901 = *(int *)(((int)stk + 20));
                                    t3902 = PutCourse_CheckPiece(t3901, t3898, 0x0, (((int)stk + 20) + 0x2C), u3881, u3899, u3900);
                                    t3879 = t3902;
                                    if (t3879 == 1) {
                                        t3903 = *(int *)(((int)stk + 20));
                                        t3904 = FUN_0c02eb86(t3903, 0x0, u3881);
                                        t3879 = t3904;
                                    }
                                }
                                t3907 = *(int *)(((int)stk + 24));
                                t3880 = t3907;
                                t3880 = (t3880 + 0x1);
                                *(unsigned int *)(((int)stk + 24)) = t3880;
                            }
                            u3978 = u3881;
                        } else {
                            if ((int)t3741 > (int)0x17B) {
                                t3908 = 0x60;
                                t3909 = 0x32;
                                u3910 = 3000.0f;
                                for (;;) {
                                    t3911 = *(int *)(((int)stk + 24));
                                    t3912 = *(int *)(((int)stk + 36));
                                    if ((int)t3911 >= (int)t3912) {
                                        break;
                                    }
                                    t3908 = 0xFF;
                                    t3913 = *(int *)(((int)stk + 24));
                                    t3909 = t3913;
                                    t3914 = *(int *)(((int)stk + 32));
                                    t3915 = (int)((int)(t3914 + t3909) % (int)t3908);
                                    t3908 = t3915;
                                    *(unsigned int *)(((int)stk + 20)) = t3908;
                                    *(unsigned int *)(((int)stk + 28)) = (((t3908 << 2) + t3908) << 2);
                                    t3916 = *(int *)0xC1EE800;
                                    t3917 = (((((t3908 << 2) + t3908) << 2) + t3916) + 0x4);
                                    t3908 = 0xC;
                                    t3918 = 0;
                                    for (; t3918 < (int)t3908; t3918++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t3918) = *(unsigned char *)(t3917 + t3918);
                                    t3919 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t3908 = t3919;
                                    t3920 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t3921 = *(int *)(((int)stk + 28));
                                    t3922 = *(int *)0xC1EE800;
                                    t3909 = t3922;
                                    u3910 = t3920;
                                    u3923 = *(float *)(((t3921 + t3909) + 0x0));
                                    t3924 = CheckClipping(u3923);
                                    t3908 = t3924;
                                    if (t3908 != 0) {
                                        t3925 = *(int *)(((int)stk + 20));
                                        t3908 = 0x20;
                                        t3926 = *(int *)0xC1EE800;
                                        t3909 = t3925;
                                        t3927 = *(int *)0xC2A6EC0;
                                        u3928 = *(float *)((((int)stk + 20) + t3908));
                                        u3929 = *(float *)((((((t3925 << 2) + t3909) << 2) + t3926) + 0x0));
                                        t3930 = *(int *)(((int)stk + 20));
                                        t3931 = PutCourse_CheckPiece(t3930, t3927, 0x0, (((int)stk + 20) + 0x2C), u3910, u3928, u3929);
                                        t3908 = t3931;
                                        if (t3908 == 1) {
                                            t3932 = *(int *)(((int)stk + 20));
                                            t3933 = FUN_0c02eb86(t3932, 0x0, u3910);
                                            t3908 = t3933;
                                        }
                                    }
                                    t3936 = *(int *)(((int)stk + 24));
                                    t3909 = t3936;
                                    t3909 = (t3909 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t3909;
                                }
                                u3973 = u3910;
                            } else {
                                *(unsigned int *)(((int)stk + 28)) = 0x0;
                                u3937 = 3000.0f;
                                for (;;) {
                                    t3938 = *(short *)0xC17912C;
                                    t3939 = *(int *)(((int)stk + 24));
                                    t3940 = *(int *)(((t3939 << 2) + ((unsigned short)(((((t3938 << 2) << 2) + t3938) << 2) << 1) + 0xC0F4588)));
                                    if (t3940 == -1) {
                                        break;
                                    }
                                    t3941 = *(short *)0xC17912C;
                                    t3942 = *(int *)(((int)stk + 28));
                                    t3943 = *(int *)((((0xC0F4588 + (unsigned short)(((((t3941 << 2) << 2) + t3941) << 2) << 1)) + t3942) + 0x0));
                                    *(unsigned int *)(((int)stk + 20)) = t3943;
                                    *(unsigned int *)(((int)stk + 40)) = (((t3943 << 2) + t3943) << 2);
                                    t3944 = *(int *)0xC1EE800;
                                    t3945 = *(int *)(((((((t3943 << 2) + t3943) << 2) + t3944) + 0x4) + 0x8));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t3945;
                                    t3946 = *(int *)(((((((t3943 << 2) + t3943) << 2) + t3944) + 0x4) + 0x4));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t3946;
                                    t3947 = *(int *)(((((((t3943 << 2) + t3943) << 2) + t3944) + 0x4) + 0x0));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t3947;
                                    nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t3949 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t3950 = *(int *)(((int)stk + 40));
                                    t3951 = *(int *)0xC1EE800;
                                    u3937 = t3949;
                                    u3952 = *(float *)(((t3950 + t3951) + 0x0));
                                    t3953 = CheckClipping(u3952);
                                    if (t3953 != 0) {
                                        t3954 = *(int *)(((int)stk + 20));
                                        t3955 = *(int *)0xC1EE800;
                                        t3956 = *(int *)0xC2A6EC0;
                                        u3957 = *(float *)(((int)stk + 52));
                                        u3958 = *(float *)((((((t3954 << 2) + t3954) << 2) + t3955) + 0x0));
                                        t3959 = *(int *)(((int)stk + 20));
                                        t3960 = PutCourse_CheckPiece(t3959, t3956, 0x0, (((int)stk + 20) + 0x2C), u3937, u3957, u3958);
                                        if (t3960 == 1) {
                                            t3961 = *(int *)(((int)stk + 20));
                                            FUN_0c02eb86(t3961, 0x0, u3937);
                                        }
                                    }
                                    t3967 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t3967 + 0x1);
                                    t3968 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 28)) = (t3968 + 0x4);
                                }
                                u3973 = u3937;
                            }
                            u3978 = u3973;
                        }
                        u3983 = u3978;
                    }
                    u4021 = u3983;
                } else {
                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                    u3985 = 3000.0f;
                    for (;;) {
                        t3986 = *(short *)0xC17912C;
                        t3987 = *(int *)(((int)stk + 24));
                        t3988 = *(int *)(((t3987 << 2) + ((unsigned short)(((((t3986 << 2) << 2) + t3986) << 2) << 1) + 0xC0F4588)));
                        if (t3988 == -1) {
                            break;
                        }
                        t3989 = *(short *)0xC17912C;
                        t3990 = *(int *)(((int)stk + 28));
                        t3991 = *(int *)((((0xC0F4588 + (unsigned short)(((((t3989 << 2) << 2) + t3989) << 2) << 1)) + t3990) + 0x0));
                        *(unsigned int *)(((int)stk + 20)) = t3991;
                        *(unsigned int *)(((int)stk + 40)) = (((t3991 << 2) + t3991) << 2);
                        t3992 = *(int *)0xC1EE800;
                        t3993 = *(int *)(((((((t3991 << 2) + t3991) << 2) + t3992) + 0x4) + 0x8));
                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t3993;
                        t3994 = *(int *)(((((((t3991 << 2) + t3991) << 2) + t3992) + 0x4) + 0x4));
                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t3994;
                        t3995 = *(int *)(((((((t3991 << 2) + t3991) << 2) + t3992) + 0x4) + 0x0));
                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t3995;
                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                        t3997 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                        t3998 = *(int *)(((int)stk + 40));
                        t3999 = *(int *)0xC1EE800;
                        u3985 = t3997;
                        u4000 = *(float *)(((t3998 + t3999) + 0x0));
                        t4001 = CheckClipping(u4000);
                        if (t4001 != 0) {
                            t4002 = *(int *)(((int)stk + 20));
                            t4003 = *(int *)0xC1EE800;
                            t4004 = *(int *)0xC2A6EC0;
                            u4005 = *(float *)(((int)stk + 52));
                            u4006 = *(float *)((((((t4002 << 2) + t4002) << 2) + t4003) + 0x0));
                            t4007 = *(int *)(((int)stk + 20));
                            t4008 = PutCourse_CheckPiece(t4007, t4004, 0x0, (((int)stk + 20) + 0x2C), u3985, u4005, u4006);
                            if (t4008 == 1) {
                                t4009 = *(int *)(((int)stk + 20));
                                FUN_0c02eb86(t4009, 0x0, u3985);
                            }
                        }
                        t4015 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t4015 + 0x1);
                        t4016 = *(int *)(((int)stk + 28));
                        *(unsigned int *)(((int)stk + 28)) = (t4016 + 0x4);
                    }
                    u4021 = u3985;
                }
                u4269 = u4021;
            } else {
                if ((int)t3741 >= (int)0x75) {
                    if ((int)t3741 > (int)0x7A) {
                        if ((int)t3741 < (int)0x8A) {
                            t4022 = 0x60;
                            t4023 = 0x32;
                            u4024 = 3000.0f;
                            for (;;) {
                                t4025 = *(int *)(((int)stk + 24));
                                t4026 = *(int *)(((int)stk + 36));
                                if ((int)t4025 >= (int)t4026) {
                                    break;
                                }
                                t4022 = 0xFF;
                                t4027 = *(int *)(((int)stk + 24));
                                t4023 = t4027;
                                t4028 = *(int *)(((int)stk + 32));
                                t4029 = (int)((int)(t4028 + t4023) % (int)t4022);
                                t4022 = t4029;
                                *(unsigned int *)(((int)stk + 20)) = t4022;
                                *(unsigned int *)(((int)stk + 28)) = (((t4022 << 2) + t4022) << 2);
                                t4030 = *(int *)0xC1EE800;
                                t4031 = (((((t4022 << 2) + t4022) << 2) + t4030) + 0x4);
                                t4022 = 0xC;
                                t4032 = 0;
                                for (; t4032 < (int)t4022; t4032++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4032) = *(unsigned char *)(t4031 + t4032);
                                t4033 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t4022 = t4033;
                                t4034 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t4035 = *(int *)(((int)stk + 28));
                                t4036 = *(int *)0xC1EE800;
                                t4023 = t4036;
                                u4024 = t4034;
                                u4037 = *(float *)(((t4035 + t4023) + 0x0));
                                t4038 = CheckClipping(u4037);
                                t4022 = t4038;
                                if (t4022 != 0) {
                                    t4039 = *(int *)(((int)stk + 20));
                                    t4022 = 0x20;
                                    t4040 = *(int *)0xC1EE800;
                                    t4023 = t4039;
                                    t4041 = *(int *)0xC2A6EC0;
                                    u4042 = *(float *)((((int)stk + 20) + t4022));
                                    u4043 = *(float *)((((((t4039 << 2) + t4023) << 2) + t4040) + 0x0));
                                    t4044 = *(int *)(((int)stk + 20));
                                    t4045 = PutCourse_CheckPiece(t4044, t4041, 0x0, (((int)stk + 20) + 0x2C), u4024, u4042, u4043);
                                    t4022 = t4045;
                                    if (t4022 == 1) {
                                        t4046 = *(int *)(((int)stk + 20));
                                        t4047 = FUN_0c02eb86(t4046, 0x0, u4024);
                                        t4022 = t4047;
                                    }
                                }
                                t4050 = *(int *)(((int)stk + 24));
                                t4023 = t4050;
                                t4023 = (t4023 + 0x1);
                                *(unsigned int *)(((int)stk + 24)) = t4023;
                            }
                            u4121 = u4024;
                        } else {
                            if ((int)t3741 > (int)0x17B) {
                                t4051 = 0x60;
                                t4052 = 0x32;
                                u4053 = 3000.0f;
                                for (;;) {
                                    t4054 = *(int *)(((int)stk + 24));
                                    t4055 = *(int *)(((int)stk + 36));
                                    if ((int)t4054 >= (int)t4055) {
                                        break;
                                    }
                                    t4051 = 0xFF;
                                    t4056 = *(int *)(((int)stk + 24));
                                    t4052 = t4056;
                                    t4057 = *(int *)(((int)stk + 32));
                                    t4058 = (int)((int)(t4057 + t4052) % (int)t4051);
                                    t4051 = t4058;
                                    *(unsigned int *)(((int)stk + 20)) = t4051;
                                    *(unsigned int *)(((int)stk + 28)) = (((t4051 << 2) + t4051) << 2);
                                    t4059 = *(int *)0xC1EE800;
                                    t4060 = (((((t4051 << 2) + t4051) << 2) + t4059) + 0x4);
                                    t4051 = 0xC;
                                    t4061 = 0;
                                    for (; t4061 < (int)t4051; t4061++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4061) = *(unsigned char *)(t4060 + t4061);
                                    t4062 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t4051 = t4062;
                                    t4063 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t4064 = *(int *)(((int)stk + 28));
                                    t4065 = *(int *)0xC1EE800;
                                    t4052 = t4065;
                                    u4053 = t4063;
                                    u4066 = *(float *)(((t4064 + t4052) + 0x0));
                                    t4067 = CheckClipping(u4066);
                                    t4051 = t4067;
                                    if (t4051 != 0) {
                                        t4068 = *(int *)(((int)stk + 20));
                                        t4051 = 0x20;
                                        t4069 = *(int *)0xC1EE800;
                                        t4052 = t4068;
                                        t4070 = *(int *)0xC2A6EC0;
                                        u4071 = *(float *)((((int)stk + 20) + t4051));
                                        u4072 = *(float *)((((((t4068 << 2) + t4052) << 2) + t4069) + 0x0));
                                        t4073 = *(int *)(((int)stk + 20));
                                        t4074 = PutCourse_CheckPiece(t4073, t4070, 0x0, (((int)stk + 20) + 0x2C), u4053, u4071, u4072);
                                        t4051 = t4074;
                                        if (t4051 == 1) {
                                            t4075 = *(int *)(((int)stk + 20));
                                            t4076 = FUN_0c02eb86(t4075, 0x0, u4053);
                                            t4051 = t4076;
                                        }
                                    }
                                    t4079 = *(int *)(((int)stk + 24));
                                    t4052 = t4079;
                                    t4052 = (t4052 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t4052;
                                }
                                u4116 = u4053;
                            } else {
                                *(unsigned int *)(((int)stk + 28)) = 0x0;
                                u4080 = 3000.0f;
                                for (;;) {
                                    t4081 = *(short *)0xC17912C;
                                    t4082 = *(int *)(((int)stk + 24));
                                    t4083 = *(int *)(((t4082 << 2) + ((unsigned short)(((((t4081 << 2) << 2) + t4081) << 2) << 1) + 0xC0F4588)));
                                    if (t4083 == -1) {
                                        break;
                                    }
                                    t4084 = *(short *)0xC17912C;
                                    t4085 = *(int *)(((int)stk + 28));
                                    t4086 = *(int *)((((0xC0F4588 + (unsigned short)(((((t4084 << 2) << 2) + t4084) << 2) << 1)) + t4085) + 0x0));
                                    *(unsigned int *)(((int)stk + 20)) = t4086;
                                    *(unsigned int *)(((int)stk + 40)) = (((t4086 << 2) + t4086) << 2);
                                    t4087 = *(int *)0xC1EE800;
                                    t4088 = *(int *)(((((((t4086 << 2) + t4086) << 2) + t4087) + 0x4) + 0x8));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4088;
                                    t4089 = *(int *)(((((((t4086 << 2) + t4086) << 2) + t4087) + 0x4) + 0x4));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4089;
                                    t4090 = *(int *)(((((((t4086 << 2) + t4086) << 2) + t4087) + 0x4) + 0x0));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4090;
                                    nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t4092 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t4093 = *(int *)(((int)stk + 40));
                                    t4094 = *(int *)0xC1EE800;
                                    u4080 = t4092;
                                    u4095 = *(float *)(((t4093 + t4094) + 0x0));
                                    t4096 = CheckClipping(u4095);
                                    if (t4096 != 0) {
                                        t4097 = *(int *)(((int)stk + 20));
                                        t4098 = *(int *)0xC1EE800;
                                        t4099 = *(int *)0xC2A6EC0;
                                        u4100 = *(float *)(((int)stk + 52));
                                        u4101 = *(float *)((((((t4097 << 2) + t4097) << 2) + t4098) + 0x0));
                                        t4102 = *(int *)(((int)stk + 20));
                                        t4103 = PutCourse_CheckPiece(t4102, t4099, 0x0, (((int)stk + 20) + 0x2C), u4080, u4100, u4101);
                                        if (t4103 == 1) {
                                            t4104 = *(int *)(((int)stk + 20));
                                            FUN_0c02eb86(t4104, 0x0, u4080);
                                        }
                                    }
                                    t4110 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t4110 + 0x1);
                                    t4111 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 28)) = (t4111 + 0x4);
                                }
                                u4116 = u4080;
                            }
                            u4121 = u4116;
                        }
                        u4158 = u4121;
                    } else {
                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                        u4122 = 3000.0f;
                        for (;;) {
                            t4123 = *(short *)0xC17912C;
                            t4124 = *(int *)(((int)stk + 24));
                            t4125 = *(int *)(((t4124 << 2) + ((unsigned short)(((((t4123 << 2) << 2) + t4123) << 2) << 1) + 0xC0F4588)));
                            if (t4125 == -1) {
                                break;
                            }
                            t4126 = *(short *)0xC17912C;
                            t4127 = *(int *)(((int)stk + 28));
                            t4128 = *(int *)((((0xC0F4588 + (unsigned short)(((((t4126 << 2) << 2) + t4126) << 2) << 1)) + t4127) + 0x0));
                            *(unsigned int *)(((int)stk + 20)) = t4128;
                            *(unsigned int *)(((int)stk + 40)) = (((t4128 << 2) + t4128) << 2);
                            t4129 = *(int *)0xC1EE800;
                            t4130 = *(int *)(((((((t4128 << 2) + t4128) << 2) + t4129) + 0x4) + 0x8));
                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4130;
                            t4131 = *(int *)(((((((t4128 << 2) + t4128) << 2) + t4129) + 0x4) + 0x4));
                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4131;
                            t4132 = *(int *)(((((((t4128 << 2) + t4128) << 2) + t4129) + 0x4) + 0x0));
                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4132;
                            nlProjectScreen3D((((int)stk + 20) + 0x2C));
                            t4134 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                            t4135 = *(int *)(((int)stk + 40));
                            t4136 = *(int *)0xC1EE800;
                            u4122 = t4134;
                            u4137 = *(float *)(((t4135 + t4136) + 0x0));
                            t4138 = CheckClipping(u4137);
                            if (t4138 != 0) {
                                t4139 = *(int *)(((int)stk + 20));
                                t4140 = *(int *)0xC1EE800;
                                t4141 = *(int *)0xC2A6EC0;
                                u4142 = *(float *)(((int)stk + 52));
                                u4143 = *(float *)((((((t4139 << 2) + t4139) << 2) + t4140) + 0x0));
                                t4144 = *(int *)(((int)stk + 20));
                                t4145 = PutCourse_CheckPiece(t4144, t4141, 0x0, (((int)stk + 20) + 0x2C), u4122, u4142, u4143);
                                if (t4145 == 1) {
                                    t4146 = *(int *)(((int)stk + 20));
                                    FUN_0c02eb86(t4146, 0x0, u4122);
                                }
                            }
                            t4152 = *(int *)(((int)stk + 24));
                            *(unsigned int *)(((int)stk + 24)) = (t4152 + 0x1);
                            t4153 = *(int *)(((int)stk + 28));
                            *(unsigned int *)(((int)stk + 28)) = (t4153 + 0x4);
                        }
                        u4158 = u4122;
                    }
                    u4263 = u4158;
                } else {
                    if ((int)t3741 < (int)0x8A) {
                        t4159 = 0x60;
                        t4160 = 0x32;
                        u4161 = 3000.0f;
                        for (;;) {
                            t4162 = *(int *)(((int)stk + 24));
                            t4163 = *(int *)(((int)stk + 36));
                            if ((int)t4162 >= (int)t4163) {
                                break;
                            }
                            t4159 = 0xFF;
                            t4164 = *(int *)(((int)stk + 24));
                            t4160 = t4164;
                            t4165 = *(int *)(((int)stk + 32));
                            t4166 = (int)((int)(t4165 + t4160) % (int)t4159);
                            t4159 = t4166;
                            *(unsigned int *)(((int)stk + 20)) = t4159;
                            *(unsigned int *)(((int)stk + 28)) = (((t4159 << 2) + t4159) << 2);
                            t4167 = *(int *)0xC1EE800;
                            t4168 = (((((t4159 << 2) + t4159) << 2) + t4167) + 0x4);
                            t4159 = 0xC;
                            t4169 = 0;
                            for (; t4169 < (int)t4159; t4169++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4169) = *(unsigned char *)(t4168 + t4169);
                            t4170 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                            t4159 = t4170;
                            t4171 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                            t4172 = *(int *)(((int)stk + 28));
                            t4173 = *(int *)0xC1EE800;
                            t4160 = t4173;
                            u4161 = t4171;
                            u4174 = *(float *)(((t4172 + t4160) + 0x0));
                            t4175 = CheckClipping(u4174);
                            t4159 = t4175;
                            if (t4159 != 0) {
                                t4176 = *(int *)(((int)stk + 20));
                                t4159 = 0x20;
                                t4177 = *(int *)0xC1EE800;
                                t4160 = t4176;
                                t4178 = *(int *)0xC2A6EC0;
                                u4179 = *(float *)((((int)stk + 20) + t4159));
                                u4180 = *(float *)((((((t4176 << 2) + t4160) << 2) + t4177) + 0x0));
                                t4181 = *(int *)(((int)stk + 20));
                                t4182 = PutCourse_CheckPiece(t4181, t4178, 0x0, (((int)stk + 20) + 0x2C), u4161, u4179, u4180);
                                t4159 = t4182;
                                if (t4159 == 1) {
                                    t4183 = *(int *)(((int)stk + 20));
                                    t4184 = FUN_0c02eb86(t4183, 0x0, u4161);
                                    t4159 = t4184;
                                }
                            }
                            t4187 = *(int *)(((int)stk + 24));
                            t4160 = t4187;
                            t4160 = (t4160 + 0x1);
                            *(unsigned int *)(((int)stk + 24)) = t4160;
                        }
                        u4258 = u4161;
                    } else {
                        if ((int)t3741 > (int)0x17B) {
                            t4188 = 0x60;
                            t4189 = 0x32;
                            u4190 = 3000.0f;
                            for (;;) {
                                t4191 = *(int *)(((int)stk + 24));
                                t4192 = *(int *)(((int)stk + 36));
                                if ((int)t4191 >= (int)t4192) {
                                    break;
                                }
                                t4188 = 0xFF;
                                t4193 = *(int *)(((int)stk + 24));
                                t4189 = t4193;
                                t4194 = *(int *)(((int)stk + 32));
                                t4195 = (int)((int)(t4194 + t4189) % (int)t4188);
                                t4188 = t4195;
                                *(unsigned int *)(((int)stk + 20)) = t4188;
                                *(unsigned int *)(((int)stk + 28)) = (((t4188 << 2) + t4188) << 2);
                                t4196 = *(int *)0xC1EE800;
                                t4197 = (((((t4188 << 2) + t4188) << 2) + t4196) + 0x4);
                                t4188 = 0xC;
                                t4198 = 0;
                                for (; t4198 < (int)t4188; t4198++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4198) = *(unsigned char *)(t4197 + t4198);
                                t4199 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t4188 = t4199;
                                t4200 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t4201 = *(int *)(((int)stk + 28));
                                t4202 = *(int *)0xC1EE800;
                                t4189 = t4202;
                                u4190 = t4200;
                                u4203 = *(float *)(((t4201 + t4189) + 0x0));
                                t4204 = CheckClipping(u4203);
                                t4188 = t4204;
                                if (t4188 != 0) {
                                    t4205 = *(int *)(((int)stk + 20));
                                    t4188 = 0x20;
                                    t4206 = *(int *)0xC1EE800;
                                    t4189 = t4205;
                                    t4207 = *(int *)0xC2A6EC0;
                                    u4208 = *(float *)((((int)stk + 20) + t4188));
                                    u4209 = *(float *)((((((t4205 << 2) + t4189) << 2) + t4206) + 0x0));
                                    t4210 = *(int *)(((int)stk + 20));
                                    t4211 = PutCourse_CheckPiece(t4210, t4207, 0x0, (((int)stk + 20) + 0x2C), u4190, u4208, u4209);
                                    t4188 = t4211;
                                    if (t4188 == 1) {
                                        t4212 = *(int *)(((int)stk + 20));
                                        t4213 = FUN_0c02eb86(t4212, 0x0, u4190);
                                        t4188 = t4213;
                                    }
                                }
                                t4216 = *(int *)(((int)stk + 24));
                                t4189 = t4216;
                                t4189 = (t4189 + 0x1);
                                *(unsigned int *)(((int)stk + 24)) = t4189;
                            }
                            u4253 = u4190;
                        } else {
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            u4217 = 3000.0f;
                            for (;;) {
                                t4218 = *(short *)0xC17912C;
                                t4219 = *(int *)(((int)stk + 24));
                                t4220 = *(int *)(((t4219 << 2) + ((unsigned short)(((((t4218 << 2) << 2) + t4218) << 2) << 1) + 0xC0F4588)));
                                if (t4220 == -1) {
                                    break;
                                }
                                t4221 = *(short *)0xC17912C;
                                t4222 = *(int *)(((int)stk + 28));
                                t4223 = *(int *)((((0xC0F4588 + (unsigned short)(((((t4221 << 2) << 2) + t4221) << 2) << 1)) + t4222) + 0x0));
                                *(unsigned int *)(((int)stk + 20)) = t4223;
                                *(unsigned int *)(((int)stk + 40)) = (((t4223 << 2) + t4223) << 2);
                                t4224 = *(int *)0xC1EE800;
                                t4225 = *(int *)(((((((t4223 << 2) + t4223) << 2) + t4224) + 0x4) + 0x8));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4225;
                                t4226 = *(int *)(((((((t4223 << 2) + t4223) << 2) + t4224) + 0x4) + 0x4));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4226;
                                t4227 = *(int *)(((((((t4223 << 2) + t4223) << 2) + t4224) + 0x4) + 0x0));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4227;
                                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t4229 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t4230 = *(int *)(((int)stk + 40));
                                t4231 = *(int *)0xC1EE800;
                                u4217 = t4229;
                                u4232 = *(float *)(((t4230 + t4231) + 0x0));
                                t4233 = CheckClipping(u4232);
                                if (t4233 != 0) {
                                    t4234 = *(int *)(((int)stk + 20));
                                    t4235 = *(int *)0xC1EE800;
                                    t4236 = *(int *)0xC2A6EC0;
                                    u4237 = *(float *)(((int)stk + 52));
                                    u4238 = *(float *)((((((t4234 << 2) + t4234) << 2) + t4235) + 0x0));
                                    t4239 = *(int *)(((int)stk + 20));
                                    t4240 = PutCourse_CheckPiece(t4239, t4236, 0x0, (((int)stk + 20) + 0x2C), u4217, u4237, u4238);
                                    if (t4240 == 1) {
                                        t4241 = *(int *)(((int)stk + 20));
                                        FUN_0c02eb86(t4241, 0x0, u4217);
                                    }
                                }
                                t4247 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t4247 + 0x1);
                                t4248 = *(int *)(((int)stk + 28));
                                *(unsigned int *)(((int)stk + 28)) = (t4248 + 0x4);
                            }
                            u4253 = u4217;
                        }
                        u4258 = u4253;
                    }
                    u4263 = u4258;
                }
                u4269 = u4263;
            }
            u4307 = u4269;
        } else {
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            u4271 = 3000.0f;
            for (;;) {
                t4272 = *(short *)0xC17912C;
                t4273 = *(int *)(((int)stk + 24));
                t4274 = *(int *)(((t4273 << 2) + ((unsigned short)(((((t4272 << 2) << 2) + t4272) << 2) << 1) + 0xC0F4588)));
                if (t4274 == -1) {
                    break;
                }
                t4275 = *(short *)0xC17912C;
                t4276 = *(int *)(((int)stk + 28));
                t4277 = *(int *)((((0xC0F4588 + (unsigned short)(((((t4275 << 2) << 2) + t4275) << 2) << 1)) + t4276) + 0x0));
                *(unsigned int *)(((int)stk + 20)) = t4277;
                *(unsigned int *)(((int)stk + 40)) = (((t4277 << 2) + t4277) << 2);
                t4278 = *(int *)0xC1EE800;
                t4279 = *(int *)(((((((t4277 << 2) + t4277) << 2) + t4278) + 0x4) + 0x8));
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4279;
                t4280 = *(int *)(((((((t4277 << 2) + t4277) << 2) + t4278) + 0x4) + 0x4));
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4280;
                t4281 = *(int *)(((((((t4277 << 2) + t4277) << 2) + t4278) + 0x4) + 0x0));
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4281;
                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                t4283 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                t4284 = *(int *)(((int)stk + 40));
                t4285 = *(int *)0xC1EE800;
                u4271 = t4283;
                u4286 = *(float *)(((t4284 + t4285) + 0x0));
                t4287 = CheckClipping(u4286);
                if (t4287 != 0) {
                    t4288 = *(int *)(((int)stk + 20));
                    t4289 = *(int *)0xC1EE800;
                    t4290 = *(int *)0xC2A6EC0;
                    u4291 = *(float *)(((int)stk + 52));
                    u4292 = *(float *)((((((t4288 << 2) + t4288) << 2) + t4289) + 0x0));
                    t4293 = *(int *)(((int)stk + 20));
                    t4294 = PutCourse_CheckPiece(t4293, t4290, 0x0, (((int)stk + 20) + 0x2C), u4271, u4291, u4292);
                    if (t4294 == 1) {
                        t4295 = *(int *)(((int)stk + 20));
                        FUN_0c02eb86(t4295, 0x0, u4271);
                    }
                }
                t4301 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 24)) = (t4301 + 0x1);
                t4302 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 28)) = (t4302 + 0x4);
            }
            u4307 = u4271;
        }
        getPieceWindow((((int)stk + 4) + 0x28), 0xC124448, 0xC0C8410);
        *(unsigned int *)(((int)stk + 24)) = 0x0;
        t4309 = *(int *)0xC17912C;
        if ((int)t4309 > (int)0x34) {
            if ((int)t4309 >= (int)0x96) {
                if ((int)t4309 > (int)0x9B) {
                    if ((int)t4309 >= (int)0x9F) {
                        if ((int)t4309 > (int)0xAB) {
                            if ((int)t4309 >= (int)0xCD) {
                                if ((int)t4309 > (int)0x12C) {
                                    if ((int)t4309 < (int)0x14C) {
                                        t4310 = 0x60;
                                        t4311 = 0x34;
                                        t4312 = 0xC1790CC;
                                        u4313 = u4307;
                                        for (;;) {
                                            t4314 = *(int *)(((int)stk + 24));
                                            t4315 = *(int *)(((int)stk + 36));
                                            if ((int)t4314 >= (int)t4315) {
                                                break;
                                            }
                                            t4310 = 0xF0;
                                            t4316 = *(int *)(((int)stk + 24));
                                            t4311 = t4316;
                                            t4317 = *(int *)(((int)stk + 32));
                                            t4318 = (int)((int)(t4317 + t4311) % (int)t4310);
                                            t4310 = t4318;
                                            *(unsigned int *)(((int)stk + 20)) = (((t4310 << 2) + t4310) << 2);
                                            t4312 = t4310;
                                            t4319 = *(int *)0xC1EE804;
                                            t4320 = (((((t4310 << 2) + t4310) << 2) + t4319) + 0x4);
                                            t4310 = 0xC;
                                            t4321 = 0;
                                            for (; t4321 < (int)t4310; t4321++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4321) = *(unsigned char *)(t4320 + t4321);
                                            t4322 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4310 = t4322;
                                            t4323 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4324 = *(int *)(((int)stk + 20));
                                            t4325 = *(int *)0xC1EE804;
                                            t4311 = t4325;
                                            u4313 = t4323;
                                            u4326 = *(float *)(((t4324 + t4311) + 0x0));
                                            t4327 = CheckClipping(u4326);
                                            t4310 = t4327;
                                            if (t4310 != 0) {
                                                t4328 = *(int *)(((int)stk + 20));
                                                t4310 = 0x20;
                                                t4329 = *(int *)0xC1EE804;
                                                t4311 = t4329;
                                                u4330 = *(float *)((((int)stk + 20) + t4310));
                                                t4331 = *(int *)0xC2A6EC0;
                                                u4332 = *(float *)(((t4328 + t4311) + 0x0));
                                                t4333 = PutCourse_CheckPiece(t4312, t4331, 0x1, (((int)stk + 20) + 0x2C), u4313, u4330, u4332);
                                                t4310 = t4333;
                                                if (t4310 == 1) {
                                                    t4334 = FUN_0c02eb86(t4312, 0x1, u4313);
                                                    t4310 = t4334;
                                                }
                                            }
                                            t4337 = *(int *)(((int)stk + 24));
                                            t4311 = t4337;
                                            t4311 = (t4311 + 0x1);
                                            *(unsigned int *)(((int)stk + 24)) = t4311;
                                        }
                                        t4404 = t4310;
                                    } else {
                                        if ((int)t4309 > (int)0x162) {
                                            t4338 = 0x60;
                                            t4339 = 0x34;
                                            t4340 = 0xC1790CC;
                                            u4341 = u4307;
                                            for (;;) {
                                                t4342 = *(int *)(((int)stk + 24));
                                                t4343 = *(int *)(((int)stk + 36));
                                                if ((int)t4342 >= (int)t4343) {
                                                    break;
                                                }
                                                t4338 = 0xF0;
                                                t4344 = *(int *)(((int)stk + 24));
                                                t4339 = t4344;
                                                t4345 = *(int *)(((int)stk + 32));
                                                t4346 = (int)((int)(t4345 + t4339) % (int)t4338);
                                                t4338 = t4346;
                                                *(unsigned int *)(((int)stk + 20)) = (((t4338 << 2) + t4338) << 2);
                                                t4340 = t4338;
                                                t4347 = *(int *)0xC1EE804;
                                                t4348 = (((((t4338 << 2) + t4338) << 2) + t4347) + 0x4);
                                                t4338 = 0xC;
                                                t4349 = 0;
                                                for (; t4349 < (int)t4338; t4349++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4349) = *(unsigned char *)(t4348 + t4349);
                                                t4350 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                                t4338 = t4350;
                                                t4351 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                                t4352 = *(int *)(((int)stk + 20));
                                                t4353 = *(int *)0xC1EE804;
                                                t4339 = t4353;
                                                u4341 = t4351;
                                                u4354 = *(float *)(((t4352 + t4339) + 0x0));
                                                t4355 = CheckClipping(u4354);
                                                t4338 = t4355;
                                                if (t4338 != 0) {
                                                    t4356 = *(int *)(((int)stk + 20));
                                                    t4338 = 0x20;
                                                    t4357 = *(int *)0xC1EE804;
                                                    t4339 = t4357;
                                                    u4358 = *(float *)((((int)stk + 20) + t4338));
                                                    t4359 = *(int *)0xC2A6EC0;
                                                    u4360 = *(float *)(((t4356 + t4339) + 0x0));
                                                    t4361 = PutCourse_CheckPiece(t4340, t4359, 0x1, (((int)stk + 20) + 0x2C), u4341, u4358, u4360);
                                                    t4338 = t4361;
                                                    if (t4338 == 1) {
                                                        t4362 = FUN_0c02eb86(t4340, 0x1, u4341);
                                                        t4338 = t4362;
                                                    }
                                                }
                                                t4365 = *(int *)(((int)stk + 24));
                                                t4339 = t4365;
                                                t4339 = (t4339 + 0x1);
                                                *(unsigned int *)(((int)stk + 24)) = t4339;
                                            }
                                            t4398 = t4338;
                                        } else {
                                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                                            u4366 = u4307;
                                            for (;;) {
                                                t4367 = *(short *)0xC17912C;
                                                t4368 = *(int *)(((int)stk + 24));
                                                t4369 = *(int *)(((t4368 << 2) + ((unsigned short)(((((t4367 << 2) << 2) + t4367) << 2) << 1) + 0xC100F68)));
                                                if (t4369 == -1) {
                                                    break;
                                                }
                                                t4370 = *(short *)0xC17912C;
                                                t4371 = *(int *)(((int)stk + 28));
                                                t4372 = *(int *)((((0xC100F68 + (unsigned short)(((((t4370 << 2) << 2) + t4370) << 2) << 1)) + t4371) + 0x0));
                                                *(unsigned int *)(((int)stk + 20)) = t4372;
                                                *(unsigned int *)(((int)stk + 40)) = (((t4372 << 2) + t4372) << 2);
                                                t4373 = *(int *)0xC1EE804;
                                                t4374 = *(int *)(((((((t4372 << 2) + t4372) << 2) + t4373) + 0x4) + 0x8));
                                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4374;
                                                t4375 = *(int *)(((((((t4372 << 2) + t4372) << 2) + t4373) + 0x4) + 0x4));
                                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4375;
                                                t4376 = *(int *)(((((((t4372 << 2) + t4372) << 2) + t4373) + 0x4) + 0x0));
                                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4376;
                                                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                                t4378 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                                t4379 = *(int *)(((int)stk + 40));
                                                t4380 = *(int *)0xC1EE804;
                                                u4366 = t4378;
                                                u4381 = *(float *)(((t4379 + t4380) + 0x0));
                                                t4382 = CheckClipping(u4381);
                                                if (t4382 != 0) {
                                                    t4383 = *(int *)(((int)stk + 20));
                                                    t4384 = *(int *)0xC1EE804;
                                                    t4385 = *(int *)0xC2A6EC0;
                                                    u4386 = *(float *)(((int)stk + 52));
                                                    u4387 = *(float *)((((((t4383 << 2) + t4383) << 2) + t4384) + 0x0));
                                                    t4388 = *(int *)(((int)stk + 20));
                                                    t4389 = PutCourse_CheckPiece(t4388, t4385, 0x1, (((int)stk + 20) + 0x2C), u4366, u4386, u4387);
                                                    if (t4389 == 1) {
                                                        t4390 = *(int *)(((int)stk + 20));
                                                        FUN_0c02eb86(t4390, 0x1, u4366);
                                                    }
                                                }
                                                t4396 = *(int *)(((int)stk + 24));
                                                *(unsigned int *)(((int)stk + 24)) = (t4396 + 0x1);
                                                t4397 = *(int *)(((int)stk + 28));
                                                *(unsigned int *)(((int)stk + 28)) = (t4397 + 0x4);
                                            }
                                            t4398 = t4369;
                                        }
                                        t4404 = t4398;
                                    }
                                    t4442 = t4404;
                                } else {
                                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                                    u4410 = u4307;
                                    for (;;) {
                                        t4411 = *(short *)0xC17912C;
                                        t4412 = *(int *)(((int)stk + 24));
                                        t4413 = *(int *)(((t4412 << 2) + ((unsigned short)(((((t4411 << 2) << 2) + t4411) << 2) << 1) + 0xC100F68)));
                                        if (t4413 == -1) {
                                            break;
                                        }
                                        t4414 = *(short *)0xC17912C;
                                        t4415 = *(int *)(((int)stk + 28));
                                        t4416 = *(int *)((((0xC100F68 + (unsigned short)(((((t4414 << 2) << 2) + t4414) << 2) << 1)) + t4415) + 0x0));
                                        *(unsigned int *)(((int)stk + 20)) = t4416;
                                        *(unsigned int *)(((int)stk + 40)) = (((t4416 << 2) + t4416) << 2);
                                        t4417 = *(int *)0xC1EE804;
                                        t4418 = *(int *)(((((((t4416 << 2) + t4416) << 2) + t4417) + 0x4) + 0x8));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4418;
                                        t4419 = *(int *)(((((((t4416 << 2) + t4416) << 2) + t4417) + 0x4) + 0x4));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4419;
                                        t4420 = *(int *)(((((((t4416 << 2) + t4416) << 2) + t4417) + 0x4) + 0x0));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4420;
                                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t4422 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t4423 = *(int *)(((int)stk + 40));
                                        t4424 = *(int *)0xC1EE804;
                                        u4410 = t4422;
                                        u4425 = *(float *)(((t4423 + t4424) + 0x0));
                                        t4426 = CheckClipping(u4425);
                                        if (t4426 != 0) {
                                            t4427 = *(int *)(((int)stk + 20));
                                            t4428 = *(int *)0xC1EE804;
                                            t4429 = *(int *)0xC2A6EC0;
                                            u4430 = *(float *)(((int)stk + 52));
                                            u4431 = *(float *)((((((t4427 << 2) + t4427) << 2) + t4428) + 0x0));
                                            t4432 = *(int *)(((int)stk + 20));
                                            t4433 = PutCourse_CheckPiece(t4432, t4429, 0x1, (((int)stk + 20) + 0x2C), u4410, u4430, u4431);
                                            if (t4433 == 1) {
                                                t4434 = *(int *)(((int)stk + 20));
                                                FUN_0c02eb86(t4434, 0x1, u4410);
                                            }
                                        }
                                        t4440 = *(int *)(((int)stk + 24));
                                        *(unsigned int *)(((int)stk + 24)) = (t4440 + 0x1);
                                        t4441 = *(int *)(((int)stk + 28));
                                        *(unsigned int *)(((int)stk + 28)) = (t4441 + 0x4);
                                    }
                                    t4442 = t4413;
                                }
                                t4548 = t4442;
                            } else {
                                if ((int)t4309 < (int)0x14C) {
                                    t4448 = 0x60;
                                    t4449 = 0x34;
                                    t4450 = 0xC1790CC;
                                    u4451 = u4307;
                                    for (;;) {
                                        t4452 = *(int *)(((int)stk + 24));
                                        t4453 = *(int *)(((int)stk + 36));
                                        if ((int)t4452 >= (int)t4453) {
                                            break;
                                        }
                                        t4448 = 0xF0;
                                        t4454 = *(int *)(((int)stk + 24));
                                        t4449 = t4454;
                                        t4455 = *(int *)(((int)stk + 32));
                                        t4456 = (int)((int)(t4455 + t4449) % (int)t4448);
                                        t4448 = t4456;
                                        *(unsigned int *)(((int)stk + 20)) = (((t4448 << 2) + t4448) << 2);
                                        t4450 = t4448;
                                        t4457 = *(int *)0xC1EE804;
                                        t4458 = (((((t4448 << 2) + t4448) << 2) + t4457) + 0x4);
                                        t4448 = 0xC;
                                        t4459 = 0;
                                        for (; t4459 < (int)t4448; t4459++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4459) = *(unsigned char *)(t4458 + t4459);
                                        t4460 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t4448 = t4460;
                                        t4461 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t4462 = *(int *)(((int)stk + 20));
                                        t4463 = *(int *)0xC1EE804;
                                        t4449 = t4463;
                                        u4451 = t4461;
                                        u4464 = *(float *)(((t4462 + t4449) + 0x0));
                                        t4465 = CheckClipping(u4464);
                                        t4448 = t4465;
                                        if (t4448 != 0) {
                                            t4466 = *(int *)(((int)stk + 20));
                                            t4448 = 0x20;
                                            t4467 = *(int *)0xC1EE804;
                                            t4449 = t4467;
                                            u4468 = *(float *)((((int)stk + 20) + t4448));
                                            t4469 = *(int *)0xC2A6EC0;
                                            u4470 = *(float *)(((t4466 + t4449) + 0x0));
                                            t4471 = PutCourse_CheckPiece(t4450, t4469, 0x1, (((int)stk + 20) + 0x2C), u4451, u4468, u4470);
                                            t4448 = t4471;
                                            if (t4448 == 1) {
                                                t4472 = FUN_0c02eb86(t4450, 0x1, u4451);
                                                t4448 = t4472;
                                            }
                                        }
                                        t4475 = *(int *)(((int)stk + 24));
                                        t4449 = t4475;
                                        t4449 = (t4449 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t4449;
                                    }
                                    t4542 = t4448;
                                } else {
                                    if ((int)t4309 > (int)0x162) {
                                        t4476 = 0x60;
                                        t4477 = 0x34;
                                        t4478 = 0xC1790CC;
                                        u4479 = u4307;
                                        for (;;) {
                                            t4480 = *(int *)(((int)stk + 24));
                                            t4481 = *(int *)(((int)stk + 36));
                                            if ((int)t4480 >= (int)t4481) {
                                                break;
                                            }
                                            t4476 = 0xF0;
                                            t4482 = *(int *)(((int)stk + 24));
                                            t4477 = t4482;
                                            t4483 = *(int *)(((int)stk + 32));
                                            t4484 = (int)((int)(t4483 + t4477) % (int)t4476);
                                            t4476 = t4484;
                                            *(unsigned int *)(((int)stk + 20)) = (((t4476 << 2) + t4476) << 2);
                                            t4478 = t4476;
                                            t4485 = *(int *)0xC1EE804;
                                            t4486 = (((((t4476 << 2) + t4476) << 2) + t4485) + 0x4);
                                            t4476 = 0xC;
                                            t4487 = 0;
                                            for (; t4487 < (int)t4476; t4487++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4487) = *(unsigned char *)(t4486 + t4487);
                                            t4488 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4476 = t4488;
                                            t4489 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4490 = *(int *)(((int)stk + 20));
                                            t4491 = *(int *)0xC1EE804;
                                            t4477 = t4491;
                                            u4479 = t4489;
                                            u4492 = *(float *)(((t4490 + t4477) + 0x0));
                                            t4493 = CheckClipping(u4492);
                                            t4476 = t4493;
                                            if (t4476 != 0) {
                                                t4494 = *(int *)(((int)stk + 20));
                                                t4476 = 0x20;
                                                t4495 = *(int *)0xC1EE804;
                                                t4477 = t4495;
                                                u4496 = *(float *)((((int)stk + 20) + t4476));
                                                t4497 = *(int *)0xC2A6EC0;
                                                u4498 = *(float *)(((t4494 + t4477) + 0x0));
                                                t4499 = PutCourse_CheckPiece(t4478, t4497, 0x1, (((int)stk + 20) + 0x2C), u4479, u4496, u4498);
                                                t4476 = t4499;
                                                if (t4476 == 1) {
                                                    t4500 = FUN_0c02eb86(t4478, 0x1, u4479);
                                                    t4476 = t4500;
                                                }
                                            }
                                            t4503 = *(int *)(((int)stk + 24));
                                            t4477 = t4503;
                                            t4477 = (t4477 + 0x1);
                                            *(unsigned int *)(((int)stk + 24)) = t4477;
                                        }
                                        t4536 = t4476;
                                    } else {
                                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                                        u4504 = u4307;
                                        for (;;) {
                                            t4505 = *(short *)0xC17912C;
                                            t4506 = *(int *)(((int)stk + 24));
                                            t4507 = *(int *)(((t4506 << 2) + ((unsigned short)(((((t4505 << 2) << 2) + t4505) << 2) << 1) + 0xC100F68)));
                                            if (t4507 == -1) {
                                                break;
                                            }
                                            t4508 = *(short *)0xC17912C;
                                            t4509 = *(int *)(((int)stk + 28));
                                            t4510 = *(int *)((((0xC100F68 + (unsigned short)(((((t4508 << 2) << 2) + t4508) << 2) << 1)) + t4509) + 0x0));
                                            *(unsigned int *)(((int)stk + 20)) = t4510;
                                            *(unsigned int *)(((int)stk + 40)) = (((t4510 << 2) + t4510) << 2);
                                            t4511 = *(int *)0xC1EE804;
                                            t4512 = *(int *)(((((((t4510 << 2) + t4510) << 2) + t4511) + 0x4) + 0x8));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4512;
                                            t4513 = *(int *)(((((((t4510 << 2) + t4510) << 2) + t4511) + 0x4) + 0x4));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4513;
                                            t4514 = *(int *)(((((((t4510 << 2) + t4510) << 2) + t4511) + 0x4) + 0x0));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4514;
                                            nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4516 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4517 = *(int *)(((int)stk + 40));
                                            t4518 = *(int *)0xC1EE804;
                                            u4504 = t4516;
                                            u4519 = *(float *)(((t4517 + t4518) + 0x0));
                                            t4520 = CheckClipping(u4519);
                                            if (t4520 != 0) {
                                                t4521 = *(int *)(((int)stk + 20));
                                                t4522 = *(int *)0xC1EE804;
                                                t4523 = *(int *)0xC2A6EC0;
                                                u4524 = *(float *)(((int)stk + 52));
                                                u4525 = *(float *)((((((t4521 << 2) + t4521) << 2) + t4522) + 0x0));
                                                t4526 = *(int *)(((int)stk + 20));
                                                t4527 = PutCourse_CheckPiece(t4526, t4523, 0x1, (((int)stk + 20) + 0x2C), u4504, u4524, u4525);
                                                if (t4527 == 1) {
                                                    t4528 = *(int *)(((int)stk + 20));
                                                    FUN_0c02eb86(t4528, 0x1, u4504);
                                                }
                                            }
                                            t4534 = *(int *)(((int)stk + 24));
                                            *(unsigned int *)(((int)stk + 24)) = (t4534 + 0x1);
                                            t4535 = *(int *)(((int)stk + 28));
                                            *(unsigned int *)(((int)stk + 28)) = (t4535 + 0x4);
                                        }
                                        t4536 = t4507;
                                    }
                                    t4542 = t4536;
                                }
                                t4548 = t4542;
                            }
                            t4587 = t4548;
                        } else {
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            u4555 = u4307;
                            for (;;) {
                                t4556 = *(short *)0xC17912C;
                                t4557 = *(int *)(((int)stk + 24));
                                t4558 = *(int *)(((t4557 << 2) + ((unsigned short)(((((t4556 << 2) << 2) + t4556) << 2) << 1) + 0xC100F68)));
                                if (t4558 == -1) {
                                    break;
                                }
                                t4559 = *(short *)0xC17912C;
                                t4560 = *(int *)(((int)stk + 28));
                                t4561 = *(int *)((((0xC100F68 + (unsigned short)(((((t4559 << 2) << 2) + t4559) << 2) << 1)) + t4560) + 0x0));
                                *(unsigned int *)(((int)stk + 20)) = t4561;
                                *(unsigned int *)(((int)stk + 40)) = (((t4561 << 2) + t4561) << 2);
                                t4562 = *(int *)0xC1EE804;
                                t4563 = *(int *)(((((((t4561 << 2) + t4561) << 2) + t4562) + 0x4) + 0x8));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4563;
                                t4564 = *(int *)(((((((t4561 << 2) + t4561) << 2) + t4562) + 0x4) + 0x4));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4564;
                                t4565 = *(int *)(((((((t4561 << 2) + t4561) << 2) + t4562) + 0x4) + 0x0));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4565;
                                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t4567 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t4568 = *(int *)(((int)stk + 40));
                                t4569 = *(int *)0xC1EE804;
                                u4555 = t4567;
                                u4570 = *(float *)(((t4568 + t4569) + 0x0));
                                t4571 = CheckClipping(u4570);
                                if (t4571 != 0) {
                                    t4572 = *(int *)(((int)stk + 20));
                                    t4573 = *(int *)0xC1EE804;
                                    t4574 = *(int *)0xC2A6EC0;
                                    u4575 = *(float *)(((int)stk + 52));
                                    u4576 = *(float *)((((((t4572 << 2) + t4572) << 2) + t4573) + 0x0));
                                    t4577 = *(int *)(((int)stk + 20));
                                    t4578 = PutCourse_CheckPiece(t4577, t4574, 0x1, (((int)stk + 20) + 0x2C), u4555, u4575, u4576);
                                    if (t4578 == 1) {
                                        t4579 = *(int *)(((int)stk + 20));
                                        FUN_0c02eb86(t4579, 0x1, u4555);
                                    }
                                }
                                t4585 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t4585 + 0x1);
                                t4586 = *(int *)(((int)stk + 28));
                                *(unsigned int *)(((int)stk + 28)) = (t4586 + 0x4);
                            }
                            t4587 = t4558;
                        }
                        t4838 = t4587;
                    } else {
                        if ((int)t4309 >= (int)0xCD) {
                            if ((int)t4309 > (int)0x12C) {
                                if ((int)t4309 < (int)0x14C) {
                                    t4593 = 0x60;
                                    t4594 = 0x34;
                                    t4595 = 0xC1790CC;
                                    u4596 = u4307;
                                    for (;;) {
                                        t4597 = *(int *)(((int)stk + 24));
                                        t4598 = *(int *)(((int)stk + 36));
                                        if ((int)t4597 >= (int)t4598) {
                                            break;
                                        }
                                        t4593 = 0xF0;
                                        t4599 = *(int *)(((int)stk + 24));
                                        t4594 = t4599;
                                        t4600 = *(int *)(((int)stk + 32));
                                        t4601 = (int)((int)(t4600 + t4594) % (int)t4593);
                                        t4593 = t4601;
                                        *(unsigned int *)(((int)stk + 20)) = (((t4593 << 2) + t4593) << 2);
                                        t4595 = t4593;
                                        t4602 = *(int *)0xC1EE804;
                                        t4603 = (((((t4593 << 2) + t4593) << 2) + t4602) + 0x4);
                                        t4593 = 0xC;
                                        t4604 = 0;
                                        for (; t4604 < (int)t4593; t4604++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4604) = *(unsigned char *)(t4603 + t4604);
                                        t4605 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t4593 = t4605;
                                        t4606 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t4607 = *(int *)(((int)stk + 20));
                                        t4608 = *(int *)0xC1EE804;
                                        t4594 = t4608;
                                        u4596 = t4606;
                                        u4609 = *(float *)(((t4607 + t4594) + 0x0));
                                        t4610 = CheckClipping(u4609);
                                        t4593 = t4610;
                                        if (t4593 != 0) {
                                            t4611 = *(int *)(((int)stk + 20));
                                            t4593 = 0x20;
                                            t4612 = *(int *)0xC1EE804;
                                            t4594 = t4612;
                                            u4613 = *(float *)((((int)stk + 20) + t4593));
                                            t4614 = *(int *)0xC2A6EC0;
                                            u4615 = *(float *)(((t4611 + t4594) + 0x0));
                                            t4616 = PutCourse_CheckPiece(t4595, t4614, 0x1, (((int)stk + 20) + 0x2C), u4596, u4613, u4615);
                                            t4593 = t4616;
                                            if (t4593 == 1) {
                                                t4617 = FUN_0c02eb86(t4595, 0x1, u4596);
                                                t4593 = t4617;
                                            }
                                        }
                                        t4620 = *(int *)(((int)stk + 24));
                                        t4594 = t4620;
                                        t4594 = (t4594 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t4594;
                                    }
                                    t4687 = t4593;
                                } else {
                                    if ((int)t4309 > (int)0x162) {
                                        t4621 = 0x60;
                                        t4622 = 0x34;
                                        t4623 = 0xC1790CC;
                                        u4624 = u4307;
                                        for (;;) {
                                            t4625 = *(int *)(((int)stk + 24));
                                            t4626 = *(int *)(((int)stk + 36));
                                            if ((int)t4625 >= (int)t4626) {
                                                break;
                                            }
                                            t4621 = 0xF0;
                                            t4627 = *(int *)(((int)stk + 24));
                                            t4622 = t4627;
                                            t4628 = *(int *)(((int)stk + 32));
                                            t4629 = (int)((int)(t4628 + t4622) % (int)t4621);
                                            t4621 = t4629;
                                            *(unsigned int *)(((int)stk + 20)) = (((t4621 << 2) + t4621) << 2);
                                            t4623 = t4621;
                                            t4630 = *(int *)0xC1EE804;
                                            t4631 = (((((t4621 << 2) + t4621) << 2) + t4630) + 0x4);
                                            t4621 = 0xC;
                                            t4632 = 0;
                                            for (; t4632 < (int)t4621; t4632++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4632) = *(unsigned char *)(t4631 + t4632);
                                            t4633 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4621 = t4633;
                                            t4634 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4635 = *(int *)(((int)stk + 20));
                                            t4636 = *(int *)0xC1EE804;
                                            t4622 = t4636;
                                            u4624 = t4634;
                                            u4637 = *(float *)(((t4635 + t4622) + 0x0));
                                            t4638 = CheckClipping(u4637);
                                            t4621 = t4638;
                                            if (t4621 != 0) {
                                                t4639 = *(int *)(((int)stk + 20));
                                                t4621 = 0x20;
                                                t4640 = *(int *)0xC1EE804;
                                                t4622 = t4640;
                                                u4641 = *(float *)((((int)stk + 20) + t4621));
                                                t4642 = *(int *)0xC2A6EC0;
                                                u4643 = *(float *)(((t4639 + t4622) + 0x0));
                                                t4644 = PutCourse_CheckPiece(t4623, t4642, 0x1, (((int)stk + 20) + 0x2C), u4624, u4641, u4643);
                                                t4621 = t4644;
                                                if (t4621 == 1) {
                                                    t4645 = FUN_0c02eb86(t4623, 0x1, u4624);
                                                    t4621 = t4645;
                                                }
                                            }
                                            t4648 = *(int *)(((int)stk + 24));
                                            t4622 = t4648;
                                            t4622 = (t4622 + 0x1);
                                            *(unsigned int *)(((int)stk + 24)) = t4622;
                                        }
                                        t4681 = t4621;
                                    } else {
                                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                                        u4649 = u4307;
                                        for (;;) {
                                            t4650 = *(short *)0xC17912C;
                                            t4651 = *(int *)(((int)stk + 24));
                                            t4652 = *(int *)(((t4651 << 2) + ((unsigned short)(((((t4650 << 2) << 2) + t4650) << 2) << 1) + 0xC100F68)));
                                            if (t4652 == -1) {
                                                break;
                                            }
                                            t4653 = *(short *)0xC17912C;
                                            t4654 = *(int *)(((int)stk + 28));
                                            t4655 = *(int *)((((0xC100F68 + (unsigned short)(((((t4653 << 2) << 2) + t4653) << 2) << 1)) + t4654) + 0x0));
                                            *(unsigned int *)(((int)stk + 20)) = t4655;
                                            *(unsigned int *)(((int)stk + 40)) = (((t4655 << 2) + t4655) << 2);
                                            t4656 = *(int *)0xC1EE804;
                                            t4657 = *(int *)(((((((t4655 << 2) + t4655) << 2) + t4656) + 0x4) + 0x8));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4657;
                                            t4658 = *(int *)(((((((t4655 << 2) + t4655) << 2) + t4656) + 0x4) + 0x4));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4658;
                                            t4659 = *(int *)(((((((t4655 << 2) + t4655) << 2) + t4656) + 0x4) + 0x0));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4659;
                                            nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4661 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4662 = *(int *)(((int)stk + 40));
                                            t4663 = *(int *)0xC1EE804;
                                            u4649 = t4661;
                                            u4664 = *(float *)(((t4662 + t4663) + 0x0));
                                            t4665 = CheckClipping(u4664);
                                            if (t4665 != 0) {
                                                t4666 = *(int *)(((int)stk + 20));
                                                t4667 = *(int *)0xC1EE804;
                                                t4668 = *(int *)0xC2A6EC0;
                                                u4669 = *(float *)(((int)stk + 52));
                                                u4670 = *(float *)((((((t4666 << 2) + t4666) << 2) + t4667) + 0x0));
                                                t4671 = *(int *)(((int)stk + 20));
                                                t4672 = PutCourse_CheckPiece(t4671, t4668, 0x1, (((int)stk + 20) + 0x2C), u4649, u4669, u4670);
                                                if (t4672 == 1) {
                                                    t4673 = *(int *)(((int)stk + 20));
                                                    FUN_0c02eb86(t4673, 0x1, u4649);
                                                }
                                            }
                                            t4679 = *(int *)(((int)stk + 24));
                                            *(unsigned int *)(((int)stk + 24)) = (t4679 + 0x1);
                                            t4680 = *(int *)(((int)stk + 28));
                                            *(unsigned int *)(((int)stk + 28)) = (t4680 + 0x4);
                                        }
                                        t4681 = t4652;
                                    }
                                    t4687 = t4681;
                                }
                                t4725 = t4687;
                            } else {
                                *(unsigned int *)(((int)stk + 28)) = 0x0;
                                u4693 = u4307;
                                for (;;) {
                                    t4694 = *(short *)0xC17912C;
                                    t4695 = *(int *)(((int)stk + 24));
                                    t4696 = *(int *)(((t4695 << 2) + ((unsigned short)(((((t4694 << 2) << 2) + t4694) << 2) << 1) + 0xC100F68)));
                                    if (t4696 == -1) {
                                        break;
                                    }
                                    t4697 = *(short *)0xC17912C;
                                    t4698 = *(int *)(((int)stk + 28));
                                    t4699 = *(int *)((((0xC100F68 + (unsigned short)(((((t4697 << 2) << 2) + t4697) << 2) << 1)) + t4698) + 0x0));
                                    *(unsigned int *)(((int)stk + 20)) = t4699;
                                    *(unsigned int *)(((int)stk + 40)) = (((t4699 << 2) + t4699) << 2);
                                    t4700 = *(int *)0xC1EE804;
                                    t4701 = *(int *)(((((((t4699 << 2) + t4699) << 2) + t4700) + 0x4) + 0x8));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4701;
                                    t4702 = *(int *)(((((((t4699 << 2) + t4699) << 2) + t4700) + 0x4) + 0x4));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4702;
                                    t4703 = *(int *)(((((((t4699 << 2) + t4699) << 2) + t4700) + 0x4) + 0x0));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4703;
                                    nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t4705 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t4706 = *(int *)(((int)stk + 40));
                                    t4707 = *(int *)0xC1EE804;
                                    u4693 = t4705;
                                    u4708 = *(float *)(((t4706 + t4707) + 0x0));
                                    t4709 = CheckClipping(u4708);
                                    if (t4709 != 0) {
                                        t4710 = *(int *)(((int)stk + 20));
                                        t4711 = *(int *)0xC1EE804;
                                        t4712 = *(int *)0xC2A6EC0;
                                        u4713 = *(float *)(((int)stk + 52));
                                        u4714 = *(float *)((((((t4710 << 2) + t4710) << 2) + t4711) + 0x0));
                                        t4715 = *(int *)(((int)stk + 20));
                                        t4716 = PutCourse_CheckPiece(t4715, t4712, 0x1, (((int)stk + 20) + 0x2C), u4693, u4713, u4714);
                                        if (t4716 == 1) {
                                            t4717 = *(int *)(((int)stk + 20));
                                            FUN_0c02eb86(t4717, 0x1, u4693);
                                        }
                                    }
                                    t4723 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t4723 + 0x1);
                                    t4724 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 28)) = (t4724 + 0x4);
                                }
                                t4725 = t4696;
                            }
                            t4831 = t4725;
                        } else {
                            if ((int)t4309 < (int)0x14C) {
                                t4731 = 0x60;
                                t4732 = 0x34;
                                t4733 = 0xC1790CC;
                                u4734 = u4307;
                                for (;;) {
                                    t4735 = *(int *)(((int)stk + 24));
                                    t4736 = *(int *)(((int)stk + 36));
                                    if ((int)t4735 >= (int)t4736) {
                                        break;
                                    }
                                    t4731 = 0xF0;
                                    t4737 = *(int *)(((int)stk + 24));
                                    t4732 = t4737;
                                    t4738 = *(int *)(((int)stk + 32));
                                    t4739 = (int)((int)(t4738 + t4732) % (int)t4731);
                                    t4731 = t4739;
                                    *(unsigned int *)(((int)stk + 20)) = (((t4731 << 2) + t4731) << 2);
                                    t4733 = t4731;
                                    t4740 = *(int *)0xC1EE804;
                                    t4741 = (((((t4731 << 2) + t4731) << 2) + t4740) + 0x4);
                                    t4731 = 0xC;
                                    t4742 = 0;
                                    for (; t4742 < (int)t4731; t4742++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4742) = *(unsigned char *)(t4741 + t4742);
                                    t4743 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t4731 = t4743;
                                    t4744 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t4745 = *(int *)(((int)stk + 20));
                                    t4746 = *(int *)0xC1EE804;
                                    t4732 = t4746;
                                    u4734 = t4744;
                                    u4747 = *(float *)(((t4745 + t4732) + 0x0));
                                    t4748 = CheckClipping(u4747);
                                    t4731 = t4748;
                                    if (t4731 != 0) {
                                        t4749 = *(int *)(((int)stk + 20));
                                        t4731 = 0x20;
                                        t4750 = *(int *)0xC1EE804;
                                        t4732 = t4750;
                                        u4751 = *(float *)((((int)stk + 20) + t4731));
                                        t4752 = *(int *)0xC2A6EC0;
                                        u4753 = *(float *)(((t4749 + t4732) + 0x0));
                                        t4754 = PutCourse_CheckPiece(t4733, t4752, 0x1, (((int)stk + 20) + 0x2C), u4734, u4751, u4753);
                                        t4731 = t4754;
                                        if (t4731 == 1) {
                                            t4755 = FUN_0c02eb86(t4733, 0x1, u4734);
                                            t4731 = t4755;
                                        }
                                    }
                                    t4758 = *(int *)(((int)stk + 24));
                                    t4732 = t4758;
                                    t4732 = (t4732 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t4732;
                                }
                                t4825 = t4731;
                            } else {
                                if ((int)t4309 > (int)0x162) {
                                    t4759 = 0x60;
                                    t4760 = 0x34;
                                    t4761 = 0xC1790CC;
                                    u4762 = u4307;
                                    for (;;) {
                                        t4763 = *(int *)(((int)stk + 24));
                                        t4764 = *(int *)(((int)stk + 36));
                                        if ((int)t4763 >= (int)t4764) {
                                            break;
                                        }
                                        t4759 = 0xF0;
                                        t4765 = *(int *)(((int)stk + 24));
                                        t4760 = t4765;
                                        t4766 = *(int *)(((int)stk + 32));
                                        t4767 = (int)((int)(t4766 + t4760) % (int)t4759);
                                        t4759 = t4767;
                                        *(unsigned int *)(((int)stk + 20)) = (((t4759 << 2) + t4759) << 2);
                                        t4761 = t4759;
                                        t4768 = *(int *)0xC1EE804;
                                        t4769 = (((((t4759 << 2) + t4759) << 2) + t4768) + 0x4);
                                        t4759 = 0xC;
                                        t4770 = 0;
                                        for (; t4770 < (int)t4759; t4770++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4770) = *(unsigned char *)(t4769 + t4770);
                                        t4771 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t4759 = t4771;
                                        t4772 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t4773 = *(int *)(((int)stk + 20));
                                        t4774 = *(int *)0xC1EE804;
                                        t4760 = t4774;
                                        u4762 = t4772;
                                        u4775 = *(float *)(((t4773 + t4760) + 0x0));
                                        t4776 = CheckClipping(u4775);
                                        t4759 = t4776;
                                        if (t4759 != 0) {
                                            t4777 = *(int *)(((int)stk + 20));
                                            t4759 = 0x20;
                                            t4778 = *(int *)0xC1EE804;
                                            t4760 = t4778;
                                            u4779 = *(float *)((((int)stk + 20) + t4759));
                                            t4780 = *(int *)0xC2A6EC0;
                                            u4781 = *(float *)(((t4777 + t4760) + 0x0));
                                            t4782 = PutCourse_CheckPiece(t4761, t4780, 0x1, (((int)stk + 20) + 0x2C), u4762, u4779, u4781);
                                            t4759 = t4782;
                                            if (t4759 == 1) {
                                                t4783 = FUN_0c02eb86(t4761, 0x1, u4762);
                                                t4759 = t4783;
                                            }
                                        }
                                        t4786 = *(int *)(((int)stk + 24));
                                        t4760 = t4786;
                                        t4760 = (t4760 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t4760;
                                    }
                                    t4819 = t4759;
                                } else {
                                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                                    u4787 = u4307;
                                    for (;;) {
                                        t4788 = *(short *)0xC17912C;
                                        t4789 = *(int *)(((int)stk + 24));
                                        t4790 = *(int *)(((t4789 << 2) + ((unsigned short)(((((t4788 << 2) << 2) + t4788) << 2) << 1) + 0xC100F68)));
                                        if (t4790 == -1) {
                                            break;
                                        }
                                        t4791 = *(short *)0xC17912C;
                                        t4792 = *(int *)(((int)stk + 28));
                                        t4793 = *(int *)((((0xC100F68 + (unsigned short)(((((t4791 << 2) << 2) + t4791) << 2) << 1)) + t4792) + 0x0));
                                        *(unsigned int *)(((int)stk + 20)) = t4793;
                                        *(unsigned int *)(((int)stk + 40)) = (((t4793 << 2) + t4793) << 2);
                                        t4794 = *(int *)0xC1EE804;
                                        t4795 = *(int *)(((((((t4793 << 2) + t4793) << 2) + t4794) + 0x4) + 0x8));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4795;
                                        t4796 = *(int *)(((((((t4793 << 2) + t4793) << 2) + t4794) + 0x4) + 0x4));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4796;
                                        t4797 = *(int *)(((((((t4793 << 2) + t4793) << 2) + t4794) + 0x4) + 0x0));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4797;
                                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t4799 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t4800 = *(int *)(((int)stk + 40));
                                        t4801 = *(int *)0xC1EE804;
                                        u4787 = t4799;
                                        u4802 = *(float *)(((t4800 + t4801) + 0x0));
                                        t4803 = CheckClipping(u4802);
                                        if (t4803 != 0) {
                                            t4804 = *(int *)(((int)stk + 20));
                                            t4805 = *(int *)0xC1EE804;
                                            t4806 = *(int *)0xC2A6EC0;
                                            u4807 = *(float *)(((int)stk + 52));
                                            u4808 = *(float *)((((((t4804 << 2) + t4804) << 2) + t4805) + 0x0));
                                            t4809 = *(int *)(((int)stk + 20));
                                            t4810 = PutCourse_CheckPiece(t4809, t4806, 0x1, (((int)stk + 20) + 0x2C), u4787, u4807, u4808);
                                            if (t4810 == 1) {
                                                t4811 = *(int *)(((int)stk + 20));
                                                FUN_0c02eb86(t4811, 0x1, u4787);
                                            }
                                        }
                                        t4817 = *(int *)(((int)stk + 24));
                                        *(unsigned int *)(((int)stk + 24)) = (t4817 + 0x1);
                                        t4818 = *(int *)(((int)stk + 28));
                                        *(unsigned int *)(((int)stk + 28)) = (t4818 + 0x4);
                                    }
                                    t4819 = t4790;
                                }
                                t4825 = t4819;
                            }
                            t4831 = t4825;
                        }
                        t4838 = t4831;
                    }
                    t4877 = t4838;
                } else {
                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                    u4845 = u4307;
                    for (;;) {
                        t4846 = *(short *)0xC17912C;
                        t4847 = *(int *)(((int)stk + 24));
                        t4848 = *(int *)(((t4847 << 2) + ((unsigned short)(((((t4846 << 2) << 2) + t4846) << 2) << 1) + 0xC100F68)));
                        if (t4848 == -1) {
                            break;
                        }
                        t4849 = *(short *)0xC17912C;
                        t4850 = *(int *)(((int)stk + 28));
                        t4851 = *(int *)((((0xC100F68 + (unsigned short)(((((t4849 << 2) << 2) + t4849) << 2) << 1)) + t4850) + 0x0));
                        *(unsigned int *)(((int)stk + 20)) = t4851;
                        *(unsigned int *)(((int)stk + 40)) = (((t4851 << 2) + t4851) << 2);
                        t4852 = *(int *)0xC1EE804;
                        t4853 = *(int *)(((((((t4851 << 2) + t4851) << 2) + t4852) + 0x4) + 0x8));
                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4853;
                        t4854 = *(int *)(((((((t4851 << 2) + t4851) << 2) + t4852) + 0x4) + 0x4));
                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4854;
                        t4855 = *(int *)(((((((t4851 << 2) + t4851) << 2) + t4852) + 0x4) + 0x0));
                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4855;
                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                        t4857 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                        t4858 = *(int *)(((int)stk + 40));
                        t4859 = *(int *)0xC1EE804;
                        u4845 = t4857;
                        u4860 = *(float *)(((t4858 + t4859) + 0x0));
                        t4861 = CheckClipping(u4860);
                        if (t4861 != 0) {
                            t4862 = *(int *)(((int)stk + 20));
                            t4863 = *(int *)0xC1EE804;
                            t4864 = *(int *)0xC2A6EC0;
                            u4865 = *(float *)(((int)stk + 52));
                            u4866 = *(float *)((((((t4862 << 2) + t4862) << 2) + t4863) + 0x0));
                            t4867 = *(int *)(((int)stk + 20));
                            t4868 = PutCourse_CheckPiece(t4867, t4864, 0x1, (((int)stk + 20) + 0x2C), u4845, u4865, u4866);
                            if (t4868 == 1) {
                                t4869 = *(int *)(((int)stk + 20));
                                FUN_0c02eb86(t4869, 0x1, u4845);
                            }
                        }
                        t4875 = *(int *)(((int)stk + 24));
                        *(unsigned int *)(((int)stk + 24)) = (t4875 + 0x1);
                        t4876 = *(int *)(((int)stk + 28));
                        *(unsigned int *)(((int)stk + 28)) = (t4876 + 0x4);
                    }
                    t4877 = t4848;
                }
                t5418 = t4877;
            } else {
                if ((int)t4309 >= (int)0x9F) {
                    if ((int)t4309 > (int)0xAB) {
                        if ((int)t4309 >= (int)0xCD) {
                            if ((int)t4309 > (int)0x12C) {
                                if ((int)t4309 < (int)0x14C) {
                                    t4883 = 0x60;
                                    t4884 = 0x34;
                                    t4885 = 0xC1790CC;
                                    u4886 = u4307;
                                    for (;;) {
                                        t4887 = *(int *)(((int)stk + 24));
                                        t4888 = *(int *)(((int)stk + 36));
                                        if ((int)t4887 >= (int)t4888) {
                                            break;
                                        }
                                        t4883 = 0xF0;
                                        t4889 = *(int *)(((int)stk + 24));
                                        t4884 = t4889;
                                        t4890 = *(int *)(((int)stk + 32));
                                        t4891 = (int)((int)(t4890 + t4884) % (int)t4883);
                                        t4883 = t4891;
                                        *(unsigned int *)(((int)stk + 20)) = (((t4883 << 2) + t4883) << 2);
                                        t4885 = t4883;
                                        t4892 = *(int *)0xC1EE804;
                                        t4893 = (((((t4883 << 2) + t4883) << 2) + t4892) + 0x4);
                                        t4883 = 0xC;
                                        t4894 = 0;
                                        for (; t4894 < (int)t4883; t4894++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4894) = *(unsigned char *)(t4893 + t4894);
                                        t4895 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t4883 = t4895;
                                        t4896 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t4897 = *(int *)(((int)stk + 20));
                                        t4898 = *(int *)0xC1EE804;
                                        t4884 = t4898;
                                        u4886 = t4896;
                                        u4899 = *(float *)(((t4897 + t4884) + 0x0));
                                        t4900 = CheckClipping(u4899);
                                        t4883 = t4900;
                                        if (t4883 != 0) {
                                            t4901 = *(int *)(((int)stk + 20));
                                            t4883 = 0x20;
                                            t4902 = *(int *)0xC1EE804;
                                            t4884 = t4902;
                                            u4903 = *(float *)((((int)stk + 20) + t4883));
                                            t4904 = *(int *)0xC2A6EC0;
                                            u4905 = *(float *)(((t4901 + t4884) + 0x0));
                                            t4906 = PutCourse_CheckPiece(t4885, t4904, 0x1, (((int)stk + 20) + 0x2C), u4886, u4903, u4905);
                                            t4883 = t4906;
                                            if (t4883 == 1) {
                                                t4907 = FUN_0c02eb86(t4885, 0x1, u4886);
                                                t4883 = t4907;
                                            }
                                        }
                                        t4910 = *(int *)(((int)stk + 24));
                                        t4884 = t4910;
                                        t4884 = (t4884 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t4884;
                                    }
                                    t4977 = t4883;
                                } else {
                                    if ((int)t4309 > (int)0x162) {
                                        t4911 = 0x60;
                                        t4912 = 0x34;
                                        t4913 = 0xC1790CC;
                                        u4914 = u4307;
                                        for (;;) {
                                            t4915 = *(int *)(((int)stk + 24));
                                            t4916 = *(int *)(((int)stk + 36));
                                            if ((int)t4915 >= (int)t4916) {
                                                break;
                                            }
                                            t4911 = 0xF0;
                                            t4917 = *(int *)(((int)stk + 24));
                                            t4912 = t4917;
                                            t4918 = *(int *)(((int)stk + 32));
                                            t4919 = (int)((int)(t4918 + t4912) % (int)t4911);
                                            t4911 = t4919;
                                            *(unsigned int *)(((int)stk + 20)) = (((t4911 << 2) + t4911) << 2);
                                            t4913 = t4911;
                                            t4920 = *(int *)0xC1EE804;
                                            t4921 = (((((t4911 << 2) + t4911) << 2) + t4920) + 0x4);
                                            t4911 = 0xC;
                                            t4922 = 0;
                                            for (; t4922 < (int)t4911; t4922++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t4922) = *(unsigned char *)(t4921 + t4922);
                                            t4923 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4911 = t4923;
                                            t4924 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4925 = *(int *)(((int)stk + 20));
                                            t4926 = *(int *)0xC1EE804;
                                            t4912 = t4926;
                                            u4914 = t4924;
                                            u4927 = *(float *)(((t4925 + t4912) + 0x0));
                                            t4928 = CheckClipping(u4927);
                                            t4911 = t4928;
                                            if (t4911 != 0) {
                                                t4929 = *(int *)(((int)stk + 20));
                                                t4911 = 0x20;
                                                t4930 = *(int *)0xC1EE804;
                                                t4912 = t4930;
                                                u4931 = *(float *)((((int)stk + 20) + t4911));
                                                t4932 = *(int *)0xC2A6EC0;
                                                u4933 = *(float *)(((t4929 + t4912) + 0x0));
                                                t4934 = PutCourse_CheckPiece(t4913, t4932, 0x1, (((int)stk + 20) + 0x2C), u4914, u4931, u4933);
                                                t4911 = t4934;
                                                if (t4911 == 1) {
                                                    t4935 = FUN_0c02eb86(t4913, 0x1, u4914);
                                                    t4911 = t4935;
                                                }
                                            }
                                            t4938 = *(int *)(((int)stk + 24));
                                            t4912 = t4938;
                                            t4912 = (t4912 + 0x1);
                                            *(unsigned int *)(((int)stk + 24)) = t4912;
                                        }
                                        t4971 = t4911;
                                    } else {
                                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                                        u4939 = u4307;
                                        for (;;) {
                                            t4940 = *(short *)0xC17912C;
                                            t4941 = *(int *)(((int)stk + 24));
                                            t4942 = *(int *)(((t4941 << 2) + ((unsigned short)(((((t4940 << 2) << 2) + t4940) << 2) << 1) + 0xC100F68)));
                                            if (t4942 == -1) {
                                                break;
                                            }
                                            t4943 = *(short *)0xC17912C;
                                            t4944 = *(int *)(((int)stk + 28));
                                            t4945 = *(int *)((((0xC100F68 + (unsigned short)(((((t4943 << 2) << 2) + t4943) << 2) << 1)) + t4944) + 0x0));
                                            *(unsigned int *)(((int)stk + 20)) = t4945;
                                            *(unsigned int *)(((int)stk + 40)) = (((t4945 << 2) + t4945) << 2);
                                            t4946 = *(int *)0xC1EE804;
                                            t4947 = *(int *)(((((((t4945 << 2) + t4945) << 2) + t4946) + 0x4) + 0x8));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4947;
                                            t4948 = *(int *)(((((((t4945 << 2) + t4945) << 2) + t4946) + 0x4) + 0x4));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4948;
                                            t4949 = *(int *)(((((((t4945 << 2) + t4945) << 2) + t4946) + 0x4) + 0x0));
                                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4949;
                                            nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                            t4951 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                            t4952 = *(int *)(((int)stk + 40));
                                            t4953 = *(int *)0xC1EE804;
                                            u4939 = t4951;
                                            u4954 = *(float *)(((t4952 + t4953) + 0x0));
                                            t4955 = CheckClipping(u4954);
                                            if (t4955 != 0) {
                                                t4956 = *(int *)(((int)stk + 20));
                                                t4957 = *(int *)0xC1EE804;
                                                t4958 = *(int *)0xC2A6EC0;
                                                u4959 = *(float *)(((int)stk + 52));
                                                u4960 = *(float *)((((((t4956 << 2) + t4956) << 2) + t4957) + 0x0));
                                                t4961 = *(int *)(((int)stk + 20));
                                                t4962 = PutCourse_CheckPiece(t4961, t4958, 0x1, (((int)stk + 20) + 0x2C), u4939, u4959, u4960);
                                                if (t4962 == 1) {
                                                    t4963 = *(int *)(((int)stk + 20));
                                                    FUN_0c02eb86(t4963, 0x1, u4939);
                                                }
                                            }
                                            t4969 = *(int *)(((int)stk + 24));
                                            *(unsigned int *)(((int)stk + 24)) = (t4969 + 0x1);
                                            t4970 = *(int *)(((int)stk + 28));
                                            *(unsigned int *)(((int)stk + 28)) = (t4970 + 0x4);
                                        }
                                        t4971 = t4942;
                                    }
                                    t4977 = t4971;
                                }
                                t5015 = t4977;
                            } else {
                                *(unsigned int *)(((int)stk + 28)) = 0x0;
                                u4983 = u4307;
                                for (;;) {
                                    t4984 = *(short *)0xC17912C;
                                    t4985 = *(int *)(((int)stk + 24));
                                    t4986 = *(int *)(((t4985 << 2) + ((unsigned short)(((((t4984 << 2) << 2) + t4984) << 2) << 1) + 0xC100F68)));
                                    if (t4986 == -1) {
                                        break;
                                    }
                                    t4987 = *(short *)0xC17912C;
                                    t4988 = *(int *)(((int)stk + 28));
                                    t4989 = *(int *)((((0xC100F68 + (unsigned short)(((((t4987 << 2) << 2) + t4987) << 2) << 1)) + t4988) + 0x0));
                                    *(unsigned int *)(((int)stk + 20)) = t4989;
                                    *(unsigned int *)(((int)stk + 40)) = (((t4989 << 2) + t4989) << 2);
                                    t4990 = *(int *)0xC1EE804;
                                    t4991 = *(int *)(((((((t4989 << 2) + t4989) << 2) + t4990) + 0x4) + 0x8));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t4991;
                                    t4992 = *(int *)(((((((t4989 << 2) + t4989) << 2) + t4990) + 0x4) + 0x4));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t4992;
                                    t4993 = *(int *)(((((((t4989 << 2) + t4989) << 2) + t4990) + 0x4) + 0x0));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t4993;
                                    nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t4995 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t4996 = *(int *)(((int)stk + 40));
                                    t4997 = *(int *)0xC1EE804;
                                    u4983 = t4995;
                                    u4998 = *(float *)(((t4996 + t4997) + 0x0));
                                    t4999 = CheckClipping(u4998);
                                    if (t4999 != 0) {
                                        t5000 = *(int *)(((int)stk + 20));
                                        t5001 = *(int *)0xC1EE804;
                                        t5002 = *(int *)0xC2A6EC0;
                                        u5003 = *(float *)(((int)stk + 52));
                                        u5004 = *(float *)((((((t5000 << 2) + t5000) << 2) + t5001) + 0x0));
                                        t5005 = *(int *)(((int)stk + 20));
                                        t5006 = PutCourse_CheckPiece(t5005, t5002, 0x1, (((int)stk + 20) + 0x2C), u4983, u5003, u5004);
                                        if (t5006 == 1) {
                                            t5007 = *(int *)(((int)stk + 20));
                                            FUN_0c02eb86(t5007, 0x1, u4983);
                                        }
                                    }
                                    t5013 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t5013 + 0x1);
                                    t5014 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 28)) = (t5014 + 0x4);
                                }
                                t5015 = t4986;
                            }
                            t5121 = t5015;
                        } else {
                            if ((int)t4309 < (int)0x14C) {
                                t5021 = 0x60;
                                t5022 = 0x34;
                                t5023 = 0xC1790CC;
                                u5024 = u4307;
                                for (;;) {
                                    t5025 = *(int *)(((int)stk + 24));
                                    t5026 = *(int *)(((int)stk + 36));
                                    if ((int)t5025 >= (int)t5026) {
                                        break;
                                    }
                                    t5021 = 0xF0;
                                    t5027 = *(int *)(((int)stk + 24));
                                    t5022 = t5027;
                                    t5028 = *(int *)(((int)stk + 32));
                                    t5029 = (int)((int)(t5028 + t5022) % (int)t5021);
                                    t5021 = t5029;
                                    *(unsigned int *)(((int)stk + 20)) = (((t5021 << 2) + t5021) << 2);
                                    t5023 = t5021;
                                    t5030 = *(int *)0xC1EE804;
                                    t5031 = (((((t5021 << 2) + t5021) << 2) + t5030) + 0x4);
                                    t5021 = 0xC;
                                    t5032 = 0;
                                    for (; t5032 < (int)t5021; t5032++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t5032) = *(unsigned char *)(t5031 + t5032);
                                    t5033 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t5021 = t5033;
                                    t5034 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t5035 = *(int *)(((int)stk + 20));
                                    t5036 = *(int *)0xC1EE804;
                                    t5022 = t5036;
                                    u5024 = t5034;
                                    u5037 = *(float *)(((t5035 + t5022) + 0x0));
                                    t5038 = CheckClipping(u5037);
                                    t5021 = t5038;
                                    if (t5021 != 0) {
                                        t5039 = *(int *)(((int)stk + 20));
                                        t5021 = 0x20;
                                        t5040 = *(int *)0xC1EE804;
                                        t5022 = t5040;
                                        u5041 = *(float *)((((int)stk + 20) + t5021));
                                        t5042 = *(int *)0xC2A6EC0;
                                        u5043 = *(float *)(((t5039 + t5022) + 0x0));
                                        t5044 = PutCourse_CheckPiece(t5023, t5042, 0x1, (((int)stk + 20) + 0x2C), u5024, u5041, u5043);
                                        t5021 = t5044;
                                        if (t5021 == 1) {
                                            t5045 = FUN_0c02eb86(t5023, 0x1, u5024);
                                            t5021 = t5045;
                                        }
                                    }
                                    t5048 = *(int *)(((int)stk + 24));
                                    t5022 = t5048;
                                    t5022 = (t5022 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t5022;
                                }
                                t5115 = t5021;
                            } else {
                                if ((int)t4309 > (int)0x162) {
                                    t5049 = 0x60;
                                    t5050 = 0x34;
                                    t5051 = 0xC1790CC;
                                    u5052 = u4307;
                                    for (;;) {
                                        t5053 = *(int *)(((int)stk + 24));
                                        t5054 = *(int *)(((int)stk + 36));
                                        if ((int)t5053 >= (int)t5054) {
                                            break;
                                        }
                                        t5049 = 0xF0;
                                        t5055 = *(int *)(((int)stk + 24));
                                        t5050 = t5055;
                                        t5056 = *(int *)(((int)stk + 32));
                                        t5057 = (int)((int)(t5056 + t5050) % (int)t5049);
                                        t5049 = t5057;
                                        *(unsigned int *)(((int)stk + 20)) = (((t5049 << 2) + t5049) << 2);
                                        t5051 = t5049;
                                        t5058 = *(int *)0xC1EE804;
                                        t5059 = (((((t5049 << 2) + t5049) << 2) + t5058) + 0x4);
                                        t5049 = 0xC;
                                        t5060 = 0;
                                        for (; t5060 < (int)t5049; t5060++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t5060) = *(unsigned char *)(t5059 + t5060);
                                        t5061 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t5049 = t5061;
                                        t5062 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t5063 = *(int *)(((int)stk + 20));
                                        t5064 = *(int *)0xC1EE804;
                                        t5050 = t5064;
                                        u5052 = t5062;
                                        u5065 = *(float *)(((t5063 + t5050) + 0x0));
                                        t5066 = CheckClipping(u5065);
                                        t5049 = t5066;
                                        if (t5049 != 0) {
                                            t5067 = *(int *)(((int)stk + 20));
                                            t5049 = 0x20;
                                            t5068 = *(int *)0xC1EE804;
                                            t5050 = t5068;
                                            u5069 = *(float *)((((int)stk + 20) + t5049));
                                            t5070 = *(int *)0xC2A6EC0;
                                            u5071 = *(float *)(((t5067 + t5050) + 0x0));
                                            t5072 = PutCourse_CheckPiece(t5051, t5070, 0x1, (((int)stk + 20) + 0x2C), u5052, u5069, u5071);
                                            t5049 = t5072;
                                            if (t5049 == 1) {
                                                t5073 = FUN_0c02eb86(t5051, 0x1, u5052);
                                                t5049 = t5073;
                                            }
                                        }
                                        t5076 = *(int *)(((int)stk + 24));
                                        t5050 = t5076;
                                        t5050 = (t5050 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t5050;
                                    }
                                    t5109 = t5049;
                                } else {
                                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                                    u5077 = u4307;
                                    for (;;) {
                                        t5078 = *(short *)0xC17912C;
                                        t5079 = *(int *)(((int)stk + 24));
                                        t5080 = *(int *)(((t5079 << 2) + ((unsigned short)(((((t5078 << 2) << 2) + t5078) << 2) << 1) + 0xC100F68)));
                                        if (t5080 == -1) {
                                            break;
                                        }
                                        t5081 = *(short *)0xC17912C;
                                        t5082 = *(int *)(((int)stk + 28));
                                        t5083 = *(int *)((((0xC100F68 + (unsigned short)(((((t5081 << 2) << 2) + t5081) << 2) << 1)) + t5082) + 0x0));
                                        *(unsigned int *)(((int)stk + 20)) = t5083;
                                        *(unsigned int *)(((int)stk + 40)) = (((t5083 << 2) + t5083) << 2);
                                        t5084 = *(int *)0xC1EE804;
                                        t5085 = *(int *)(((((((t5083 << 2) + t5083) << 2) + t5084) + 0x4) + 0x8));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t5085;
                                        t5086 = *(int *)(((((((t5083 << 2) + t5083) << 2) + t5084) + 0x4) + 0x4));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t5086;
                                        t5087 = *(int *)(((((((t5083 << 2) + t5083) << 2) + t5084) + 0x4) + 0x0));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t5087;
                                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t5089 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t5090 = *(int *)(((int)stk + 40));
                                        t5091 = *(int *)0xC1EE804;
                                        u5077 = t5089;
                                        u5092 = *(float *)(((t5090 + t5091) + 0x0));
                                        t5093 = CheckClipping(u5092);
                                        if (t5093 != 0) {
                                            t5094 = *(int *)(((int)stk + 20));
                                            t5095 = *(int *)0xC1EE804;
                                            t5096 = *(int *)0xC2A6EC0;
                                            u5097 = *(float *)(((int)stk + 52));
                                            u5098 = *(float *)((((((t5094 << 2) + t5094) << 2) + t5095) + 0x0));
                                            t5099 = *(int *)(((int)stk + 20));
                                            t5100 = PutCourse_CheckPiece(t5099, t5096, 0x1, (((int)stk + 20) + 0x2C), u5077, u5097, u5098);
                                            if (t5100 == 1) {
                                                t5101 = *(int *)(((int)stk + 20));
                                                FUN_0c02eb86(t5101, 0x1, u5077);
                                            }
                                        }
                                        t5107 = *(int *)(((int)stk + 24));
                                        *(unsigned int *)(((int)stk + 24)) = (t5107 + 0x1);
                                        t5108 = *(int *)(((int)stk + 28));
                                        *(unsigned int *)(((int)stk + 28)) = (t5108 + 0x4);
                                    }
                                    t5109 = t5080;
                                }
                                t5115 = t5109;
                            }
                            t5121 = t5115;
                        }
                        t5160 = t5121;
                    } else {
                        *(unsigned int *)(((int)stk + 28)) = 0x0;
                        u5128 = u4307;
                        for (;;) {
                            t5129 = *(short *)0xC17912C;
                            t5130 = *(int *)(((int)stk + 24));
                            t5131 = *(int *)(((t5130 << 2) + ((unsigned short)(((((t5129 << 2) << 2) + t5129) << 2) << 1) + 0xC100F68)));
                            if (t5131 == -1) {
                                break;
                            }
                            t5132 = *(short *)0xC17912C;
                            t5133 = *(int *)(((int)stk + 28));
                            t5134 = *(int *)((((0xC100F68 + (unsigned short)(((((t5132 << 2) << 2) + t5132) << 2) << 1)) + t5133) + 0x0));
                            *(unsigned int *)(((int)stk + 20)) = t5134;
                            *(unsigned int *)(((int)stk + 40)) = (((t5134 << 2) + t5134) << 2);
                            t5135 = *(int *)0xC1EE804;
                            t5136 = *(int *)(((((((t5134 << 2) + t5134) << 2) + t5135) + 0x4) + 0x8));
                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t5136;
                            t5137 = *(int *)(((((((t5134 << 2) + t5134) << 2) + t5135) + 0x4) + 0x4));
                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t5137;
                            t5138 = *(int *)(((((((t5134 << 2) + t5134) << 2) + t5135) + 0x4) + 0x0));
                            *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t5138;
                            nlProjectScreen3D((((int)stk + 20) + 0x2C));
                            t5140 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                            t5141 = *(int *)(((int)stk + 40));
                            t5142 = *(int *)0xC1EE804;
                            u5128 = t5140;
                            u5143 = *(float *)(((t5141 + t5142) + 0x0));
                            t5144 = CheckClipping(u5143);
                            if (t5144 != 0) {
                                t5145 = *(int *)(((int)stk + 20));
                                t5146 = *(int *)0xC1EE804;
                                t5147 = *(int *)0xC2A6EC0;
                                u5148 = *(float *)(((int)stk + 52));
                                u5149 = *(float *)((((((t5145 << 2) + t5145) << 2) + t5146) + 0x0));
                                t5150 = *(int *)(((int)stk + 20));
                                t5151 = PutCourse_CheckPiece(t5150, t5147, 0x1, (((int)stk + 20) + 0x2C), u5128, u5148, u5149);
                                if (t5151 == 1) {
                                    t5152 = *(int *)(((int)stk + 20));
                                    FUN_0c02eb86(t5152, 0x1, u5128);
                                }
                            }
                            t5158 = *(int *)(((int)stk + 24));
                            *(unsigned int *)(((int)stk + 24)) = (t5158 + 0x1);
                            t5159 = *(int *)(((int)stk + 28));
                            *(unsigned int *)(((int)stk + 28)) = (t5159 + 0x4);
                        }
                        t5160 = t5131;
                    }
                    t5411 = t5160;
                } else {
                    if ((int)t4309 >= (int)0xCD) {
                        if ((int)t4309 > (int)0x12C) {
                            if ((int)t4309 < (int)0x14C) {
                                t5166 = 0x60;
                                t5167 = 0x34;
                                t5168 = 0xC1790CC;
                                u5169 = u4307;
                                for (;;) {
                                    t5170 = *(int *)(((int)stk + 24));
                                    t5171 = *(int *)(((int)stk + 36));
                                    if ((int)t5170 >= (int)t5171) {
                                        break;
                                    }
                                    t5166 = 0xF0;
                                    t5172 = *(int *)(((int)stk + 24));
                                    t5167 = t5172;
                                    t5173 = *(int *)(((int)stk + 32));
                                    t5174 = (int)((int)(t5173 + t5167) % (int)t5166);
                                    t5166 = t5174;
                                    *(unsigned int *)(((int)stk + 20)) = (((t5166 << 2) + t5166) << 2);
                                    t5168 = t5166;
                                    t5175 = *(int *)0xC1EE804;
                                    t5176 = (((((t5166 << 2) + t5166) << 2) + t5175) + 0x4);
                                    t5166 = 0xC;
                                    t5177 = 0;
                                    for (; t5177 < (int)t5166; t5177++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t5177) = *(unsigned char *)(t5176 + t5177);
                                    t5178 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t5166 = t5178;
                                    t5179 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t5180 = *(int *)(((int)stk + 20));
                                    t5181 = *(int *)0xC1EE804;
                                    t5167 = t5181;
                                    u5169 = t5179;
                                    u5182 = *(float *)(((t5180 + t5167) + 0x0));
                                    t5183 = CheckClipping(u5182);
                                    t5166 = t5183;
                                    if (t5166 != 0) {
                                        t5184 = *(int *)(((int)stk + 20));
                                        t5166 = 0x20;
                                        t5185 = *(int *)0xC1EE804;
                                        t5167 = t5185;
                                        u5186 = *(float *)((((int)stk + 20) + t5166));
                                        t5187 = *(int *)0xC2A6EC0;
                                        u5188 = *(float *)(((t5184 + t5167) + 0x0));
                                        t5189 = PutCourse_CheckPiece(t5168, t5187, 0x1, (((int)stk + 20) + 0x2C), u5169, u5186, u5188);
                                        t5166 = t5189;
                                        if (t5166 == 1) {
                                            t5190 = FUN_0c02eb86(t5168, 0x1, u5169);
                                            t5166 = t5190;
                                        }
                                    }
                                    t5193 = *(int *)(((int)stk + 24));
                                    t5167 = t5193;
                                    t5167 = (t5167 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t5167;
                                }
                                t5260 = t5166;
                            } else {
                                if ((int)t4309 > (int)0x162) {
                                    t5194 = 0x60;
                                    t5195 = 0x34;
                                    t5196 = 0xC1790CC;
                                    u5197 = u4307;
                                    for (;;) {
                                        t5198 = *(int *)(((int)stk + 24));
                                        t5199 = *(int *)(((int)stk + 36));
                                        if ((int)t5198 >= (int)t5199) {
                                            break;
                                        }
                                        t5194 = 0xF0;
                                        t5200 = *(int *)(((int)stk + 24));
                                        t5195 = t5200;
                                        t5201 = *(int *)(((int)stk + 32));
                                        t5202 = (int)((int)(t5201 + t5195) % (int)t5194);
                                        t5194 = t5202;
                                        *(unsigned int *)(((int)stk + 20)) = (((t5194 << 2) + t5194) << 2);
                                        t5196 = t5194;
                                        t5203 = *(int *)0xC1EE804;
                                        t5204 = (((((t5194 << 2) + t5194) << 2) + t5203) + 0x4);
                                        t5194 = 0xC;
                                        t5205 = 0;
                                        for (; t5205 < (int)t5194; t5205++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t5205) = *(unsigned char *)(t5204 + t5205);
                                        t5206 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t5194 = t5206;
                                        t5207 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t5208 = *(int *)(((int)stk + 20));
                                        t5209 = *(int *)0xC1EE804;
                                        t5195 = t5209;
                                        u5197 = t5207;
                                        u5210 = *(float *)(((t5208 + t5195) + 0x0));
                                        t5211 = CheckClipping(u5210);
                                        t5194 = t5211;
                                        if (t5194 != 0) {
                                            t5212 = *(int *)(((int)stk + 20));
                                            t5194 = 0x20;
                                            t5213 = *(int *)0xC1EE804;
                                            t5195 = t5213;
                                            u5214 = *(float *)((((int)stk + 20) + t5194));
                                            t5215 = *(int *)0xC2A6EC0;
                                            u5216 = *(float *)(((t5212 + t5195) + 0x0));
                                            t5217 = PutCourse_CheckPiece(t5196, t5215, 0x1, (((int)stk + 20) + 0x2C), u5197, u5214, u5216);
                                            t5194 = t5217;
                                            if (t5194 == 1) {
                                                t5218 = FUN_0c02eb86(t5196, 0x1, u5197);
                                                t5194 = t5218;
                                            }
                                        }
                                        t5221 = *(int *)(((int)stk + 24));
                                        t5195 = t5221;
                                        t5195 = (t5195 + 0x1);
                                        *(unsigned int *)(((int)stk + 24)) = t5195;
                                    }
                                    t5254 = t5194;
                                } else {
                                    *(unsigned int *)(((int)stk + 28)) = 0x0;
                                    u5222 = u4307;
                                    for (;;) {
                                        t5223 = *(short *)0xC17912C;
                                        t5224 = *(int *)(((int)stk + 24));
                                        t5225 = *(int *)(((t5224 << 2) + ((unsigned short)(((((t5223 << 2) << 2) + t5223) << 2) << 1) + 0xC100F68)));
                                        if (t5225 == -1) {
                                            break;
                                        }
                                        t5226 = *(short *)0xC17912C;
                                        t5227 = *(int *)(((int)stk + 28));
                                        t5228 = *(int *)((((0xC100F68 + (unsigned short)(((((t5226 << 2) << 2) + t5226) << 2) << 1)) + t5227) + 0x0));
                                        *(unsigned int *)(((int)stk + 20)) = t5228;
                                        *(unsigned int *)(((int)stk + 40)) = (((t5228 << 2) + t5228) << 2);
                                        t5229 = *(int *)0xC1EE804;
                                        t5230 = *(int *)(((((((t5228 << 2) + t5228) << 2) + t5229) + 0x4) + 0x8));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t5230;
                                        t5231 = *(int *)(((((((t5228 << 2) + t5228) << 2) + t5229) + 0x4) + 0x4));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t5231;
                                        t5232 = *(int *)(((((((t5228 << 2) + t5228) << 2) + t5229) + 0x4) + 0x0));
                                        *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t5232;
                                        nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                        t5234 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                        t5235 = *(int *)(((int)stk + 40));
                                        t5236 = *(int *)0xC1EE804;
                                        u5222 = t5234;
                                        u5237 = *(float *)(((t5235 + t5236) + 0x0));
                                        t5238 = CheckClipping(u5237);
                                        if (t5238 != 0) {
                                            t5239 = *(int *)(((int)stk + 20));
                                            t5240 = *(int *)0xC1EE804;
                                            t5241 = *(int *)0xC2A6EC0;
                                            u5242 = *(float *)(((int)stk + 52));
                                            u5243 = *(float *)((((((t5239 << 2) + t5239) << 2) + t5240) + 0x0));
                                            t5244 = *(int *)(((int)stk + 20));
                                            t5245 = PutCourse_CheckPiece(t5244, t5241, 0x1, (((int)stk + 20) + 0x2C), u5222, u5242, u5243);
                                            if (t5245 == 1) {
                                                t5246 = *(int *)(((int)stk + 20));
                                                FUN_0c02eb86(t5246, 0x1, u5222);
                                            }
                                        }
                                        t5252 = *(int *)(((int)stk + 24));
                                        *(unsigned int *)(((int)stk + 24)) = (t5252 + 0x1);
                                        t5253 = *(int *)(((int)stk + 28));
                                        *(unsigned int *)(((int)stk + 28)) = (t5253 + 0x4);
                                    }
                                    t5254 = t5225;
                                }
                                t5260 = t5254;
                            }
                            t5298 = t5260;
                        } else {
                            *(unsigned int *)(((int)stk + 28)) = 0x0;
                            u5266 = u4307;
                            for (;;) {
                                t5267 = *(short *)0xC17912C;
                                t5268 = *(int *)(((int)stk + 24));
                                t5269 = *(int *)(((t5268 << 2) + ((unsigned short)(((((t5267 << 2) << 2) + t5267) << 2) << 1) + 0xC100F68)));
                                if (t5269 == -1) {
                                    break;
                                }
                                t5270 = *(short *)0xC17912C;
                                t5271 = *(int *)(((int)stk + 28));
                                t5272 = *(int *)((((0xC100F68 + (unsigned short)(((((t5270 << 2) << 2) + t5270) << 2) << 1)) + t5271) + 0x0));
                                *(unsigned int *)(((int)stk + 20)) = t5272;
                                *(unsigned int *)(((int)stk + 40)) = (((t5272 << 2) + t5272) << 2);
                                t5273 = *(int *)0xC1EE804;
                                t5274 = *(int *)(((((((t5272 << 2) + t5272) << 2) + t5273) + 0x4) + 0x8));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t5274;
                                t5275 = *(int *)(((((((t5272 << 2) + t5272) << 2) + t5273) + 0x4) + 0x4));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t5275;
                                t5276 = *(int *)(((((((t5272 << 2) + t5272) << 2) + t5273) + 0x4) + 0x0));
                                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t5276;
                                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t5278 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t5279 = *(int *)(((int)stk + 40));
                                t5280 = *(int *)0xC1EE804;
                                u5266 = t5278;
                                u5281 = *(float *)(((t5279 + t5280) + 0x0));
                                t5282 = CheckClipping(u5281);
                                if (t5282 != 0) {
                                    t5283 = *(int *)(((int)stk + 20));
                                    t5284 = *(int *)0xC1EE804;
                                    t5285 = *(int *)0xC2A6EC0;
                                    u5286 = *(float *)(((int)stk + 52));
                                    u5287 = *(float *)((((((t5283 << 2) + t5283) << 2) + t5284) + 0x0));
                                    t5288 = *(int *)(((int)stk + 20));
                                    t5289 = PutCourse_CheckPiece(t5288, t5285, 0x1, (((int)stk + 20) + 0x2C), u5266, u5286, u5287);
                                    if (t5289 == 1) {
                                        t5290 = *(int *)(((int)stk + 20));
                                        FUN_0c02eb86(t5290, 0x1, u5266);
                                    }
                                }
                                t5296 = *(int *)(((int)stk + 24));
                                *(unsigned int *)(((int)stk + 24)) = (t5296 + 0x1);
                                t5297 = *(int *)(((int)stk + 28));
                                *(unsigned int *)(((int)stk + 28)) = (t5297 + 0x4);
                            }
                            t5298 = t5269;
                        }
                        t5404 = t5298;
                    } else {
                        if ((int)t4309 < (int)0x14C) {
                            t5304 = 0x60;
                            t5305 = 0x34;
                            t5306 = 0xC1790CC;
                            u5307 = u4307;
                            for (;;) {
                                t5308 = *(int *)(((int)stk + 24));
                                t5309 = *(int *)(((int)stk + 36));
                                if ((int)t5308 >= (int)t5309) {
                                    break;
                                }
                                t5304 = 0xF0;
                                t5310 = *(int *)(((int)stk + 24));
                                t5305 = t5310;
                                t5311 = *(int *)(((int)stk + 32));
                                t5312 = (int)((int)(t5311 + t5305) % (int)t5304);
                                t5304 = t5312;
                                *(unsigned int *)(((int)stk + 20)) = (((t5304 << 2) + t5304) << 2);
                                t5306 = t5304;
                                t5313 = *(int *)0xC1EE804;
                                t5314 = (((((t5304 << 2) + t5304) << 2) + t5313) + 0x4);
                                t5304 = 0xC;
                                t5315 = 0;
                                for (; t5315 < (int)t5304; t5315++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t5315) = *(unsigned char *)(t5314 + t5315);
                                t5316 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                t5304 = t5316;
                                t5317 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                t5318 = *(int *)(((int)stk + 20));
                                t5319 = *(int *)0xC1EE804;
                                t5305 = t5319;
                                u5307 = t5317;
                                u5320 = *(float *)(((t5318 + t5305) + 0x0));
                                t5321 = CheckClipping(u5320);
                                t5304 = t5321;
                                if (t5304 != 0) {
                                    t5322 = *(int *)(((int)stk + 20));
                                    t5304 = 0x20;
                                    t5323 = *(int *)0xC1EE804;
                                    t5305 = t5323;
                                    u5324 = *(float *)((((int)stk + 20) + t5304));
                                    t5325 = *(int *)0xC2A6EC0;
                                    u5326 = *(float *)(((t5322 + t5305) + 0x0));
                                    t5327 = PutCourse_CheckPiece(t5306, t5325, 0x1, (((int)stk + 20) + 0x2C), u5307, u5324, u5326);
                                    t5304 = t5327;
                                    if (t5304 == 1) {
                                        t5328 = FUN_0c02eb86(t5306, 0x1, u5307);
                                        t5304 = t5328;
                                    }
                                }
                                t5331 = *(int *)(((int)stk + 24));
                                t5305 = t5331;
                                t5305 = (t5305 + 0x1);
                                *(unsigned int *)(((int)stk + 24)) = t5305;
                            }
                            t5398 = t5304;
                        } else {
                            if ((int)t4309 > (int)0x162) {
                                t5332 = 0x60;
                                t5333 = 0x34;
                                t5334 = 0xC1790CC;
                                u5335 = u4307;
                                for (;;) {
                                    t5336 = *(int *)(((int)stk + 24));
                                    t5337 = *(int *)(((int)stk + 36));
                                    if ((int)t5336 >= (int)t5337) {
                                        break;
                                    }
                                    t5332 = 0xF0;
                                    t5338 = *(int *)(((int)stk + 24));
                                    t5333 = t5338;
                                    t5339 = *(int *)(((int)stk + 32));
                                    t5340 = (int)((int)(t5339 + t5333) % (int)t5332);
                                    t5332 = t5340;
                                    *(unsigned int *)(((int)stk + 20)) = (((t5332 << 2) + t5332) << 2);
                                    t5334 = t5332;
                                    t5341 = *(int *)0xC1EE804;
                                    t5342 = (((((t5332 << 2) + t5332) << 2) + t5341) + 0x4);
                                    t5332 = 0xC;
                                    t5343 = 0;
                                    for (; t5343 < (int)t5332; t5343++) *(unsigned char *)((((int)stk + 20) + 0x2C) + t5343) = *(unsigned char *)(t5342 + t5343);
                                    t5344 = nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t5332 = t5344;
                                    t5345 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t5346 = *(int *)(((int)stk + 20));
                                    t5347 = *(int *)0xC1EE804;
                                    t5333 = t5347;
                                    u5335 = t5345;
                                    u5348 = *(float *)(((t5346 + t5333) + 0x0));
                                    t5349 = CheckClipping(u5348);
                                    t5332 = t5349;
                                    if (t5332 != 0) {
                                        t5350 = *(int *)(((int)stk + 20));
                                        t5332 = 0x20;
                                        t5351 = *(int *)0xC1EE804;
                                        t5333 = t5351;
                                        u5352 = *(float *)((((int)stk + 20) + t5332));
                                        t5353 = *(int *)0xC2A6EC0;
                                        u5354 = *(float *)(((t5350 + t5333) + 0x0));
                                        t5355 = PutCourse_CheckPiece(t5334, t5353, 0x1, (((int)stk + 20) + 0x2C), u5335, u5352, u5354);
                                        t5332 = t5355;
                                        if (t5332 == 1) {
                                            t5356 = FUN_0c02eb86(t5334, 0x1, u5335);
                                            t5332 = t5356;
                                        }
                                    }
                                    t5359 = *(int *)(((int)stk + 24));
                                    t5333 = t5359;
                                    t5333 = (t5333 + 0x1);
                                    *(unsigned int *)(((int)stk + 24)) = t5333;
                                }
                                t5392 = t5332;
                            } else {
                                *(unsigned int *)(((int)stk + 28)) = 0x0;
                                u5360 = u4307;
                                for (;;) {
                                    t5361 = *(short *)0xC17912C;
                                    t5362 = *(int *)(((int)stk + 24));
                                    t5363 = *(int *)(((t5362 << 2) + ((unsigned short)(((((t5361 << 2) << 2) + t5361) << 2) << 1) + 0xC100F68)));
                                    if (t5363 == -1) {
                                        break;
                                    }
                                    t5364 = *(short *)0xC17912C;
                                    t5365 = *(int *)(((int)stk + 28));
                                    t5366 = *(int *)((((0xC100F68 + (unsigned short)(((((t5364 << 2) << 2) + t5364) << 2) << 1)) + t5365) + 0x0));
                                    *(unsigned int *)(((int)stk + 20)) = t5366;
                                    *(unsigned int *)(((int)stk + 40)) = (((t5366 << 2) + t5366) << 2);
                                    t5367 = *(int *)0xC1EE804;
                                    t5368 = *(int *)(((((((t5366 << 2) + t5366) << 2) + t5367) + 0x4) + 0x8));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t5368;
                                    t5369 = *(int *)(((((((t5366 << 2) + t5366) << 2) + t5367) + 0x4) + 0x4));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t5369;
                                    t5370 = *(int *)(((((((t5366 << 2) + t5366) << 2) + t5367) + 0x4) + 0x0));
                                    *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t5370;
                                    nlProjectScreen3D((((int)stk + 20) + 0x2C));
                                    t5372 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                                    t5373 = *(int *)(((int)stk + 40));
                                    t5374 = *(int *)0xC1EE804;
                                    u5360 = t5372;
                                    u5375 = *(float *)(((t5373 + t5374) + 0x0));
                                    t5376 = CheckClipping(u5375);
                                    if (t5376 != 0) {
                                        t5377 = *(int *)(((int)stk + 20));
                                        t5378 = *(int *)0xC1EE804;
                                        t5379 = *(int *)0xC2A6EC0;
                                        u5380 = *(float *)(((int)stk + 52));
                                        u5381 = *(float *)((((((t5377 << 2) + t5377) << 2) + t5378) + 0x0));
                                        t5382 = *(int *)(((int)stk + 20));
                                        t5383 = PutCourse_CheckPiece(t5382, t5379, 0x1, (((int)stk + 20) + 0x2C), u5360, u5380, u5381);
                                        if (t5383 == 1) {
                                            t5384 = *(int *)(((int)stk + 20));
                                            FUN_0c02eb86(t5384, 0x1, u5360);
                                        }
                                    }
                                    t5390 = *(int *)(((int)stk + 24));
                                    *(unsigned int *)(((int)stk + 24)) = (t5390 + 0x1);
                                    t5391 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 28)) = (t5391 + 0x4);
                                }
                                t5392 = t5363;
                            }
                            t5398 = t5392;
                        }
                        t5404 = t5398;
                    }
                    t5411 = t5404;
                }
                t5418 = t5411;
            }
            t5457 = t5418;
        } else {
            *(unsigned int *)(((int)stk + 28)) = 0x0;
            u5425 = u4307;
            for (;;) {
                t5426 = *(short *)0xC17912C;
                t5427 = *(int *)(((int)stk + 24));
                t5428 = *(int *)(((t5427 << 2) + ((unsigned short)(((((t5426 << 2) << 2) + t5426) << 2) << 1) + 0xC100F68)));
                if (t5428 == -1) {
                    break;
                }
                t5429 = *(short *)0xC17912C;
                t5430 = *(int *)(((int)stk + 28));
                t5431 = *(int *)((((0xC100F68 + (unsigned short)(((((t5429 << 2) << 2) + t5429) << 2) << 1)) + t5430) + 0x0));
                *(unsigned int *)(((int)stk + 20)) = t5431;
                *(unsigned int *)(((int)stk + 40)) = (((t5431 << 2) + t5431) << 2);
                t5432 = *(int *)0xC1EE804;
                t5433 = *(int *)(((((((t5431 << 2) + t5431) << 2) + t5432) + 0x4) + 0x8));
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x8)) = t5433;
                t5434 = *(int *)(((((((t5431 << 2) + t5431) << 2) + t5432) + 0x4) + 0x4));
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x4)) = t5434;
                t5435 = *(int *)(((((((t5431 << 2) + t5431) << 2) + t5432) + 0x4) + 0x0));
                *(unsigned int *)(((((int)stk + 20) + 0x2C) + 0x0)) = t5435;
                nlProjectScreen3D((((int)stk + 20) + 0x2C));
                t5437 = nlLength((((int)stk + 20) + 0x2C), 0xC179840);
                t5438 = *(int *)(((int)stk + 40));
                t5439 = *(int *)0xC1EE804;
                u5425 = t5437;
                u5440 = *(float *)(((t5438 + t5439) + 0x0));
                t5441 = CheckClipping(u5440);
                if (t5441 != 0) {
                    t5442 = *(int *)(((int)stk + 20));
                    t5443 = *(int *)0xC1EE804;
                    t5444 = *(int *)0xC2A6EC0;
                    u5445 = *(float *)(((int)stk + 52));
                    u5446 = *(float *)((((((t5442 << 2) + t5442) << 2) + t5443) + 0x0));
                    t5447 = *(int *)(((int)stk + 20));
                    t5448 = PutCourse_CheckPiece(t5447, t5444, 0x1, (((int)stk + 20) + 0x2C), u5425, u5445, u5446);
                    if (t5448 == 1) {
                        t5449 = *(int *)(((int)stk + 20));
                        FUN_0c02eb86(t5449, 0x1, u5425);
                    }
                }
                t5455 = *(int *)(((int)stk + 24));
                *(unsigned int *)(((int)stk + 24)) = (t5455 + 0x1);
                t5456 = *(int *)(((int)stk + 28));
                *(unsigned int *)(((int)stk + 28)) = (t5456 + 0x4);
            }
            t5457 = t5428;
        }
        t5463 = t5457;
    }
    return t5463;
}
