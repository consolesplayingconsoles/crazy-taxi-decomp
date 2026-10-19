/* Straight-line functions with calls and guards (batch gen_ak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetFsizeSct(int);
int ADXF_GetStat(int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int Act_Execute(void);
int CheckKyakuArea(int, int);
int ExecColliObj(void);
int ExecHelicopter(void);
int ExecKyakuArea(void);
int ExecSetObject(void);
int FUN_0c0289be(void);
int FUN_0c02dd52(void);
int FUN_0c02dd5a(void);
int FUN_0c02e940(void);
int FUN_0c02f870(void);
int FUN_0c031408(int);
int FUN_0c038ee6(void);
int FUN_0c03b698(int, int);
int FUN_0c041016(int);
int FUN_0c049aa8(void);
int FUN_0c04bf14(void);
int FUN_0c04c0dc(int, int);
int FUN_0c0500d8(int);
int FUN_0c0532a4(void);
int FUN_0c056ff8(int, float);
int FUN_0c05778a(int, int, float, float);
int FUN_0c05999c(void);
int FUN_0c0599fa(void);
int FUN_0c059a80(void);
int FUN_0c05bb24(void);
int FUN_0c05bb76(int);
int FUN_0c05ff66(void);
int FUN_0c060e18(void);
int FUN_0c070e8a(int);
int FUN_0c077210(int, int);
int FUN_0c07a520(void);
int FUN_0c07f5c0(void);
int FUN_0c081268(void);
int FUN_0c0813e0(int, int, int);
int FUN_0c1534a0(int, int, int);
int FUN_0c1534ca(int);
int FUN_0c156c32(int, int, int, int);
int FUN_0c1573a0(void);
int FUN_0c157f40(int);
int FUN_0c15cace(int);
int FUN_0c15cc6e(int);
int FUN_0c15cd40(int);
int FUN_0c15ce20(int);
int FUN_0c15f998(int);
int FUN_0c1614de(void);
int FUN_0c1614e8(int, int);
int FcvPlay(int, int, float);
int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
int GetCollision2D(int, float);
int GetCollisionFirst(int, int);
int GetMenuMode(int);
int GoiTool(int);
int KillColliObj(int);
int PutCourse(void);
int PutStringFixPfont(int, int, float, float, float, float);
int ResetFadeColor(void);
int SetAudio(void);
int SetColliObj(int, int);
int SetSEvolume(void);
int Sound_Request(int, int);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int camUpdate(int);
int crowdSpawn(void);
int drvJolt(void);
int entryCarPut(int);
int exec_CarMain(void);
int exec_KyakuMain(void);
int extRand(void);
int gdFsStopRd(int);
int gdc_FileLoad(int, int, int);
int gdc_SpriteFreeMenu(void);
float getNearLineIndex(int, int, int, int, int);
int get_data(int);
int kmiDMAtoTARequest(int, int, int, int, int);
int kmiFBfree(int);
int kmiFBreset(void);
int kmiGetProfileInt(int, int);
int kmiWaitForFinishDMA(int);
int kmiWriteRegister(int, int);
int kmyConvertAddress64to32(int);
int make_header(int, int);
int memcpy2(int, int, int);
int menuPutSprites(int, int, int, int);
int mpdrv_clear_deviceinfo(int);
int mpdrv_make_deviceinfo(int, int, int);
int mpdrv_swaplong(int, int);
int nlExecuteEvent(void);
float nlFloor(float);
int nlGetMatrix(int);
int nlGetPushedMatrix(int);
int nlGetTranslate(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
float nlScalor(int);
int nlSetCommonTextureOffset(int);
int nlSprPut(int);
int nlSpriteFreeTexture(int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int nlUnitVector(int);
int nlsndIcsControl(int, int, int);
int nlsndSystemControl(int, int, int);
int pedPickIdle(int);
int pfColor(int, int, int, int);
float pfLength(int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSetZ(float);
int pfSize(float, float);
int replay(int);
int trafficControl(int);

int exec_loop_Replay(void)
{
    int t3;
    int t7;
    int t9;
    int t14;
    int t20;
    int t22;
    int t24;
    int t27;
    int t29;
    int t33;
    int t34;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    float u43;
    int t46;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    float u55;
    int t58;
    int t62;
    int t65;
    int t68;
    int t71;
    int t76;
    int stk[14];

    FUN_0c0289be();
    camUpdate(0x0);
    FUN_0c05ff66();
    t3 = *(int *)0xC1EE234;
    if (t3 == 0) {
        FUN_0c02dd5a();
    } else {
        FUN_0c02dd52();
    }
    t7 = replay(0x0);
    if (t7 != 4) {
        exec_CarMain();
        t9 = FUN_0c04bf14();
        if (t9 == 0) {
            exec_KyakuMain();
        }
        ExecSetObject();
        ExecKyakuArea();
        t14 = *(int *)0xC1EE20C;
        if (t14 == 0) {
            ExecHelicopter();
        }
        Act_Execute();
    } else {
        nlPushUnitMatrix();
        nlTranslateV(0xC179144);
        t20 = *(short *)0xC179152;
        nlRotateAY((unsigned short)t20);
        t22 = *(short *)0xC179150;
        nlRotateAX((unsigned short)t22);
        t24 = *(short *)0xC179154;
        nlRotateAZ((unsigned short)t24);
        nlPushMatrix(0x0);
        t27 = *(short *)0xC179178;
        nlRotateAX((unsigned short)t27);
        t29 = *(short *)0xC17917C;
        nlRotateAZ((unsigned short)t29);
        nlTranslate(0.0f, -2.5f, 0.0f);
        nlGetMatrix(0xC179180);
        t33 = *(int *)0xC179488;
        t34 = *(int *)(((t33 << 2) + 0xC0E5324));
        nlObjPutUseViewMatrix(t34);
        nlPopMatrix(0x1);
        nlPopMatrix(0x1);
        *(unsigned int *)(((int)stk + 4)) = 0xF6;
        t38 = 0xC0DB008;
        do {
            t39 = *(int *)(((t38 + 0x8) + 0x8));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t39;
            t40 = *(int *)(((t38 + 0x8) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t40;
            t41 = *(int *)(((t38 + 0x8) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t41;
            t42 = GetCollision2D((((int)stk + 4) + 0x4), 0.0f);
            u43 = *(float *)((t42 + 0x18));
            *(float *)(((int)stk + 12)) = u43;
            nlPushMatrix(0x0);
            nlTranslateV((((int)stk + 4) + 0x4));
            t46 = *(short *)0xC17985A;
            nlRotateAY((unsigned short)t46);
            nlObjPutUseViewMatrix(0xC5AA130);
            nlPopMatrix(0x1);
            t50 = *(signed char *)(((t38 + 0x18) + 0x0));
            t51 = *(int *)((((short)((((t50 << 1) + t50) << 2) << 1) + 0xC1794F4) + 0x8));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t51;
            t52 = *(int *)((((short)((((t50 << 1) + t50) << 2) << 1) + 0xC1794F4) + 0x4));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t52;
            t53 = *(int *)((((short)((((t50 << 1) + t50) << 2) << 1) + 0xC1794F4) + 0x0));
            *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t53;
            t54 = GetCollision2D((((int)stk + 4) + 0x4), 0.0f);
            u55 = *(float *)((t54 + 0x18));
            *(float *)(((int)stk + 12)) = u55;
            nlPushMatrix(0x0);
            nlTranslateV((((int)stk + 4) + 0x4));
            t58 = *(short *)0xC17985A;
            nlRotateAY((unsigned short)t58);
            nlObjPutUseViewMatrix(0xC5AA228);
            nlPopMatrix(0x1);
            t62 = *(int *)(((int)stk + 4));
            t38 = (t38 + 0x28);
            *(unsigned int *)(((int)stk + 4)) = (t62 - 1);
        } while ((t62 - 1) != 0);
    }
    entryCarPut(0x1);
    t65 = replay(0x0);
    if (t65 != 4) {
        trafficControl(0x1);
    }
    t68 = replay(0x0);
    if (t68 != 4) {
        crowdSpawn();
    }
    t71 = replay(0x0);
    if (t71 != 4) {
        nlExecuteEvent();
        ExecColliObj();
    }
    PutCourse();
    t76 = GoiTool(0x1);
    return t76;
}

int FUN_0c02ea04(void)
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t28;
    int t29;
    int t31;
    int t39;
    int t34;
    int t35;
    int t36;
    int t37;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t47;
    int t48;
    int t49;
    int t52;
    int t53;
    int t55;
    int t63;
    int t58;
    int t59;
    int t60;
    int t61;

    t0 = 0xC26C5DC;
    t1 = 0x0;
    t2 = 0x0;
    do {
        t3 = *(int *)((t0 + 0x10));
        if ((int)t3 <= 0) {
            t4 = *(signed char *)((t0 + 0x0));
            if ((unsigned char)t4 == 4) {
                *(unsigned char *)((t0 + 0x0)) = 0x0;
            }
            t5 = *(int *)((t0 + 0xC));
            *(unsigned int *)((t0 + 0xC)) = (t5 + 0x1);
        }
        t6 = *(signed char *)((t0 + 0x0));
        if ((unsigned char)t6 == 1) {
            t7 = *(int *)((t0 + 0xC));
            *(unsigned int *)((t0 + 0xC)) = (t7 + 0x1);
            t8 = *(int *)0xC26E0F8;
            if (t8 != 1) {
                t9 = *(int *)((t0 + 0xC));
                if ((int)t2 < (int)t9) {
                    *(unsigned int *)0xC26E0F4 = t1;
                    t10 = *(int *)((t0 + 0xC));
                    t2 = t10;
                }
            }
        }
        *(unsigned int *)((t0 + 0x10)) = 0x0;
        t13 = *(int *)((t0 + 0x8));
        t1 = (t1 + t13);
        t1 = (t1 + 0x1);
        t0 = (t0 + (((((t13 + 0x1) << 1) + (t13 + 0x1)) << 2) << 1));
    } while ((int)t1 < (int)0x120);
    t14 = *(int *)0xC26E0F8;
    if (t14 != 1) {
        t15 = *(int *)0xC26E0F4;
        if (t15 != -1) {
            *(unsigned int *)0xC26E0F8 = 0x1;
            t16 = *(int *)0xC26E0F4;
            *(unsigned char *)((((short)((((t16 << 1) + t16) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
        } else {
            *(unsigned int *)0xC26E0F8 = 0x0;
        }
    }
    t20 = *(int *)0xC26E0F8;
    if (t20 == 1) {
        t21 = *(int *)0xC26E0F4;
        t22 = *(signed char *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x0));
        if ((unsigned char)t22 != 2) {
            if ((unsigned char)t22 != 3) {
                return (unsigned char)t22;
            }
            t23 = *(int *)0xC26C5D8;
            t24 = ADXF_GetStat(t23);
            if (t24 == 3) {
                *(unsigned int *)0xC0EA3DC = 0x0;
                *(unsigned char *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x4;
                *(unsigned int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0xC)) = 0x0;
                *(unsigned int *)0xC26E0F8 = 0x2;
                t25 = *(int *)0xC26C5D8;
                ADXF_Close(t25);
                nlSetCommonTextureOffset(0x7D0);
                t28 = *(int *)0xC0EA3D8;
                t29 = *(int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x14));
                nlObjPutLoadTexture(t29, t28);
                t31 = *(int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x14));
                FUN_0c07a520();
                nlSetCommonTextureOffset(0x0);
                *(unsigned int *)0xC26E0F4 = 0xFFFFFFFF;
                return FUN_0c02e940();
            }
            t39 = t24;
            if (t24 == 4) {
                t34 = *(int *)0xC26C5D8;
                t35 = ADXF_Close(t34);
                *(unsigned char *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
                t36 = *(int *)0xC0EA3DC;
                *(unsigned int *)0xC0EA3DC = (t36 + 0x1);
                if ((int)(t36 + 0x1) > (int)0xA) {
                    t37 = *(int *)0xC1EE208;
                    *(unsigned int *)0xC1EE208 = (t37 + 0x1);
                }
                t39 = t35;
            }
            return t39;
        }
        t40 = *(int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x4));
        t41 = ADXF_OpenAfs(0x0, t40);
        *(unsigned int *)0xC26C5D8 = t41;
        if (t41 != 0) {
            t42 = *(int *)0xC26C5D8;
            t43 = ADXF_GetFsizeSct(t42);
            t44 = *(int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x14));
            t45 = *(int *)0xC26C5D8;
            ADXF_ReadNw32(t45, t43, t44);
            *(unsigned char *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x3;
            t47 = *(int *)0xC26C5D8;
            t48 = ADXF_GetStat(t47);
            if (t48 == 3) {
                *(unsigned int *)0xC0EA3DC = 0x0;
                *(unsigned char *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x4;
                *(unsigned int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0xC)) = 0x0;
                *(unsigned int *)0xC26E0F8 = 0x2;
                t49 = *(int *)0xC26C5D8;
                ADXF_Close(t49);
                nlSetCommonTextureOffset(0x7D0);
                t52 = *(int *)0xC0EA3D8;
                t53 = *(int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x14));
                nlObjPutLoadTexture(t53, t52);
                t55 = *(int *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x14));
                FUN_0c07a520();
                nlSetCommonTextureOffset(0x0);
                *(unsigned int *)0xC26E0F4 = 0xFFFFFFFF;
                return FUN_0c02e940();
            }
            t63 = t48;
            if (t48 == 4) {
                t58 = *(int *)0xC26C5D8;
                t59 = ADXF_Close(t58);
                *(unsigned char *)((((short)((((t21 << 1) + t21) << 2) << 1) + 0xC26C5DC) + 0x0)) = 0x2;
                t60 = *(int *)0xC0EA3DC;
                *(unsigned int *)0xC0EA3DC = (t60 + 0x1);
                if ((int)(t60 + 0x1) > (int)0xA) {
                    t61 = *(int *)0xC1EE208;
                    *(unsigned int *)0xC1EE208 = (t61 + 0x1);
                }
                t63 = t59;
            }
            return t63;
        }
        return t41;
    }
    return t20;
}

int gdc_SpriteSetAdv(void)
{
    int t0;
    int t24;
    int t3;
    int t7;
    int t14;
    int t23;
    int t11;

    t0 = *(int *)0xC26E184;
    t24 = t0;
    if (t0 != 1) {
        if (t0 == 2) {
            gdc_SpriteFreeMenu();
        }
        t3 = *(int *)0xC26E184;
        if (t3 == 3) {
            FUN_0c02f870();
            nlSetCommonTextureOffset(0xF0);
            nlSpriteFreeTexture(0xC143EE8, 0xC08BFC0);
            t7 = *(int *)0xC2A11C0;
            if (t7 == 0) {
                nlSetCommonTextureOffset(0x1CC);
                t11 = 0xC144C88;
            } else {
                nlSetCommonTextureOffset(0x1D6);
                t11 = 0xC144D08;
            }
            nlSpriteFreeTexture(t11, 0xC08BB88);
        }
        t14 = *(int *)0xC26E184;
        if (t14 == 5) {
            FUN_0c02f870();
            nlSetCommonTextureOffset(0x1E0);
            nlSpriteFreeTexture(0xC1469C8, 0x0);
            gdc_SpriteFreeMenu();
        }
        nlSetCommonTextureOffset(0xE1);
        gdc_FileLoad(0xCB40000, 0xC08D66C, 0x0);
        nlObjPutSetReplaceTextureDirName(0xC146B68, 0x0);
        t23 = nlSetCommonTextureOffset(0x0);
        *(unsigned int *)0xC26E184 = 0x1;
        *(unsigned int *)0xC0E5318 = 0x3;
        t24 = t23;
    }
    return t24;
}

float FUN_0c032432(int a4, int a5)
{
    float u0;
    float u1;
    float t2;
    float u3;
    float u4;
    float t5;
    float u6;
    float u7;
    float u8;
    float t9;
    float u10;
    float u11;
    float u12;
    float t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    float u21;
    float u22;
    float u23;
    int t24;
    float u25;
    float u26;
    int t28;
    int t27;
    float u29;
    float u30;
    int t32;
    int t31;
    int t34;
    int t33;
    int t36;
    int t35;
    float u37;
    float u38;
    float u43;
    float u44;
    int t52;
    int t53;
    int t54;
    int t55;
    float u56;
    float u57;
    float u58;
    float u59;
    int t60;
    int t61;
    float u62;
    float u63;
    float u64;
    float u65;
    float u66;
    float u67;
    int t72;
    int t74;
    int t77;
    int t78;
    int t81;
    int t82;
    int t94;
    float u95;
    float u96;
    float u97;
    int t98;
    float u99;
    float u100;
    int t102;
    int t101;
    float u103;
    float u104;
    int t106;
    int t105;
    int t108;
    int t107;
    int t110;
    int t109;
    float u111;
    float u112;
    float u117;
    float u118;
    int t126;
    int t127;
    int t128;
    int t129;
    float u130;
    float u131;
    float u132;
    float u133;
    int t134;
    int t135;
    float u136;
    float u137;
    float u138;
    float u139;
    float u140;
    float u141;
    int t146;
    int t148;
    int t151;
    int t152;
    int t155;
    int t156;
    float u186;
    float u176;
    float u166;
    float u92;
    int t46;
    int t47;
    float u50;
    float u51;
    int t39;
    int t40;
    float u42;
    float u71;
    int t120;
    int t121;
    float u124;
    float u125;
    int t113;
    int t114;
    float u116;
    float u145;

    u0 = *(float *)((a4 + 0x0));
    u1 = *(float *)0xC26E410;
    t2 = nlFloor((u0 / u1));
    u3 = *(float *)0xC26E410;
    u4 = *(float *)((a4 + 0x8));
    t5 = nlFloor((u4 / u3));
    u6 = *(float *)((a5 + 0x0));
    u7 = *(float *)((a4 + 0x0));
    u8 = *(float *)0xC26E410;
    t9 = nlFloor(((u7 + u6) / u8));
    u10 = *(float *)((a4 + 0x8));
    u11 = *(float *)((a5 + 0x8));
    u12 = *(float *)0xC26E410;
    t13 = nlFloor(((u10 + u11) / u12));
    t14 = *(int *)0xC26E3F8;
    t15 = *(int *)0xC26E404;
    t16 = *(int *)0xC26E3F4;
    if ((int)((t15 * ((int)t5 - t14)) + ((int)t2 - t16)) >= 0) {
        t17 = *(int *)0xC26E40C;
        if ((int)((t15 * ((int)t5 - t14)) + ((int)t2 - t16)) >= (int)t17) {
            *(unsigned int *)0xC26E3A0 = 0x0;
            u176 = (t13 - (float)(int)t5);
        } else {
            if ((int)(t9 - (float)(int)t2) == 0) {
                if ((int)(t13 - (float)(int)t5) == 0) {
                    t18 = *(int *)0xC26E3F0;
                    t19 = *(int *)(((((t15 * ((int)t5 - t14)) + ((int)t2 - t16)) << 2) + t18));
                    *(unsigned int *)0xC26E3A0 = t19;
                    *(float *)0xC26E3C8 = 3.40282347e+38f;
                    u92 = (t13 - (float)(int)t5);
                } else {
                    t20 = *(int *)0xC26E3F4;
                    u21 = *(float *)0xC26E410;
                    u22 = ((float)(t20 + ((int)t2 - t16)) * u21);
                    u23 = (-u21);
                    if ((int)(int)(t9 - (float)(int)t2) > 0) {
                        u22 = (((float)(t20 + ((int)t2 - t16)) * u21) + u21);
                        u23 = u21;
                    }
                    t24 = *(int *)0xC26E3F8;
                    u25 = (-u21);
                    u26 = ((float)(t24 + ((int)t5 - t14)) * u21);
                    if ((int)(int)(t13 - (float)(int)t5) > 0) {
                        u25 = u21;
                        u26 = (((float)(t24 + ((int)t5 - t14)) * u21) + u21);
                    }
                    if ((int)(t13 - (float)(int)t5) == 0) {
                        t28 = 0x1;
                        if ((int)(int)(t9 - (float)(int)t2) <= 0) {
                            t27 = 0x0;
                            if ((int)(int)(t9 - (float)(int)t2) < 0) {
                                t27 = 0xFFFFFFFF;
                            }
                            t28 = t27;
                        }
                        u29 = *(float *)((a4 + 0x0));
                        u30 = *(float *)((a5 + 0x0));
                        t46 = t28;
                        t47 = (int)(t13 - (float)(int)t5);
                        u50 = ((u22 - u29) / u30);
                        u51 = 3.40282347e+38f;
                    } else {
                        if ((int)(t9 - (float)(int)t2) == 0) {
                            t32 = 0x1;
                            if ((int)(int)(t13 - (float)(int)t5) <= 0) {
                                t31 = 0x0;
                                if ((int)(int)(t13 - (float)(int)t5) < 0) {
                                    t31 = 0xFFFFFFFF;
                                }
                                t32 = t31;
                            }
                            t39 = (int)(t9 - (float)(int)t2);
                            t40 = t32;
                            u42 = 3.40282347e+38f;
                        } else {
                            t34 = 0x1;
                            if ((int)(int)(t9 - (float)(int)t2) <= 0) {
                                t33 = 0x0;
                                if ((int)(int)(t9 - (float)(int)t2) < 0) {
                                    t33 = 0xFFFFFFFF;
                                }
                                t34 = t33;
                            }
                            t36 = 0x1;
                            if ((int)(int)(t13 - (float)(int)t5) <= 0) {
                                t35 = 0x0;
                                if ((int)(int)(t13 - (float)(int)t5) < 0) {
                                    t35 = 0xFFFFFFFF;
                                }
                                t36 = t35;
                            }
                            u37 = *(float *)((a4 + 0x0));
                            u38 = *(float *)((a5 + 0x0));
                            t39 = t34;
                            t40 = t36;
                            u42 = ((u22 - u37) / u38);
                        }
                        u43 = *(float *)((a4 + 0x8));
                        u44 = *(float *)((a5 + 0x8));
                        t46 = t39;
                        t47 = t40;
                        u50 = u42;
                        u51 = ((u26 - u43) / u44);
                    }
                    t52 = ((t15 * ((int)t5 - t14)) + ((int)t2 - t16));
                    t53 = 0x0;
                    t54 = ((int)t2 - t16);
                    t55 = ((int)t5 - t14);
                    u56 = u50;
                    u57 = u22;
                    u58 = u51;
                    u59 = u26;
                    for (;;) {
                        t52 = (t52 << 2);
                        t60 = *(int *)0xC26E3F0;
                        t61 = *(int *)((t52 + t60));
                        *(unsigned int *)(((0xC26E3A0 + (t53 << 2)) + 0x0)) = t61;
                        if (u58 > u56) {
                            u57 = (u57 + u23);
                            u62 = *(float *)((a4 + 0x0));
                            u63 = *(float *)((a5 + 0x0));
                            u64 = u56;
                            u56 = (u57 - u62);
                            u56 = (u56 / u63);
                            t54 = (t54 + t46);
                            u71 = u64;
                        } else {
                            u59 = (u59 + u25);
                            u65 = *(float *)((a4 + 0x8));
                            t55 = (t55 + t47);
                            u66 = *(float *)((a5 + 0x8));
                            u67 = u58;
                            u58 = (u59 - u65);
                            u58 = (u58 / u66);
                            u71 = u67;
                        }
                        if (!(u71 > 1.0f)) {
                            *(float *)((0xC26E3C8 + (t53 << 2))) = u71;
                            t72 = *(int *)0xC26E404;
                            t52 = t72;
                            t52 = (t52 * t55);
                            t52 = (t52 + t54);
                            if ((int)t52 >= 0) {
                                t74 = *(int *)0xC26E40C;
                                if ((int)t52 >= (int)t74) break;
                                t53 = (t53 + 0x1);
                                if ((int)t53 >= (int)0xA) {
                                    t77 = *(int *)0xC1EE234;
                                    if (t77 == 0) {
                                        *(float *)((0xC26E3C8 + ((t53 - 1) << 2))) = 3.40282347e+38f;
                                        return u21;
                                    }
                                    *(float *)0xC26E3EC = 3.40282347e+38f;
                                    return u21;
                                }
                                continue;
                            }
                            break;
                        }
                        *(float *)((0xC26E3C8 + (t53 << 2))) = 3.40282347e+38f;
                        t78 = *(int *)0xC1EE234;
                        if (t78 == 0) {
                            *(float *)((0xC26E3C8 + ((t53 - 1) << 2))) = 3.40282347e+38f;
                            return u21;
                        }
                        *(float *)0xC26E3EC = 3.40282347e+38f;
                        return u21;
                    }
                    if ((int)t53 < (int)0x9) {
                        *(unsigned int *)(((t53 << 2) + 0xC26E3A4)) = 0x0;
                    }
                    *(float *)((0xC26E3C8 + (t53 << 2))) = 3.40282347e+38f;
                    t81 = *(int *)0xC1EE234;
                    t82 = 0x24;
                    if (t81 == 0) {
                        t82 = ((t53 - 1) << 2);
                    }
                    *(float *)((0xC26E3C8 + t82)) = 3.40282347e+38f;
                    u92 = u21;
                }
                u166 = u92;
            } else {
                t94 = *(int *)0xC26E3F4;
                u95 = *(float *)0xC26E410;
                u96 = ((float)(t94 + ((int)t2 - t16)) * u95);
                u97 = (-u95);
                if ((int)(int)(t9 - (float)(int)t2) > 0) {
                    u96 = (((float)(t94 + ((int)t2 - t16)) * u95) + u95);
                    u97 = u95;
                }
                t98 = *(int *)0xC26E3F8;
                u99 = (-u95);
                u100 = ((float)(t98 + ((int)t5 - t14)) * u95);
                if ((int)(int)(t13 - (float)(int)t5) > 0) {
                    u99 = u95;
                    u100 = (((float)(t98 + ((int)t5 - t14)) * u95) + u95);
                }
                if ((int)(t13 - (float)(int)t5) == 0) {
                    t102 = 0x1;
                    if ((int)(int)(t9 - (float)(int)t2) <= 0) {
                        t101 = 0x0;
                        if ((int)(int)(t9 - (float)(int)t2) < 0) {
                            t101 = 0xFFFFFFFF;
                        }
                        t102 = t101;
                    }
                    u103 = *(float *)((a4 + 0x0));
                    u104 = *(float *)((a5 + 0x0));
                    t120 = t102;
                    t121 = (int)(t13 - (float)(int)t5);
                    u124 = ((u96 - u103) / u104);
                    u125 = 3.40282347e+38f;
                } else {
                    if ((int)(t9 - (float)(int)t2) == 0) {
                        t106 = 0x1;
                        if ((int)(int)(t13 - (float)(int)t5) <= 0) {
                            t105 = 0x0;
                            if ((int)(int)(t13 - (float)(int)t5) < 0) {
                                t105 = 0xFFFFFFFF;
                            }
                            t106 = t105;
                        }
                        t113 = (int)(t9 - (float)(int)t2);
                        t114 = t106;
                        u116 = 3.40282347e+38f;
                    } else {
                        t108 = 0x1;
                        if ((int)(int)(t9 - (float)(int)t2) <= 0) {
                            t107 = 0x0;
                            if ((int)(int)(t9 - (float)(int)t2) < 0) {
                                t107 = 0xFFFFFFFF;
                            }
                            t108 = t107;
                        }
                        t110 = 0x1;
                        if ((int)(int)(t13 - (float)(int)t5) <= 0) {
                            t109 = 0x0;
                            if ((int)(int)(t13 - (float)(int)t5) < 0) {
                                t109 = 0xFFFFFFFF;
                            }
                            t110 = t109;
                        }
                        u111 = *(float *)((a4 + 0x0));
                        u112 = *(float *)((a5 + 0x0));
                        t113 = t108;
                        t114 = t110;
                        u116 = ((u96 - u111) / u112);
                    }
                    u117 = *(float *)((a4 + 0x8));
                    u118 = *(float *)((a5 + 0x8));
                    t120 = t113;
                    t121 = t114;
                    u124 = u116;
                    u125 = ((u100 - u117) / u118);
                }
                t126 = ((t15 * ((int)t5 - t14)) + ((int)t2 - t16));
                t127 = 0x0;
                t128 = ((int)t2 - t16);
                t129 = ((int)t5 - t14);
                u130 = u124;
                u131 = u96;
                u132 = u125;
                u133 = u100;
                for (;;) {
                    t126 = (t126 << 2);
                    t134 = *(int *)0xC26E3F0;
                    t135 = *(int *)((t126 + t134));
                    *(unsigned int *)(((0xC26E3A0 + (t127 << 2)) + 0x0)) = t135;
                    if (u132 > u130) {
                        u131 = (u131 + u97);
                        u136 = *(float *)((a4 + 0x0));
                        u137 = *(float *)((a5 + 0x0));
                        u138 = u130;
                        u130 = (u131 - u136);
                        u130 = (u130 / u137);
                        t128 = (t128 + t120);
                        u145 = u138;
                    } else {
                        u133 = (u133 + u99);
                        u139 = *(float *)((a4 + 0x8));
                        t129 = (t129 + t121);
                        u140 = *(float *)((a5 + 0x8));
                        u141 = u132;
                        u132 = (u133 - u139);
                        u132 = (u132 / u140);
                        u145 = u141;
                    }
                    if (!(u145 > 1.0f)) {
                        *(float *)((0xC26E3C8 + (t127 << 2))) = u145;
                        t146 = *(int *)0xC26E404;
                        t126 = t146;
                        t126 = (t126 * t129);
                        t126 = (t126 + t128);
                        if ((int)t126 >= 0) {
                            t148 = *(int *)0xC26E40C;
                            if ((int)t126 >= (int)t148) break;
                            t127 = (t127 + 0x1);
                            if ((int)t127 >= (int)0xA) {
                                t151 = *(int *)0xC1EE234;
                                if (t151 == 0) {
                                    *(float *)((0xC26E3C8 + ((t127 - 1) << 2))) = 3.40282347e+38f;
                                    return u95;
                                }
                                *(float *)0xC26E3EC = 3.40282347e+38f;
                                return u95;
                            }
                            continue;
                        }
                        break;
                    }
                    *(float *)((0xC26E3C8 + (t127 << 2))) = 3.40282347e+38f;
                    t152 = *(int *)0xC1EE234;
                    if (t152 == 0) {
                        *(float *)((0xC26E3C8 + ((t127 - 1) << 2))) = 3.40282347e+38f;
                        return u95;
                    }
                    *(float *)0xC26E3EC = 3.40282347e+38f;
                    return u95;
                }
                if ((int)t127 < (int)0x9) {
                    *(unsigned int *)(((t127 << 2) + 0xC26E3A4)) = 0x0;
                }
                *(float *)((0xC26E3C8 + (t127 << 2))) = 3.40282347e+38f;
                t155 = *(int *)0xC1EE234;
                t156 = 0x24;
                if (t155 == 0) {
                    t156 = ((t127 - 1) << 2);
                }
                *(float *)((0xC26E3C8 + t156)) = 3.40282347e+38f;
                u166 = u95;
            }
            u176 = u166;
        }
        u186 = u176;
    } else {
        *(unsigned int *)0xC26E3A0 = 0x0;
        u186 = (t13 - (float)(int)t5);
    }
    return u186;
}

int FUN_0c0399b8(int a4)
{
    float u0;
    int t2;
    int t4;
    int t7;
    int stk[25];

    *(float *)(((int)stk + 16)) = 1.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 40)) = 1.0f;
    *(float *)(((int)stk + 36)) = 1.0f;
    *(unsigned int *)(((int)stk + 44)) = 0x0;
    *(float *)(((int)stk + 48)) = 1.0f;
    *(unsigned int *)(((int)stk + 56)) = 0x70A;
    *(unsigned int *)(((int)stk + 52)) = 0x2;
    *(unsigned int *)(((int)stk + 4)) = 0x4B;
    *(float *)(((int)stk + 8)) = 112.0f;
    *(float *)(((int)stk + 12)) = 206.0f;
    u0 = *(float *)0xC2864D4;
    *(float *)(((int)stk + 24)) = (u0 * 0.75f);
    *(float *)(((int)stk + 20)) = (u0 * 0.75f);
    nlSprPut(((int)stk + 4));
    t2 = (int)((int)a4 % (int)0xA);
    *(unsigned int *)(((int)stk + 4)) = (t2 + 0x41);
    *(float *)(((int)stk + 8)) = 120.0f;
    *(float *)(((int)stk + 12)) = 204.0f;
    nlSprPut(((int)stk + 4));
    if ((int)a4 >= (int)0xA) {
        t4 = (int)((int)a4 / (int)0xA);
        *(unsigned int *)(((int)stk + 4)) = (t4 + 0x41);
        *(float *)(((int)stk + 8)) = 88.0f;
        nlSprPut(((int)stk + 4));
    }
    if (a4 != 1) {
        if (a4 != 2) {
            if (a4 != 3) {
                *(unsigned int *)(((int)stk + 4)) = 0x4F;
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0x4D;
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x4C;
        }
    } else {
        *(unsigned int *)(((int)stk + 4)) = 0x4E;
    }
    *(float *)(((int)stk + 8)) = 168.0f;
    *(float *)(((int)stk + 12)) = 214.0f;
    t7 = nlSprPut(((int)stk + 4));
    return t7;
}

int putString(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    float u2;
    float u5;
    float t15;
    float u17;
    float t16;
    float u18;

    t0 = *(signed char *)((a5 + 0x0));
    if (t0 != 0) {
        FUN_0c031408(0x1);
        u2 = *(float *)0xC2A1AD4;
        pfSetZ(u2);
        pfSetFont((0x3 & a4));
        u5 = f6;
        if ((0x20000 & a4) != 0) {
            u5 = (f6 * 1.5f);
        }
        pfSize(f6, u5);
        if ((0x10 & a4) != 0) {
            pfColor(0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000);
        } else {
            if ((0x20 & a4) != 0) {
                pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
            } else {
                if ((0x40 & a4) != 0) {
                    pfColor(0xFFFFC500, 0xFFFFC500, 0xFFFFC500, 0xFFFFC500);
                } else {
                    if ((0x80 & a4) != 0) {
                        pfColor(0xFF707070, 0xFF707070, 0xFF707070, 0xFF707070);
                    }
                }
            }
        }
        if ((0x4 & a4) != 0) {
            t15 = pfLength(a5);
            u18 = (f4 - (t15 * 0.5f));
        } else {
            u17 = f4;
            if ((a4 & 0x8) != 0) {
                t16 = pfLength(a5);
                u17 = (f4 - t16);
            }
            u18 = u17;
        }
        pfLocate(u18, f5);
        pfPuts(a5);
        return FUN_0c031408(0x0);
    }
    return 0x8;
}

int PutVM_Message(int a4, int a5, int a6, float f4, float f5)
{
    float u0;
    int t1;
    int t2;
    int t3;
    int t26;
    int t4;
    int t5;
    int t10;
    int t11;
    int t13;
    int t14;
    int t15;
    int t22;
    int t16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int stk[15];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    u0 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = 0.099999994f;
    t1 = *(int *)(((int)stk + 4));
    t2 = FUN_0c041016(0x0);
    t3 = *(int *)(((((short)((short)t1 * (short)0x3C) + 0xC0A1238) + (signed char)(((t2 << 1) + t2) << 2)) + 0x0));
    t26 = (signed char)(((t2 << 1) + t2) << 2);
    if (t3 != 0) {
        t4 = FUN_0c041016(0x0);
        t5 = *(int *)((((short)((short)t1 * (short)0x3C) + 0xC0A1238) + (signed char)(((t4 << 1) + t4) << 2)));
        *(unsigned short *)(((int)stk + 12)) = t5;
        *(unsigned char *)(((int)stk + 14)) = 0x0;
        if ((0x10 & a4) != 0) {
            *(unsigned char *)(((int)stk + 14)) = 0x8;
        } else {
            if ((0x20 & a4) != 0) {
                *(unsigned char *)(((int)stk + 14)) = 0x7;
            } else {
                if ((0x40 & a4) != 0) {
                    *(unsigned char *)(((int)stk + 14)) = 0xA;
                }
            }
        }
        *(unsigned char *)(((int)stk + 15)) = 0x1;
        *(unsigned int *)(((int)stk + 4)) = ((short)((short)t1 * (short)0x3C) + 0xC0A1238);
        t10 = FUN_0c041016(0x0);
        t11 = *(short *)((((signed char)(((t10 << 1) + t10) << 2) + ((short)((short)t1 * (short)0x3C) + 0xC0A1238)) + 0x4));
        *(unsigned short *)(((int)stk + 16)) = t11;
        *(unsigned short *)(((int)stk + 18)) = 0x0;
        *(unsigned int *)0xC2A1AB8 = 0x3009;
        menuPutSprites((((int)stk + 4) + 0x8), 0xC2A1A84, (int)f4, (int)f5);
        *(unsigned int *)0xC2A1AB8 = 0x300A;
        t13 = FUN_0c041016(0x0);
        t14 = *(int *)(((int)stk + 4));
        t15 = *(int *)((((signed char)(((t13 << 1) + t13) << 2) + t14) + 0x8));
        t22 = ((signed char)(((t13 << 1) + t13) << 2) + t14);
        if (t15 != 0) {
            t16 = *(int *)0xC2A11C0;
            u17 = 8.0f;
            if (t16 == 0) {
                u17 = 6.0f;
            }
            t18 = FUN_0c041016(0x0);
            t19 = *(int *)(((int)stk + 8));
            t20 = *(int *)(((((short)((short)t1 * (short)0x3C) + 0xC0A1238) + (signed char)(((t18 << 1) + t18) << 2)) + 0x8));
            t21 = PutStringFixPfont((a4 & 0x73), t19, (f4 + (float)t20), (f5 - u17), 14.0f, 1.0f);
            t22 = t21;
        }
        *(float *)0xC2A1AD4 = u0;
        t26 = t22;
    }
    return t26;
}

void FUN_0c03cd2c(int a4, int a5, float f4, float f5)
{
    float u8;
    int t9;
    int t10;
    float u13;

    if (a4 == 0) {
        menuPutSprites(0xC0A1DA8, 0xC2A1A84, (int)f4, (int)f5);
    } else {
        if (a4 == 1) {
            menuPutSprites(0xC0A1DF8, 0xC2A1A84, (int)f4, (int)f5);
        } else {
            if (a4 == 2) {
                menuPutSprites(0xC0A1E48, 0xC2A1A84, (int)f4, (int)f5);
            } else {
                if (a4 == 3) {
                    menuPutSprites(0xC0A1E98, 0xC2A1A84, (int)f4, (int)f5);
                }
            }
        }
    }
    u8 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = (u8 + 0.0199999996f);
    *(float *)0xC2A1AB0 = 0.799999952f;
    if ((int)a5 > 0) {
        t9 = 0x0;
        do {
            t10 = 0xC0A1EF8;
            if ((t9 & 0x1) != 0) {
                t10 = 0xC0A1EE8;
            }
            menuPutSprites(t10, 0xC2A1A84, (int)f4, (int)(((float)(((t9 << 2) + t9) << 2) + f5) + 16.0f));
            t9 = (t9 + 0x1);
        } while ((int)t9 < (int)a5);
    }
    *(float *)0xC2A1AB0 = 1.0f;
    u13 = *(float *)0xC2A1AD4;
    *(float *)0xC2A1AD4 = (u13 - 0.0199999996f);
}

void FUN_0c041a3e(int a4)
{
    int t0;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t12;
    int t15;

    if (a4 == 0) {
        *(unsigned int *)0xC2A1234 = 0x0;
    } else {
        t0 = *(int *)0xC2A1234;
        if ((t0 & 1) != 0) {
            FUN_0c03b698(0x10, 0x0);
            t2 = *(int *)0xC2A1234;
            *(unsigned int *)0xC2A1234 = (t2 & 0xFFFFFFFE);
        } else {
            t3 = t0;
            t4 = 0x0;
            do {
                t5 = *(int *)0xC2A1234;
                if ((t5 & (((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)))) != 0) {
                    t6 = Voice_ShutUp(0x0);
                    t3 = t6;
                    t3 = 0xC0A2154;
                    t7 = *(int *)(((t4 << 2) + t3));
                    *(unsigned int *)0xC0EF550 = t7;
                    t8 = Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                    t3 = t8;
                    t9 = *(int *)0xC2A1234;
                    *(unsigned int *)0xC2A1234 = (t9 & (~(((int)t4 >= 0) ? (0x2 << (t4 & 31)) : ((-(int)t4 & 31) ? ((int)0x2 >> (-(int)t4 & 31)) : ((int)0x2 >> 31)))));
                }
                t4 = (t4 + 0x1);
            } while ((int)t4 < (int)0x4);
            t12 = *(int *)0xC2A1234;
            if ((t12 & 32) != 0) {
                Voice_ShutUp(0x0);
                *(unsigned int *)0xC0EF550 = 0xA1;
                Voice_Request(0xC0EF550, 0x0, 0x7F, 0x0);
                t15 = *(int *)0xC2A1234;
                *(unsigned int *)0xC2A1234 = (t15 & 0xFFFFFFDF);
            }
        }
    }
}

int calcCheckExec(int a4, int a5)
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
    int t18;
    int t22;
    int t19;

    if ((a5 & 0x8) != 0) {
        t0 = *(int *)((a4 + 0x84));
        if ((t0 & 0x8) != 0) {
            t1 = *(int *)(((0x8C + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x14) + 0x8)) = t1;
            t2 = *(int *)(((0x8C + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x14) + 0x4)) = t2;
            t3 = *(int *)(((0x8C + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x14) + 0x0)) = t3;
            t4 = *(int *)(((0x98 + a4) + 0x8));
            *(unsigned int *)(((a4 + 0x20) + 0x8)) = t4;
            t5 = *(int *)(((0x98 + a4) + 0x4));
            *(unsigned int *)(((a4 + 0x20) + 0x4)) = t5;
            t6 = *(int *)(((0x98 + a4) + 0x0));
            *(unsigned int *)(((a4 + 0x20) + 0x0)) = t6;
            *(unsigned int *)((a4 + 0x3C)) = (a4 + 0x44);
            *(unsigned int *)((a4 + 0x40)) = 0x0;
            t7 = *(int *)0xC0A4790;
            *(unsigned int *)(((a4 + 0x5C) + 0x8)) = t7;
            t8 = *(int *)0xC0A478C;
            *(unsigned int *)(((a4 + 0x5C) + 0x4)) = t8;
            t9 = *(int *)0xC0A4788;
            *(unsigned int *)(((a4 + 0x5C) + 0x0)) = t9;
            t10 = *(int *)0xC0A4790;
            *(unsigned int *)(((a4 + 0x44) + 0x8)) = t10;
            t11 = *(int *)0xC0A478C;
            *(unsigned int *)(((a4 + 0x44) + 0x4)) = t11;
            t12 = *(int *)0xC0A4788;
            *(unsigned int *)(((a4 + 0x44) + 0x0)) = t12;
            *(unsigned int *)((a4 + 0x68)) = 0x0;
            *(float *)((a4 + 0x6C)) = 0.0f;
            *(float *)((a4 + 0x70)) = 0.0f;
            t13 = *(int *)((a4 + 0x78));
            t14 = *(int *)(((t13 * 0xA8) + 0xC0A26C8));
            SetColliObj((a4 + 0x14), t14);
        } else {
            KillColliObj((a4 + 0x14));
        }
    }
    t18 = *(int *)((a4 + 0x84));
    t22 = 0x1;
    if ((t18 & 1) == 0) {
        t19 = *(int *)((a4 + 0x84));
        if ((0x8 & t19) != 0) {
            KillColliObj((a4 + 0x14));
        }
        t22 = 0x0;
    }
    return t22;
}

int FUN_0c049b06(float f4, float f5)
{
    int t0;
    int t2;
    int t1;

    t0 = FUN_0c049aa8();
    t2 = (int)(-f5);
    if (!((-f5) > (float)t0)) {
        t1 = t0;
        if ((float)t0 > f5) {
            t1 = (int)f5;
        }
        t2 = t1;
    }
    return t2;
}

float getNearLineIndex(int a4, int a5, int a6, int a7, int a8)
{
    int t4;
    float u6;
    int t0;
    float u1;
    float t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t10;
    float u11;
    float t12;
    int t17;
    float u19;
    int t13;
    float u14;
    float t15;
    int t16;
    int t20;
    int t21;
    int t22;
    int t23;
    float u24;
    float t25;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    float t31;
    int t38;
    float t39;
    int t40;
    float u41;
    int t42;
    float t43;
    float u44;
    int t45;
    int t46;
    float u47;
    int t48;
    float t49;
    float u50;
    int t51;
    float u52;
    int t56;
    float t57;
    int t58;
    float u59;
    int t60;
    float t61;
    float u62;
    int t66;
    float u68;
    int t63;
    float u65;
    int t53;
    float u55;
    int t35;
    float u37;
    int t32;
    float u34;

    if (a4 == 0) {
        t4 = 0x0;
        u6 = 1000000.0f;
        if ((int)a6 > 0) {
            t0 = 0x0;
            u1 = 1000000.0f;
            do {
                t2 = nlLength(a8, ((((t0 << 1) + t0) << 2) + a5));
                t3 = 0x0;
                if (u1 > t2) {
                    u1 = t2;
                    t3 = t0;
                }
                t0 = (t0 + 0x1);
            } while ((int)t0 < (int)a6);
            t4 = t3;
            u6 = u1;
        }
        t66 = t4;
        u68 = u6;
    } else {
        if (a4 != 1) {
            if (a4 != 2) {
                if (a4 == 3) {
                    t7 = *(int *)((a7 + 0x0));
                    t8 = 0x0;
                    t9 = 0x0;
                    t10 = t7;
                    u11 = 1000000.0f;
                    do {
                        if ((int)t10 >= (int)a6) {
                            t10 = (t10 - a6);
                        }
                        t12 = nlLength(a8, ((((t10 << 1) + t10) << 2) + a5));
                        t9 = (t9 + 0x1);
                        if (u11 > t12) {
                            t8 = t10;
                            u11 = t12;
                        }
                        t10 = (t10 + 0x1);
                    } while ((int)t9 < (int)0x7);
                    t35 = t8;
                    u37 = u11;
                } else {
                    if (a4 != 4) {
                        t17 = 0x0;
                        u19 = 1000000.0f;
                        if ((int)a6 > 0) {
                            t13 = 0x0;
                            u14 = 1000000.0f;
                            do {
                                t15 = nlLength(a8, ((((t13 << 1) + t13) << 2) + a5));
                                t16 = 0x0;
                                if (u14 > t15) {
                                    u14 = t15;
                                    t16 = t13;
                                }
                                t13 = (t13 + 0x1);
                            } while ((int)t13 < (int)a6);
                            t17 = t16;
                            u19 = u14;
                        }
                        t32 = t17;
                        u34 = u19;
                    } else {
                        t20 = *(int *)((a7 + 0x0));
                        t21 = 0x0;
                        t22 = 0x0;
                        t23 = t20;
                        u24 = 1000000.0f;
                        do {
                            if ((int)t23 < 0) {
                                t23 = (t23 + a6);
                            }
                            t25 = nlLength(a8, ((((t23 << 1) + t23) << 2) + a5));
                            t22 = (t22 + 0x1);
                            if (u24 > t25) {
                                t21 = t23;
                                u24 = t25;
                            }
                            t23 = (t23 - 1);
                        } while ((int)t22 < (int)0x7);
                        t26 = *(int *)((a7 + 0x0));
                        t27 = t21;
                        t28 = 0x0;
                        t29 = t26;
                        u30 = u24;
                        do {
                            if ((int)t29 >= (int)a6) {
                                t29 = (t29 - a6);
                            }
                            t31 = nlLength(a8, ((((t29 << 1) + t29) << 2) + a5));
                            t28 = (t28 + 0x1);
                            if (u30 > t31) {
                                t27 = t29;
                                u30 = t31;
                            }
                            t29 = (t29 + 0x1);
                        } while ((int)t28 < (int)0x7);
                        t32 = t27;
                        u34 = u30;
                    }
                    t35 = t32;
                    u37 = u34;
                }
                t53 = t35;
                u55 = u37;
            } else {
                t38 = *(int *)((a7 + 0x0));
                t39 = nlLength(a8, ((((t38 << 1) + t38) << 2) + a5));
                t40 = t38;
                u41 = t39;
                do {
                    t42 = t40;
                    t40 = (t40 - 1);
                    if ((int)t40 < 0) {
                        t40 = (a6 - 1);
                    }
                    t43 = nlLength(a8, ((((t40 << 1) + t40) << 2) + a5));
                    u44 = u41;
                    u41 = t43;
                } while (u44 > u41);
                t45 = *(int *)((a7 + 0x0));
                t46 = t45;
                u47 = t39;
                do {
                    t48 = t46;
                    t46 = (t46 + 0x1);
                    if ((int)t46 >= (int)a6) {
                        t46 = 0x0;
                    }
                    t49 = nlLength(a8, ((((t46 << 1) + t46) << 2) + a5));
                    u50 = u47;
                    u47 = t49;
                } while (u50 > u47);
                t51 = t42;
                u52 = u44;
                if (!(u50 > u44)) {
                    t51 = t48;
                    u52 = u50;
                }
                t53 = t51;
                u55 = u52;
            }
            t63 = t53;
            u65 = u55;
        } else {
            t56 = *(int *)((a7 + 0x0));
            t57 = nlLength(a8, ((((t56 << 1) + t56) << 2) + a5));
            t58 = t56;
            u59 = t57;
            do {
                t60 = t58;
                t58 = (t58 + 0x1);
                if ((int)t58 >= (int)a6) {
                    t58 = 0x0;
                }
                t61 = nlLength(a8, ((((t58 << 1) + t58) << 2) + a5));
                u62 = u59;
                u59 = t61;
            } while (u62 > u59);
            t63 = t60;
            u65 = u62;
        }
        t66 = t63;
        u68 = u65;
    }
    *(unsigned int *)((a7 + 0x0)) = t66;
    return u68;
}

float FUN_0c04a090(int a4, int a5, int a6, int a7, int a8, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    int t7;
    int t8;
    float u197;
    int t9;
    int t10;
    float u11;
    float u12;
    float u13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t29;
    int t30;
    int t31;
    int t32;
    float t33;
    int t34;
    int t35;
    int t36;
    float u55;
    int t37;
    int t38;
    int t39;
    int t40;
    int t45;
    int t41;
    int t42;
    int t43;
    int t47;
    int t48;
    int t49;
    float t50;
    float u52;
    int t51;
    float u118;
    int t56;
    int t57;
    int t58;
    int t59;
    float u91;
    int t60;
    int t61;
    int t62;
    int t63;
    float t64;
    float u66;
    int t65;
    int t67;
    int t68;
    float u87;
    int t69;
    int t70;
    int t71;
    int t72;
    int t77;
    int t73;
    int t74;
    int t75;
    int t79;
    int t80;
    int t81;
    float t82;
    float u84;
    int t83;
    int t92;
    int t93;
    float u112;
    int t94;
    int t95;
    int t96;
    int t97;
    int t102;
    int t98;
    int t99;
    int t100;
    int t104;
    int t105;
    int t106;
    float t107;
    float u109;
    int t108;
    int t122;
    int t123;
    float u124;
    float u125;
    float u126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    float t137;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t144;
    int t145;
    int t146;
    int t147;
    int t148;
    int t149;
    int t150;
    int t154;
    int t155;
    int t156;
    int t157;
    float t158;
    int t159;
    int t160;
    int t161;
    float u162;
    float u163;
    float u164;
    int t165;
    int t166;
    int t167;
    int t168;
    int t170;
    int t171;
    int t172;
    int t173;
    int t174;
    int t175;
    int t176;
    int t180;
    int t181;
    int t182;
    int t183;
    float t184;
    int t185;
    float u193;
    float u189;
    float u121;
    float u115;
    int stk[15];

    *(unsigned int *)(((int)stk + 12)) = a5;
    t0 = *(int *)((a6 + 0x0));
    t1 = *(int *)0xC2A6690;
    t2 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x4));
    t3 = *(int *)((((((t0 << 1) + t0) << 2) + t1) + 0x0));
    t4 = *(int *)((t2 + 0x0));
    *(unsigned int *)(((int)stk + 20)) = t4;
    t5 = *(int *)((a7 + 0x0));
    *(unsigned int *)(((int)stk + 16)) = t5;
    t6 = getNearLineIndex(a4, t3, t4, a7, a8);
    t7 = *(int *)((a7 + 0x0));
    t8 = *(int *)((a6 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = t7;
    u197 = t6;
    if (a4 != 0) {
        if (a4 == 1) {
            t9 = t4;
            t10 = t8;
            u11 = t6;
            u12 = f4;
            u13 = t6;
            for (;;) {
                t14 = *(int *)(((int)stk + 8));
                t9 = (t9 - 1);
                if (t14 != t9) {
                    u11 = u13;
                    return u11;
                }
                t15 = *(int *)0xC2A6690;
                t16 = *(int *)(((int)stk + 12));
                t17 = (((t10 << 1) + t10) << 2);
                t19 = t10;
                t10 = t16;
                t20 = *(int *)(((t17 + t15) + 0x8));
                t10 = (t10 << 1);
                t10 = (t10 + (t20 + 0x4));
                t21 = *(short *)((t10 + 0x0));
                t10 = t21;
                t10 = (unsigned short)t10;
                if (t10 == 0) {
                    t22 = *(int *)0xC2A6690;
                    t23 = *(int *)((((((t19 << 1) + t19) << 2) + t22) + 0x8));
                    t10 = 0x1;
                    t24 = *(int *)(((int)stk + 12));
                    t10 = (t10 & (t24 + 0x1));
                    *(unsigned int *)(((int)stk + 12)) = (t24 + 0x1);
                    t10 = (t10 << 1);
                    t10 = (t10 + (t23 + 0x4));
                    t25 = *(short *)((t10 + 0x0));
                    t10 = t25;
                    t10 = (unsigned short)t10;
                }
                if (t10 == t19) break;
                t29 = *(int *)0xC2A6690;
                t30 = *(int *)((((((t10 << 1) + t10) << 2) + t29) + 0x4));
                t9 = t30;
                t31 = *(int *)((((((t10 << 1) + t10) << 2) + t29) + 0x0));
                t32 = *(int *)((t9 + 0x0));
                t9 = t32;
                *(unsigned int *)(((int)stk + 8)) = 0x0;
                t33 = getNearLineIndex(a4, t31, t9, (((int)stk + 4) + 0x4), a8);
                u11 = t33;
                u12 = u11;
                if (u13 > u12) {
                    u13 = u12;
                    *(unsigned int *)((a6 + 0x0)) = t10;
                    t34 = *(int *)(((int)stk + 8));
                    *(unsigned int *)((a7 + 0x0)) = t34;
                }
            }
            u193 = u13;
        } else {
            if (a4 != 2) {
                if (a4 == 3) {
                    t35 = *(int *)(((int)stk + 20));
                    t36 = *(int *)(((int)stk + 16));
                    u55 = t6;
                    if ((int)t36 > (int)(t35 - 8)) {
                        t37 = *(int *)0xC2A6690;
                        t38 = *(int *)(((int)stk + 12));
                        t39 = *(int *)((((((t8 << 1) + t8) << 2) + t37) + 0x8));
                        t40 = *(short *)((((t38 << 1) + (t39 + 0x4)) + 0x0));
                        t45 = (unsigned short)t40;
                        if ((unsigned short)t40 == 0) {
                            t41 = *(int *)(((int)stk + 12));
                            t42 = *(int *)((((((t8 << 1) + t8) << 2) + t37) + 0x8));
                            t43 = *(short *)(((((0x1 & (t41 + 0x1)) << 1) + (t42 + 0x4)) + 0x0));
                            t45 = (unsigned short)t43;
                        }
                        t47 = *(int *)((((((t45 << 1) + t45) << 2) + t37) + 0x0));
                        t48 = *(int *)((((((t45 << 1) + t45) << 2) + t37) + 0x4));
                        t49 = *(int *)((t48 + 0x0));
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        t50 = getNearLineIndex(a4, t47, t49, (((int)stk + 4) + 0x4), a8);
                        u52 = t6;
                        if (t6 > t50) {
                            *(unsigned int *)((a6 + 0x0)) = t45;
                            t51 = *(int *)(((int)stk + 8));
                            *(unsigned int *)((a7 + 0x0)) = t51;
                            u52 = t50;
                        }
                        u55 = u52;
                    }
                    u121 = u55;
                } else {
                    u118 = t6;
                    if (a4 == 4) {
                        t56 = *(int *)(((int)stk + 16));
                        if ((int)t56 < (int)0x7) {
                            t57 = *(int *)0xC2A6690;
                            t58 = *(int *)((((((t8 << 1) + t8) << 2) + t57) + 0x8));
                            t59 = *(short *)((t58 + 0x8));
                            u91 = t6;
                            if ((unsigned short)t59 != t8) {
                                t60 = *(int *)0xC2A6690;
                                t61 = *(int *)(((((((unsigned short)t59 << 1) + (unsigned short)t59) << 2) + t60) + 0x4));
                                t62 = *(int *)(((((((unsigned short)t59 << 1) + (unsigned short)t59) << 2) + t60) + 0x0));
                                t63 = *(int *)((t61 + 0x0));
                                *(unsigned int *)(((int)stk + 8)) = (t63 - 1);
                                t64 = getNearLineIndex(a4, t62, t63, (((int)stk + 4) + 0x4), a8);
                                u66 = t6;
                                if (t6 > t64) {
                                    *(unsigned int *)((a6 + 0x0)) = (unsigned short)t59;
                                    t65 = *(int *)(((int)stk + 8));
                                    *(unsigned int *)((a7 + 0x0)) = t65;
                                    u66 = t64;
                                }
                                t67 = *(int *)(((int)stk + 20));
                                t68 = *(int *)(((int)stk + 16));
                                u87 = u66;
                                if ((int)t68 > (int)(t67 - 8)) {
                                    t69 = *(int *)0xC2A6690;
                                    t70 = *(int *)(((int)stk + 12));
                                    t71 = *(int *)(((((((unsigned short)t59 << 1) + (unsigned short)t59) << 2) + t69) + 0x8));
                                    t72 = *(short *)((((t70 << 1) + (t71 + 0x4)) + 0x0));
                                    t77 = (unsigned short)t72;
                                    if ((unsigned short)t72 == 0) {
                                        t73 = *(int *)(((int)stk + 12));
                                        t74 = *(int *)(((((((unsigned short)t59 << 1) + (unsigned short)t59) << 2) + t69) + 0x8));
                                        t75 = *(short *)(((((0x1 & (t73 + 0x1)) << 1) + (t74 + 0x4)) + 0x0));
                                        t77 = (unsigned short)t75;
                                    }
                                    t79 = *(int *)((((((t77 << 1) + t77) << 2) + t69) + 0x0));
                                    t80 = *(int *)((((((t77 << 1) + t77) << 2) + t69) + 0x4));
                                    t81 = *(int *)((t80 + 0x0));
                                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                                    t82 = getNearLineIndex(a4, t79, t81, (((int)stk + 4) + 0x4), a8);
                                    u84 = u66;
                                    if (u66 > t82) {
                                        *(unsigned int *)((a6 + 0x0)) = t77;
                                        t83 = *(int *)(((int)stk + 8));
                                        *(unsigned int *)((a7 + 0x0)) = t83;
                                        u84 = t82;
                                    }
                                    u87 = u84;
                                }
                                u91 = u87;
                            }
                            u115 = u91;
                        } else {
                            t92 = *(int *)(((int)stk + 20));
                            t93 = *(int *)(((int)stk + 16));
                            u112 = t6;
                            if ((int)t93 > (int)(t92 - 8)) {
                                t94 = *(int *)0xC2A6690;
                                t95 = *(int *)(((int)stk + 12));
                                t96 = *(int *)((((((t8 << 1) + t8) << 2) + t94) + 0x8));
                                t97 = *(short *)((((t95 << 1) + (t96 + 0x4)) + 0x0));
                                t102 = (unsigned short)t97;
                                if ((unsigned short)t97 == 0) {
                                    t98 = *(int *)(((int)stk + 12));
                                    t99 = *(int *)((((((t8 << 1) + t8) << 2) + t94) + 0x8));
                                    t100 = *(short *)(((((0x1 & (t98 + 0x1)) << 1) + (t99 + 0x4)) + 0x0));
                                    t102 = (unsigned short)t100;
                                }
                                t104 = *(int *)((((((t102 << 1) + t102) << 2) + t94) + 0x0));
                                t105 = *(int *)((((((t102 << 1) + t102) << 2) + t94) + 0x4));
                                t106 = *(int *)((t105 + 0x0));
                                *(unsigned int *)(((int)stk + 8)) = 0x0;
                                t107 = getNearLineIndex(a4, t104, t106, (((int)stk + 4) + 0x4), a8);
                                u109 = t6;
                                if (t6 > t107) {
                                    *(unsigned int *)((a6 + 0x0)) = t102;
                                    t108 = *(int *)(((int)stk + 8));
                                    *(unsigned int *)((a7 + 0x0)) = t108;
                                    u109 = t107;
                                }
                                u112 = u109;
                            }
                            u115 = u112;
                        }
                        u118 = u115;
                    }
                    u121 = u118;
                }
                u189 = u121;
            } else {
                t122 = t4;
                t123 = t8;
                u124 = t6;
                u125 = f4;
                u126 = t6;
                for (;;) {
                    t127 = *(int *)(((int)stk + 8));
                    if (t127 != 0) break;
                    t128 = *(int *)0xC2A6690;
                    t129 = *(int *)((((((t123 << 1) + t123) << 2) + t128) + 0x8));
                    t130 = *(short *)((t129 + 0x8));
                    t132 = t123;
                    t123 = (unsigned short)t130;
                    if (t123 != t132) {
                        t133 = *(int *)0xC2A6690;
                        t134 = *(int *)((((((t123 << 1) + t123) << 2) + t133) + 0x4));
                        t122 = t134;
                        t135 = *(int *)((((((t123 << 1) + t123) << 2) + t133) + 0x0));
                        t136 = *(int *)((t122 + 0x0));
                        t122 = t136;
                        *(unsigned int *)(((int)stk + 8)) = (t122 - 1);
                        t137 = getNearLineIndex(a4, t135, t122, (((int)stk + 4) + 0x4), a8);
                        u124 = t137;
                        u125 = u124;
                        if (u126 > u125) {
                            u126 = u125;
                            *(unsigned int *)((a6 + 0x0)) = t123;
                            t138 = *(int *)(((int)stk + 8));
                            *(unsigned int *)((a7 + 0x0)) = t138;
                        }
                        continue;
                    }
                    for (;;) {
                        t139 = *(int *)(((int)stk + 8));
                        t122 = (t122 - 1);
                        if (t139 != t122) {
                            u124 = u126;
                            return u124;
                        }
                        t140 = *(int *)0xC2A6690;
                        t141 = *(int *)(((int)stk + 12));
                        t142 = (((t123 << 1) + t123) << 2);
                        t144 = t123;
                        t123 = t141;
                        t145 = *(int *)(((t142 + t140) + 0x8));
                        t123 = (t123 << 1);
                        t123 = (t123 + (t145 + 0x4));
                        t146 = *(short *)((t123 + 0x0));
                        t123 = t146;
                        t123 = (unsigned short)t123;
                        if (t123 == 0) {
                            t147 = *(int *)0xC2A6690;
                            t148 = *(int *)((((((t144 << 1) + t144) << 2) + t147) + 0x8));
                            t123 = 0x1;
                            t149 = *(int *)(((int)stk + 12));
                            t123 = (t123 & (t149 + 0x1));
                            *(unsigned int *)(((int)stk + 12)) = (t149 + 0x1);
                            t123 = (t123 << 1);
                            t123 = (t123 + (t148 + 0x4));
                            t150 = *(short *)((t123 + 0x0));
                            t123 = t150;
                            t123 = (unsigned short)t123;
                        }
                        if (t123 == t144) break;
                        t154 = *(int *)0xC2A6690;
                        t155 = *(int *)((((((t123 << 1) + t123) << 2) + t154) + 0x4));
                        t122 = t155;
                        t156 = *(int *)((((((t123 << 1) + t123) << 2) + t154) + 0x0));
                        t157 = *(int *)((t122 + 0x0));
                        t122 = t157;
                        *(unsigned int *)(((int)stk + 8)) = 0x0;
                        t158 = getNearLineIndex(a4, t156, t122, (((int)stk + 4) + 0x4), a8);
                        u124 = t158;
                        u125 = u124;
                        if (u126 > u125) {
                            u126 = u125;
                            *(unsigned int *)((a6 + 0x0)) = t123;
                            t159 = *(int *)(((int)stk + 8));
                            *(unsigned int *)((a7 + 0x0)) = t159;
                        }
                    }
                    u124 = u126;
                    return u124;
                }
                t160 = t122;
                t161 = t123;
                u162 = u124;
                u163 = u125;
                u164 = u126;
                for (;;) {
                    t165 = *(int *)(((int)stk + 8));
                    t160 = (t160 - 1);
                    if (t165 != t160) {
                        u162 = u164;
                        return u162;
                    }
                    t166 = *(int *)0xC2A6690;
                    t167 = *(int *)(((int)stk + 12));
                    t168 = (((t161 << 1) + t161) << 2);
                    t170 = t161;
                    t161 = t167;
                    t171 = *(int *)(((t168 + t166) + 0x8));
                    t161 = (t161 << 1);
                    t161 = (t161 + (t171 + 0x4));
                    t172 = *(short *)((t161 + 0x0));
                    t161 = t172;
                    t161 = (unsigned short)t161;
                    if (t161 == 0) {
                        t173 = *(int *)0xC2A6690;
                        t174 = *(int *)((((((t170 << 1) + t170) << 2) + t173) + 0x8));
                        t161 = 0x1;
                        t175 = *(int *)(((int)stk + 12));
                        t161 = (t161 & (t175 + 0x1));
                        *(unsigned int *)(((int)stk + 12)) = (t175 + 0x1);
                        t161 = (t161 << 1);
                        t161 = (t161 + (t174 + 0x4));
                        t176 = *(short *)((t161 + 0x0));
                        t161 = t176;
                        t161 = (unsigned short)t161;
                    }
                    if (t161 == t170) break;
                    t180 = *(int *)0xC2A6690;
                    t181 = *(int *)((((((t161 << 1) + t161) << 2) + t180) + 0x4));
                    t160 = t181;
                    t182 = *(int *)((((((t161 << 1) + t161) << 2) + t180) + 0x0));
                    t183 = *(int *)((t160 + 0x0));
                    t160 = t183;
                    *(unsigned int *)(((int)stk + 8)) = 0x0;
                    t184 = getNearLineIndex(a4, t182, t160, (((int)stk + 4) + 0x4), a8);
                    u162 = t184;
                    u163 = u162;
                    if (u164 > u163) {
                        u164 = u163;
                        *(unsigned int *)((a6 + 0x0)) = t161;
                        t185 = *(int *)(((int)stk + 8));
                        *(unsigned int *)((a7 + 0x0)) = t185;
                    }
                }
                u189 = u164;
            }
            u193 = u189;
        }
        u197 = u193;
    }
    return u197;
}

int replay(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u6;
    float u7;
    float u8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t19;
    int t64;
    int t20;
    int t62;
    int t21;
    int t26;
    int t27;
    int t60;
    int t28;
    int t29;
    int t55;
    int t30;
    int t31;
    int t53;
    int t32;
    int t51;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t56;
    int t65;
    int t66;
    float u67;
    float u68;
    float u69;
    int t70;
    int t71;
    int t74;
    int t75;
    int t78;
    int t79;
    int t81;
    int t82;
    int t84;
    int t85;
    int t86;
    int t88;
    int t92;
    int t93;
    float u94;
    float u95;
    float u96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t102;
    int t103;
    int t110;
    int t58;

    if (a4 != 0) {
        t0 = *(int *)0xC2A62A0;
        if (a4 != 5) {
            *(unsigned int *)0xC2A629C = a4;
        } else {
            t1 = *(int *)0xC2A629C;
            if (t1 == 1) {
                *(unsigned int *)0xC2A62A0 = 0x0;
            } else {
                t2 = *(int *)0xC2A629C;
                if (t2 != 3) {
                    t3 = *(int *)0xC2A629C;
                    if (t3 == 4) {
                        t4 = *(int *)0xC2A62A0;
                        t5 = *(int *)0xC0F2B2C;
                        if ((int)t4 < (int)t5) {
                            u6 = *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x0));
                            *(float *)0xC1EE2F4 = u6;
                            u7 = *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x4));
                            *(float *)0xC1EE2F8 = u7;
                            u8 = *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x8));
                            *(float *)0xC1EE2FC = u8;
                            t9 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                            if (((short)((unsigned int)t9 >> 16) & 32) != 0) {
                                *(unsigned char *)0xC1EE267 = 0x1;
                            } else {
                                *(unsigned char *)0xC1EE267 = 0x0;
                            }
                            t10 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                            if (((short)((unsigned int)t10 >> 16) & 16) != 0) {
                                *(unsigned char *)0xC1EE268 = 0x1;
                            } else {
                                *(unsigned char *)0xC1EE268 = 0x0;
                            }
                            t11 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                            if ((t11 & 32) != 0) {
                                *(unsigned char *)0xC1EE26B = 0x1;
                            } else {
                                *(unsigned char *)0xC1EE26B = 0x0;
                            }
                            t12 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                            if ((t12 & 16) != 0) {
                                *(unsigned char *)0xC1EE26C = 0x1;
                            } else {
                                *(unsigned char *)0xC1EE26C = 0x0;
                            }
                            extRand();
                            t14 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x10));
                            t15 = *(int *)0xC2A62A0;
                            *(unsigned int *)0xC2A62A0 = (t15 + 0x1);
                        }
                    } else {
                        if (t3 == 2) {
                            t19 = *(int *)0xC1EE234;
                            t64 = 0x0;
                            if (t19 == 1) {
                                t20 = *(int *)0xC2A4E50;
                                t62 = 0x0;
                                if (t20 == 0) {
                                    t21 = *(int *)0xC2A62A0;
                                    if (t21 == 0) {
                                        *(unsigned int *)0xC0F2B30 = 0xFFFFFFFF;
                                        *(unsigned int *)0xC0F2B34 = 0xB4;
                                        *(unsigned int *)0xC0F2B38 = 0xFFFFFFFF;
                                    }
                                    t26 = *(int *)0xC0F2B30;
                                    t27 = 0x0;
                                    if ((int)t26 < 0) {
                                        t27 = 0x1;
                                    }
                                    t60 = 0x2;
                                    if ((int)t26 < (int)0xB) {
                                        t28 = *(int *)0xC0F2B34;
                                        if (t28 == 0) {
                                            t29 = *(int *)0xC0F2B38;
                                            t55 = 0x2;
                                            if (t29 != -1) {
                                                t30 = *(int *)0xC0F2B38;
                                                t31 = CheckKyakuArea(0xC179144, t30);
                                                t53 = 0x2;
                                                if (t31 != 0) {
                                                    t32 = *(int *)0xC0F2B30;
                                                    *(unsigned int *)0xC0F2B30 = (t32 + 0x1);
                                                    t51 = 0x2;
                                                    if ((int)(t32 + 0x1) < (int)0xB) {
                                                        t33 = *(int *)0xC0F2B30;
                                                        t34 = *(int *)0xC1EE20C;
                                                        t35 = 0xC0F3A40;
                                                        if (t34 == 0) {
                                                            t35 = 0xC0F3540;
                                                        }
                                                        t36 = *(int *)0xC2A62A0;
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x0)) = t36;
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x4)) = 0x0;
                                                        t37 = *(int *)0xC0F2B30;
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x8)) = (t37 + 0x28);
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0xC)) = 0x4;
                                                        t38 = *(int *)0xC0F2B30;
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x10)) = (t38 + 0x17);
                                                        t39 = *(int *)0xC0F2B38;
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x14)) = t39;
                                                        t40 = nlRand();
                                                        t41 = (int)((int)t40 % (int)0x3);
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x18)) = t41;
                                                        *(unsigned int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x1C)) = 0x3039;
                                                        t42 = *(int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x8));
                                                        t43 = *(int *)0xC2A62A8;
                                                        t44 = *(int *)0xC179488;
                                                        *(unsigned int *)((((t42 * 0x3C0) + t43) + 0x0)) = t44;
                                                        t45 = *(int *)(((t35 + (((t33 << 2) << 2) << 1)) + 0x8));
                                                        t46 = *(int *)0xC2A62A8;
                                                        FUN_0c081268();
                                                        *(unsigned int *)0xC0F2B34 = 0x12C;
                                                        *(unsigned int *)0xC0F2B38 = 0xFFFFFFFF;
                                                        t51 = 0x0;
                                                    }
                                                    t53 = t51;
                                                }
                                                t55 = t53;
                                            }
                                            t58 = t55;
                                        } else {
                                            t56 = *(int *)0xC0F2B34;
                                            *(unsigned int *)0xC0F2B34 = (t56 - 1);
                                            t58 = t27;
                                        }
                                        t60 = t58;
                                    }
                                    t62 = t60;
                                }
                                t64 = t62;
                            }
                            t65 = *(int *)0xC2A62A0;
                            t66 = *(int *)0xC0F2B2C;
                            if ((int)t65 < (int)t66) {
                                if (t64 == 0) {
                                    u67 = *(float *)0xC1EE2F4;
                                    *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x0)) = u67;
                                    u68 = *(float *)0xC1EE2F8;
                                    *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x4)) = u68;
                                    u69 = *(float *)0xC1EE2FC;
                                    *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x8)) = u69;
                                    *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC)) = 0x0;
                                    t70 = *(signed char *)0xC1EE267;
                                    if (t70 != 0) {
                                        t71 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                                        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC)) = (t71 | 0x200000);
                                    }
                                    t74 = *(signed char *)0xC1EE268;
                                    if (t74 != 0) {
                                        t75 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                                        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC)) = (t75 | 0x100000);
                                    }
                                    t78 = *(signed char *)0xC1EE26B;
                                    if (t78 != 0) {
                                        t79 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                                        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC)) = (t79 | 0x20);
                                    }
                                    t81 = *(signed char *)0xC1EE26C;
                                    if (t81 != 0) {
                                        t82 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                                        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC)) = (t82 | 0x10);
                                    }
                                    t84 = extRand();
                                    *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x10)) = t84;
                                    t85 = *(int *)0xC2A62A0;
                                    *(unsigned int *)0xC2A62A0 = (t85 + 0x1);
                                } else {
                                    if (t64 == 1) {
                                        t86 = *(int *)0xC2A62A0;
                                        *(unsigned int *)0xC2A62A0 = (t86 + 0x1);
                                    }
                                }
                            } else {
                                if (t64 == 1) {
                                    t88 = *(int *)0xC2A62A0;
                                    *(unsigned int *)0xC2A62A0 = (t88 + 0x1);
                                }
                            }
                        }
                    }
                } else {
                    t92 = *(int *)0xC2A62A0;
                    t93 = *(int *)0xC0F2B2C;
                    if ((int)t92 < (int)t93) {
                        u94 = *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x0));
                        *(float *)0xC1EE2F4 = u94;
                        u95 = *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x4));
                        *(float *)0xC1EE2F8 = u95;
                        u96 = *(float *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x8));
                        *(float *)0xC1EE2FC = u96;
                        t97 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                        if (((short)((unsigned int)t97 >> 16) & 32) != 0) {
                            *(unsigned char *)0xC1EE267 = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE267 = 0x0;
                        }
                        t98 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                        if (((short)((unsigned int)t98 >> 16) & 16) != 0) {
                            *(unsigned char *)0xC1EE268 = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE268 = 0x0;
                        }
                        t99 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                        if ((t99 & 32) != 0) {
                            *(unsigned char *)0xC1EE26B = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE26B = 0x0;
                        }
                        t100 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0xC));
                        if ((t100 & 16) != 0) {
                            *(unsigned char *)0xC1EE26C = 0x1;
                        } else {
                            *(unsigned char *)0xC1EE26C = 0x0;
                        }
                        extRand();
                        t102 = *(int *)((((((t0 << 2) + t0) << 2) + 0xC30C000) + 0x10));
                        t103 = *(int *)0xC2A62A0;
                        *(unsigned int *)0xC2A62A0 = (t103 + 0x1);
                    }
                }
            }
        }
    }
    t110 = *(int *)0xC2A629C;
    return t110;
}

int FUN_0c04c104(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t7;
    int t9;
    int t11;
    int t14;
    int t13;
    int t15;
    int t16;
    int t17;
    int t19;
    int t18;
    int t20;
    int t21;
    int t22;
    int t24;
    int t26;
    int t25;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t33;
    int t35;
    int t34;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t43;
    int t42;
    int t44;
    int t45;
    int t47;
    int t49;
    int t48;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t57;
    int t59;
    int t60;
    int t61;
    int t62;
    int t64;
    int t66;
    int t67;
    int t69;
    int t71;
    int t73;
    int t75;
    int t74;
    int t76;
    int t77;

    *(unsigned int *)0xC1790C8 = 0x1;
    t0 = *(int *)0xC1EE20C;
    t1 = *(int *)0xC1EE33C;
    t2 = *(int *)0xC1EE228;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        if (a6 != 4) {
            if (a6 != 5) {
                if (a6 != 7) {
                    if (a6 != 8) {
                        if (a6 == 9) {
                            t3 = *(int *)((a5 + 0x0));
                            if ((int)t1 < (int)(t3 - 60)) {
                                return a6;
                            }
                            FUN_0c04c0dc(0xC0F4458, 0x0);
                            return FUN_0c04c0dc(0xC0F4468, 0x1);
                        }
                        if (a6 == 10) {
                            t5 = *(int *)((a5 + 0x0));
                            if ((int)t1 < (int)(t5 - 40)) {
                                return a6;
                            }
                            FUN_0c04c0dc(0xC0F4478, 0x0);
                            return FUN_0c04c0dc(0xC0F4484, 0x1);
                        }
                        if (a6 == 14) {
                            t7 = *(int *)((a5 + 0x0));
                            if ((int)t1 < (int)(t7 - 60)) {
                                return a6;
                            }
                            FUN_0c04c0dc(0xC0F4490, 0x0);
                            return FUN_0c04c0dc(0xC0F4498, 0x1);
                        }
                        if (a6 == 18) {
                            t9 = *(int *)((a5 + 0x0));
                            if ((int)t1 >= (int)(t9 - 60)) {
                                FUN_0c04c0dc(0xC0F44A8, 0x0);
                                return FUN_0c04c0dc(0xC0F44B8, 0x1);
                            }
                            return a6;
                        }
                        if (a6 == 19) {
                            t11 = *(int *)((a5 + 0x0));
                            t14 = a6;
                            if ((int)t1 >= (int)(t11 - 120)) {
                                FUN_0c04c0dc(0xC0F44E0, 0x0);
                                t13 = FUN_0c04c0dc(0xC0F44EC, 0x1);
                                t14 = t13;
                            }
                            t15 = *(int *)((a5 + 0x0));
                            t16 = *(int *)0xC1EE33C;
                            if ((int)t16 >= (int)(t15 - 60)) {
                                return FUN_0c04c0dc(0xC0F4500, 0x0);
                            }
                            return t14;
                        }
                        if (a6 == 20) {
                            t17 = *(int *)((a5 + 0x0));
                            t19 = a6;
                            if ((int)t1 >= (int)(t17 - 120)) {
                                t18 = FUN_0c04c0dc(0xC0F4500, 0x0);
                                t19 = t18;
                            }
                            t20 = *(int *)((a5 + 0x0));
                            t21 = *(int *)0xC1EE33C;
                            if ((int)t21 >= (int)(t20 - 60)) {
                                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                                return FUN_0c04c0dc(0xC0F4510, 0x1);
                            }
                            return t19;
                        }
                        if (a6 == 21) {
                            t22 = *(int *)((a5 + 0x0));
                            if ((int)t1 >= (int)(t22 - 60)) {
                                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                                FUN_0c04c0dc(0xC0F44C8, 0x0);
                                return FUN_0c04c0dc(0xC0F44D4, 0x1);
                            }
                            return a6;
                        }
                        if (a6 == 25) {
                            t24 = *(int *)((a5 + 0x0));
                            t26 = a6;
                            if ((int)t1 >= (int)(t24 - 60)) {
                                t25 = FUN_0c04c0dc(0xC0F453C, 0x0);
                                t26 = t25;
                            }
                            t27 = *(int *)((a5 + 0x0));
                            t28 = *(int *)0xC1EE33C;
                            if ((int)t28 >= (int)(t27 - 90)) {
                                return FUN_0c04c0dc(0xC0F452C, 0x0);
                            }
                            return t26;
                        }
                        if (a6 == 30) {
                            t29 = *(int *)((a5 + 0x0));
                            t30 = *(int *)0xC1EE33C;
                            if ((int)t30 >= (int)(t29 - 90)) {
                                return FUN_0c04c0dc(0xC0F452C, 0x0);
                            }
                            return a6;
                        }
                        if (a6 == 31) {
                            t31 = *(int *)((a5 + 0x0));
                            if ((int)t1 >= (int)(t31 - 60)) {
                                FUN_0c04c0dc(0xC0F4548, 0x0);
                                return FUN_0c04c0dc(0xC0F455C, 0x1);
                            }
                            return a6;
                        }
                        return a6;
                    }
                    if (t2 != 2) {
                        return t2;
                    }
                    t33 = *(int *)((a5 + 0x0));
                    t35 = (t33 - 60);
                    if ((int)t1 >= (int)(t33 - 60)) {
                        t34 = FUN_0c04c0dc(0xC0F443C, 0x0);
                        t35 = t34;
                    }
                    t36 = *(int *)((a5 + 0x0));
                    t37 = *(int *)0xC1EE33C;
                    if ((int)t37 < (int)(t36 - 30)) {
                        return t35;
                    }
                    return FUN_0c04c0dc(0xC0F4448, 0x1);
                }
                t38 = *(int *)((a5 + 0x0));
                if ((int)t1 < (int)(t38 - 60)) {
                    return a6;
                }
                return FUN_0c04c0dc(0xC0F442C, 0x0);
            }
            t39 = *(int *)((a5 + 0x0));
            if ((int)t1 >= (int)(t39 - 40)) {
                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
            }
            return a6;
        }
        t40 = *(int *)((a5 + 0x0));
        t43 = (t40 - 180);
        if ((int)t1 >= (int)(t40 - 180)) {
            *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
            FUN_0c04c0dc(0xC0F43EC, 0x0);
            t42 = FUN_0c04c0dc(0xC0F43F4, 0x1);
            t43 = t42;
        }
        t44 = *(int *)((a5 + 0x0));
        t45 = *(int *)0xC1EE33C;
        if ((int)t45 < (int)(t44 - 120)) {
            return t43;
        }
        FUN_0c04c0dc(0xC0F4404, 0x0);
        return FUN_0c04c0dc(0xC0F4418, 0x1);
    }
    if (a6 != 6) {
        if (a6 != 8) {
            if (a6 != 9) {
                if (a6 != 10) {
                    if (a6 == 11) {
                        t47 = *(int *)((a5 + 0x0));
                        t49 = (t47 - 160);
                        if ((int)t1 >= (int)(t47 - 160)) {
                            *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                            t48 = FUN_0c04c0dc(0xC0F430C, 0x0);
                            t49 = t48;
                        }
                        t50 = *(int *)((a5 + 0x0));
                        t51 = *(int *)0xC1EE33C;
                        if ((int)t51 < (int)(t50 - 90)) {
                            return t49;
                        }
                        return FUN_0c04c0dc(0xC0F4330, 0x0);
                    }
                    if (a6 == 12) {
                        t52 = *(int *)((a5 + 0x0));
                        t53 = (t52 - 150);
                        if ((int)t1 < (int)(t52 - 150)) {
                            *(unsigned int *)0xC1790C8 = 0x2;
                            t53 = 0x2;
                        }
                        t54 = *(int *)((a5 + 0x0));
                        t55 = *(int *)0xC1EE33C;
                        if ((int)t55 < (int)(t54 - 60)) {
                            return t53;
                        }
                        FUN_0c04c0dc(0xC0F4340, 0x0);
                        return FUN_0c04c0dc(0xC0F4348, 0x1);
                    }
                    if (a6 == 21) {
                        t57 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t57 - 120)) {
                            return a6;
                        }
                        FUN_0c04c0dc(0xC0F4354, 0x0);
                        return FUN_0c04c0dc(0xC0F4368, 0x1);
                    }
                    if (a6 == 22) {
                        if (t2 != 2) {
                            return t2;
                        }
                        t59 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t59 - 60)) {
                            return (t59 - 60);
                        }
                        return FUN_0c04c0dc(0xC0F4370, 0x0);
                    }
                    if (a6 == 23) {
                        t60 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t60 - 60)) {
                            return a6;
                        }
                        return FUN_0c04c0dc(0xC0F4380, 0x0);
                    }
                    if (a6 == 24) {
                        t61 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t61 - 60)) {
                            return a6;
                        }
                        return FUN_0c04c0dc(0xC0F438C, 0x0);
                    }
                    if (a6 == 25) {
                        t62 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t62 - 60)) {
                            return a6;
                        }
                        FUN_0c04c0dc(0xC0F43A0, 0x0);
                        return FUN_0c04c0dc(0xC0F43B4, 0x1);
                    }
                    if (a6 == 27) {
                        t64 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t64 - 60)) {
                            return a6;
                        }
                        FUN_0c04c0dc(0xC0F43C0, 0x0);
                        return FUN_0c04c0dc(0xC0F43D0, 0x1);
                    }
                    if (a6 == 28) {
                        t66 = *(int *)((a5 + 0x0));
                        if ((int)t1 < (int)(t66 - 120)) {
                            return a6;
                        }
                        return FUN_0c04c0dc(0xC0F43E0, 0x0);
                    }
                    return a6;
                }
                t67 = *(int *)((a5 + 0x0));
                if ((int)t1 < (int)(t67 - 195)) {
                    return (t67 - 195);
                }
                *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
                FUN_0c04c0dc(0xC0F42D8, 0x0);
                return FUN_0c04c0dc(0xC0F42F4, 0x1);
            }
            t69 = *(int *)((a5 + 0x0));
            if ((int)t1 < (int)(t69 - 120)) {
                return a6;
            }
            FUN_0c04c0dc(0xC0F42C0, 0x0);
            return FUN_0c04c0dc(0xC0F42CC, 0x1);
        }
        t71 = *(int *)((a5 + 0x0));
        if ((int)t1 < (int)(t71 - 30)) {
            return a6;
        }
        FUN_0c04c0dc(0xC0F42AC, 0x0);
        return FUN_0c04c0dc(0xC0F42B8, 0x1);
    }
    t73 = *(int *)((a5 + 0x0));
    t75 = a6;
    if ((int)t1 >= (int)(t73 - 120)) {
        t74 = FUN_0c04c0dc(0xC0F4280, 0x0);
        t75 = t74;
    }
    t76 = *(int *)((a5 + 0x0));
    t77 = *(int *)0xC1EE33C;
    if ((int)t77 < (int)(t76 - 60)) {
        return t75;
    }
    *(unsigned int *)0xC1790C8 = 0xFFFFFFFF;
    return FUN_0c04c0dc(0xC0F429C, 0x1);
}

int Put_Course_Obj_Dist(void)
{
    float t0;
    int t4;
    int t6;
    int t12;
    int t14;
    int t17;
    int t18;

    t0 = nlLength(0xC0C83F0, 0xC179840);
    if (1500.0f > t0) {
        nlPushUnitMatrix();
        nlTranslateV(0xC0C83F0);
        nlTranslate(12.0f, 7.0f, -23.0f);
        t4 = *(short *)0xC0C8408;
        nlRotateAY((unsigned short)t4);
        t6 = *(int *)0xC118948;
        FcvPlay(0xC9EFE54, 0xE, (float)t6);
        nlPopMatrix(0x1);
        nlPushUnitMatrix();
        nlTranslateV(0xC0C83FC);
        nlTranslate(-285.0f, 0.0f, -118.0f);
        t12 = *(short *)0xC0C840A;
        nlRotateAY((unsigned short)t12);
        t14 = *(int *)0xC118948;
        FcvPlay(0xC9F173C, 0xF, (float)t14);
        nlPopMatrix(0x1);
    }
    t17 = *(int *)0xC118948;
    t18 = (int)((int)(t17 + 0x1) % (int)0x2710);
    *(unsigned int *)0xC118948 = t18;
    return t18;
}

int pedInit(int a4, int a5)
{
    int t0;
    int t29;
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t12;
    int t13;
    int t16;
    int t17;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t30;
    int t31;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t41;
    int t42;
    int t45;
    int t46;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t18;
    int t14;
    int t10;
    int t47;
    int t43;
    int t39;

    t0 = *(int *)0xC1EE20C;
    if (t0 != 0) {
        t29 = t0;
        if (t0 == 1) {
            t1 = nlRand();
            t2 = (int)((int)t1 % (int)0x2);
            *(unsigned int *)((a4 + 0x1C)) = t2;
            if (t2 == 0) {
                *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
            }
            t4 = *(int *)0xC2A71F4;
            *(unsigned int *)((a4 + 0x24)) = t4;
            t5 = *(int *)0xC1EE20C;
            if (t5 == 0) {
                if ((int)a5 >= (int)0xA1) {
                    if ((int)a5 <= (int)0xB6) {
                        t6 = nlRand();
                        t7 = (int)((int)t6 % (int)0x4);
                        t10 = (t7 + 0xC);
                    } else {
                        t8 = *(int *)0xC2A71F4;
                        t9 = (int)((int)(t8 + 0x1) % (int)0x9);
                        t10 = t9;
                    }
                    t14 = t10;
                } else {
                    t12 = *(int *)0xC2A71F4;
                    t13 = (int)((int)(t12 + 0x1) % (int)0x9);
                    t14 = t13;
                }
                t18 = t14;
            } else {
                t16 = *(int *)0xC2A71F4;
                t17 = (int)((int)(t16 + 0x1) % (int)0x9);
                t18 = t17;
            }
            *(unsigned int *)0xC2A71F4 = t18;
            pedPickIdle(a4);
            *(unsigned int *)((a4 + 0x20)) = 0x0;
            t21 = *(int *)0xC12FF08;
            *(unsigned int *)(((a4 + 0x2C) + 0x8)) = t21;
            t22 = *(int *)0xC12FF04;
            *(unsigned int *)(((a4 + 0x2C) + 0x4)) = t22;
            t23 = *(int *)0xC12FF00;
            *(unsigned int *)(((a4 + 0x2C) + 0x0)) = t23;
            *(unsigned short *)((a4 + 0x38)) = 0x0;
            *(float *)((a4 + 0x3C)) = 0.0f;
            t24 = *(int *)0xC12FF08;
            *(unsigned int *)(((a4 + 0x40) + 0x8)) = t24;
            t25 = *(int *)0xC12FF04;
            *(unsigned int *)(((a4 + 0x40) + 0x4)) = t25;
            t26 = *(int *)0xC12FF00;
            *(unsigned int *)(((a4 + 0x40) + 0x0)) = t26;
            *(unsigned int *)((a4 + 0x4C)) = 0x0;
            *(unsigned int *)((a4 + 0x50)) = 0x1;
            t27 = *(int *)0xC1EE20C;
            if (t27 == 1) {
                t28 = FUN_0c0500d8(a5);
                if (t28 != 0) {
                    *(unsigned short *)((a4 + 0x60)) = 0x1;
                } else {
                    *(unsigned short *)((a4 + 0x60)) = 0x0;
                }
            } else {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
            t29 = 0x60;
        }
        t58 = t29;
    } else {
        t30 = nlRand();
        t31 = (int)((int)t30 % (int)0x2);
        *(unsigned int *)((a4 + 0x1C)) = t31;
        if (t31 == 0) {
            *(unsigned int *)((a4 + 0x1C)) = 0xFFFFFFFF;
        }
        t33 = *(int *)0xC2A71F4;
        *(unsigned int *)((a4 + 0x24)) = t33;
        t34 = *(int *)0xC1EE20C;
        if (t34 == 0) {
            if ((int)a5 >= (int)0xA1) {
                if ((int)a5 <= (int)0xB6) {
                    t35 = nlRand();
                    t36 = (int)((int)t35 % (int)0x4);
                    t39 = (t36 + 0xC);
                } else {
                    t37 = *(int *)0xC2A71F4;
                    t38 = (int)((int)(t37 + 0x1) % (int)0x9);
                    t39 = t38;
                }
                t43 = t39;
            } else {
                t41 = *(int *)0xC2A71F4;
                t42 = (int)((int)(t41 + 0x1) % (int)0x9);
                t43 = t42;
            }
            t47 = t43;
        } else {
            t45 = *(int *)0xC2A71F4;
            t46 = (int)((int)(t45 + 0x1) % (int)0x9);
            t47 = t46;
        }
        *(unsigned int *)0xC2A71F4 = t47;
        pedPickIdle(a4);
        *(unsigned int *)((a4 + 0x20)) = 0x0;
        t50 = *(int *)0xC12FF08;
        *(unsigned int *)(((a4 + 0x2C) + 0x8)) = t50;
        t51 = *(int *)0xC12FF04;
        *(unsigned int *)(((a4 + 0x2C) + 0x4)) = t51;
        t52 = *(int *)0xC12FF00;
        *(unsigned int *)(((a4 + 0x2C) + 0x0)) = t52;
        *(unsigned short *)((a4 + 0x38)) = 0x0;
        *(float *)((a4 + 0x3C)) = 0.0f;
        t53 = *(int *)0xC12FF08;
        *(unsigned int *)(((a4 + 0x40) + 0x8)) = t53;
        t54 = *(int *)0xC12FF04;
        *(unsigned int *)(((a4 + 0x40) + 0x4)) = t54;
        t55 = *(int *)0xC12FF00;
        *(unsigned int *)(((a4 + 0x40) + 0x0)) = t55;
        *(unsigned int *)((a4 + 0x4C)) = 0x0;
        *(unsigned int *)((a4 + 0x50)) = 0x1;
        t56 = *(int *)0xC1EE20C;
        if (t56 == 1) {
            t57 = FUN_0c0500d8(a5);
            if (t57 != 0) {
                *(unsigned short *)((a4 + 0x60)) = 0x1;
            } else {
                *(unsigned short *)((a4 + 0x60)) = 0x0;
            }
        } else {
            *(unsigned short *)((a4 + 0x60)) = 0x0;
        }
        t58 = 0x60;
    }
    return t58;
}

int Put_Max_Combo(void)
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
    int t15;
    int t13;
    int t14;
    int t18;
    int t56;
    int t57;
    int t19;
    int t20;
    int t39;
    int t40;
    int t21;
    int t34;
    int t35;
    int t22;
    int t29;
    int t30;
    int t23;
    int t24;
    int t25;
    int t41;
    int t50;
    int t51;
    int t42;
    int t47;
    int t48;
    int t43;
    int t44;
    int t45;
    int t62;
    int t63;
    float u102;
    float u103;
    int t64;
    int t65;
    float u84;
    float u85;
    int t66;
    float u79;
    float u80;
    int t67;
    float u74;
    float u75;
    int t68;
    float u69;
    float u70;
    int t86;
    float u95;
    float u96;
    int t87;
    float u92;
    float u93;
    int t88;
    float u89;
    float u90;
    int t105;
    int t108;
    int t109;
    int t110;
    int t113;
    int t116;
    int t117;
    int t119;
    int t53;
    int t54;
    float u98;
    float u99;
    int stk[13];

    t0 = *(int *)0xC0D09C0;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x8)) = t0;
    t1 = *(int *)0xC0D09BC;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x4)) = t1;
    t2 = *(int *)0xC0D09B8;
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t2;
    t3 = *(int *)0xC2A7614;
    if ((int)t3 > (int)0x3E7) {
        *(unsigned int *)0xC2A7614 = 0x3E7;
    }
    t4 = *(int *)0xC2A7614;
    t5 = (int)((int)t4 / (int)0x64);
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t5;
    t6 = *(int *)0xC2A7614;
    t7 = (int)((int)t6 / (int)0xA);
    t8 = (int)((int)t7 % (int)0xA);
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t8;
    *(unsigned int *)(((int)stk + 4)) = (((int)stk + 4) + 0x4);
    t9 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t10 = *(int *)0xC2A7614;
    t11 = (int)((int)(t10 - (t9 * 0x64)) % (int)0xA);
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t11;
    t12 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t15 = 0x0;
    if (t12 == 0) {
        t13 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
        t14 = 0x18;
        if (t13 == 0) {
            t14 = 0x30;
        }
        t15 = t14;
    }
    pfSetFont(0x0);
    t18 = *(int *)0xC1EE20C;
    t56 = 0xFFFFFF00;
    t57 = 0xFFFFFFFF;
    if (t18 == 2) {
        t19 = *(int *)0xC1EE214;
        if (t19 == 12) {
            t20 = *(int *)0xC2A7614;
            t39 = 0xFF0088FF;
            t40 = 0xFF88FFFF;
            if ((int)t20 < (int)0x1E) {
                t21 = *(int *)0xC1EE20C;
                t34 = 0xFFFFFF00;
                t35 = 0xFFFFFFFF;
                if (t21 == 2) {
                    t22 = *(int *)0xC1EE214;
                    t29 = 0xFFFFFF00;
                    t30 = 0xFFFFFFFF;
                    if (t22 == 4) {
                        t23 = *(int *)0xC2A7614;
                        t24 = 0xFFFFFF00;
                        t25 = 0xFFFFFFFF;
                        if ((int)t23 >= (int)0xF) {
                            t24 = 0xFF0088FF;
                            t25 = 0xFF88FFFF;
                        }
                        t29 = t24;
                        t30 = t25;
                    }
                    t34 = t29;
                    t35 = t30;
                }
                t39 = t34;
                t40 = t35;
            }
            t53 = t39;
            t54 = t40;
        } else {
            t41 = *(int *)0xC1EE20C;
            t50 = 0xFFFFFF00;
            t51 = 0xFFFFFFFF;
            if (t41 == 2) {
                t42 = *(int *)0xC1EE214;
                t47 = 0xFFFFFF00;
                t48 = 0xFFFFFFFF;
                if (t42 == 4) {
                    t43 = *(int *)0xC2A7614;
                    t44 = 0xFFFFFF00;
                    t45 = 0xFFFFFFFF;
                    if ((int)t43 >= (int)0xF) {
                        t44 = 0xFF0088FF;
                        t45 = 0xFF88FFFF;
                    }
                    t47 = t44;
                    t48 = t45;
                }
                t50 = t47;
                t51 = t48;
            }
            t53 = t50;
            t54 = t51;
        }
        t56 = t53;
        t57 = t54;
    }
    pfColor(t56, t57, t56, t57);
    pfSize(1.0f, 1.0f);
    pfLocate((float)(t15 + 0x1B4), 98.0f);
    pfPuts(0xC0D09C4);
    t62 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    *(unsigned int *)0xC2A88DC = (t62 + 0x50);
    *(float *)0xC2A88E0 = 564.0f;
    *(float *)0xC2A88E4 = 98.0f;
    t63 = *(int *)0xC1EE20C;
    u102 = 1.0f;
    u103 = 0.0f;
    if (t63 == 2) {
        t64 = *(int *)0xC1EE214;
        if (t64 == 12) {
            t65 = *(int *)0xC2A7614;
            u84 = 0.0f;
            u85 = 1.0f;
            if ((int)t65 < (int)0x1E) {
                t66 = *(int *)0xC1EE20C;
                u79 = 1.0f;
                u80 = 0.0f;
                if (t66 == 2) {
                    t67 = *(int *)0xC1EE214;
                    u74 = 1.0f;
                    u75 = 0.0f;
                    if (t67 == 4) {
                        t68 = *(int *)0xC2A7614;
                        u69 = 1.0f;
                        u70 = 0.0f;
                        if ((int)t68 >= (int)0xF) {
                            u69 = 0.0f;
                            u70 = 1.0f;
                        }
                        u74 = u69;
                        u75 = u70;
                    }
                    u79 = u74;
                    u80 = u75;
                }
                u84 = u79;
                u85 = u80;
            }
            u98 = u84;
            u99 = u85;
        } else {
            t86 = *(int *)0xC1EE20C;
            u95 = 1.0f;
            u96 = 0.0f;
            if (t86 == 2) {
                t87 = *(int *)0xC1EE214;
                u92 = 1.0f;
                u93 = 0.0f;
                if (t87 == 4) {
                    t88 = *(int *)0xC2A7614;
                    u89 = 1.0f;
                    u90 = 0.0f;
                    if ((int)t88 >= (int)0xF) {
                        u89 = 0.0f;
                        u90 = 1.0f;
                    }
                    u92 = u89;
                    u93 = u90;
                }
                u95 = u92;
                u96 = u93;
            }
            u98 = u95;
            u99 = u96;
        }
        u102 = u98;
        u103 = u99;
    }
    nlObjPutSetFadeColor(u102, 1.0f, u103);
    t105 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    if (t105 != 0) {
        nlSprPut(0xC2A88DC);
    }
    t108 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    if (t108 == 0) {
        t109 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
        if (t109 != 0) {
            t110 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
            *(unsigned int *)0xC2A88DC = (t110 + 0x50);
            *(float *)0xC2A88E0 = 586.0f;
            nlSprPut(0xC2A88DC);
        }
    } else {
        t113 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
        *(unsigned int *)0xC2A88DC = (t113 + 0x50);
        *(float *)0xC2A88E0 = 586.0f;
        nlSprPut(0xC2A88DC);
    }
    t116 = *(int *)(((int)stk + 4));
    t117 = *(int *)((t116 + 0x0));
    *(unsigned int *)0xC2A88DC = (t117 + 0x50);
    *(float *)0xC2A88E0 = 610.0f;
    nlSprPut(0xC2A88DC);
    t119 = ResetFadeColor();
    return t119;
}

int FUN_0c056ed8(void)
{
    int t0;
    int t1;
    int t2;
    int t13;
    int t3;
    int t12;
    int t4;
    int t8;
    int t9;
    int t11;
    int t10;
    int t14;
    int t15;
    int t16;
    int t27;
    int t17;
    int t26;
    int t18;
    int t22;
    int t23;
    int t25;
    int t24;
    int t28;

    t0 = *(int *)0xC2A760C;
    if (t0 == 2) {
        *(unsigned int *)0xC2A7F04 = 0x0;
        t1 = *(int *)0xC2A760C;
        if ((int)t1 >= (int)0x1) {
            t2 = *(int *)0xC1EE210;
            t13 = t2;
            if (t2 != 2) {
                t3 = GetMenuMode(0x1);
                t12 = t3;
                if (t3 == 0) {
                    t4 = *(int *)0xC2A8F68;
                    if (t4 == 1) {
                        Voice_ShutUp(0x0);
                        Voice_Request(0xC130B30, 0x0, 0x7F, 0x0);
                    }
                    t8 = *(int *)0xC2A8F68;
                    t9 = (int)((int)t8 % (int)0x3C);
                    t11 = t9;
                    if ((int)t9 < (int)0x1E) {
                        *(float *)0xC2A7EEC = 1.0f;
                        *(float *)0xC2A7EF0 = 1.0f;
                        *(unsigned int *)0xC2A7F10 = 0xA;
                        t10 = FUN_0c056ff8(0x5, 1.0f);
                        t11 = t10;
                    }
                    t12 = t11;
                }
                t13 = t12;
            }
            t14 = *(int *)0xC2A8F68;
            *(unsigned int *)0xC2A8F68 = (t14 + 0x1);
            if ((int)(t14 + 0x1) >= (int)0xB4) {
                return FUN_0c0532a4();
            }
            return t13;
        }
        return t0;
    }
    if (t0 == 1) {
        *(unsigned int *)0xC2A7F04 = 0x0;
        t15 = *(int *)0xC2A760C;
        if ((int)t15 >= (int)0x1) {
            t16 = *(int *)0xC1EE210;
            t27 = t16;
            if (t16 != 2) {
                t17 = GetMenuMode(0x1);
                t26 = t17;
                if (t17 == 0) {
                    t18 = *(int *)0xC2A8F68;
                    if (t18 == 1) {
                        Voice_ShutUp(0x0);
                        Voice_Request(0xC130B30, 0x0, 0x7F, 0x0);
                    }
                    t22 = *(int *)0xC2A8F68;
                    t23 = (int)((int)t22 % (int)0x3C);
                    t25 = t23;
                    if ((int)t23 < (int)0x1E) {
                        *(float *)0xC2A7EEC = 1.0f;
                        *(float *)0xC2A7EF0 = 1.0f;
                        *(unsigned int *)0xC2A7F10 = 0xA;
                        t24 = FUN_0c056ff8(0x2, 1.0f);
                        t25 = t24;
                    }
                    t26 = t25;
                }
                t27 = t26;
            }
            t28 = *(int *)0xC2A8F68;
            *(unsigned int *)0xC2A8F68 = (t28 + 0x1);
            if ((int)(t28 + 0x1) >= (int)0xB4) {
                return FUN_0c0532a4();
            }
            return t27;
        }
        return t0;
    }
    return FUN_0c0532a4();
}

int FUN_0c059866(void)
{
    int t0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t18;
    int t19;

    t0 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t0 + 0x5C);
    *(unsigned int *)0xC2A972C = 0xE;
    u1 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u1 + 1.0f);
    u2 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u2 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A9720 = 0x0;
    t3 = 0x24;
    t4 = 0x0;
    do {
        t5 = *(int *)0xC2A96F4;
        if ((int)t5 > (int)(((t4 << 2) << 1) - t4)) {
            if ((int)t5 <= (int)0x2A) {
                t3 = 0x7;
                t6 = (int)((int)t5 % (int)t3);
                t3 = t6;
                if (t3 == 0) {
                    t3 = 0x7;
                    t7 = (int)((int)t5 % (int)t3);
                    t3 = t7;
                    if (t3 == 0) {
                        if (t4 == 0) {
                            t8 = Sound_Request(0xA00A9, 0x0);
                            t3 = t8;
                            t9 = *(int *)0xC130DF0;
                            *(unsigned int *)0xC130DF0 = (t9 + 0x1);
                        }
                    }
                }
            }
            t3 = 0x4;
            *(float *)((0xC2A96F8 + t3)) = (float)((((t4 << 2) << 2) << 2) + 0x50);
            t3 = 0xC0D0D30;
            t14 = *(int *)(((t4 << 2) + t3));
            *(unsigned int *)0xC2A96F8 = t14;
            t15 = nlSprPut(0xC2A96F8);
            t3 = t15;
        }
        t4 = (t4 + 0x1);
    } while ((int)t4 < (int)0x6);
    FUN_0c05999c();
    FUN_0c0599fa();
    t18 = FUN_0c059a80();
    t19 = *(int *)0xC2A9788;
    *(unsigned int *)0xC2A9788 = (t19 + 0x1);
    return t18;
}

int FUN_0c059d9c(void)
{
    int t0;
    float u1;
    float u2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t19;
    int t20;

    t0 = *(int *)0xC2A9748;
    *(float *)0xC2A9700 = (float)(t0 + 0x9A);
    u1 = *(float *)0xC2A9758;
    *(float *)0xC2A9708 = (u1 + 1.0f);
    u2 = *(float *)0xC2A9758;
    *(float *)0xC2A970C = (u2 + 1.0f);
    *(float *)0xC2A9714 = 0.0f;
    *(float *)0xC2A971C = 1.0f;
    *(unsigned int *)0xC2A972C = 0xA;
    *(unsigned int *)0xC2A9720 = 0x0;
    t3 = 0x24;
    t4 = 0x0;
    t5 = 0x0;
    do {
        t6 = *(int *)0xC2A96F4;
        if ((int)t6 > (int)(((t5 << 1) + t5) + 0x34)) {
            if ((int)t6 <= (int)0x58) {
                t3 = 0x3;
                t7 = (int)((int)t6 % (int)t3);
                t3 = t7;
                if (t3 == 0) {
                    t3 = 0x3;
                    t8 = (int)((int)t6 % (int)t3);
                    t3 = t8;
                    if (t3 == 0) {
                        if (t5 == 0) {
                            t9 = Sound_Request(0x304A9, 0x0);
                            t3 = t9;
                            t10 = *(int *)0xC130DF4;
                            *(unsigned int *)0xC130DF4 = (t10 + 0x1);
                        }
                    }
                }
            }
            if ((int)t5 >= (int)0x5) {
                t4 = 0x10;
            }
            t3 = 0x4;
            *(float *)((0xC2A96F8 + t3)) = (float)((((((t5 << 2) << 2) << 1) + t5) + t4) + 0x40);
            t3 = 0xC130E40;
            t19 = *(int *)(((t5 << 2) + t3));
            *(unsigned int *)0xC2A96F8 = t19;
            t20 = nlSprPut(0xC2A96F8);
            t3 = t20;
        }
        t5 = (t5 + 0x1);
    } while ((int)t5 < (int)0xB);
    return t3;
}

int FUN_0c05acc8(void)
{
    int t0;
    int t1;
    int t2;
    int t72;
    int t3;
    int t5;
    int t14;
    int t15;
    float u16;
    float u17;
    int t18;
    float u19;
    float u20;
    int t23;
    float u24;
    float u25;
    int t27;
    int t28;
    int t29;
    int t32;
    int t35;
    float u37;
    float u38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t54;
    int t55;
    int t71;
    int t73;
    int t75;
    int t82;
    int t83;
    float u84;
    float u85;
    int t86;
    float u87;
    float u88;
    int t91;
    float u92;
    float u93;
    int t95;
    int t96;
    int t97;
    int t100;
    int t103;
    float u105;
    float u106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t122;
    int t123;
    int t139;
    int t140;

    t0 = *(int *)0xC2A97A8;
    t1 = *(int *)0xC2A96F4;
    if ((int)t1 <= (int)(t0 + 0x78)) {
        t2 = *(int *)0xC2A97E0;
        t72 = t2;
        if (t2 == 1) {
            t3 = *(int *)0xC2A97E0;
            if (t3 == 0) {
                if (t1 == (t0 + 0x79)) {
                    Sound_Request(0x405A9, 0x0);
                    t5 = *(int *)0xC130E08;
                    *(unsigned int *)0xC130E08 = (t5 + 0x1);
                    *(unsigned int *)0xC2A9754 = 0x1;
                }
            }
            t14 = *(int *)0xC2A97DC;
            if ((int)t14 >= (int)0x64) {
                *(unsigned int *)0xC2A96F8 = 0x15A;
                *(float *)0xC2A96FC = 472.0f;
                t15 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(0x18C + t15);
                u16 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u16 + 1.0f);
                u17 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u17 + 1.0f);
                *(float *)0xC2A9714 = 0.0f;
                *(float *)0xC2A971C = 1.0f;
                *(unsigned int *)0xC2A9720 = 0x0;
            } else {
                *(unsigned int *)0xC2A96F8 = 0x4B;
                *(float *)0xC2A96FC = 472.0f;
                t18 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(t18 + 0x18C);
                *(float *)0xC2A9704 = 0.25f;
                u19 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u19 + 1.0f);
                u20 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u20 + 1.0f);
                *(float *)0xC2A9714 = 0.0f;
                *(float *)0xC2A971C = 1.0f;
                *(unsigned int *)0xC2A972C = 0xA;
                *(unsigned int *)0xC2A9720 = 0x0;
                nlSprPut(0xC2A96F8);
                nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
                *(float *)0xC2A9704 = 0.199999988f;
                *(float *)0xC2A96FC = 400.0f;
                t23 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(0x18C + t23);
                u24 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u24 + 1.0f);
                u25 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u25 + 1.0f);
                *(float *)0xC2A9714 = 0.0f;
                *(float *)0xC2A971C = 1.0f;
                *(unsigned int *)0xC2A972C = 0x300A;
                nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                t27 = *(int *)0xC2A97D4;
                if (t27 == 0) {
                    t28 = *(int *)0xC2A97D0;
                    if (t28 != 0) {
                        t29 = *(int *)0xC2A97D0;
                        *(unsigned int *)0xC2A96F8 = (t29 + 0x41);
                        *(float *)0xC2A96FC = 444.0f;
                        nlSprPut(0xC2A96F8);
                    }
                } else {
                    t32 = *(int *)0xC2A97D0;
                    *(unsigned int *)0xC2A96F8 = (t32 + 0x41);
                    *(float *)0xC2A96FC = 444.0f;
                    nlSprPut(0xC2A96F8);
                }
                t35 = *(int *)0xC2A97CC;
                *(unsigned int *)0xC2A96F8 = (t35 + 0x41);
                *(float *)0xC2A96FC = 498.0f;
                nlSprPut(0xC2A96F8);
                *(unsigned int *)0xC2A96F8 = 0x4F;
                u37 = *(float *)0xC2A9758;
                *(float *)0xC2A9708 = (u37 + 1.0f);
                u38 = *(float *)0xC2A9758;
                *(float *)0xC2A970C = (u38 + 1.0f);
                t39 = *(int *)0xC2A9748;
                *(float *)0xC2A9700 = (float)(t39 + 0x19C);
                t40 = *(int *)0xC2A97D4;
                if (t40 == 0) {
                    t41 = *(int *)0xC2A97D0;
                    if (t41 != 1) {
                        t42 = *(int *)0xC2A97CC;
                        if (t42 == 1) {
                            *(unsigned int *)0xC2A96F8 = 0x4E;
                        } else {
                            if (t42 == 2) {
                                *(unsigned int *)0xC2A96F8 = 0x4C;
                            } else {
                                t43 = *(int *)0xC2A97CC;
                                if (t43 == 3) {
                                    *(unsigned int *)0xC2A96F8 = 0x4D;
                                }
                            }
                        }
                    }
                } else {
                    t54 = *(int *)0xC2A97CC;
                    if (t54 == 1) {
                        *(unsigned int *)0xC2A96F8 = 0x4E;
                    } else {
                        if (t54 == 2) {
                            *(unsigned int *)0xC2A96F8 = 0x4C;
                        } else {
                            t55 = *(int *)0xC2A97CC;
                            if (t55 == 3) {
                                *(unsigned int *)0xC2A96F8 = 0x4D;
                            }
                        }
                    }
                }
                *(float *)0xC2A96FC = 554.0f;
            }
            t71 = nlSprPut(0xC2A96F8);
            t72 = t71;
        }
        t140 = t72;
    } else {
        t73 = *(int *)0xC2A97E0;
        if (t73 == 0) {
            if (t1 == (t0 + 0x79)) {
                Sound_Request(0x405A9, 0x0);
                t75 = *(int *)0xC130E08;
                *(unsigned int *)0xC130E08 = (t75 + 0x1);
                *(unsigned int *)0xC2A9754 = 0x1;
            }
        }
        t82 = *(int *)0xC2A97DC;
        if ((int)t82 >= (int)0x64) {
            *(unsigned int *)0xC2A96F8 = 0x15A;
            *(float *)0xC2A96FC = 472.0f;
            t83 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(0x18C + t83);
            u84 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u84 + 1.0f);
            u85 = *(float *)0xC2A9758;
            *(float *)0xC2A970C = (u85 + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A9720 = 0x0;
        } else {
            *(unsigned int *)0xC2A96F8 = 0x4B;
            *(float *)0xC2A96FC = 472.0f;
            t86 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(t86 + 0x18C);
            *(float *)0xC2A9704 = 0.25f;
            u87 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u87 + 1.0f);
            u88 = *(float *)0xC2A9758;
            *(float *)0xC2A970C = (u88 + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A972C = 0xA;
            *(unsigned int *)0xC2A9720 = 0x0;
            nlSprPut(0xC2A96F8);
            nlObjPutSetFadeColor(0.0f, 0.0f, 0.0f);
            *(float *)0xC2A9704 = 0.199999988f;
            *(float *)0xC2A96FC = 400.0f;
            t91 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(0x18C + t91);
            u92 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u92 + 1.0f);
            u93 = *(float *)0xC2A9758;
            *(float *)0xC2A970C = (u93 + 1.0f);
            *(float *)0xC2A9714 = 0.0f;
            *(float *)0xC2A971C = 1.0f;
            *(unsigned int *)0xC2A972C = 0x300A;
            nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
            t95 = *(int *)0xC2A97D4;
            if (t95 == 0) {
                t96 = *(int *)0xC2A97D0;
                if (t96 != 0) {
                    t97 = *(int *)0xC2A97D0;
                    *(unsigned int *)0xC2A96F8 = (t97 + 0x41);
                    *(float *)0xC2A96FC = 444.0f;
                    nlSprPut(0xC2A96F8);
                }
            } else {
                t100 = *(int *)0xC2A97D0;
                *(unsigned int *)0xC2A96F8 = (t100 + 0x41);
                *(float *)0xC2A96FC = 444.0f;
                nlSprPut(0xC2A96F8);
            }
            t103 = *(int *)0xC2A97CC;
            *(unsigned int *)0xC2A96F8 = (t103 + 0x41);
            *(float *)0xC2A96FC = 498.0f;
            nlSprPut(0xC2A96F8);
            *(unsigned int *)0xC2A96F8 = 0x4F;
            u105 = *(float *)0xC2A9758;
            *(float *)0xC2A9708 = (u105 + 1.0f);
            u106 = *(float *)0xC2A9758;
            *(float *)0xC2A970C = (u106 + 1.0f);
            t107 = *(int *)0xC2A9748;
            *(float *)0xC2A9700 = (float)(t107 + 0x19C);
            t108 = *(int *)0xC2A97D4;
            if (t108 == 0) {
                t109 = *(int *)0xC2A97D0;
                if (t109 != 1) {
                    t110 = *(int *)0xC2A97CC;
                    if (t110 == 1) {
                        *(unsigned int *)0xC2A96F8 = 0x4E;
                    } else {
                        if (t110 == 2) {
                            *(unsigned int *)0xC2A96F8 = 0x4C;
                        } else {
                            t111 = *(int *)0xC2A97CC;
                            if (t111 == 3) {
                                *(unsigned int *)0xC2A96F8 = 0x4D;
                            }
                        }
                    }
                }
            } else {
                t122 = *(int *)0xC2A97CC;
                if (t122 == 1) {
                    *(unsigned int *)0xC2A96F8 = 0x4E;
                } else {
                    if (t122 == 2) {
                        *(unsigned int *)0xC2A96F8 = 0x4C;
                    } else {
                        t123 = *(int *)0xC2A97CC;
                        if (t123 == 3) {
                            *(unsigned int *)0xC2A96F8 = 0x4D;
                        }
                    }
                }
            }
            *(float *)0xC2A96FC = 554.0f;
        }
        t139 = nlSprPut(0xC2A96F8);
        t140 = t139;
    }
    return t140;
}

int FUN_0c05c81c(void)
{
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t12;
    int t13;
    int t17;
    int stk[8];

    nlObjPutSetFadeColor(0.0f, 1.0f, 1.0f);
    *(float *)0xC2A98A8 = 1.0f;
    *(float *)0xC2A98AC = 1.0f;
    FUN_0c05778a(0xC2A9898, 0x1EA, 477.0f, 66.0f);
    FUN_0c05778a(0xC2A9898, 0x1EB, 501.0f, 66.0f);
    ResetFadeColor();
    t4 = FUN_0c038ee6();
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x8) + 0x4);
    t5 = (int)((int)t4 / (int)0xA);
    *(unsigned int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0)) = t5;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    t6 = (int)((int)t4 % (int)0xA);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t6;
    t7 = *(int *)(((int)stk + 4));
    t8 = *(int *)((t7 + 0x0));
    if (t8 != 0) {
        t9 = *(int *)(((int)stk + 4));
        t10 = *(int *)((t9 + 0x0));
        FUN_0c05778a(0xC2A9898, (t10 + 0x50), 474.0f, 90.0f);
    }
    t12 = *(int *)(((int)stk + 8));
    t13 = *(int *)((t12 + 0x0));
    FUN_0c05778a(0xC2A9898, (t13 + 0x50), 498.0f, 90.0f);
    FUN_0c05778a(0xC2A9898, 0x1E1, 523.0f, 90.0f);
    FUN_0c05778a(0xC2A9898, 0x57, 550.0f, 90.0f);
    t17 = FUN_0c05778a(0xC2A9898, 0x50, 574.0f, 90.0f);
    return t17;
}

int FUN_0c05e944(void)
{
    int t0;
    int t2;
    int t3;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t21;
    int t22;
    int t26;
    int stk[8];

    t0 = *(int *)0xC1319F8;
    if (t0 == 0) {
        FUN_0c05bb24();
    }
    t2 = *(int *)0xC2A991C;
    if (t2 == 0) {
        t3 = *(int *)0xC1EE794;
        if ((int)t3 <= 0) {
            FUN_0c05bb76(0x1);
            *(unsigned int *)0xC2A991C = 0x1;
            *(unsigned int *)0xC179120 = 0x0;
        }
    }
    nlObjPutSetFadeColor(1.0f, 0.0f, 0.0f);
    FUN_0c05778a(0xC2A9898, 0x1EC, 506.0f, 55.0f);
    FUN_0c05778a(0xC2A9898, 0x1ED, 602.0f, 55.0f);
    ResetFadeColor();
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x8) + 0x4);
    t12 = *(int *)0xC1319F8;
    t13 = (int)((int)t12 / (int)0xA);
    *(unsigned int *)((((((int)stk + 4) + 0x8) + 0x4) + 0x0)) = t13;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x8);
    t14 = *(int *)0xC1319F8;
    t15 = (int)((int)t14 % (int)0xA);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = t15;
    t16 = *(int *)(((int)stk + 4));
    t17 = *(int *)((t16 + 0x0));
    if (t17 != 0) {
        t18 = *(int *)(((int)stk + 4));
        t19 = *(int *)((t18 + 0x0));
        FUN_0c05778a(0xC2A9C10, (t19 + 0x50), 474.0f, 90.0f);
    }
    t21 = *(int *)(((int)stk + 8));
    t22 = *(int *)((t21 + 0x0));
    FUN_0c05778a(0xC2A9C10, (t22 + 0x50), 498.0f, 90.0f);
    FUN_0c05778a(0xC2A9C10, 0x1E1, 523.0f, 90.0f);
    FUN_0c05778a(0xC2A9C10, 0x52, 550.0f, 90.0f);
    t26 = FUN_0c05778a(0xC2A9C10, 0x50, 574.0f, 90.0f);
    return t26;
}

int Drv_Execute(void)
{
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
    int t17;
    int t18;
    int t19;
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
    int t30;
    int t31;
    float t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t44;
    int t49;
    int t52;
    int t53;
    int t54;
    int t63;
    float u65;
    int t66;
    int t77;
    int t74;
    int t71;
    int t67;
    int t69;
    int t68;
    int t84;
    int t85;
    int t91;
    int t92;
    int t100;
    int stk[50];

    FUN_0c081268();
    t1 = *(int *)0xC2AD23C;
    *(unsigned int *)0xC2AD248 = t1;
    t2 = *(int *)0xC2AD238;
    *(unsigned int *)0xC2AD244 = t2;
    t3 = *(int *)0xC2AD234;
    *(unsigned int *)0xC2AD240 = t3;
    t4 = *(int *)0xC2AD230;
    *(unsigned int *)0xC2AD23C = t4;
    t5 = *(int *)0xC2AD22C;
    *(unsigned int *)0xC2AD238 = t5;
    t6 = *(int *)0xC2AD228;
    *(unsigned int *)0xC2AD234 = t6;
    t7 = *(int *)0xC2AD224;
    *(unsigned int *)0xC2AD230 = t7;
    t8 = *(int *)0xC2AD220;
    *(unsigned int *)0xC2AD22C = t8;
    t9 = *(int *)0xC2AD21C;
    *(unsigned int *)0xC2AD228 = t9;
    t10 = *(int *)0xC2AD218;
    *(unsigned int *)0xC2AD224 = t10;
    t11 = *(int *)0xC2AD214;
    *(unsigned int *)0xC2AD220 = t11;
    t12 = *(int *)0xC2AD210;
    *(unsigned int *)0xC2AD21C = t12;
    t13 = *(int *)0xC2AD20C;
    *(unsigned int *)0xC2AD218 = t13;
    t14 = *(int *)0xC2AD208;
    *(unsigned int *)0xC2AD214 = t14;
    t15 = *(int *)0xC2AD204;
    *(unsigned int *)0xC2AD210 = t15;
    *(unsigned int *)(((int)stk + 8)) = 0xC1790CC;
    t16 = *(int *)0xC17914C;
    *(unsigned int *)0xC2AD20C = t16;
    t17 = *(int *)0xC179148;
    *(unsigned int *)0xC2AD208 = t17;
    t18 = *(int *)0xC179144;
    *(unsigned int *)0xC2AD204 = t18;
    *(unsigned int *)(((int)stk + 4)) = 0xC2AD270;
    t19 = *(int *)0xC2AD278;
    *(unsigned int *)0xC2AD284 = t19;
    t20 = *(int *)0xC2AD274;
    *(unsigned int *)0xC2AD280 = t20;
    t21 = *(int *)0xC2AD270;
    *(unsigned int *)0xC2AD27C = t21;
    t22 = *(int *)(((int)stk + 4));
    t23 = *(int *)0xC2AD26C;
    *(unsigned int *)((t22 + 0x8)) = t23;
    t24 = *(int *)0xC2AD268;
    *(unsigned int *)((t22 + 0x4)) = t24;
    t25 = *(int *)0xC2AD264;
    *(unsigned int *)((t22 + 0x0)) = t25;
    t26 = *(int *)0xC2AD260;
    *(unsigned int *)0xC2AD26C = t26;
    t27 = *(int *)0xC2AD25C;
    *(unsigned int *)0xC2AD268 = t27;
    t28 = *(int *)0xC2AD258;
    *(unsigned int *)0xC2AD264 = t28;
    t29 = *(int *)0xC2AD254;
    *(unsigned int *)0xC2AD260 = t29;
    t30 = *(int *)0xC2AD250;
    *(unsigned int *)0xC2AD25C = t30;
    t31 = *(int *)0xC2AD24C;
    *(unsigned int *)0xC2AD258 = t31;
    nlSubVector3op(0xC2AD24C, 0xC2AD204, 0xC2AD210);
    t33 = nlScalor(0xC2AD24C);
    *(float *)0xC2AD2B8 = t33;
    t34 = *(int *)0xC2AD2A8;
    *(unsigned int *)0xC2AD2B4 = t34;
    t35 = *(int *)0xC2AD2A4;
    *(unsigned int *)0xC2AD2B0 = t35;
    t36 = *(int *)0xC2AD2A0;
    *(unsigned int *)0xC2AD2AC = t36;
    t37 = *(int *)0xC2AD29C;
    *(unsigned int *)0xC2AD2A8 = t37;
    t38 = *(int *)0xC2AD298;
    *(unsigned int *)0xC2AD2A4 = t38;
    t39 = *(int *)0xC2AD294;
    *(unsigned int *)0xC2AD2A0 = t39;
    t40 = *(int *)0xC2AD290;
    *(unsigned int *)0xC2AD29C = t40;
    t41 = *(int *)0xC2AD28C;
    *(unsigned int *)0xC2AD298 = t41;
    t42 = *(int *)0xC2AD288;
    *(unsigned int *)0xC2AD294 = t42;
    nlSubVector3op(0xC2AD288, 0xC2AD24C, 0xC2AD258);
    t44 = *(int *)(((int)stk + 8));
    nlPushMatrix((t44 + 0xB4));
    FUN_0c077210(0xC0D553C, 0xC2AD1E0);
    FUN_0c077210(0xC0D5548, 0xC2AD1EC);
    FUN_0c077210(0xC0D5554, 0xC2AD1F8);
    t49 = *(signed char *)0xC179488;
    nlTranslateV(((unsigned char)(((t49 << 1) + t49) << 2) + (((int)stk + 4) + 0x14)));
    nlRotateAY(0x8000);
    t52 = *(int *)0xC2AD010;
    t53 = *(int *)0xC2AD000;
    if (t52 != 2) {
        if (t52 != 4) {
            t54 = *(signed char *)0xC2AD1DF;
            if ((t54 & 128) != 0) {
                FcvPlayBuffer(0xC2AD028, t53);
            } else {
                drvJolt();
            }
        } else {
            FcvPlayBuffer(0xC2AD028, t53);
        }
    } else {
        FcvPlayBuffer(0xC2AD028, t53);
    }
    nlGetTranslate(0xC2AD004);
    t63 = *(signed char *)0xC2AD1DF;
    if ((t63 & 1) != 0) {
        nlTranslate(0.0f, 3.5f, -3.25999999f);
        u65 = *(float *)0xC2AD024;
        t66 = *(int *)0xC2AD020;
        t77 = ((-(int)((u65 * 65535.0f) / 60.0f)) + 0x8000);
        if (t66 != 0xC136BE4) {
            t74 = ((-(int)((u65 * 65535.0f) / 60.0f)) + 0x8000);
            if (t66 != 0xC138BF8) {
                t71 = ((-(int)((u65 * 65535.0f) / 60.0f)) + 0x8000);
                if (t66 != 0xC13A3BC) {
                    t67 = *(int *)0xC2AD020;
                    t69 = (0xFFFF8000 + (int)((u65 * 65535.0f) / 60.0f));
                    if (t67 != 0xC13BB20) {
                        t68 = 0xC2AD258;
                        if (t67 == 0xC13D404) {
                            t68 = 0x8000;
                        }
                        t69 = t68;
                    }
                    t71 = t69;
                }
                t74 = t71;
            }
            t77 = t74;
        }
        nlRotateAX(t77);
        nlObjPutUseViewMatrix(0xC3BFFE0);
        nlPushMatrix(0x0);
        nlTranslate(-2.29999995f, -2.29999995f, 0.0f);
        t84 = *(int *)0xC2AD020;
        if (t84 != 0xC135150) {
            t85 = *(int *)0xC2AD0D0;
            nlRotateAX((t85 - t77));
        }
        nlObjPutUseViewMatrix(0xC3C05A8);
        nlGetPushedMatrix(0x0);
        nlTranslate(2.29999995f, 2.29999995f, 0.0f);
        t91 = *(int *)0xC2AD020;
        if (t91 != 0xC135150) {
            t92 = *(int *)0xC2AD0E8;
            nlRotateAX((t92 - t77));
        }
        nlObjPutUseViewMatrix(0xC3C07C8);
        nlPopMatrix(0x1);
    }
    t100 = nlPopMatrix(0x1);
    return t100;
}

int psgEnterState2(int a4, int a5)
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
    int t47;
    int t10;
    int t11;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t32;
    int t33;
    int t34;
    int t35;
    int t41;
    float u42;
    int t43;
    int t45;
    int t46;
    int t51;
    float u52;
    float u55;
    int t57;
    int t58;
    int t61;
    float u62;
    float u59;
    int t64;
    int t65;
    int t68;
    float u69;
    float u66;
    float u70;
    int t71;
    int t72;
    float u73;
    int t75;
    int t76;
    float u77;
    int t79;
    float u82;
    int t84;
    float u86;
    int t88;
    float t92;
    int t93;
    float u94;
    int t96;
    int t97;
    float u98;
    int t100;
    int t103;
    int t107;
    int t108;
    int t109;
    float u110;
    int t111;
    int t113;
    int t114;
    int t115;
    int t116;
    int t120;
    int t117;
    int t119;
    int t118;
    int t121;
    int t127;
    int t128;
    int t129;
    int t133;
    int t135;
    int t136;
    int t123;
    int t31;
    int t21;
    int t28;
    int t122;
    int stk[29];

    t0 = *(int *)0xC0D5BB0;
    *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x10)) = t0;
    t1 = *(int *)0xC0D5BAC;
    *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0xC)) = t1;
    t2 = *(int *)0xC0D5BA8;
    *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x8)) = t2;
    t3 = *(int *)0xC0D5BA4;
    *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x4)) = t3;
    t4 = *(int *)0xC0D5BA0;
    *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x0)) = t4;
    t5 = *(int *)0xC0D5BC4;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x10)) = t5;
    t6 = *(int *)0xC0D5BC0;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0xC)) = t6;
    t7 = *(int *)0xC0D5BBC;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x8)) = t7;
    t8 = *(int *)0xC0D5BB8;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x4)) = t8;
    t9 = *(int *)0xC0D5BB4;
    *(unsigned int *)(((((int)stk + 4) + 0x18) + 0x0)) = t9;
    if (a5 != 0) {
        if (a5 != 1) {
            t47 = a5;
            if (a5 == 2) {
                t10 = *(int *)((a4 + 0x0));
                if (t10 == 35) {
                    t11 = *(signed char *)((a4 + 0x14B));
                    if ((t11 & 4) != 0) {
                        *(unsigned int *)(((0x110 + a4) + 0x0)) = 0xC9DE008;
                    } else {
                        *(unsigned int *)((a4 + 0x110)) = 0xC9DFA4C;
                    }
                } else {
                    t15 = *(int *)0xC2AE33C;
                    if (t15 == 3) {
                        t16 = *(signed char *)((a4 + 0x14B));
                        if ((t16 & 4) != 0) {
                            t17 = extRand();
                            t18 = (int)((int)t17 % (int)0x5);
                            if (t18 == 0) {
                                t19 = *(int *)0xC2AE33C;
                                t21 = (t19 + 0x1);
                            } else {
                                t20 = *(int *)0xC2AE33C;
                                t21 = t20;
                            }
                            t23 = *(int *)(((((int)stk + 4) + 0x2C) + (t21 << 2)));
                            t31 = t23;
                        } else {
                            t24 = extRand();
                            t25 = (int)((int)t24 % (int)0x5);
                            if (t25 == 0) {
                                t26 = *(int *)0xC2AE33C;
                                t28 = (t26 + 0x1);
                            } else {
                                t27 = *(int *)0xC2AE33C;
                                t28 = t27;
                            }
                            t29 = *(int *)(((((int)stk + 4) + 0x18) + (t28 << 2)));
                            t31 = t29;
                        }
                        *(unsigned int *)((a4 + 0x110)) = t31;
                    } else {
                        t32 = *(int *)0xC2AE33C;
                        t33 = *(signed char *)((a4 + 0x14B));
                        if ((t33 & 4) != 0) {
                            t34 = *(int *)(((((int)stk + 4) + 0x2C) + (t32 << 2)));
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t34;
                        } else {
                            t35 = *(int *)(((((int)stk + 4) + 0x18) + (t32 << 2)));
                            *(unsigned int *)(((0x110 + a4) + 0x0)) = t35;
                        }
                    }
                }
                *(float *)((a4 + 0x114)) = 5.0f;
                t41 = *(int *)((a4 + 0x118));
                u42 = *(float *)((a4 + 0x114));
                t43 = *(int *)((a4 + 0x110));
                FcvStoreBuffer(t43, t41, u42);
                t45 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t45 | 0x80);
                *(float *)((a4 + 0x108)) = 0.0f;
                *(float *)((a4 + 0x10C)) = 7.0f;
                t46 = *(signed char *)(((0x149 + a4) + 0x0));
                *(unsigned char *)(((0x149 + a4) + 0x0)) = (t46 & 0xF9);
                *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
                *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
                t47 = 0x128;
            }
            t123 = t47;
        } else {
            nlPushMatrix(0xC179180);
            t51 = *(int *)0xC2AE33C;
            u52 = *(float *)((((signed char)(((t51 << 1) + t51) << 2) + 0xC0D5588) + 0x8));
            nlTranslate(0.0f, 0.0f, u52);
            nlGetTranslate((((int)stk + 4) + 0xC));
            u55 = *(float *)(((int)stk + 20));
            *(float *)(((int)stk + 20)) = (u55 + 7.5f);
            nlScaleVector(((int)stk + 4), 0xC2AD1E0, 20.0f);
            t57 = GetCollisionFirst((((int)stk + 4) + 0xC), ((int)stk + 4));
            t58 = *(int *)((t57 + 0x1C));
            t61 = 0x0;
            u62 = 0.0f;
            if (t58 != -1) {
                u59 = *(float *)((t57 + 0x18));
                t61 = 0x1;
                u62 = u59;
            }
            nlScaleVector(((int)stk + 4), 0xC2AD1E0, -20.0f);
            t64 = GetCollisionFirst((((int)stk + 4) + 0xC), ((int)stk + 4));
            t65 = *(int *)((t64 + 0x1C));
            t68 = t61;
            u69 = 0.0f;
            if (t65 != -1) {
                u66 = *(float *)((t64 + 0x18));
                t68 = (t61 | 0x2);
                u69 = u66;
            }
            u70 = *(float *)(((int)stk + 20));
            *(float *)(((int)stk + 20)) = (u70 - 7.5f);
            t71 = *(int *)0xC2AE33C;
            if (t68 != 0) {
                if (t68 != 1) {
                    if (t68 != 2) {
                        if (t68 == 3) {
                            if (!(u69 > u62)) {
                                t72 = *(int *)0xC2AE33C;
                                u73 = *(float *)((((signed char)(((t72 << 1) + t72) << 2) + 0xC0D5588) + 0x0));
                                nlTranslate(u73, 0.0f, 0.0f);
                                t75 = *(signed char *)(((0x14B + a4) + 0x0));
                                *(unsigned char *)(((0x14B + a4) + 0x0)) = (t75 | 0x4);
                            } else {
                                t76 = *(int *)0xC2AE33C;
                                u77 = *(float *)((((signed char)(((t76 << 1) + t76) << 2) + 0xC0D5588) + 0x0));
                                nlTranslate((-u77), 0.0f, 0.0f);
                                t79 = *(signed char *)(((0x14B + a4) + 0x0));
                                *(unsigned char *)(((0x14B + a4) + 0x0)) = (t79 & 0xFB);
                            }
                        }
                    } else {
                        u82 = *(float *)((((signed char)(((t71 << 1) + t71) << 2) + 0xC0D5588) + 0x0));
                        nlTranslate(u82, 0.0f, 0.0f);
                        t84 = *(signed char *)(((0x14B + a4) + 0x0));
                        *(unsigned char *)(((0x14B + a4) + 0x0)) = (t84 | 0x4);
                    }
                } else {
                    u86 = *(float *)((((signed char)(((t71 << 1) + t71) << 2) + 0xC0D5588) + 0x0));
                    nlTranslate((-u86), 0.0f, 0.0f);
                    t88 = *(signed char *)(((0x14B + a4) + 0x0));
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = (t88 & 0xFB);
                }
            } else {
                nlSubVector3op(((int)stk + 4), (a4 + 0x4), (((int)stk + 4) + 0xC));
                *(float *)(((int)stk + 8)) = 0.0f;
                nlUnitVector(((int)stk + 4));
                t92 = nlInnerProduct(0xC2AD1E0, ((int)stk + 4));
                if (!(t92 > 0.0f)) {
                    t93 = *(int *)0xC2AE33C;
                    u94 = *(float *)((((signed char)(((t93 << 1) + t93) << 2) + 0xC0D5588) + 0x0));
                    nlTranslate((-u94), 0.0f, 0.0f);
                    t96 = *(signed char *)(((0x14B + a4) + 0x0));
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = (t96 & 0xFB);
                } else {
                    t97 = *(int *)0xC2AE33C;
                    u98 = *(float *)((((signed char)(((t97 << 1) + t97) << 2) + 0xC0D5588) + 0x0));
                    nlTranslate(u98, 0.0f, 0.0f);
                    t100 = *(signed char *)(((0x14B + a4) + 0x0));
                    *(unsigned char *)(((0x14B + a4) + 0x0)) = (t100 | 0x4);
                }
            }
            t103 = *(signed char *)0xC179488;
            nlTranslateV(((signed char)(((t103 << 1) + t103) << 2) + 0xC0D5654));
            nlGetTranslate((0x134 + a4));
            nlPopMatrix(0x1);
            t107 = *(int *)((a4 + 0x0));
            t108 = *(int *)((((t107 - 23) << 2) + 0xC0D5690));
            *(unsigned int *)((a4 + 0x110)) = t108;
            *(float *)((a4 + 0x114)) = 0.0f;
            t109 = *(int *)((a4 + 0x118));
            u110 = *(float *)((a4 + 0x114));
            t111 = *(int *)((a4 + 0x110));
            FcvStoreBuffer(t111, t109, u110);
            t113 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t113 | 0x80);
            *(float *)((a4 + 0x108)) = 0.0f;
            *(float *)((a4 + 0x10C)) = 10.0f;
            t114 = *(signed char *)(((0x149 + a4) + 0x0));
            *(unsigned char *)(((0x149 + a4) + 0x0)) = (t114 & 0xF9);
            *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
            *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
            t115 = *(int *)0xC1EE210;
            if (t115 == 2) {
                t116 = *(int *)0xC1EE210;
                t120 = t116;
                if (t116 == 2) {
                    t117 = *(int *)0xC1EE788;
                    t119 = t117;
                    if (t117 == 1) {
                        t118 = FUN_0c060e18();
                        t119 = t118;
                    }
                    t120 = t119;
                }
                t122 = t120;
            } else {
                t121 = FUN_0c060e18();
                t122 = t121;
            }
            t123 = t122;
        }
        t136 = t123;
    } else {
        t127 = *(int *)((a4 + 0x0));
        if (t127 == 35) {
            *(unsigned int *)0xC2AE33C = 0x4;
        } else {
            t128 = extRand();
            t129 = (int)((int)t128 % (int)0x4);
            *(unsigned int *)0xC2AE33C = t129;
        }
        FUN_0c070e8a(a4);
        *(unsigned int *)((a4 + 0x34)) = 0xC9EF530;
        *(float *)((a4 + 0x38)) = 0.0f;
        t133 = *(int *)((a4 + 0x34));
        FcvStoreBuffer(t133, (a4 + 0x3C), 0.0f);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 0.0f;
        t135 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t135 & 0xF9);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
        t136 = 0x128;
    }
    return t136;
}

int Sound_Init(void)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;

    t0 = 0xC2AE388;
    t1 = 0x0;
    do {
        t1 = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
    } while ((int)t1 < (int)0xD8);
    t2 = 0x0;
    do {
        t3 = t2;
        t4 = (short)((((((t2 << 2) << 1) + t2) << 2) << 2) << 1);
        t2 = (t2 + 0x1);
        *(unsigned int *)((0xC2AE6E8 + (t3 << 2))) = (t4 + 0xC2AE388);
        *(unsigned int *)((0xC2AE6F4 + (t3 << 2))) = (t4 + 0xC2AE388);
        *(unsigned int *)((0xC2AE700 + (t3 << 2))) = 0x0;
    } while ((int)t2 < (int)0x3);
    nlsndIcsControl(0x0, 0xA6, 0x0);
    nlsndIcsControl(0x1, 0xA6, 0x0);
    nlsndIcsControl(0x2, 0xA6, 0x0);
    nlsndIcsControl(0x3, 0xA6, 0x0);
    nlsndSystemControl(0x0, 0x1100A0, 0x0);
    nlsndSystemControl(0x1, 0x1100A0, 0x0);
    nlsndSystemControl(0x2, 0x1100A0, 0x0);
    nlsndSystemControl(0x3, 0x1100A0, 0x0);
    nlsndSystemControl(0x4, 0x1100A0, 0x0);
    nlsndSystemControl(0x5, 0x1100A0, 0x0);
    nlsndSystemControl(0x6, 0x1100A0, 0x0);
    nlsndSystemControl(0x7, 0x1100A0, 0x0);
    nlsndSystemControl(0x8, 0x1100A0, 0x0);
    nlsndSystemControl(0x0, 0x1A0, 0x75);
    SetAudio();
    return SetSEvolume();
}

int nlsndSystemControl(int a4, int a5, int a6)
{
    if ((0xFF00 & a5) != 0) {
        if (a5 != 0x1A0) {
            if (a5 != 0x4A0) {
                if (a5 != 0x9A0) {
                    if (a5 != 0xAA0) {
                        if (a5 != 0x10A0) {
                            if (a5 != 0x5A0) {
                                if (a5 != 0x6A0) {
                                    if (a5 != 0x7A0) {
                                        if (a5 != 0x11A0) {
                                            if (a5 != 0x1BA0) {
                                                if (a5 != 0x30A0) {
                                                    if (a5 != 0x28A0) {
                                                        if (a5 != 0x29A0) {
                                                            if (a5 != 0x2A0) {
                                                                if (a5 != 0x3A0) {
                                                                    return 0xFFFFFFFE;
                                                                }
                                                                return FUN_0c07f5c0();
                                                            }
                                                            return FUN_0c07f5c0();
                                                        }
                                                        return FUN_0c07f5c0();
                                                    }
                                                    return FUN_0c07f5c0();
                                                }
                                                return FUN_0c07f5c0();
                                            }
                                            return FUN_0c07f5c0();
                                        }
                                        return FUN_0c07f5c0();
                                    }
                                    return FUN_0c07f5c0();
                                }
                                return FUN_0c07f5c0();
                            }
                            return FUN_0c07f5c0();
                        }
                        return FUN_0c07f5c0();
                    }
                    return FUN_0c07f5c0();
                }
                return FUN_0c07f5c0();
            }
            return FUN_0c07f5c0();
        }
        return FUN_0c07f5c0();
    }
    return FUN_0c07f5c0();
}

int nlsndIcsControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA5) {
        if (a5 != 0x10A5) {
            if (a5 != 0x20A5) {
                if (a5 != 0x30A5) {
                    if (a5 != 0x40A5) {
                        if (a5 != 0xA7) {
                            if (a5 != 0x10A7) {
                                if (a5 != 0x50A5) {
                                    if (a5 != 0xA6) {
                                        return 0xFFFFFFFE;
                                    }
                                    return FUN_0c07f5c0();
                                }
                                return FUN_0c07f5c0();
                            }
                            return FUN_0c07f5c0();
                        }
                        return FUN_0c07f5c0();
                    }
                    return FUN_0c07f5c0();
                }
                return FUN_0c07f5c0();
            }
            return FUN_0c07f5c0();
        }
        return FUN_0c07f5c0();
    }
    t0 = FUN_0c07f5c0();
    if (t0 != 0) {
        return t0;
    }
    return FUN_0c07f5c0();
}

void kmiProcessVertex_00(int a4)
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
    int t17;
    int t18;
    int t19;
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
    int t30;
    int t31;
    int t33;
    int t34;
    int stk[8];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    *(unsigned int *)(((int)stk + 4)) = t4;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xC2EA728 = t6;
    *(unsigned int *)0xC2EA72C = t5;
    t7 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t8 = *(int *)((t7 + 0x4));
    *(unsigned int *)0xC2EA730 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t10 = *(int *)((t9 + 0x8));
    *(unsigned int *)0xC2EA734 = t10;
    t11 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t12 = *(int *)((t11 + 0xC));
    *(unsigned int *)0xC2EA738 = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t14 = *(int *)((t13 + 0x18));
    *(unsigned int *)0xC2EA73C = t14;
    t15 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t16 = *(int *)((t15 + 0x4));
    *(unsigned int *)0xC2EA740 = t16;
    t17 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t18 = *(int *)((t17 + 0x8));
    *(unsigned int *)0xC2EA744 = t18;
    t19 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t20 = *(int *)((t19 + 0xC));
    *(unsigned int *)0xC2EA748 = t20;
    t21 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t22 = *(int *)((t21 + 0x18));
    *(unsigned int *)0xC2EA74C = t22;
    t23 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t24 = *(int *)((t23 + 0x4));
    *(unsigned int *)0xC2EA750 = t24;
    t25 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t26 = *(int *)((t25 + 0x8));
    *(unsigned int *)0xC2EA754 = t26;
    t27 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t28 = *(int *)((t27 + 0xC));
    *(unsigned int *)0xC2EA758 = t28;
    t29 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t30 = *(int *)((t29 + 0x18));
    *(unsigned int *)0xC2EA75C = t30;
    *(unsigned int *)0xC2EA81C = 0x3C;
    t31 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t31, 0x0, 0x0);
    t33 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t34 = *(int *)((t33 + 0xC));
    *(unsigned int *)0xC2EA830 = t34;
}

void kmiProcessVertex_01(int a4)
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
    float u14;
    float u15;
    float u16;
    float u17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    float u25;
    float u26;
    float u27;
    float u28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    float u36;
    float u37;
    float u38;
    float u39;
    int t40;
    int t42;
    int t43;
    int stk[8];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    *(unsigned int *)(((int)stk + 4)) = t4;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xC2EA728 = t6;
    *(unsigned int *)0xC2EA72C = t5;
    t7 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t8 = *(int *)((t7 + 0x4));
    *(unsigned int *)0xC2EA730 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t10 = *(int *)((t9 + 0x8));
    *(unsigned int *)0xC2EA734 = t10;
    t11 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t12 = *(int *)((t11 + 0xC));
    *(unsigned int *)0xC2EA738 = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u14 = *(float *)(((0x10 + t13) + 0x0));
    u15 = *(float *)(((0x14 + t13) + 0x0));
    u16 = *(float *)(((0x18 + t13) + 0x0));
    u17 = *(float *)(((0x1C + t13) + 0x0));
    *(unsigned int *)0xC2EA73C = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u15 * 255.0f) << 16)) | ((int)(u16 * 255.0f) << 8)) | (int)(u17 * 255.0f));
    t18 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t19 = *(int *)((t18 + 0x4));
    *(unsigned int *)0xC2EA740 = t19;
    t20 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t21 = *(int *)((t20 + 0x8));
    *(unsigned int *)0xC2EA744 = t21;
    t22 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t23 = *(int *)((t22 + 0xC));
    *(unsigned int *)0xC2EA748 = t23;
    t24 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    u25 = *(float *)(((0x10 + t24) + 0x0));
    u26 = *(float *)(((0x14 + t24) + 0x0));
    u27 = *(float *)(((0x18 + t24) + 0x0));
    u28 = *(float *)(((0x1C + t24) + 0x0));
    *(unsigned int *)0xC2EA74C = ((((((int)(u25 * 255.0f) << 16) << 8) | ((int)(u26 * 255.0f) << 16)) | ((int)(u27 * 255.0f) << 8)) | (int)(u28 * 255.0f));
    t29 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t30 = *(int *)((t29 + 0x4));
    *(unsigned int *)0xC2EA750 = t30;
    t31 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t32 = *(int *)((t31 + 0x8));
    *(unsigned int *)0xC2EA754 = t32;
    t33 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t34 = *(int *)((t33 + 0xC));
    *(unsigned int *)0xC2EA758 = t34;
    t35 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    u36 = *(float *)(((0x10 + t35) + 0x0));
    u37 = *(float *)(((0x14 + t35) + 0x0));
    u38 = *(float *)(((0x18 + t35) + 0x0));
    u39 = *(float *)(((0x1C + t35) + 0x0));
    *(unsigned int *)0xC2EA75C = ((((((int)(u36 * 255.0f) << 16) << 8) | ((int)(u37 * 255.0f) << 16)) | ((int)(u38 * 255.0f) << 8)) | (int)(u39 * 255.0f));
    *(unsigned int *)0xC2EA81C = 0x3C;
    t40 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t40, 0x0, 0x0);
    t42 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t43 = *(int *)((t42 + 0xC));
    *(unsigned int *)0xC2EA830 = t43;
}

void kmiProcessVertex_09(int a4)
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
    int t17;
    int t18;
    int t19;
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
    int t30;
    int t31;
    int t33;
    int t34;
    int stk[8];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    *(unsigned int *)(((int)stk + 4)) = t4;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xC2EA728 = t6;
    *(unsigned int *)0xC2EA72C = t5;
    t7 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t8 = *(int *)((t7 + 0x4));
    *(unsigned int *)0xC2EA730 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t10 = *(int *)((t9 + 0x8));
    *(unsigned int *)0xC2EA734 = t10;
    t11 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t12 = *(int *)((t11 + 0xC));
    *(unsigned int *)0xC2EA738 = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t14 = *(int *)((t13 + 0x10));
    *(unsigned int *)0xC2EA73C = t14;
    t15 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t16 = *(int *)((t15 + 0x4));
    *(unsigned int *)0xC2EA740 = t16;
    t17 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t18 = *(int *)((t17 + 0x8));
    *(unsigned int *)0xC2EA744 = t18;
    t19 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t20 = *(int *)((t19 + 0xC));
    *(unsigned int *)0xC2EA748 = t20;
    t21 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t22 = *(int *)((t21 + 0x10));
    *(unsigned int *)0xC2EA74C = t22;
    t23 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t24 = *(int *)((t23 + 0x4));
    *(unsigned int *)0xC2EA750 = t24;
    t25 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t26 = *(int *)((t25 + 0x8));
    *(unsigned int *)0xC2EA754 = t26;
    t27 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t28 = *(int *)((t27 + 0xC));
    *(unsigned int *)0xC2EA758 = t28;
    t29 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t30 = *(int *)((t29 + 0x10));
    *(unsigned int *)0xC2EA75C = t30;
    *(unsigned int *)0xC2EA81C = 0x3C;
    t31 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t31, 0x0, 0x0);
    t33 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t34 = *(int *)((t33 + 0xC));
    *(unsigned int *)0xC2EA830 = t34;
}

void kmiProcessVertex_10(int a4)
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
    float u14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    float u22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    int t31;
    int t33;
    int t34;
    int stk[8];

    t0 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((((int)stk + 4) + 0x4) + 0x0)) = t0;
    t1 = *(int *)((a4 + 0x4));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0)) = t1;
    t2 = *(int *)((a4 + 0x8));
    *(unsigned int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0)) = t2;
    t3 = *(int *)0xC2EA820;
    t4 = *(int *)0xC2EA824;
    *(unsigned int *)(((int)stk + 4)) = t4;
    t5 = *(int *)0xC2EA828;
    *(unsigned int *)0xC2EA724 = t3;
    t6 = *(int *)(((int)stk + 4));
    *(unsigned int *)0xC2EA728 = t6;
    *(unsigned int *)0xC2EA72C = t5;
    t7 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t8 = *(int *)((t7 + 0x4));
    *(unsigned int *)0xC2EA730 = t8;
    t9 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t10 = *(int *)((t9 + 0x8));
    *(unsigned int *)0xC2EA734 = t10;
    t11 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t12 = *(int *)((t11 + 0xC));
    *(unsigned int *)0xC2EA738 = t12;
    t13 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    u14 = *(float *)(((0x10 + t13) + 0x0));
    *(unsigned int *)0xC2EA73C = ((((((int)(u14 * 255.0f) << 16) << 8) | ((int)(u14 * 255.0f) << 16)) | ((int)(u14 * 255.0f) << 8)) | (int)(u14 * 255.0f));
    t15 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t16 = *(int *)((t15 + 0x4));
    *(unsigned int *)0xC2EA740 = t16;
    t17 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t18 = *(int *)((t17 + 0x8));
    *(unsigned int *)0xC2EA744 = t18;
    t19 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    t20 = *(int *)((t19 + 0xC));
    *(unsigned int *)0xC2EA748 = t20;
    t21 = *(int *)((((((int)stk + 4) + 0x4) + 0x4) + 0x0));
    u22 = *(float *)(((0x10 + t21) + 0x0));
    *(unsigned int *)0xC2EA74C = ((((((int)(u22 * 255.0f) << 16) << 8) | ((int)(u22 * 255.0f) << 16)) | ((int)(u22 * 255.0f) << 8)) | (int)(u22 * 255.0f));
    t23 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t24 = *(int *)((t23 + 0x4));
    *(unsigned int *)0xC2EA750 = t24;
    t25 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t26 = *(int *)((t25 + 0x8));
    *(unsigned int *)0xC2EA754 = t26;
    t27 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    t28 = *(int *)((t27 + 0xC));
    *(unsigned int *)0xC2EA758 = t28;
    t29 = *(int *)((((((int)stk + 4) + 0x4) + 0x8) + 0x0));
    u30 = *(float *)(((0x10 + t29) + 0x0));
    *(unsigned int *)0xC2EA75C = ((((((int)(u30 * 255.0f) << 16) << 8) | ((int)(u30 * 255.0f) << 16)) | ((int)(u30 * 255.0f) << 8)) | (int)(u30 * 255.0f));
    *(unsigned int *)0xC2EA81C = 0x3C;
    t31 = FUN_0c1534ca(t3);
    FUN_0c1534a0(t31, 0x0, 0x0);
    t33 = *(int *)(((((int)stk + 4) + 0x4) + 0x0));
    t34 = *(int *)((t33 + 0xC));
    *(unsigned int *)0xC2EA830 = t34;
}

int kmiFBinit(void)
{
    int t0;
    int t1;
    int t6;
    int t7;
    int t8;
    int t13;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t19;
    int t20;
    int t21;
    int t32;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t31;
    int t27;
    int t28;
    int t29;
    int t30;
    int t34;

    t0 = *(int *)0xC177FA4;
    if (t0 == 1) {
        t1 = kmiGetProfileInt(0xC175BD4, 0xC175BE0);
        if (t1 == 1) {
            *(unsigned int *)0xC2EA694 = 0x1000000;
            *(unsigned int *)0xC177FA8 = 0x1000000;
            *(unsigned int *)0xC177FAC = 0x0;
            *(unsigned int *)0xC177FB0 = 0x1000000;
            *(unsigned int *)0xC177FB4 = 0x1000000;
            *(unsigned int *)0xC177FB8 = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC2EA694 = 0x800000;
            *(unsigned int *)0xC177FA8 = 0x800000;
            *(unsigned int *)0xC177FAC = 0x0;
            *(unsigned int *)0xC177FB0 = 0x800000;
            *(unsigned int *)0xC177FB4 = 0x800000;
            *(unsigned int *)0xC177FB8 = 0x0;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        t6 = *(int *)0xC177FB0;
        *(unsigned int *)0xC177FCC = t6;
        t7 = *(int *)0xC177FB8;
        *(unsigned int *)0xC177FE0 = t7;
        t8 = FUN_0c1573a0();
        t13 = 0x3;
        if (t8 != 0) {
            t9 = *(int *)0xC177FAC;
            *(unsigned int *)((t8 + 0xC)) = t9;
            t10 = *(int *)0xC177FB0;
            *(unsigned int *)((t8 + 0x10)) = t10;
            t11 = *(int *)0xC177FC4;
            *(unsigned int *)((t8 + 0x8)) = t11;
            *(unsigned int *)0xC177FC4 = t8;
            t12 = *(int *)0xC177FC8;
            *(unsigned int *)((t8 + 0x4)) = t12;
            *(unsigned int *)0xC177FC8 = t8;
            t13 = 0x0;
        }
        t34 = t13;
    } else {
        t14 = kmiGetProfileInt(0xC175BD4, 0xC175BE0);
        if (t14 == 1) {
            *(unsigned int *)0xC2EA694 = 0x1000000;
            *(unsigned int *)0xC177FA8 = 0x800000;
            *(unsigned int *)0xC177FAC = 0x0;
            *(unsigned int *)0xC177FB0 = 0x800000;
            *(unsigned int *)0xC177FB4 = 0x800000;
            *(unsigned int *)0xC177FB8 = 0x800000;
            kmiWriteRegister(0xE4, 0x0);
        } else {
            *(unsigned int *)0xC2EA694 = 0x800000;
            *(unsigned int *)0xC177FA8 = 0x400000;
            *(unsigned int *)0xC177FAC = 0x0;
            *(unsigned int *)0xC177FB0 = 0x400000;
            *(unsigned int *)0xC177FB4 = 0x400000;
            *(unsigned int *)0xC177FB8 = 0x400000;
            kmiWriteRegister(0xE4, 0x0);
        }
        kmiFBreset();
        t19 = *(int *)0xC177FB0;
        *(unsigned int *)0xC177FCC = t19;
        t20 = *(int *)0xC177FB8;
        *(unsigned int *)0xC177FE0 = t20;
        t21 = FUN_0c1573a0();
        t32 = 0x3;
        if (t21 != 0) {
            t22 = *(int *)0xC177FAC;
            *(unsigned int *)((t21 + 0xC)) = t22;
            t23 = *(int *)0xC177FB0;
            *(unsigned int *)((t21 + 0x10)) = t23;
            t24 = *(int *)0xC177FC4;
            *(unsigned int *)((t21 + 0x8)) = t24;
            *(unsigned int *)0xC177FC4 = t21;
            t25 = *(int *)0xC177FC8;
            *(unsigned int *)((t21 + 0x4)) = t25;
            *(unsigned int *)0xC177FC8 = t21;
            t26 = FUN_0c1573a0();
            t31 = 0x3;
            if (t26 != 0) {
                t27 = *(int *)0xC177FB4;
                *(unsigned int *)((t26 + 0xC)) = t27;
                t28 = *(int *)0xC177FB8;
                *(unsigned int *)((t26 + 0x10)) = t28;
                t29 = *(int *)0xC177FD8;
                *(unsigned int *)((t26 + 0x8)) = t29;
                *(unsigned int *)0xC177FD8 = t26;
                t30 = *(int *)0xC177FDC;
                *(unsigned int *)((t26 + 0x4)) = t30;
                *(unsigned int *)0xC177FDC = t26;
                t31 = 0x0;
            }
            t32 = t31;
        }
        t34 = t32;
    }
    return t34;
}

int kmiFBalloc(int a4, int a5)
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
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;
    int t10;

    t0 = ((~(((~a4) + 0x1) & 0x1F)) + 0x1);
    if ((int)a4 >= 0) {
        t0 = (a4 & 0x1F);
    }
    t1 = a4;
    if (t0 != 0) {
        t1 = (a4 + (0x20 - t0));
    }
    t2 = *(int *)0xC177FEC;
    if (t2 != t1) {
        t3 = *(int *)0xC2EA684;
        if ((t3 & 4) != 0) {
            t4 = *(int *)0xC177FCC;
            t5 = *(int *)0xC177FE0;
            t6 = 0x0;
            if ((unsigned int)t4 < (unsigned int)t5) {
                t6 = 0x1;
            }
            t7 = FUN_0c156c32(t6, (t1 << 1), a5, 0x8);
            t10 = t7;
        } else {
            t8 = FUN_0c156c32(0x0, (t1 << 1), a5, 0x8);
            t10 = t8;
        }
        if (t10 == 0) {
            *(unsigned int *)0xC177FEC = t1;
            t11 = *(int *)((a5 + 0x1C));
            *(unsigned int *)0xC177FE8 = t11;
            t12 = *(int *)((a5 + 0x1C));
            *(unsigned int *)((a5 + 0x14)) = t1;
            t13 = kmyConvertAddress64to32(t12);
            *(unsigned int *)((a5 + 0x1C)) = t13;
        }
        t17 = t10;
    } else {
        *(unsigned int *)((a5 + 0x14)) = t1;
        t15 = *(int *)0xC177FE8;
        t16 = kmyConvertAddress64to32((t15 + 0x4));
        *(unsigned int *)((a5 + 0x1C)) = t16;
        *(unsigned int *)0xC177FEC = 0x0;
        *(unsigned int *)0xC177FE8 = 0x0;
        t17 = 0x0;
    }
    return t17;
}

int kmiFBfreeEx(int a4, int a5)
{
    int t0;
    int t1;
    int t5;
    int t2;
    int t3;

    t0 = FUN_0c157f40(a4);
    t1 = kmiFBfree(t0);
    t5 = t1;
    if (t1 != 0) {
        t2 = FUN_0c157f40(a5);
        t3 = kmiFBfree(t2);
        t5 = t3;
    }
    return t5;
}

void kmfInitializeYUVConverter(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t3;

    t0 = 0x0;
    if (a5 == 3) {
        t0 = 0x1000000;
    }
    t1 = (0x10000 | (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0));
    if (a6 == 0) {
        t1 = (((((a8 - 1) & 0x3F) << 8) | ((a7 - 1) & 0x3F)) | t0);
    }
    kmiWriteRegister(0x14C, t1);
    t3 = *(int *)((a4 + 0x1C));
    kmiWriteRegister(0x148, t3);
}

int kmLoadYUVTexture(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t78;
    int t0;
    int t76;
    int t74;
    int t72;
    int t70;
    int t1;
    int t68;
    int t33;
    int t30;
    int t27;
    int t24;
    int t21;
    int t4;
    int t5;
    int t6;
    int t2;
    int t3;
    int t7;
    int t8;
    int t9;
    int t13;
    int t15;
    int t16;
    int t17;
    int t20;
    int t63;
    int t60;
    int t57;
    int t54;
    int t37;
    int t38;
    int t39;
    int t35;
    int t36;
    int t40;
    int t41;
    int t42;
    int t46;
    int t48;
    int t49;
    int t50;
    int t53;
    int t66;
    int t10;
    int t43;
    int stk[9];

    t78 = 0x7;
    if ((0x1F & a5) == 0) {
        t0 = *(int *)((a4 + 0x18));
        t76 = 0x4;
        if ((t0 & 0x1) == 0) {
            t74 = 0x4;
            if ((0x4 & t0) == 0) {
                t72 = 0x4;
                if ((0x8 & t0) == 0) {
                    t70 = 0x4;
                    if ((0x20 & t0) == 0) {
                        t1 = *(int *)((a4 + 0x8));
                        t68 = 0x4;
                        if ((t1 & 0x18000000) != 0) {
                            if (a8 != 6) {
                                t33 = 0x4;
                                if (a8 == 3) {
                                    t30 = 0x4;
                                    if ((int)a6 >= (int)0x1) {
                                        t27 = 0x4;
                                        if ((int)a6 <= (int)0x40) {
                                            t24 = 0x4;
                                            if ((int)a7 >= (int)0x1) {
                                                t21 = 0x4;
                                                if ((int)a7 <= (int)0x40) {
                                                    t4 = a7;
                                                    t5 = 0x1;
                                                    t6 = (a6 - 1);
                                                    if ((int)(a6 * a7) < (int)0x2) {
                                                        t2 = *(int *)((a4 + 0xC));
                                                        t3 = *(int *)((a4 + 0x10));
                                                        t4 = ((unsigned int)((unsigned int)t3 >> 2) >> 2);
                                                        t5 = 0x0;
                                                        t6 = (((unsigned int)((unsigned int)t2 >> 2) >> 2) - 1);
                                                    }
                                                    if (0x1 == 0) {
                                                        t7 = (a6 * a7);
                                                        t8 = (a6 * a7);
                                                        if (t5 == 0) {
                                                            t7 = ((t6 + 0x1) * ((t4 - 1) + 0x1));
                                                            t8 = ((t6 + 0x1) * ((t4 - 1) + 0x1));
                                                        }
                                                        t10 = ((((((t7 << 1) + t8) << 2) << 2) << 2) << 1);
                                                    } else {
                                                        t9 = (a6 * a7);
                                                        if (t5 == 0) {
                                                            t9 = ((t6 + 0x1) * ((t4 - 1) + 0x1));
                                                        }
                                                        t10 = ((t9 << 8) << 1);
                                                    }
                                                    kmiWriteRegister(0x14C, (((0x1000000 | ((t5 & 0x1) << 16)) | (((t4 - 1) & 0x3F) << 8)) | (t6 & 0x3F)));
                                                    t13 = *(int *)((a4 + 0x1C));
                                                    kmiWriteRegister(0x148, (t13 & 0xFFFFF8));
                                                    do {
                                                        t15 = kmiDMAtoTARequest(0x10800000, a5, t10, 0x18, ((int)stk + 8));
                                                        t16 = *(int *)(((int)stk + 8));
                                                        t17 = *(int *)((t16 + 0x0));
                                                    } while (t15 == 0x100);
                                                    t20 = 0x8;
                                                    if (t15 == 0) {
                                                        if (a9 == 1) {
                                                            kmiWaitForFinishDMA(t17);
                                                        }
                                                        t20 = 0x0;
                                                    }
                                                    t21 = t20;
                                                }
                                                t24 = t21;
                                            }
                                            t27 = t24;
                                        }
                                        t30 = t27;
                                    }
                                    t33 = t30;
                                }
                                t66 = t33;
                            } else {
                                t63 = 0x4;
                                if ((int)a6 >= (int)0x1) {
                                    t60 = 0x4;
                                    if ((int)a6 <= (int)0x40) {
                                        t57 = 0x4;
                                        if ((int)a7 >= (int)0x1) {
                                            t54 = 0x4;
                                            if ((int)a7 <= (int)0x40) {
                                                t37 = a7;
                                                t38 = 0x1;
                                                t39 = (a6 - 1);
                                                if ((int)(a6 * a7) < (int)0x2) {
                                                    t35 = *(int *)((a4 + 0xC));
                                                    t36 = *(int *)((a4 + 0x10));
                                                    t37 = ((unsigned int)((unsigned int)t36 >> 2) >> 2);
                                                    t38 = 0x0;
                                                    t39 = (((unsigned int)((unsigned int)t35 >> 2) >> 2) - 1);
                                                }
                                                if (0x0 == 0) {
                                                    t40 = (a6 * a7);
                                                    t41 = (a6 * a7);
                                                    if (t38 == 0) {
                                                        t40 = ((t39 + 0x1) * ((t37 - 1) + 0x1));
                                                        t41 = ((t39 + 0x1) * ((t37 - 1) + 0x1));
                                                    }
                                                    t43 = ((((((t40 << 1) + t41) << 2) << 2) << 2) << 1);
                                                } else {
                                                    t42 = (a6 * a7);
                                                    if (t38 == 0) {
                                                        t42 = ((t39 + 0x1) * ((t37 - 1) + 0x1));
                                                    }
                                                    t43 = ((t42 << 8) << 1);
                                                }
                                                kmiWriteRegister(0x14C, (((0x0 | ((t38 & 0x1) << 16)) | (((t37 - 1) & 0x3F) << 8)) | (t39 & 0x3F)));
                                                t46 = *(int *)((a4 + 0x1C));
                                                kmiWriteRegister(0x148, (t46 & 0xFFFFF8));
                                                do {
                                                    t48 = kmiDMAtoTARequest(0x10800000, a5, t43, 0x18, ((int)stk + 8));
                                                    t49 = *(int *)(((int)stk + 8));
                                                    t50 = *(int *)((t49 + 0x0));
                                                } while (t48 == 0x100);
                                                t53 = 0x8;
                                                if (t48 == 0) {
                                                    if (a9 == 1) {
                                                        kmiWaitForFinishDMA(t50);
                                                    }
                                                    t53 = 0x0;
                                                }
                                                t54 = t53;
                                            }
                                            t57 = t54;
                                        }
                                        t60 = t57;
                                    }
                                    t63 = t60;
                                }
                                t66 = t63;
                            }
                            t68 = t66;
                        }
                        t70 = t68;
                    }
                    t72 = t70;
                }
                t74 = t72;
            }
            t76 = t74;
        }
        t78 = t76;
    }
    return t78;
}

int kmReLoadMipmap(int a4)
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
    int t15;
    int t13;
    int t11;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t31;
    int t29;
    int t27;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t52;
    int t50;
    int t48;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t68;
    int t66;
    int t64;
    int t76;
    int t39;
    int t37;
    int t21;
    int t19;
    int t17;
    int t35;
    int t33;
    int t74;
    int t58;
    int t56;
    int t54;
    int t72;
    int t70;

    t0 = *(int *)((a4 + 0x8));
    if (t0 == 0x28000000) {
        t1 = *(int *)((a4 + 0x18));
        if ((t1 & 1) != 0) {
            t2 = FUN_0c15cace(a4);
            t39 = t2;
        } else {
            t3 = *(int *)((a4 + 0x8));
            if (t3 == 0x30000000) {
                t4 = *(int *)((a4 + 0x18));
                if ((t4 & 1) != 0) {
                    t5 = FUN_0c15cc6e(a4);
                    t21 = t5;
                } else {
                    t6 = *(int *)((a4 + 0x0));
                    if ((unsigned short)t6 == 3) {
                        t7 = FUN_0c15ce20(a4);
                        t19 = t7;
                    } else {
                        t8 = *(int *)((a4 + 0x18));
                        if ((t8 & 8) != 0) {
                            t9 = FUN_0c15ce20(a4);
                            t17 = t9;
                        } else {
                            t10 = *(int *)((a4 + 0x18));
                            t15 = 0x4;
                            if ((0x4 & t10) != 0) {
                                t13 = 0x4;
                                if ((0x1 & t10) != 0) {
                                    t11 = FUN_0c15cd40(a4);
                                    t13 = t11;
                                }
                                t15 = t13;
                            }
                            t17 = t15;
                        }
                        t19 = t17;
                    }
                    t21 = t19;
                }
                t37 = t21;
            } else {
                t22 = *(int *)((a4 + 0x0));
                if ((unsigned short)t22 == 3) {
                    t23 = FUN_0c15ce20(a4);
                    t35 = t23;
                } else {
                    t24 = *(int *)((a4 + 0x18));
                    if ((t24 & 8) != 0) {
                        t25 = FUN_0c15ce20(a4);
                        t33 = t25;
                    } else {
                        t26 = *(int *)((a4 + 0x18));
                        t31 = 0x4;
                        if ((0x4 & t26) != 0) {
                            t29 = 0x4;
                            if ((0x1 & t26) != 0) {
                                t27 = FUN_0c15cd40(a4);
                                t29 = t27;
                            }
                            t31 = t29;
                        }
                        t33 = t31;
                    }
                    t35 = t33;
                }
                t37 = t35;
            }
            t39 = t37;
        }
        t76 = t39;
    } else {
        t40 = *(int *)((a4 + 0x8));
        if (t40 == 0x30000000) {
            t41 = *(int *)((a4 + 0x18));
            if ((t41 & 1) != 0) {
                t42 = FUN_0c15cc6e(a4);
                t58 = t42;
            } else {
                t43 = *(int *)((a4 + 0x0));
                if ((unsigned short)t43 == 3) {
                    t44 = FUN_0c15ce20(a4);
                    t56 = t44;
                } else {
                    t45 = *(int *)((a4 + 0x18));
                    if ((t45 & 8) != 0) {
                        t46 = FUN_0c15ce20(a4);
                        t54 = t46;
                    } else {
                        t47 = *(int *)((a4 + 0x18));
                        t52 = 0x4;
                        if ((0x4 & t47) != 0) {
                            t50 = 0x4;
                            if ((0x1 & t47) != 0) {
                                t48 = FUN_0c15cd40(a4);
                                t50 = t48;
                            }
                            t52 = t50;
                        }
                        t54 = t52;
                    }
                    t56 = t54;
                }
                t58 = t56;
            }
            t74 = t58;
        } else {
            t59 = *(int *)((a4 + 0x0));
            if ((unsigned short)t59 == 3) {
                t60 = FUN_0c15ce20(a4);
                t72 = t60;
            } else {
                t61 = *(int *)((a4 + 0x18));
                if ((t61 & 8) != 0) {
                    t62 = FUN_0c15ce20(a4);
                    t70 = t62;
                } else {
                    t63 = *(int *)((a4 + 0x18));
                    t68 = 0x4;
                    if ((0x4 & t63) != 0) {
                        t66 = 0x4;
                        if ((0x1 & t63) != 0) {
                            t64 = FUN_0c15cd40(a4);
                            t66 = t64;
                        }
                        t68 = t66;
                    }
                    t70 = t68;
                }
                t72 = t70;
            }
            t74 = t72;
        }
        t76 = t74;
    }
    return t76;
}

int FUN_0c15f9c4(int a4, int a5, int a6)
{
    int t10;
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

    t10 = 0x1;
    if ((int)a6 > 0) {
        t0 = a5;
        t1 = a4;
        t2 = a6;
        for (;;) {
            t3 = *(signed char *)((t1 + 0x0));
            if (t3 != 0) {
                t4 = *(signed char *)((t1 + 0x0));
                t1 = (t1 + 0x1);
                t5 = FUN_0c15f998(t4);
                t6 = *(signed char *)((t0 + 0x0));
                t0 = (t0 + 0x1);
                t7 = FUN_0c15f998(t6);
                if ((signed char)t5 == (signed char)t7) {
                    t2 = (t2 - 1);
                    if ((int)t2 <= 0) {
                        return 0x1;
                    }
                    continue;
                }
                return 0x0;
            }
            break;
        }
        t8 = *(signed char *)((t0 + 0x0));
        t9 = 0x1;
        if (t8 != 0) {
            t9 = 0x0;
        }
        t10 = t9;
    }
    return t10;
}

int FUN_0c15fa32(int a4, int a5)
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

    t0 = a5;
    t1 = a4;
    for (;;) {
        t2 = *(signed char *)((t1 + 0x0));
        if (t2 == 0) break;
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t4 = FUN_0c15f998(t3);
        t5 = *(signed char *)((t0 + 0x0));
        t0 = (t0 + 0x1);
        t6 = FUN_0c15f998(t5);
        if ((signed char)t4 == (signed char)t6) continue;
        return 0x0;
    }
    t7 = *(signed char *)((t0 + 0x0));
    t8 = 0x1;
    if (t7 != 0) {
        t8 = 0x0;
    }
    return t8;
}

void ADXSTM_Stop(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t5;
    int t6;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 == 1) {
        t1 = *(int *)((a4 + 0x8));
        if (t1 != 0) {
            t2 = FUN_0c1614de();
            t3 = *(int *)((a4 + 0x8));
            gdFsStopRd(t3);
            t5 = FUN_0c1614de();
            t6 = FUN_0c1614e8(t2, t5);
            *(unsigned int *)0xC178638 = t6;
            *(unsigned char *)((a4 + 0x2)) = 0x0;
        }
    }
    *(unsigned char *)((a4 + 0x1)) = 0x1;
}

void mpdrv_make_rootdevicedata(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t14;
    int t15;
    int t16;
    int t17;
    int t20;

    make_header(a6, a7);
    get_data(a6);
    t2 = *(signed char *)((a6 + 0x1));
    t3 = *(signed char *)((a6 + 0x0));
    *(unsigned char *)((a6 + 0x2)) = ((t2 ^ t3) & t3);
    t4 = *(signed char *)((a6 + 0x0));
    t5 = *(signed char *)((a6 + 0x1));
    *(unsigned char *)((a6 + 0x3)) = ((t5 ^ t4) & (~t4));
    t6 = *(int *)0xC2FA538;
    t7 = *(int *)((0x10C4 + t6));
    if (t7 == 1) {
        t8 = *(signed char *)((a6 + 0x8));
        if ((unsigned char)t8 != 0xFF) {
            if ((unsigned char)t8 != 0) {
                t9 = *(int *)((a7 + 0x0));
                mpdrv_swaplong(a7, ((unsigned char)t9 + 0x1));
            }
        }
    }
    t14 = *(signed char *)((a6 + 0x0));
    t15 = 0x1;
    if (t14 != 0) {
        t15 = 0x9;
    }
    *(unsigned char *)((a6 + 0x4)) = t15;
    t16 = *(signed char *)((a6 + 0x3));
    t17 = *(signed char *)((a6 + 0x2));
    if (t17 != 0) {
        *(unsigned char *)((a5 + 0x10)) = 0x1;
        mpdrv_make_deviceinfo(a5, a6, a7);
    }
    t20 = *(signed char *)((a6 + 0x3));
    if (t20 != 0) {
        mpdrv_clear_deviceinfo(a5);
    }
}

int ADXB_CopyExtraBufSte(int a4, int a5, int a6, int a7)
{
    memcpy2(a4, ((a5 << 1) + a4), a7);
    return memcpy2(((a6 << 1) + a4), (((a5 + a6) << 1) + a4), a7);
}

int ADX_DecodeInfoWav(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14)
{
    int t3;
    int t0;
    int t1;
    int t2;
    int t66;
    int t4;
    int t64;
    int t5;
    int t62;
    int t10;
    int t6;
    int t7;
    int t8;
    int t60;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
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
    int t26;
    int t27;
    int t28;
    int t41;
    int t56;
    int t42;
    int t52;
    int t43;
    int t49;
    int t46;
    int t44;
    int t45;

    t3 = 0x0;
    if ((int)a5 > 0) {
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)0xC1789A0;
            t2 = FUN_0c0813e0((t0 + a4), t1, 0x4);
            if (t2 != 0) {
                t0 = (t0 + 0x1);
                if ((int)t0 >= (int)a5) break;
                continue;
            }
            break;
        }
        t3 = t0;
    }
    t66 = 0xFFFFFFFF;
    if (t3 != a5) {
        t4 = ((~(((~t3) + 0x1) & 0x3)) + 0x1);
        if ((int)t3 >= 0) {
            t4 = (t3 & 0x3);
        }
        t64 = 0xFFFFFFFF;
        if (t4 == 0) {
            t5 = *(short *)((((t3 + 0x8) + a4) + 0x0));
            t62 = 0xFFFFFFFF;
            if ((int)(unsigned short)t5 <= (int)0x1) {
                t10 = 0x0;
                if ((int)a5 > 0) {
                    t6 = 0x0;
                    for (;;) {
                        t7 = *(int *)0xC1789A8;
                        t8 = FUN_0c0813e0((t6 + a4), t7, 0x4);
                        if (t8 != 0) {
                            t6 = (t6 + 0x1);
                            if ((int)t6 >= (int)a5) break;
                            continue;
                        }
                        break;
                    }
                    t10 = t6;
                }
                t60 = 0xFFFFFFFF;
                if (t10 != a5) {
                    t11 = *(signed char *)((((t10 + 0x4) + a4) + 0x1));
                    t12 = *(signed char *)((((t10 + 0x4) + a4) + 0x0));
                    t13 = *(signed char *)((((t10 + 0x4) + a4) + 0x2));
                    t14 = *(signed char *)((((t10 + 0x4) + a4) + 0x3));
                    *(unsigned short *)((a6 + 0x0)) = (t10 + 0x8);
                    *(unsigned char *)((a7 + 0x0)) = 0xFFFFFFFF;
                    t15 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x1));
                    t16 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x2));
                    t17 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x0));
                    t18 = *(signed char *)(((((t3 + 0x8) + a4) + 0x4) + 0x3));
                    *(unsigned int *)((a11 + 0x0)) = (((((unsigned char)t15 << 8) | ((unsigned char)t16 << 16)) | (((unsigned char)t18 << 16) << 8)) | (unsigned char)t17);
                    t19 = *(short *)((((t3 + 0x8) + a4) + 0x2));
                    *(unsigned char *)((a10 + 0x0)) = t19;
                    t20 = *(short *)((((t3 + 0x8) + a4) + 0xE));
                    *(unsigned char *)((a8 + 0x0)) = t20;
                    t21 = *(short *)((((t3 + 0x8) + a4) + 0xC));
                    *(unsigned char *)((a9 + 0x0)) = t21;
                    t22 = *(signed char *)((a9 + 0x0));
                    t23 = (int)((int)(((((unsigned char)t11 << 8) | ((unsigned char)t13 << 16)) | (((unsigned char)t14 << 16) << 8)) | (unsigned char)t12) / (int)t22);
                    *(unsigned int *)((a12 + 0x0)) = t23;
                    *(unsigned int *)((a13 + 0x0)) = 0x1;
                    t24 = *(signed char *)((a8 + 0x0));
                    if (t24 == 16) {
                        *(unsigned short *)((a14 + 0x0)) = 0x0;
                    } else {
                        if (t24 == 8) {
                            *(unsigned short *)((a14 + 0x0)) = 0x1;
                        } else {
                            t25 = *(signed char *)((a8 + 0x0));
                            if (t25 == 4) {
                                t26 = *(signed char *)((a10 + 0x0));
                                *(unsigned char *)((a9 + 0x0)) = (t26 << 1);
                                *(unsigned int *)((a13 + 0x0)) = 0x4;
                                t27 = *(signed char *)((a10 + 0x0));
                                t28 = (int)((unsigned int)((unsigned int)(((((unsigned char)t11 << 8) | ((unsigned char)t13 << 16)) | (((unsigned char)t14 << 16) << 8)) | (unsigned char)t12) >> 1) / (unsigned int)t27);
                                *(unsigned int *)((a12 + 0x0)) = t28;
                                *(unsigned char *)((a8 + 0x0)) = 0x10;
                                *(unsigned short *)((a14 + 0x0)) = 0x2;
                            }
                        }
                    }
                    t41 = *(signed char *)((a8 + 0x0));
                    t56 = 0xFFFFFFFF;
                    if (t41 != 0) {
                        t42 = *(signed char *)((a9 + 0x0));
                        t52 = 0xFFFFFFFF;
                        if (t42 != 0) {
                            t43 = *(signed char *)((a10 + 0x0));
                            t49 = 0xFFFFFFFF;
                            if ((int)t43 > 0) {
                                t46 = 0xFFFFFFFF;
                                if ((int)t43 <= (int)0x2) {
                                    t44 = *(int *)((a11 + 0x0));
                                    t45 = 0x0;
                                    if (t44 == 0) {
                                        t45 = 0xFFFFFFFF;
                                    }
                                    t46 = t45;
                                }
                                t49 = t46;
                            }
                            t52 = t49;
                        }
                        t56 = t52;
                    }
                    t60 = t56;
                }
                t62 = t60;
            }
            t64 = t62;
        }
        t66 = t64;
    }
    return t66;
}
