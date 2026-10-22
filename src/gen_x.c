/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Put_Default2_Sprite(void);
int Put_Default_Sprite(void);
int hudDrawJudgement2(void);
int hudDrawJudgement(void);
int hudDrawPassRanking(void);
int Put_Time_Bonus(int);
int Put_ReverseDriving(void);
int Put_PickUp_Nag(void);
int Put_OverArea(void);
int pfTextPut(int, int);
int FUN_0c0770f0(int, int, int);
int nlMvSetShadowObjPutPol(int);
int Put_Time_Count(int);
int Put_TimeUp(void);
int Put_Pass_Time(void);
int gdc_FileLoad(int, int, int);
int gdc_StopStreamVoice(int);
int hudDrawTime(void);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlSetCommonTextureOffset(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int gdc_CourseObjGroupSet(void);
int gdc_SpriteSetInit(void);
int hudDraw(void);
int kmiCreateGlobalParameter(void);
int kmSetVertexRenderState(int a4);
int kmSetModifierRenderState(int a4);


int gdc_SpriteSetInit(void)
{
    int t8;
    int t15;
    int t32;
    int t36;
    int t71;
    int t66;
    int t67;
    int t61;
    int t62;
    int t53;
    int t54;
    int t45;
    int t46;

    FUN_0c0770f0(0x0, 0xC08AF98, 0x100);
    FUN_0c0770f0(0x100, 0xC08B158, 0x100);
    FUN_0c0770f0(0x200, 0xC08B358, 0x100);
    FUN_0c0770f0(0x300, 0xC08B118, 0x10);
    FUN_0c0770f0(0x310, 0xC08B138, 0x10);
    nlSetCommonTextureOffset(0x0);
    gdc_FileLoad(0xCB40000, 0xC08D5AC, 0x0);
    nlObjPutSetReplaceTextureDirName(0xC1433D8, 0xC08B4F8);
    t8 = *(int *)0xC2A11C0;
    if (t8 == 0) {
        nlSetCommonTextureOffset(0x7D);
        gdc_FileLoad(0xCB40000, 0xC08D5B8, 0x0);
        nlObjPutSetReplaceTextureDirName(0xC143B98, 0xC08B700);
    } else {
        nlSetCommonTextureOffset(0x96);
        gdc_FileLoad(0xCB40000, 0xC08D5C4, 0x0);
        nlObjPutSetReplaceTextureDirName(0xC143CD8, 0xC08B700);
        t15 = *(int *)0xC2A11C0;
        if (t15 != 2) {
            if (t15 != 3) {
                if (t15 == 4) {
                    nlSetCommonTextureOffset(0xB9);
                    gdc_FileLoad(0xCB40000, 0xC08D5E8, 0x0);
                    nlObjPutSetReplaceTextureDirName(0xC143E98, 0xC08BA70);
                }
            } else {
                nlSetCommonTextureOffset(0xAF);
                gdc_FileLoad(0xCB40000, 0xC08D5DC, 0x0);
                nlObjPutSetReplaceTextureDirName(0xC143E18, 0xC08BA70);
            }
        } else {
            nlSetCommonTextureOffset(0xB4);
            gdc_FileLoad(0xCB40000, 0xC08D5D0, 0x0);
            nlObjPutSetReplaceTextureDirName(0xC143E58, 0xC08BA70);
        }
    }
    nlSetCommonTextureOffset(0x208);
    gdc_FileLoad(0xCB40000, 0xC08D5F4, 0x0);
    nlObjPutSetReplaceTextureDirName(0xC144D58, 0xC08B700);
    t32 = *(int *)0xC2A11C0;
    if (t32 == 0) {
        nlSetCommonTextureOffset(0x244);
        gdc_FileLoad(0xCB40000, 0xC08D600, 0x0);
        nlObjPutSetReplaceTextureDirName(0xC1450C8, 0xC08B700);
    } else {
        t36 = *(int *)0xC2A11C0;
        if (t36 != 1) {
            if (t36 != 2) {
                if (t36 != 3) {
                    if (t36 != 4) {
                        nlSetCommonTextureOffset(0x2A8);
                        gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                        t45 = 0xC1456D8;
                        t46 = 0xC08B890;
                    } else {
                        nlSetCommonTextureOffset(0x2A8);
                        gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                        nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                        nlSetCommonTextureOffset(0x384);
                        gdc_FileLoad(0xCB40000, 0xC08D630, 0x0);
                        t45 = 0xC146778;
                        t46 = 0xC08BA70;
                    }
                    t53 = t45;
                    t54 = t46;
                } else {
                    nlSetCommonTextureOffset(0x2A8);
                    gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                    nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                    nlSetCommonTextureOffset(0x320);
                    gdc_FileLoad(0xCB40000, 0xC08D624, 0x0);
                    t53 = 0xC1462B8;
                    t54 = 0xC08BA70;
                }
                t61 = t53;
                t62 = t54;
            } else {
                nlSetCommonTextureOffset(0x2A8);
                gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
                nlObjPutSetReplaceTextureDirName(0xC145DF8, 0xC08B890);
                nlSetCommonTextureOffset(0x352);
                gdc_FileLoad(0xCB40000, 0xC08D618, 0x0);
                t61 = 0xC146518;
                t62 = 0xC08BA70;
            }
            t66 = t61;
            t67 = t62;
        } else {
            nlSetCommonTextureOffset(0x2A8);
            gdc_FileLoad(0xCB40000, 0xC08D60C, 0x0);
            t66 = 0xC1456D8;
            t67 = 0xC08B890;
        }
        nlObjPutSetReplaceTextureDirName(t66, t67);
    }
    t71 = nlSetCommonTextureOffset(0x0);
    *(unsigned int *)0xC26E184 = 0x2;
    return t71;
}


int kmiCreateGlobalParameter(void)
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
    int t60;
    int t63;
    int t17;
    int t19;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    float u16;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t34;
    int t35;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t52;
    int t53;
    int t54;
    int t55;
    int t69;
    int t64;
    int t68;
    int t56;
    int t59;
    int t48;
    int t51;
    int t36;
    int t39;
    int t30;
    int t33;

    t0 = *(int *)0xC2EAB9C;
    t1 = *(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t0) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t0) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t0) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t0) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t0) >> 2) >> 1)) | ((unsigned int)(0x4 & t0) >> 2)) << 2) + 0xC178344));
    *(unsigned int *)0xC2EAC0C = t1;
    t2 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC178304 = t2;
    t3 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC2B8D1C = ((unsigned int)((unsigned int)(t3 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t3 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        t4 = *(int *)0xC2EABDC;
        *(unsigned int *)0xC178308 = t4;
        t64 = 0x40;
        t68 = 0xC178324;
    } else {
        t5 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC178308 = t5;
        t6 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC17830C = t6;
        t7 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC178310 = t7;
        t8 = *(int *)0xC2EAC0C;
        t60 = t8;
        t63 = 0xC178324;
        if (t8 != 0) {
            if (t8 != 1) {
                if (t8 != 2) {
                    if (t8 != 3) {
                        if (t8 != 4) {
                            t17 = t8;
                            t19 = 0xC178314;
                            if (t8 == 16) {
                                u9 = *(float *)0xC2EABBC;
                                u10 = *(float *)0xC2EABC0;
                                u11 = *(float *)0xC2EABC4;
                                u12 = *(float *)0xC2EABC8;
                                *(unsigned int *)0xC178314 = ((((((int)(u9 * 255.0f) << 16) << 8) | ((int)(u10 * 255.0f) << 16)) | ((int)(u11 * 255.0f) << 8)) | (int)(u12 * 255.0f));
                                u13 = *(float *)0xC2EABCC;
                                u14 = *(float *)0xC2EABD0;
                                u15 = *(float *)0xC2EABD4;
                                u16 = *(float *)0xC2EABD8;
                                *(unsigned int *)0xC178318 = ((((((int)(u13 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u15 * 255.0f) << 8)) | (int)(u16 * 255.0f));
                                t17 = (int)(u16 * 255.0f);
                                t19 = 0xC178324;
                            }
                            t30 = t17;
                            t33 = t19;
                        } else {
                            t20 = *(int *)0xC2EABE0;
                            *(unsigned int *)0xC178314 = t20;
                            t21 = *(int *)0xC2EABE4;
                            *(unsigned int *)0xC178318 = t21;
                            t22 = *(int *)0xC2EABBC;
                            *(unsigned int *)0xC178324 = t22;
                            t23 = *(int *)0xC2EABC0;
                            *(unsigned int *)0xC178328 = t23;
                            t24 = *(int *)0xC2EABC4;
                            *(unsigned int *)0xC17832C = t24;
                            t25 = *(int *)0xC2EABC8;
                            *(unsigned int *)0xC178330 = t25;
                            t26 = *(int *)0xC2EABEC;
                            *(unsigned int *)0xC178334 = t26;
                            t27 = *(int *)0xC2EABF0;
                            *(unsigned int *)0xC178338 = t27;
                            t28 = *(int *)0xC2EABF4;
                            *(unsigned int *)0xC17833C = t28;
                            t29 = *(int *)0xC2EABF8;
                            *(unsigned int *)0xC178340 = t29;
                            t30 = 0x48;
                            t33 = 0xC178344;
                        }
                        t36 = t30;
                        t39 = t33;
                    } else {
                        t34 = *(int *)0xC2EABE0;
                        *(unsigned int *)0xC178314 = t34;
                        t35 = *(int *)0xC2EABE4;
                        *(unsigned int *)0xC178318 = t35;
                        t36 = 0x48;
                        t39 = 0xC178324;
                    }
                    t48 = t36;
                    t51 = t39;
                } else {
                    t40 = *(int *)0xC2EABBC;
                    *(unsigned int *)0xC178324 = t40;
                    t41 = *(int *)0xC2EABC0;
                    *(unsigned int *)0xC178328 = t41;
                    t42 = *(int *)0xC2EABC4;
                    *(unsigned int *)0xC17832C = t42;
                    t43 = *(int *)0xC2EABC8;
                    *(unsigned int *)0xC178330 = t43;
                    t44 = *(int *)0xC2EABCC;
                    *(unsigned int *)0xC178334 = t44;
                    t45 = *(int *)0xC2EABD0;
                    *(unsigned int *)0xC178338 = t45;
                    t46 = *(int *)0xC2EABD4;
                    *(unsigned int *)0xC17833C = t46;
                    t47 = *(int *)0xC2EABD8;
                    *(unsigned int *)0xC178340 = t47;
                    t48 = t47;
                    t51 = 0xC178344;
                }
                t56 = t48;
                t59 = t51;
            } else {
                t52 = *(int *)0xC2EABBC;
                *(unsigned int *)0xC178314 = t52;
                t53 = *(int *)0xC2EABC0;
                *(unsigned int *)0xC178318 = t53;
                t54 = *(int *)0xC2EABC4;
                *(unsigned int *)0xC17831C = t54;
                t55 = *(int *)0xC2EABC8;
                *(unsigned int *)0xC178320 = t55;
                t56 = t55;
                t59 = 0xC178324;
            }
            t60 = t56;
            t63 = t59;
        }
        t64 = t60;
        t68 = t63;
    }
    t69 = *(int *)0xC2B8D1C;
    *(unsigned int *)0xC2B8CA8 = t69;
    *(unsigned int *)0xC2B8CAC = (t68 - 0xC178304);
    return t64;
}

int kmSetVertexRenderState(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t7;
    float u8;
    float u9;
    float u10;
    float u11;
    float u12;
    float u13;
    float u14;
    float u15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t86;
    int t37;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
    float u34;
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
    int t54;
    int t55;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t74;
    int t75;
    int t76;
    int t77;
    int t94;
    int t92;
    int t81;
    int t72;
    int t59;
    int t52;

    t0 = *(int *)((a4 + 0x90));
    *(unsigned int *)0xC2EAB9C = t0;
    t1 = *(int *)((a4 + 0x94));
    *(unsigned int *)0xC2EABAC = t1;
    t2 = *(int *)((a4 + 0x98));
    *(unsigned int *)0xC2EABB0 = t2;
    t3 = *(int *)0xC2EAB9C;
    if ((((unsigned int)((unsigned int)t3 >> 16) >> 8) & 7) == 0) {
        t4 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC2EABB0 = ((t4 & 0x3FFFFFF) | 0x20000000);
    }
    t7 = *(int *)((a4 + 0x9C));
    *(unsigned int *)0xC2EABB4 = t7;
    u8 = *(float *)((a4 + 0x70));
    *(float *)0xC2EABBC = u8;
    u9 = *(float *)((a4 + 0x74));
    *(float *)0xC2EABC0 = u9;
    u10 = *(float *)((a4 + 0x78));
    *(float *)0xC2EABC4 = u10;
    u11 = *(float *)((a4 + 0x7C));
    *(float *)0xC2EABC8 = u11;
    u12 = *(float *)((a4 + 0x80));
    *(float *)0xC2EABCC = u12;
    u13 = *(float *)((a4 + 0x84));
    *(float *)0xC2EABD0 = u13;
    u14 = *(float *)((a4 + 0x88));
    *(float *)0xC2EABD4 = u14;
    u15 = *(float *)((a4 + 0x8C));
    *(float *)0xC2EABD8 = u15;
    t16 = *(int *)((a4 + 0xA0));
    *(unsigned int *)0xC2EABDC = t16;
    t17 = *(int *)0xC2EAB9C;
    t18 = *(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t17) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t17) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t17) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t17) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t17) >> 2) >> 1)) | ((unsigned int)(0x4 & t17) >> 2)) << 2) + 0xC178344));
    *(unsigned int *)0xC2EAC0C = t18;
    t19 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC178304 = t19;
    t20 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC2B8D1C = ((unsigned int)((unsigned int)(t20 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t20 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        t21 = *(int *)0xC2EABDC;
        *(unsigned int *)0xC178308 = t21;
        t92 = 0xC178324;
    } else {
        t22 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC178308 = t22;
        t23 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC17830C = t23;
        t24 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC178310 = t24;
        t25 = *(int *)0xC2EAC0C;
        t86 = 0xC178324;
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    if (t25 != 3) {
                        if (t25 != 4) {
                            t37 = 0xC178314;
                            if (t25 == 16) {
                                u26 = *(float *)0xC15DDA0;
                                u27 = *(float *)0xC2EABBC;
                                u28 = *(float *)0xC2EABC0;
                                u29 = *(float *)0xC2EABC4;
                                u30 = *(float *)0xC2EABC8;
                                *(unsigned int *)0xC178314 = ((((((int)(u27 * u26) << 16) << 8) | ((int)(u28 * u26) << 16)) | ((int)(u29 * u26) << 8)) | (int)(u30 * u26));
                                u31 = *(float *)0xC2EABCC;
                                u32 = *(float *)0xC2EABD0;
                                u33 = *(float *)0xC2EABD4;
                                u34 = *(float *)0xC2EABD8;
                                *(unsigned int *)0xC178318 = ((((((int)(u31 * u26) << 16) << 8) | ((int)(u32 * u26) << 16)) | ((int)(u33 * u26) << 8)) | (int)(u34 * u26));
                                t37 = 0xC178324;
                            }
                            t52 = t37;
                        } else {
                            t39 = *(int *)0xC2EABE0;
                            *(unsigned int *)0xC178314 = t39;
                            t40 = *(int *)0xC2EABE4;
                            *(unsigned int *)0xC178318 = t40;
                            t41 = *(int *)0xC2EABBC;
                            *(unsigned int *)0xC178324 = t41;
                            t42 = *(int *)0xC2EABC0;
                            *(unsigned int *)0xC178328 = t42;
                            t43 = *(int *)0xC2EABC4;
                            *(unsigned int *)0xC17832C = t43;
                            t44 = *(int *)0xC2EABC8;
                            *(unsigned int *)0xC178330 = t44;
                            t45 = *(int *)0xC2EABEC;
                            *(unsigned int *)0xC178334 = t45;
                            t46 = *(int *)0xC2EABF0;
                            *(unsigned int *)0xC178338 = t46;
                            t47 = *(int *)0xC2EABF4;
                            *(unsigned int *)0xC17833C = t47;
                            t48 = *(int *)0xC2EABF8;
                            *(unsigned int *)0xC178340 = t48;
                            t52 = 0xC178344;
                        }
                        t59 = t52;
                    } else {
                        t54 = *(int *)0xC2EABE0;
                        *(unsigned int *)0xC178314 = t54;
                        t55 = *(int *)0xC2EABE4;
                        *(unsigned int *)0xC178318 = t55;
                        t59 = 0xC178324;
                    }
                    t72 = t59;
                } else {
                    t61 = *(int *)0xC2EABBC;
                    *(unsigned int *)0xC178324 = t61;
                    t62 = *(int *)0xC2EABC0;
                    *(unsigned int *)0xC178328 = t62;
                    t63 = *(int *)0xC2EABC4;
                    *(unsigned int *)0xC17832C = t63;
                    t64 = *(int *)0xC2EABC8;
                    *(unsigned int *)0xC178330 = t64;
                    t65 = *(int *)0xC2EABCC;
                    *(unsigned int *)0xC178334 = t65;
                    t66 = *(int *)0xC2EABD0;
                    *(unsigned int *)0xC178338 = t66;
                    t67 = *(int *)0xC2EABD4;
                    *(unsigned int *)0xC17833C = t67;
                    t68 = *(int *)0xC2EABD8;
                    *(unsigned int *)0xC178340 = t68;
                    t72 = 0xC178344;
                }
                t81 = t72;
            } else {
                t74 = *(int *)0xC2EABBC;
                *(unsigned int *)0xC178314 = t74;
                t75 = *(int *)0xC2EABC0;
                *(unsigned int *)0xC178318 = t75;
                t76 = *(int *)0xC2EABC4;
                *(unsigned int *)0xC17831C = t76;
                t77 = *(int *)0xC2EABC8;
                *(unsigned int *)0xC178320 = t77;
                t81 = 0xC178324;
            }
            t86 = t81;
        }
        t92 = t86;
    }
    t94 = *(int *)0xC2B8D1C;
    *(unsigned int *)0xC2B8CA8 = t94;
    *(unsigned int *)0xC2B8CAC = (t92 - 0xC178304);
    return 0x0;
}

int kmSetModifierRenderState(int a4)
{
    int t0;
    int t1;
    float u2;
    float u3;
    float u4;
    float u5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t75;
    int t26;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    float u23;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t43;
    int t44;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t63;
    int t64;
    int t65;
    int t66;
    int t83;
    int t81;
    int t70;
    int t61;
    int t48;
    int t41;

    t0 = *(int *)((a4 + 0x98));
    *(unsigned int *)0xC2EABE0 = t0;
    t1 = *(int *)((a4 + 0x9C));
    *(unsigned int *)0xC2EABE4 = t1;
    u2 = *(float *)((a4 + 0x70));
    *(float *)0xC2EABEC = u2;
    u3 = *(float *)((a4 + 0x74));
    *(float *)0xC2EABF0 = u3;
    u4 = *(float *)((a4 + 0x78));
    *(float *)0xC2EABF4 = u4;
    u5 = *(float *)((a4 + 0x7C));
    *(float *)0xC2EABF8 = u5;
    t6 = *(int *)0xC2EAB9C;
    t7 = *(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t6) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t6) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t6) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t6) >> 2) >> 1)) | ((unsigned int)(0x4 & t6) >> 2)) << 2) + 0xC178344));
    *(unsigned int *)0xC2EAC0C = t7;
    t8 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC178304 = t8;
    t9 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC2B8D1C = ((unsigned int)((unsigned int)(t9 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t9 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        t10 = *(int *)0xC2EABDC;
        *(unsigned int *)0xC178308 = t10;
        t81 = 0xC178324;
    } else {
        t11 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC178308 = t11;
        t12 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC17830C = t12;
        t13 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC178310 = t13;
        t14 = *(int *)0xC2EAC0C;
        t75 = 0xC178324;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                    if (t14 != 3) {
                        if (t14 != 4) {
                            t26 = 0xC178314;
                            if (t14 == 16) {
                                u15 = *(float *)0xC15E060;
                                u16 = *(float *)0xC2EABBC;
                                u17 = *(float *)0xC2EABC0;
                                u18 = *(float *)0xC2EABC4;
                                u19 = *(float *)0xC2EABC8;
                                *(unsigned int *)0xC178314 = ((((((int)(u16 * u15) << 16) << 8) | ((int)(u17 * u15) << 16)) | ((int)(u18 * u15) << 8)) | (int)(u19 * u15));
                                u20 = *(float *)0xC2EABCC;
                                u21 = *(float *)0xC2EABD0;
                                u22 = *(float *)0xC2EABD4;
                                u23 = *(float *)0xC2EABD8;
                                *(unsigned int *)0xC178318 = ((((((int)(u20 * u15) << 16) << 8) | ((int)(u21 * u15) << 16)) | ((int)(u22 * u15) << 8)) | (int)(u23 * u15));
                                t26 = 0xC178324;
                            }
                            t41 = t26;
                        } else {
                            t28 = *(int *)0xC2EABE0;
                            *(unsigned int *)0xC178314 = t28;
                            t29 = *(int *)0xC2EABE4;
                            *(unsigned int *)0xC178318 = t29;
                            t30 = *(int *)0xC2EABBC;
                            *(unsigned int *)0xC178324 = t30;
                            t31 = *(int *)0xC2EABC0;
                            *(unsigned int *)0xC178328 = t31;
                            t32 = *(int *)0xC2EABC4;
                            *(unsigned int *)0xC17832C = t32;
                            t33 = *(int *)0xC2EABC8;
                            *(unsigned int *)0xC178330 = t33;
                            t34 = *(int *)0xC2EABEC;
                            *(unsigned int *)0xC178334 = t34;
                            t35 = *(int *)0xC2EABF0;
                            *(unsigned int *)0xC178338 = t35;
                            t36 = *(int *)0xC2EABF4;
                            *(unsigned int *)0xC17833C = t36;
                            t37 = *(int *)0xC2EABF8;
                            *(unsigned int *)0xC178340 = t37;
                            t41 = 0xC178344;
                        }
                        t48 = t41;
                    } else {
                        t43 = *(int *)0xC2EABE0;
                        *(unsigned int *)0xC178314 = t43;
                        t44 = *(int *)0xC2EABE4;
                        *(unsigned int *)0xC178318 = t44;
                        t48 = 0xC178324;
                    }
                    t61 = t48;
                } else {
                    t50 = *(int *)0xC2EABBC;
                    *(unsigned int *)0xC178324 = t50;
                    t51 = *(int *)0xC2EABC0;
                    *(unsigned int *)0xC178328 = t51;
                    t52 = *(int *)0xC2EABC4;
                    *(unsigned int *)0xC17832C = t52;
                    t53 = *(int *)0xC2EABC8;
                    *(unsigned int *)0xC178330 = t53;
                    t54 = *(int *)0xC2EABCC;
                    *(unsigned int *)0xC178334 = t54;
                    t55 = *(int *)0xC2EABD0;
                    *(unsigned int *)0xC178338 = t55;
                    t56 = *(int *)0xC2EABD4;
                    *(unsigned int *)0xC17833C = t56;
                    t57 = *(int *)0xC2EABD8;
                    *(unsigned int *)0xC178340 = t57;
                    t61 = 0xC178344;
                }
                t70 = t61;
            } else {
                t63 = *(int *)0xC2EABBC;
                *(unsigned int *)0xC178314 = t63;
                t64 = *(int *)0xC2EABC0;
                *(unsigned int *)0xC178318 = t64;
                t65 = *(int *)0xC2EABC4;
                *(unsigned int *)0xC17831C = t65;
                t66 = *(int *)0xC2EABC8;
                *(unsigned int *)0xC178320 = t66;
                t70 = 0xC178324;
            }
            t75 = t70;
        }
        t81 = t75;
    }
    t83 = *(int *)0xC2B8D1C;
    *(unsigned int *)0xC2B8CA8 = t83;
    *(unsigned int *)0xC2B8CAC = (t81 - 0xC178304);
    return 0x0;
}

