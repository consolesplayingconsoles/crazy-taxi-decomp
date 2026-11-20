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
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_int { char p[0x4C]; int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o60_int { char p[0x60]; int v; };
struct o64_int { char p[0x64]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };
struct o78_int { char p[0x78]; int v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o2_short { char p[0x2]; short v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };


int nlPerspective_L_0c079730(int a4, float f4, float f5, float f6)
{
    int stk[30];
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

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(float *)(((int)stk + 8)) = f4;
    t0 = *(int *)(((int)stk + 4));
    *(float *)(((int)stk + 0)) = (1.0f / (nlTan((t0 >> 1))));
    if ((*(float *)0xC14A81C) != 0.0f) {
        t3 = nlTan((t0 >> 1));
        t5 = nlArcTan((t3 * ((*(float *)0xC14A81C) + 1.0f)));
        *(float *)(((int)stk + 12)) = (1.0f / (nlCos(t5)));
    } else {
        *(float *)(((int)stk + 12)) = (1.0f / (nlCos((t0 >> 1))));
    }
    u13 = *(float *)(((int)stk + 0));
    u14 = *(float *)(((int)stk + 8));
    u23 = (1.0f / (u14 * u13));
    if ((*(float *)0xC14A820) != 0.0f) {
        t15 = nlArcTan((1.0f / (u14 * u13)));
        *(unsigned int *)(((int)stk + 4)) = t15;
        u23 = ((nlTan(t15)) * ((*(float *)0xC14A820) + 1.0f));
    }
    t25 = nlArcTan(u23);
    t26 = nlCos(t25);
    *(float *)0xC14A81C = 0.0f;
    *(float *)0xC14A820 = 0.0f;
    u27 = *(float *)0xC079A04;
    u30 = (u14 * u13);
    u31 = ((*(float *)(((int)stk + 0))) * (*(float *)(((int)stk + 12))));
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
    *(float *)(((int)stk + 16)) = (*(float *)(((int)stk + 0)));
    *(float *)(((int)stk + 20)) = 0.0f;
    *(float *)(((int)stk + 24)) = 0.0f;
    *(float *)(((int)stk + 28)) = 0.0f;
    *(float *)(((int)stk + 32)) = 0.0f;
    *(float *)(((int)stk + 36)) = (u14 * u13);
    *(float *)(((int)stk + 40)) = 0.0f;
    *(float *)(((int)stk + 44)) = 0.0f;
    *(float *)(((int)stk + 48)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 56)) = ((f5 + f6) / (f5 - f6));
    *(float *)(((int)stk + 60)) = 1.0f;
    *(float *)(((int)stk + 64)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    u40 = (f5 * f6);
    u41 = (u40 * (1.0f + 1.0f));
    u41 = -u41;
    *(float *)(((int)stk + 72)) = (u41 / (f5 - f6));
    *(float *)(((int)stk + 76)) = 0.0f;
    *(float *)0xC2B7BDC = f5;
    *(float *)0xC2B7BE0 = f6;
    *(float *)0xC2B7BE4 = (1.0f / f5);
    *(float *)0xC2B3174 = f5;
    *(float *)0xC2B315C = (-f5);
    *(float *)0xC2B3178 = f6;
    *(float *)0xC2B3170 = (1.0f / f5);
    nlMultiMatrix((((int)stk + 0) + 0x10));
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

    t0 = *(short *)((((a4 + (*(int *)0xC2B3184)) << 1) + ((((struct o0_int *)0xC2B76B8)->v))));
    t1 = (((struct o10_int *)0xC2B76B8)->v);
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
            if ((int)a5 < (int)((((struct o0_short *)0xC2B7BC4)->v))) {
                *(unsigned short *)((((((t0 << 2) << 2) << 1) + t1) + 0x16)) = a5;
                t4 = (((struct o14_int *)0xC2B7BC4)->v);
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
                    t6 = 0x0;
                    if ((int)t8 >= 0) {
                        *(unsigned short *)(((t4 + ((a5 << 2) << 1)) + 0x0)) = t8;
                        nlSetPaletteMap(t8, t7);
                        nlSetPaletteData(((t8 << 2) << 2), (*(int *)((((((a5 << 1) + a5) << 2) + t5) + 0x4))), t7);
                        t6 = t8;
                    }
                }
                *(unsigned int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC)) = (((*(int *)((((((t0 << 2) << 2) << 1) + t1) + 0xC))) & 0xF81FFFFF) | (t6 << 21));
            }
            t0 = (unsigned short)t2;
        }
        t3 = t0;
    }
    return t3;
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
    (((struct o0_ushort *)0xC2B3194)->v) = 0x0;
    if ((0x80 & a4) != 0) {
        (((struct o0_ushort *)0xC2B3194)->v) = 0x1;
    }
    (((struct o2_ushort *)0xC2B3194)->v) = 0x0;
    if ((a4 & 0x8000) != 0) {
        (((struct o2_ushort *)0xC2B3194)->v) = 0x1;
    }
    kmChangeDisplayFilterMode(((((struct o0_short *)0xC2B3194)->v)), ((((struct o2_short *)0xC2B3194)->v)), 0x0, a7);
    nlSetBackColor(((((struct o0_int *)0xC14A654)->v)), ((((struct o4_int *)0xC14A654)->v)), ((((struct o8_int *)0xC14A654)->v)));
    return nlSetWindowSize(((((struct o8_float *)0xC2B3498)->v)), ((((struct oC_float *)0xC2B3498)->v)), ((((struct o0_float *)0xC2B3498)->v)), ((((struct o4_float *)0xC2B3498)->v)));
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


int nlIntrSetVectorFunction(int a4, int a5)
{
    *(unsigned int *)(((((unsigned int)((unsigned int)(*(short *)((((a4 - 5) << 1) + 0xC0D67DC))) >> 2) >> 1) + (((int)_builtin_get_vbr()) + 0x1C0)) + 0x0)) = a5;
    return 0x1;
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

