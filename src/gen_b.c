/* Straight-line functions with loads (batch gen b): getters, copies and float parameter blocks, generated from the code and
   checked by tests. */

void SetCameraDistance(float f4);
float GetCameraDistance(void);
void SetScreenRatio(float f4);
int ReturnBreakPinNum(void);
int ReturnBreakBeachFlag(void);
int getKyakuOffFlag(void);
int Init_Pass_Time(void);
int Get_Bowling_Gate(void);
int CheckNumRideon(void);
int rinRandGetSeed(void);
int nlIntrGetEvent(void);
int kmChangeContextUserClipMode(int a4);
int ADXAMP_GetStat(int a4);
int ADXSJD_GetStat(int a4);
int ADXSJD_GetDecNumSmpl(int a4);
int ADXSTM_GetStat(int a4);
int ADXSTM_GetSj(int a4);
int ADXSTM_GetFileLen(int a4);
int SJMEM_GetUuid(int a4);
int SJMEM_GetBufPtr(int a4);
int SJMEM_GetBufSize(int a4);
int SJRBF_GetUuid(int a4);
int SJRBF_GetBufPtr(int a4);
int SJRBF_GetBufSize(int a4);
int SJRBF_GetXtrSize(int a4);
int SJUNI_GetUuid(int a4);
int ADXB_GetPcmBuf(int a4);
int ADXB_GetFormat(int a4);
int ADXB_GetSfreq(int a4);
int ADXB_GetNumChan(int a4);
int ADXB_GetBlkSmpl(int a4);
int ADXB_GetBlkLen(int a4);
int ADXB_GetTotalNumSmpl(int a4);
int ADXB_GetCof(int a4);
int ADXB_GetLpInsNsmpl(int a4);
int ADXB_GetNumLoop(int a4);
int ADXB_GetLpStartPos(int a4);
int ADXB_GetLpStartOfst(int a4);
int ADXB_GetLpEndPos(int a4);
int ADXB_GetLpEndOfst(int a4);
int ADXB_GetStat(int a4);
int ADXB_GetDecDtLen(int a4);
int ADXB_GetDecNumSmpl(int a4);
int ADXB_GetAdxpd(int a4);
int mwlSbGetGain(int a4);
int mwlSbGetDrctLvl(int a4);
int ADXPD_GetStat(int a4);
int ADXPD_GetNumBlk(int a4);
struct o0_float { float v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };


void SetCameraDistance(float f4)
{
    *(float *)0xC0E4A04 = f4;
}

float GetCameraDistance(void)
{
    float u0;

    u0 = *(float *)0xC0E4A04;
    return u0;
}

void SetScreenRatio(float f4)
{
    *(float *)0xC0E49F4 = f4;
}

int ReturnBreakPinNum(void)
{
    int t0;

    t0 = *(int *)0xC275940;
    return t0;
}

int ReturnBreakBeachFlag(void)
{
    int t0;

    t0 = *(int *)0xC275944;
    return t0;
}

int getKyakuOffFlag(void)
{
    int t0;

    t0 = *(int *)0xC0F2B3C;
    return t0;
}

int Init_Pass_Time(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = (((struct o0_float *)0xC2A7604)->v);
    (((struct o0_float *)0xC2A8070)->v) = u0;
    u1 = (((struct o4_float *)0xC2A7604)->v);
    (((struct o4_float *)0xC2A8070)->v) = u1;
    u2 = 0.099999994f;
    (((struct o8_float *)0xC2A8070)->v) = u2;
    u3 = 0.5f;
    (((struct oC_float *)0xC2A8070)->v) = u3;
    (((struct o10_float *)0xC2A8070)->v) = u3;
    (((struct o14_float *)0xC2A8070)->v) = 0.0f;
    (((struct o18_float *)0xC2A8070)->v) = 0.0f;
    (((struct o1C_float *)0xC2A8070)->v) = 1.0f;
    (((struct o20_float *)0xC2A8070)->v) = 1.0f;
    (((struct o24_uint *)0xC2A8070)->v) = 0x0;
    (((struct o30_uint *)0xC2A8070)->v) = 0x300A;
    (((struct o28_float *)0xC2A8070)->v) = 1.0f;
    (((struct o2C_uint *)0xC2A8070)->v) = 0x2;
    (((struct o0_uint *)0xC2A8DF4)->v) = 0x0;
    (((struct o4_uint *)0xC2A8DF4)->v) = 0x0;
    (((struct o8_uint *)0xC2A8DF4)->v) = 0x0;
    (((struct o3C_uint *)0xC2A8DF4)->v) = 0x0;
    return 0xC2A8DF4;
}

int Get_Bowling_Gate(void)
{
    int t0;

    t0 = *(int *)0xC2A9954;
    return t0;
}

int CheckNumRideon(void)
{
    int t0;

    t0 = *(int *)0xC2A9A2C;
    return t0;
}

int rinRandGetSeed(void)
{
    int t0;

    t0 = *(int *)0xC13EEC8;
    return t0;
}

int nlIntrGetEvent(void)
{
    int t0;

    t0 = *(int *)0xC2B7620;
    return t0;
}

int kmChangeContextUserClipMode(int a4)
{
    int t0;

    t0 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC2EAB9C = (((t0 & 0xFFFCFFFF) | (a4 << 16)) | 0x800000);
    *(unsigned int *)0xC178304 = (((t0 & 0xFFFCFFFF) | (a4 << 16)) | 0x800000);
    return 0x0;
}

int ADXAMP_GetStat(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return t0;
}

int ADXSJD_GetStat(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return t0;
}

int ADXSJD_GetDecNumSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2C));
    return t0;
}

int ADXSTM_GetStat(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return t0;
}

int ADXSTM_GetSj(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return t0;
}

int ADXSTM_GetFileLen(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x14));
    return t0;
}

int SJMEM_GetUuid(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

int SJMEM_GetBufPtr(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x14));
    return t0;
}

int SJMEM_GetBufSize(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x18));
    return t0;
}

int SJRBF_GetUuid(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

int SJRBF_GetBufPtr(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    return t0;
}

int SJRBF_GetBufSize(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x20));
    return t0;
}

int SJRBF_GetXtrSize(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x24));
    return t0;
}

int SJUNI_GetUuid(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

int ADXB_GetPcmBuf(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x3C));
    return t0;
}

int ADXB_GetFormat(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0xA8));
    return t0;
}

int ADXB_GetSfreq(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x14));
    return t0;
}

int ADXB_GetNumChan(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xE));
    return t0;
}

int ADXB_GetBlkSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x10));
    return t0;
}

int ADXB_GetBlkLen(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xF));
    return t0;
}

int ADXB_GetTotalNumSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x18));
    return t0;
}

int ADXB_GetCof(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x1C));
    return t0;
}

int ADXB_GetLpInsNsmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x20));
    return t0;
}

int ADXB_GetNumLoop(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x24));
    return t0;
}

int ADXB_GetLpStartPos(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x28));
    return t0;
}

int ADXB_GetLpStartOfst(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2C));
    return t0;
}

int ADXB_GetLpEndPos(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x30));
    return t0;
}

int ADXB_GetLpEndOfst(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x34));
    return t0;
}

int ADXB_GetStat(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x4));
    return t0;
}

int ADXB_GetDecDtLen(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xA4));
    return t0;
}

int ADXB_GetDecNumSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xA0));
    return t0;
}

int ADXB_GetAdxpd(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x8));
    return t0;
}

int mwlSbGetGain(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x5C));
    return t0;
}

int mwlSbGetDrctLvl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x64));
    return t0;
}

int ADXPD_GetStat(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    return t0;
}

int ADXPD_GetNumBlk(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x10));
    return t0;
}

