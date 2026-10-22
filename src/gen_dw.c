/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CheckClipping(float);
int CourseSplineNumGet(int);
int CourseSplineGet(int);
int gdc_VolStreamSong(int);
int gdc_CoursePut(int, int, float);
int menuChangeValue(int, int, int);
int PutCourse_Sky(void);
int Exec_FogDensity(void);
int Exec_FogColor(void);
int Check_FogArea(void);
int Chat_Iraira(void);
int Chat_DamnIt(int);
int Voice_Init(void);
float FUN_0c089de0(int);
int PutCourse_CheckPiece(int, int, int, int, float, float, float);
int Put_Build_Patch(void);
int Put_Course_Obj_Dist(void);
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
int menuItemVolume(int a4, int a5);
int psgEnterState5(int a4, int a5);
int psgEnterState6(int a4, int a5);
int Exec_Fog(void);
int PutCourse(void);

int menuItemVolume(int a4, int a5)
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
        t11 = menuChangeValue(0x0, ((int)stk + 4), 0x9);
        if (t11 == 1) {
            t12 = *(int *)(((int)stk + 4));
            *(unsigned char *)((t3 + 0x0)) = t12;
            SetSEvolume();
            Voice_Init();
            gdc_VolStreamSong(0x7F);
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
                t20 = Chat_Iraira();
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
            t35 = Chat_Iraira();
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
        t45 = Chat_Iraira();
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
        t56 = Chat_DamnIt(a4);
        t57 = t56;
    }
    return t57;
}


