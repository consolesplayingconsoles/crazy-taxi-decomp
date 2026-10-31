/* Straight-line functions with calls and guards (batch gen_atu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, int, int, int, int);
int ADXT_Stop(int);
int SJMEM_Create(int, int);
int adxt_start_sj(int, int);
int gdc_FileLoad(int, int, int);
int gdc_SpriteFreeMenu(void);
int kmChangeDisplayFilterMode(int, int, int, int);
int nlArcTan(float);
int nlCalcPoint4(int, int);
float nlCos(int);
float nlCosf(float);
int nlFreePalette(int);
int nlMultiMatrix(int);
int nlObjPutSetReplaceTextureDirName(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateXSC_L(float, float);
int nlRotateYSC(float, float);
int nlRotateYSC_L(float, float);
int nlRotateZSC(float, float);
int nlRotateZSC_L(float, float);
int nlSearchPalette(int, int);
int nlSetBackColor(int, int, int);
int nlSetCommonTextureOffset(int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
int nlSetWindowSize(float, float, float, float);
float nlSinf(float);
float nlTan(int);
int nl_set_cnv_proj_pers(void);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6);
int nlSetPalette(int a4, int a5);
int bootInitBuffers(void);
int nlProjectScreen(int a4, int a5);
int nlSetDisplayConfig(int a4, int a5, int a6, int a7);
int bootDevCheckStatus(void);
int ADXT_StartMem(int a4, int a5);
int gdc_SpriteSetMode4(void);
int Put_Adv_InsertMoreCoin(void);
int Put_Adv_FreePlay(void);
int Put_Adv_InsertCoin(void);
int bootDevReset(void);
int bootDevSetReg(int a4, int a5);
int gdFsDaPause(void);
int nlRotateRX_L(float f4);
int nlRotateRY(float f4);
int nlRotateRY_L(float f4);
int nlRotateRZ_L(float f4);
int nlRotateRZ(float f4);
int bootCopyWords(int a4, int a5, int a6);
int nlIntrSetVectorFunction(int a4, int a5);
int gdFsGetGlobalErr(void);
int gdFsDaPlaySct(void);
int gdFsDaPlay(void);
int gdFsDaStop(void);
int gdFsDaGetInfo(void);
int gdFsDaRelease(void);
int gdFsIsTrayOpen(void);
void bootFillWords(int a4, int a5, int a6);
int bootJumpUncached(void);
int gdFsReadW(void);
int gdFsSetGlobalErr(void);
void bootWritePortInv(int a4);
int bootSerialDataReady(void);
int nlIntrSetEventB00Function(int a4, int a5);
int nlIntrSetEventA40Function(int a4, int a5);
void bootNop(void);

int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6)
{
    int stk[31];
    register int t0;
    register float t3;
    register int t5;
    register float u13;
    register float u14;
    register float u23;
    register int t15;
    register int t25;
    register float t26;
    register float u27;
    register float u30;
    register float u31;
    register float u32;
    register float u35;
    register float u36;
    register float u37;
    register float u40;
    register float u41;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(float *)(((int)stk + 12)) = f4;
    t0 = *(int *)(((int)stk + 8));
    *(float *)(((int)stk + 4)) = (1.0f / (nlTan((t0 >> 1))));
    if ((*(float *)0xC14A81C) != 0.0f) {
        t3 = nlTan((t0 >> 1));
        t5 = nlArcTan((t3 * ((*(float *)0xC14A81C) + 1.0f)));
        *(float *)(((int)stk + 16)) = (1.0f / (nlCos(t5)));
    } else {
        *(float *)(((int)stk + 16)) = (1.0f / (nlCos((t0 >> 1))));
    }
    u13 = *(float *)(((int)stk + 4));
    u14 = *(float *)(((int)stk + 12));
    u23 = (1.0f / (u14 * u13));
    if ((*(float *)0xC14A820) != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 8)) = t15;
        u23 = ((nlTan(t15)) * ((*(float *)0xC14A820) + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    u27 = *(float *)0xC079A04;
    u30 = (u14 * u13);
    u31 = ((*(float *)(((int)stk + 4))) * (*(float *)(((int)stk + 16))));
    u32 = (u30 * (1.0f / t26));
    *(float *)0xC14A810 = (u31 * u27);
    *(float *)0xC14A814 = (u32 * u27);
    *(float *)0xC2B3490 = ((*(float *)0xC14A824) * (*(float *)0xC14A810));
    u35 = *(float *)0xC14A814;
    u36 = *(float *)0xC14A828;
    *(float *)0xC2B3494 = (u36 * u35);
    u37 = *(float *)0xC2B3490;
    if (u37 > (u36 * u35)) {
        *(float *)0xC14A818 = u37;
    } else {
        *(float *)0xC14A818 = (u36 * u35);
    }
    *(float *)(((int)stk + 20)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = 0.0f;
    *(float *)(((int)stk + 40)) = (u14 * u13);
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = 0.0f;
    *(float *)(((int)stk + 60)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 64)) = 1.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 72)) = 0.0f;
    u40 = (f5 * f6);
    u41 = (u40 * (1.0f + 1.0f));
    u41 = -u41;
    *(float *)(((int)stk + 76)) = (u41 / (f5 - f6));
    *(float *)(((int)stk + 80)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    *(float *)0xC2B7BE0 = f6;
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    *(float *)0xC2B3178 = f6;
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 4) + 0x10));
    return (nl_set_cnv_proj_pers());
}

int nlSetPalette(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = *(short *)((((a4 + (*(int *)0xC2B3184)) << 1) + (*(int *)0xC2B76B8)));
    t1 = *(int *)0xC2B76C8;
    t2 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
    if ((*(int *)0xC14A644) != 0) {
        if (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6)) {
            t3 = *(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC));
            *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = ((t3 & 0xF81FFFFF) | (a5 << 21));
            t4 = (0x3F & ((unsigned int)t3 >> 21));
        }
        t3 = t4;
    } else {
        if (((*(int *)0xC2B3568) != 0) && (((0x7 & ((unsigned int)t2 >> 27)) == 5) || ((0x7 & ((unsigned int)t2 >> 27)) == 6))) {
            t2 = *(short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16));
            nlFreePalette((unsigned short)t2);
            *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = 0xFFFF;
            if ((int)a5 < (int)(*(short *)0xC2B7BC4)) {
                *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = a5;
                t4 = *(int *)0xC2B7BD8;
                t5 = *(int *)0xC2B3568;
                if ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) != 0) {
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = ((*(short *)(((t4 + ((a5 << 2) << 1)) + 0x4))) + 0x1);
                    t6 = (*(short *)(((t4 + ((a5 << 2) << 1)) + 0x0)));
                } else {
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x2)) = (*(signed char *)((((((a5 << 1) + a5) << 2) + t5) + 0x2)));
                    *(unsigned char *)(((t4 + ((a5 << 2) << 1)) + 0x3)) = ((int)((*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x4)) = 0x1;
                    *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x6)) = a5;
                    t7 = *(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x8));
                    t8 = nlSearchPalette((*(short *)((((((a5 << 1) + a5) << 2) + t5) + 0x2))), t7);
                    t9 = 0x0;
                    if ((int)t8 >= 0) {
                        *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x0)) = t8;
                        nlSetPaletteMap(t8, t7);
                        nlSetPaletteData(((t8 << 2) << 2), (*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x4))), t7);
                        t9 = t8;
                    }
                    t6 = t9;
                }
                *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = (((*(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC))) & 0xF81FFFFF) | (t6 << 21));
            }
            t0 = (unsigned short)t2;
        }
        t3 = t0;
    }
    return t3;
}

int bootInitBuffers(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        t1 = (t1 + 0x1);
        *(unsigned int *)(((0x8C00E000 + t0) + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((int)t1 >= (int)0x42) {
            break;
        }
    }
    *(unsigned int *)0x8C00E070 = 0x8C00F400;
    *(unsigned int *)0x8C00E074 = 0x600000E0;
    *(unsigned int *)0x8C00E0C4 = 0x40001;
    t0 = 0x1;
    t1 = 0x200;
    for (;;) {
        bootCopyWords((0x8C00E000 + t1), 0x8C00E000, 0x80);
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x200);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x200;
    t3 = 0x0;
    for (;;) {
        *(unsigned int *)(((0x8C00E03C + t0) + 0x0)) = (0x8C00E000 + t2);
        t3 = (t3 + 0x1);
        t2 = (t2 + 0x200);
        *(unsigned int *)((t0 + 0x8C00E078)) = ((0x8C00E000 + t0) + 0x120);
        *(unsigned int *)((((0x8C00E000 + t0) + 0x120) + 0x0)) = (0x7001AFFE | t1);
        t1 = (t1 + 0x1000000);
        t0 = (t0 + 0x200);
        if ((int)t3 >= (int)0x8) {
            break;
        }
    }
    *(unsigned int *)0x8C00E03C = 0xC00F400;
    *(unsigned int *)0x8C00F520 = 0x8C00E000;
    *(unsigned int *)0x8C00FA18 = 0x0;
    *(unsigned int *)0x8C00FA1C = 0x8C00E000;
    return (((int (*)(int, int, int, int))(0xAC010368))(t0, 0x120, t1, t2));
}

int nlProjectScreen(int a4, int a5)
{
    int stk[8];
    register float u3;
    register float u6;
    register float u11;
    register float u16;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushMatrix(0xC2B33D0);
    nlCalcPoint4((*(int *)(((int)stk + 8))), (((int)stk + 4) + 0x8));
    u3 = *(float *)(((int)stk + 24));
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) * (1.0f / u3));
    *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) * (1.0f / u3));
    u6 = *(float *)0xC079A04;
    u11 = (*(float *)0xC14A830);
    u11 = u11 + u6 * (((*(float *)(((int)stk + 12))) + 1.0f) * (*(float *)0xC14A824));
    *(float *)(((*(int *)(((int)stk + 4))) + 0x0)) = u11;
    u16 = (*(float *)0xC14A82C);
    u16 = u16 + u6 * (((-(*(float *)(((((int)stk + 4) + 0xC) + 0x0)))) + 1.0f) * (*(float *)0xC14A828));
    *(float *)((0x4 + (*(int *)(((int)stk + 4))))) = u16;
    return (nlPopMatrix(0x1));
}

int nlSetDisplayConfig(int a4, int a5, int a6, int a7)
{
    *(unsigned short *)0xC2B3194 = 0x0;
    if ((0x80 & a4) != 0) {
        *(unsigned short *)0xC2B3194 = 0x1;
    }
    *(unsigned short *)0xC2B3196 = 0x0;
    if ((a4 & 0x8000) != 0) {
        *(unsigned short *)0xC2B3196 = 0x1;
    }
    kmChangeDisplayFilterMode((*(short *)0xC2B3194), (*(short *)0xC2B3196), 0x0, a7);
    nlSetBackColor((*(int *)0xC14A654), (*(int *)0xC14A658), (*(int *)0xC14A65C));
    return nlSetWindowSize((*(float *)0xC2B34A0), (*(float *)0xC2B34A4), (*(float *)0xC2B3498), (*(float *)0xC2B349C));
}

int bootDevCheckStatus(void)
{
    register int t0;
    register int t4;
    register int t6;

    t0 = *(int *)0xAC00F728;
    if (((*(signed char *)((t0 + 0x8))) & 0x80) != 0) {
        t4 = *(signed char *)((t0 + 0x10));
        *(volatile signed char *)(((0x14 + t0) + 0x0));
        if (((unsigned char)t4 != 0x80) && ((unsigned char)t4 != 0x81)) {
            return 0x0;
        }
        if ((unsigned char)t4 == 0x81) {
            *(unsigned char *)((t0 + 0x14)) = 0x39;
            t6 = ((int (*)(int, int, int))(0xAC0118F8))(t0, t4, 0x80);
            *(volatile signed char *)(((*(int *)0xAC00F72C) + 0x0));
        }
        return 0x1;
    }
    return 0x0;
}

int ADXT_StartMem(int a4, int a5)
{
    register int t2;

    ADXT_Stop(a4);
    ADXCRS_Lock();
    t2 = SJMEM_Create(a5, 0x40000000);
    if (t2 == 0) {
        ADXCRS_Unlock();
        ADXERR_CallErrFunc(0x0, 0x0, 0x0, 0x0, 0xC1754B4);
    } else {
        adxt_start_sj(a4, t2);
        *(unsigned char *)((a4 + 0x2)) = 0x2;
    }
    return ADXCRS_Unlock();
}

int gdc_SpriteSetMode4(void)
{
    register int t0;
    register int t6;

    t0 = *(int *)0xC26E184;
    t6 = t0;
    if (t0 != 4) {
        gdc_SpriteFreeMenu();
        nlSetCommonTextureOffset(0x1E0);
        gdc_FileLoad(0xCB40000, 0xC08D660, 0x0);
        nlObjPutSetReplaceTextureDirName(0xC1469C8, 0x0);
        nlSetCommonTextureOffset(0x0);
        *(unsigned int *)0xC26E184 = 0x4;
        *(unsigned int *)0xC0E5318 = 0x3;
        t6 = 0xC0E5318;
    }
    return t6;
}

int Put_Adv_InsertMoreCoin(void)
{
    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate((*(float *)0xC2A96CC), (*(float *)0xC05819C));
    return pfPuts(0xC0D0A2C);
}

int Put_Adv_FreePlay(void)
{
    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate((*(float *)0xC2A96C4), (*(float *)0xC057F94));
    return pfPuts(0xC0D0A10);
}

int Put_Adv_InsertCoin(void)
{
    pfSetFont(0x1);
    pfColor(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
    pfSize(1.0f, 1.0f);
    pfLocate((*(float *)0xC2A96C8), 376.0f);
    return pfPuts(0xC0D0A1C);
}

int bootDevReset(void)
{
    *(unsigned char *)(((*(int *)0xAC00F72C) + 0x0)) = 0x0;
    *(unsigned char *)(((*(int *)0xAC00F72C) + 0x4)) = 0x0;
    *(unsigned char *)(((*(int *)0xAC00F728) + 0x14)) = 0x24;
    return ((int (*)(int, int))(0xAC0118F8))(0x0, 0xAC00F72C);
}

int bootDevSetReg(int a4, int a5)
{
    *(unsigned char *)(((0x3C + (*(int *)0xAC00F728)) + 0x0)) = (((unsigned int)((unsigned int)a4 >> 2) >> 2) | 0x80);
    *(unsigned char *)(((((a4 & 0xF) << 2) + (*(int *)0xAC00F734)) + 0x0)) = a5;
    return 0xF;
}

int gdFsDaPause(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x68));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int nlRotateRX_L(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateXSC_L(t1, t0);
}

int nlRotateRY(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateYSC(t1, t0);
}

int nlRotateRY_L(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateYSC_L(t1, t0);
}

int nlRotateRZ_L(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateZSC_L(t1, t0);
}

int nlRotateRZ(float f4)
{
    register float t0;
    register float t1;

    t0 = nlCosf(f4);
    t1 = nlSinf(f4);
    return nlRotateZSC(t1, t0);
}

int bootCopyWords(int a4, int a5, int a6)
{
    register int t4;
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t4 = a4;
    if ((int)a6 > 0) {
        t0 = a4;
        t1 = 0x0;
        t2 = a5;
        for (;;) {
            t3 = *(int *)((t2 + 0x0));
            t2 = (t2 + 0x4);
            t1 = (t1 + 0x1);
            *(unsigned int *)((t0 + 0x0)) = t3;
            t0 = (t0 + 0x4);
            if ((int)t1 >= (int)a6) {
                break;
            }
        }
        t4 = t0;
    }
    return t4;
}

int nlIntrSetVectorFunction(int a4, int a5)
{
    *(unsigned int *)(((((unsigned int)((unsigned int)(*(short *)((((a4 - 5) << 1) + 0xC0D67DC))) >> 2) >> 1) + (((int)_builtin_get_vbr()) + 0x1C0)) + 0x0)) = a5;
    return 0x1;
}

int gdFsGetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x4C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaPlaySct(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x60));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaPlay(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x5C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaStop(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x64));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaGetInfo(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x70));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsDaRelease(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x6C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsIsTrayOpen(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x78));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void bootFillWords(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((int)a6 > 0) {
        t0 = 0x0;
        t1 = a4;
        for (;;) {
            t0 = (t0 + 0x1);
            *(unsigned int *)((t1 + 0x0)) = a5;
            t1 = (t1 + 0x4);
            if ((int)t0 >= (int)a6) {
                break;
            }
        }
    }
}

int bootJumpUncached(void)
{
    *(unsigned int *)0x8C00E078 = 0xC020000;
    return ((int (*)(void))(0xAC010E3C))();
}

int gdFsReadW(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x1C));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

int gdFsSetGlobalErr(void)
{
    register int t0;
    register int t1;

    t0 = *(int *)0xC177A98;
    if (t0 != 0) {
        t1 = *(int *)((t0 + 0x18));
        return ((int (*)(void))(t1))();
    }
    return 0x0;
}

void bootWritePortInv(int a4)
{
    if ((*(int *)0xAC00F71C) != 0x8F) {
        *(unsigned char *)0xA30100A0 = (~a4);
    }
}

int bootSerialDataReady(void)
{
    register int t1;

    t1 = 0x0;
    if (((unsigned short)(*(short *)0xFFE80010) & 0x2) == 2) {
        t1 = 0x1;
    }
    return t1;
}

int nlIntrSetEventB00Function(int a4, int a5)
{
    *(unsigned int *)0xC2B75C8 = a5;
    return 0x1;
}

int nlIntrSetEventA40Function(int a4, int a5)
{
    *(unsigned int *)0xC2B75C4 = a5;
    return 0x1;
}

void bootNop(void)
{
    
}
