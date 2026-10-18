/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c053ac0(void);
int FUN_0c053b44(void);
int FUN_0c0558a2(int);
int FUN_0c055950(int);
int FUN_0c055b38(int);
int FUN_0c056ed8(int);
int FUN_0c0572de(int);
int FUN_0c057388(int);
int FUN_0c05741c(int);
int FUN_0c0608ac(int, int, int);
int FUN_0c0770f0(int, int, int);
int FUN_0c07d5c0(int);
int Put_Credits(int);
int Put_ReadySetGo(void);
int Put_TotalDrum(int, int);
int gdc_FileLoad(int, int, int);
int gdc_StopStreamVoice(int);
int hudDrawTime(void);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlSetCommonTextureOffset(int);
int pfColor(int, int, int, int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);

int FUN_0c02f392(void)
{
    int t0;
    int t68;
    int t72;
    int t71;
    int t106;
    int t107;
    int t73;

    t0 = *(int *)0xC1EE20C;
    if (t0 != 0) {
        if (t0 == 1) {
            FUN_0c07d5c0(0xC5E9E28);
            FUN_0c07d5c0(0xC5E9FA0);
            FUN_0c07d5c0(0xC5EA118);
            FUN_0c07d5c0(0xC5EA290);
            FUN_0c07d5c0(0xC5EA408);
            FUN_0c07d5c0(0xC5EA580);
            FUN_0c07d5c0(0xC5EA6F8);
            FUN_0c07d5c0(0xC5EA870);
            FUN_0c07d5c0(0xC5EA9E8);
            FUN_0c07d5c0(0xC5EAB60);
            FUN_0c07d5c0(0xC5EACD8);
            FUN_0c07d5c0(0xC5EAE50);
            FUN_0c07d5c0(0xC5EAFC8);
            FUN_0c07d5c0(0xC5EB140);
            FUN_0c07d5c0(0xC5EB2B8);
            FUN_0c07d5c0(0xC5EB430);
            FUN_0c07d5c0(0xC5EB5A8);
            FUN_0c07d5c0(0xC5EB720);
            FUN_0c07d5c0(0xC5EB898);
            FUN_0c07d5c0(0xC5EBA10);
            FUN_0c07d5c0(0xC5EBB88);
            FUN_0c07d5c0(0xC5EBD00);
            FUN_0c07d5c0(0xC5EBE78);
            FUN_0c07d5c0(0xC5EBFF0);
            FUN_0c07d5c0(0xC5EC168);
            FUN_0c07d5c0(0xC5EC2E0);
            FUN_0c07d5c0(0xC5EC458);
            FUN_0c07d5c0(0xC5EC5D0);
            FUN_0c07d5c0(0xC5EC748);
            FUN_0c07d5c0(0xC5EC8C0);
            FUN_0c07d5c0(0xC5ECA38);
            FUN_0c07d5c0(0xC5E0000);
            FUN_0c07d5c0(0xC5E1D98);
            FUN_0c07d5c0(0xC5E3650);
            FUN_0c07d5c0(0xC5E5CA0);
            FUN_0c07d5c0(0xC5E72A8);
            FUN_0c07d5c0(0xC5E85A8);
            FUN_0c07d5c0(0xC5E9CA8);
            FUN_0c07d5c0(0xC5ECBB0);
            FUN_0c07d5c0(0xC5ED4A0);
            FUN_0c07d5c0(0xC5EDD90);
            FUN_0c07d5c0(0xC5EE680);
            FUN_0c07d5c0(0xC5EEF70);
            FUN_0c07d5c0(0xC5EF860);
            FUN_0c07d5c0(0xC5F0150);
            FUN_0c07d5c0(0xC5F0A40);
            FUN_0c07d5c0(0xC5F1330);
            FUN_0c07d5c0(0xC5F1C20);
            FUN_0c07d5c0(0xC5F2510);
            FUN_0c07d5c0(0xC5F2E00);
            FUN_0c07d5c0(0xC5F36F0);
            FUN_0c07d5c0(0xC5F3FE0);
            FUN_0c07d5c0(0xC5F48D0);
            FUN_0c07d5c0(0xC5F51C0);
            FUN_0c07d5c0(0xC5F5AB0);
            FUN_0c07d5c0(0xC5F63A0);
            FUN_0c07d5c0(0xC5F6C90);
            FUN_0c07d5c0(0xC5F7580);
            FUN_0c07d5c0(0xC5F7E70);
            FUN_0c07d5c0(0xC5F8760);
            FUN_0c07d5c0(0xC5F9050);
            FUN_0c07d5c0(0xC5F9940);
            FUN_0c07d5c0(0xC5FA230);
            FUN_0c07d5c0(0xC5FAB20);
            FUN_0c07d5c0(0xC5FB410);
            FUN_0c07d5c0(0xC5FBD00);
            FUN_0c07d5c0(0xC5FC5F0);
            t68 = FUN_0c07d5c0(0xC5FCEE0);
            t73 = t68;
        } else {
            t72 = t0;
            if (t0 == 2) {
                FUN_0c07d5c0(0xC5E0000);
                FUN_0c07d5c0(0xC5E1998);
                t71 = FUN_0c07d5c0(0xC5E0600);
                t72 = t71;
            }
            t73 = t72;
        }
        t107 = t73;
    } else {
        FUN_0c07d5c0(0xC5E0000);
        FUN_0c07d5c0(0xC5E2630);
        FUN_0c07d5c0(0xC5E4C60);
        FUN_0c07d5c0(0xC5E7290);
        FUN_0c07d5c0(0xC5E98C0);
        FUN_0c07d5c0(0xC5EBEF0);
        FUN_0c07d5c0(0xC5EE520);
        FUN_0c07d5c0(0xC5F0B50);
        FUN_0c07d5c0(0xC5F3180);
        FUN_0c07d5c0(0xC5F57B0);
        FUN_0c07d5c0(0xC5F7DE0);
        FUN_0c07d5c0(0xC5FA410);
        FUN_0c07d5c0(0xC5FCA40);
        FUN_0c07d5c0(0xC5FF070);
        FUN_0c07d5c0(0xC6016A0);
        FUN_0c07d5c0(0xC603CD0);
        FUN_0c07d5c0(0xC606300);
        FUN_0c07d5c0(0xC608930);
        FUN_0c07d5c0(0xC60AF60);
        FUN_0c07d5c0(0xC60D590);
        FUN_0c07d5c0(0xC60FBC0);
        FUN_0c07d5c0(0xC6121F0);
        FUN_0c07d5c0(0xC614820);
        FUN_0c07d5c0(0xC616E50);
        FUN_0c07d5c0(0xC619480);
        FUN_0c07d5c0(0xC61BAB0);
        FUN_0c07d5c0(0xC61E0E0);
        FUN_0c07d5c0(0xC620710);
        FUN_0c07d5c0(0xC622D40);
        FUN_0c07d5c0(0xC625370);
        FUN_0c07d5c0(0xC62A1E8);
        FUN_0c07d5c0(0xC6279A0);
        t106 = FUN_0c07d5c0(0xC627E48);
        t107 = t106;
    }
    return t107;
}

int FUN_0c0302e6(void)
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

void hudDraw(void)
{
    int t0;
    int t3;
    int t4;
    int t10;
    int t13;
    int t14;
    int t17;
    int t20;
    int t24;
    int t27;
    int t30;
    int t33;
    int t36;
    int t39;
    int t42;
    int t48;
    int t49;
    int t53;
    int t54;
    int t57;
    int t58;
    int t61;
    int t67;
    int t74;
    int t75;
    int t78;
    int t84;
    int t94;
    int t95;
    int t98;
    int t99;
    int t102;
    int t108;
    int t115;
    int t116;
    int t119;
    int t125;
    int t132;
    int t134;
    int t135;

    t0 = *(int *)0xC2A75E0;
    if ((t0 & 0x1) == 1) {
        Put_Credits(0x0);
    }
    t3 = *(int *)0xC2A75E0;
    if ((t3 & 0x80) == 0x80) {
        if ((t3 & 0x10000000) != 0x10000000) {
            t4 = *(int *)0xC1EE20C;
            if (t4 != 2) {
                Put_TotalDrum((t3 & 0x10000000), 0x80);
            }
        }
        hudDrawTime();
    }
    t10 = *(int *)0xC2A75E0;
    if ((t10 & 0x100) == 0x100) {
        FUN_0c056ed8(0x100);
    }
    t13 = *(int *)0xC1EE20C;
    if (t13 != 2) {
        t14 = *(int *)0xC2A75E0;
        if ((t14 & 0x400) == 0x400) {
            FUN_0c055950(0x400);
        }
        t17 = *(int *)0xC2A75E0;
        if ((t17 & 0x800) == 0x800) {
            FUN_0c0558a2(0x800);
        }
        t20 = *(int *)0xC2A75E0;
        if ((t20 & 0x1000) == 0x1000) {
            FUN_0c055b38(0x1000);
        }
    }
    t24 = *(int *)0xC2A75E0;
    if ((t24 & 0x10) == 16) {
        FUN_0c053ac0();
    }
    t27 = *(int *)0xC2A75E0;
    if ((t27 & 0x20) == 32) {
        FUN_0c053b44();
    }
    t30 = *(int *)0xC2A75E0;
    if ((t30 & 0x1000000) == 0x1000000) {
        FUN_0c0572de(0x1000000);
    }
    t33 = *(int *)0xC2A75E0;
    if ((t33 & 0x2000000) == 0x2000000) {
        FUN_0c057388(0x2000000);
    }
    t36 = *(int *)0xC2A75E0;
    if ((t36 & 0x4000000) == 0x4000000) {
        FUN_0c05741c(0x4000000);
    }
    t39 = *(int *)0xC2A75E0;
    if ((t39 & 0x10000000) == 0x10000000) {
        Put_ReadySetGo();
    }
    t42 = *(int *)0xC17948C;
    if (t42 != 0) {
        pfSetFont(0x0);
        pfSize(1.0f, 1.0f);
        pfSetZ(0.149999991f);
        pfColor(0xFF00FF00, 0xFFFFFF00, 0xFF00FF00, 0xFFFFFF00);
        FUN_0c0608ac(0x23, 0x1A9, 0xC0D0878);
    }
    t48 = *(int *)0xC2A736C;
    if (t48 == 0) {
        t49 = *(int *)0xC2A7368;
        if (t49 != 0) {
            pfSetFont(0x0);
            pfSize(1.0f, 1.0f);
            pfSetZ(0.149999991f);
            t53 = *(int *)0xC2A736C;
            if (t53 != 0) {
                t54 = *(int *)0xC2A7368;
                if (t54 == 0) {
                    pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
                    FUN_0c0608ac(0x23, 0x197, 0xC0D0884);
                } else {
                    t57 = *(int *)0xC2A736C;
                    if (t57 == 0) {
                        t58 = *(int *)0xC2A7368;
                        if (t58 != 0) {
                            pfColor(0xFFFF0000, 0xFF88FFFF, 0xFFFF0000, 0xFF88FFFF);
                            FUN_0c0608ac(0x23, 0x197, 0xC0D0890);
                        } else {
                            if (t57 != 0) {
                                t61 = *(int *)0xC2A7368;
                                if (t61 != 0) {
                                    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                                    FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                                }
                            }
                        }
                    } else {
                        if (t57 != 0) {
                            t67 = *(int *)0xC2A7368;
                            if (t67 != 0) {
                                pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                                FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                            }
                        }
                    }
                }
            } else {
                t74 = *(int *)0xC2A736C;
                if (t74 == 0) {
                    t75 = *(int *)0xC2A7368;
                    if (t75 != 0) {
                        pfColor(0xFFFF0000, 0xFF88FFFF, 0xFFFF0000, 0xFF88FFFF);
                        FUN_0c0608ac(0x23, 0x197, 0xC0D0890);
                    } else {
                        if (t74 != 0) {
                            t78 = *(int *)0xC2A7368;
                            if (t78 != 0) {
                                pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                                FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                            }
                        }
                    }
                } else {
                    if (t74 != 0) {
                        t84 = *(int *)0xC2A7368;
                        if (t84 != 0) {
                            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                            FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                        }
                    }
                }
            }
        }
    } else {
        pfSetFont(0x0);
        pfSize(1.0f, 1.0f);
        pfSetZ(0.149999991f);
        t94 = *(int *)0xC2A736C;
        if (t94 != 0) {
            t95 = *(int *)0xC2A7368;
            if (t95 == 0) {
                pfColor(0xFFFFFF00, 0xFFFFFFFF, 0xFFFFFF00, 0xFFFFFFFF);
                FUN_0c0608ac(0x23, 0x197, 0xC0D0884);
            } else {
                t98 = *(int *)0xC2A736C;
                if (t98 == 0) {
                    t99 = *(int *)0xC2A7368;
                    if (t99 != 0) {
                        pfColor(0xFFFF0000, 0xFF88FFFF, 0xFFFF0000, 0xFF88FFFF);
                        FUN_0c0608ac(0x23, 0x197, 0xC0D0890);
                    } else {
                        if (t98 != 0) {
                            t102 = *(int *)0xC2A7368;
                            if (t102 != 0) {
                                pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                                FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                            }
                        }
                    }
                } else {
                    if (t98 != 0) {
                        t108 = *(int *)0xC2A7368;
                        if (t108 != 0) {
                            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                            FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                        }
                    }
                }
            }
        } else {
            t115 = *(int *)0xC2A736C;
            if (t115 == 0) {
                t116 = *(int *)0xC2A7368;
                if (t116 != 0) {
                    pfColor(0xFFFF0000, 0xFF88FFFF, 0xFFFF0000, 0xFF88FFFF);
                    FUN_0c0608ac(0x23, 0x197, 0xC0D0890);
                } else {
                    if (t115 != 0) {
                        t119 = *(int *)0xC2A7368;
                        if (t119 != 0) {
                            pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                            FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                        }
                    }
                }
            } else {
                if (t115 != 0) {
                    t125 = *(int *)0xC2A7368;
                    if (t125 != 0) {
                        pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
                        FUN_0c0608ac(0x23, 0x197, 0xC0D08A4);
                    }
                }
            }
        }
    }
    t132 = *(int *)0xC2A11B0;
    if (t132 == 0) {
        *(unsigned int *)0xC2A91C8 = 0x0;
    }
    t134 = *(int *)0xC2A11B0;
    if (t134 != 0) {
        t135 = *(int *)0xC2A91C8;
        if (t135 == 0) {
            gdc_StopStreamVoice(0x0);
            *(unsigned int *)0xC2A91C8 = 0x1;
        }
    }
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

void kmSetVertexRenderState(int a4)
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
    int t85;
    int t36;
    float u26;
    float u27;
    float u28;
    float u29;
    float u30;
    float u31;
    float u32;
    float u33;
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
    int t53;
    int t54;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t73;
    int t74;
    int t75;
    int t76;
    int t93;
    int t91;
    int t80;
    int t71;
    int t58;
    int t51;

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
        t91 = 0xC178324;
    } else {
        t22 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC178308 = t22;
        t23 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC17830C = t23;
        t24 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC178310 = t24;
        t25 = *(int *)0xC2EAC0C;
        t85 = 0xC178324;
        if (t25 != 0) {
            if (t25 != 1) {
                if (t25 != 2) {
                    if (t25 != 3) {
                        if (t25 != 4) {
                            t36 = 0xC178314;
                            if (t25 == 16) {
                                u26 = *(float *)0xC2EABBC;
                                u27 = *(float *)0xC2EABC0;
                                u28 = *(float *)0xC2EABC4;
                                u29 = *(float *)0xC2EABC8;
                                *(unsigned int *)0xC178314 = ((((((int)(u26 * 255.0f) << 16) << 8) | ((int)(u27 * 255.0f) << 16)) | ((int)(u28 * 255.0f) << 8)) | (int)(u29 * 255.0f));
                                u30 = *(float *)0xC2EABCC;
                                u31 = *(float *)0xC2EABD0;
                                u32 = *(float *)0xC2EABD4;
                                u33 = *(float *)0xC2EABD8;
                                *(unsigned int *)0xC178318 = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u31 * 255.0f) << 16)) | ((int)(u32 * 255.0f) << 8)) | (int)(u33 * 255.0f));
                                t36 = 0xC178324;
                            }
                            t51 = t36;
                        } else {
                            t38 = *(int *)0xC2EABE0;
                            *(unsigned int *)0xC178314 = t38;
                            t39 = *(int *)0xC2EABE4;
                            *(unsigned int *)0xC178318 = t39;
                            t40 = *(int *)0xC2EABBC;
                            *(unsigned int *)0xC178324 = t40;
                            t41 = *(int *)0xC2EABC0;
                            *(unsigned int *)0xC178328 = t41;
                            t42 = *(int *)0xC2EABC4;
                            *(unsigned int *)0xC17832C = t42;
                            t43 = *(int *)0xC2EABC8;
                            *(unsigned int *)0xC178330 = t43;
                            t44 = *(int *)0xC2EABEC;
                            *(unsigned int *)0xC178334 = t44;
                            t45 = *(int *)0xC2EABF0;
                            *(unsigned int *)0xC178338 = t45;
                            t46 = *(int *)0xC2EABF4;
                            *(unsigned int *)0xC17833C = t46;
                            t47 = *(int *)0xC2EABF8;
                            *(unsigned int *)0xC178340 = t47;
                            t51 = 0xC178344;
                        }
                        t58 = t51;
                    } else {
                        t53 = *(int *)0xC2EABE0;
                        *(unsigned int *)0xC178314 = t53;
                        t54 = *(int *)0xC2EABE4;
                        *(unsigned int *)0xC178318 = t54;
                        t58 = 0xC178324;
                    }
                    t71 = t58;
                } else {
                    t60 = *(int *)0xC2EABBC;
                    *(unsigned int *)0xC178324 = t60;
                    t61 = *(int *)0xC2EABC0;
                    *(unsigned int *)0xC178328 = t61;
                    t62 = *(int *)0xC2EABC4;
                    *(unsigned int *)0xC17832C = t62;
                    t63 = *(int *)0xC2EABC8;
                    *(unsigned int *)0xC178330 = t63;
                    t64 = *(int *)0xC2EABCC;
                    *(unsigned int *)0xC178334 = t64;
                    t65 = *(int *)0xC2EABD0;
                    *(unsigned int *)0xC178338 = t65;
                    t66 = *(int *)0xC2EABD4;
                    *(unsigned int *)0xC17833C = t66;
                    t67 = *(int *)0xC2EABD8;
                    *(unsigned int *)0xC178340 = t67;
                    t71 = 0xC178344;
                }
                t80 = t71;
            } else {
                t73 = *(int *)0xC2EABBC;
                *(unsigned int *)0xC178314 = t73;
                t74 = *(int *)0xC2EABC0;
                *(unsigned int *)0xC178318 = t74;
                t75 = *(int *)0xC2EABC4;
                *(unsigned int *)0xC17831C = t75;
                t76 = *(int *)0xC2EABC8;
                *(unsigned int *)0xC178320 = t76;
                t80 = 0xC178324;
            }
            t85 = t80;
        }
        t91 = t85;
    }
    t93 = *(int *)0xC2B8D1C;
    *(unsigned int *)0xC2B8CA8 = t93;
    *(unsigned int *)0xC2B8CAC = (t91 - 0xC178304);
}

void kmSetModifierRenderState(int a4)
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
    int t74;
    int t25;
    float u15;
    float u16;
    float u17;
    float u18;
    float u19;
    float u20;
    float u21;
    float u22;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t42;
    int t43;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t62;
    int t63;
    int t64;
    int t65;
    int t82;
    int t80;
    int t69;
    int t60;
    int t47;
    int t40;

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
        t80 = 0xC178324;
    } else {
        t11 = *(int *)0xC2EABAC;
        *(unsigned int *)0xC178308 = t11;
        t12 = *(int *)0xC2EABB0;
        *(unsigned int *)0xC17830C = t12;
        t13 = *(int *)0xC2EABB4;
        *(unsigned int *)0xC178310 = t13;
        t14 = *(int *)0xC2EAC0C;
        t74 = 0xC178324;
        if (t14 != 0) {
            if (t14 != 1) {
                if (t14 != 2) {
                    if (t14 != 3) {
                        if (t14 != 4) {
                            t25 = 0xC178314;
                            if (t14 == 16) {
                                u15 = *(float *)0xC2EABBC;
                                u16 = *(float *)0xC2EABC0;
                                u17 = *(float *)0xC2EABC4;
                                u18 = *(float *)0xC2EABC8;
                                *(unsigned int *)0xC178314 = ((((((int)(u15 * 255.0f) << 16) << 8) | ((int)(u16 * 255.0f) << 16)) | ((int)(u17 * 255.0f) << 8)) | (int)(u18 * 255.0f));
                                u19 = *(float *)0xC2EABCC;
                                u20 = *(float *)0xC2EABD0;
                                u21 = *(float *)0xC2EABD4;
                                u22 = *(float *)0xC2EABD8;
                                *(unsigned int *)0xC178318 = ((((((int)(u19 * 255.0f) << 16) << 8) | ((int)(u20 * 255.0f) << 16)) | ((int)(u21 * 255.0f) << 8)) | (int)(u22 * 255.0f));
                                t25 = 0xC178324;
                            }
                            t40 = t25;
                        } else {
                            t27 = *(int *)0xC2EABE0;
                            *(unsigned int *)0xC178314 = t27;
                            t28 = *(int *)0xC2EABE4;
                            *(unsigned int *)0xC178318 = t28;
                            t29 = *(int *)0xC2EABBC;
                            *(unsigned int *)0xC178324 = t29;
                            t30 = *(int *)0xC2EABC0;
                            *(unsigned int *)0xC178328 = t30;
                            t31 = *(int *)0xC2EABC4;
                            *(unsigned int *)0xC17832C = t31;
                            t32 = *(int *)0xC2EABC8;
                            *(unsigned int *)0xC178330 = t32;
                            t33 = *(int *)0xC2EABEC;
                            *(unsigned int *)0xC178334 = t33;
                            t34 = *(int *)0xC2EABF0;
                            *(unsigned int *)0xC178338 = t34;
                            t35 = *(int *)0xC2EABF4;
                            *(unsigned int *)0xC17833C = t35;
                            t36 = *(int *)0xC2EABF8;
                            *(unsigned int *)0xC178340 = t36;
                            t40 = 0xC178344;
                        }
                        t47 = t40;
                    } else {
                        t42 = *(int *)0xC2EABE0;
                        *(unsigned int *)0xC178314 = t42;
                        t43 = *(int *)0xC2EABE4;
                        *(unsigned int *)0xC178318 = t43;
                        t47 = 0xC178324;
                    }
                    t60 = t47;
                } else {
                    t49 = *(int *)0xC2EABBC;
                    *(unsigned int *)0xC178324 = t49;
                    t50 = *(int *)0xC2EABC0;
                    *(unsigned int *)0xC178328 = t50;
                    t51 = *(int *)0xC2EABC4;
                    *(unsigned int *)0xC17832C = t51;
                    t52 = *(int *)0xC2EABC8;
                    *(unsigned int *)0xC178330 = t52;
                    t53 = *(int *)0xC2EABCC;
                    *(unsigned int *)0xC178334 = t53;
                    t54 = *(int *)0xC2EABD0;
                    *(unsigned int *)0xC178338 = t54;
                    t55 = *(int *)0xC2EABD4;
                    *(unsigned int *)0xC17833C = t55;
                    t56 = *(int *)0xC2EABD8;
                    *(unsigned int *)0xC178340 = t56;
                    t60 = 0xC178344;
                }
                t69 = t60;
            } else {
                t62 = *(int *)0xC2EABBC;
                *(unsigned int *)0xC178314 = t62;
                t63 = *(int *)0xC2EABC0;
                *(unsigned int *)0xC178318 = t63;
                t64 = *(int *)0xC2EABC4;
                *(unsigned int *)0xC17831C = t64;
                t65 = *(int *)0xC2EABC8;
                *(unsigned int *)0xC178320 = t65;
                t69 = 0xC178324;
            }
            t74 = t69;
        }
        t80 = t74;
    }
    t82 = *(int *)0xC2B8D1C;
    *(unsigned int *)0xC2B8CA8 = t82;
    *(unsigned int *)0xC2B8CAC = (t80 - 0xC178304);
}
