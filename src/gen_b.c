/* Straight-line functions with loads (batch gen b): getters, copies and float parameter blocks, generated from the code and
   checked by tests. */

void FUN_0c0288e0(float f4);
float FUN_0c0288f0(void);
void FUN_0c028908(float f4);
int FUN_0c038ee6(void);
int FUN_0c038f80(void);
int getKyakuOffFlag(void);
int FUN_0c05273c(void);
int FUN_0c05cb52(void);
int FUN_0c05db72(void);
int FUN_0c06b0ee(void);
int nlIntrGetEvent(void);
int kmChangeContextUserClipMode(int a4);
int ADXAMP_GetStat(int a4);
int ADXSJD_GetStat(int a4);
int FUN_0c1687f2(int a4);
int FUN_0c168e10(int a4);
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
int FUN_0c17217a(int a4);
int FUN_0c1721da(int a4);
int ADXPD_GetStat(int a4);
int ADXPD_GetNumBlk(int a4);

void FUN_0c0288e0(float f4)
{
    *(float *)0xC0E4A04 = f4;
}

float FUN_0c0288f0(void)
{
    float u0;

    u0 = *(float *)0xC0E4A04;
    return u0;
}

void FUN_0c028908(float f4)
{
    *(float *)0xC0E49F4 = f4;
}

int FUN_0c038ee6(void)
{
    int t0;

    t0 = *(int *)0xC275940;
    return t0;
}

int FUN_0c038f80(void)
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

int FUN_0c05273c(void)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = *(float *)0xC2A7604;
    *(float *)0xC2A8070 = u0;
    u1 = *(float *)0xC2A7608;
    *(float *)0xC2A8074 = u1;
    u2 = *(float *)0xC0527D4;
    *(float *)0xC2A8078 = u2;
    u3 = *(float *)0xC0527D8;
    *(float *)0xC2A807C = u3;
    *(float *)0xC2A8080 = u3;
    *(float *)0xC2A8084 = 0.0f;
    *(float *)0xC2A8088 = 0.0f;
    *(float *)0xC2A808C = 1.0f;
    *(float *)0xC2A8090 = 1.0f;
    *(unsigned int *)0xC2A8094 = 0x0;
    *(unsigned int *)0xC2A80A0 = 0x300A;
    *(float *)0xC2A8098 = 1.0f;
    *(unsigned int *)0xC2A809C = 0x2;
    *(unsigned int *)0xC2A8DF4 = 0x0;
    *(unsigned int *)0xC2A8DF8 = 0x0;
    *(unsigned int *)0xC2A8DFC = 0x0;
    *(unsigned int *)0xC2A8E30 = 0x0;
    return 0xC2A8DF4;
}

int FUN_0c05cb52(void)
{
    int t0;

    t0 = *(int *)0xC2A9954;
    return t0;
}

int FUN_0c05db72(void)
{
    int t0;

    t0 = *(int *)0xC2A9A2C;
    return t0;
}

int FUN_0c06b0ee(void)
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

int FUN_0c1687f2(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x2C));
    return t0;
}

int FUN_0c168e10(int a4)
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

int FUN_0c17217a(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x5C));
    return t0;
}

int FUN_0c1721da(int a4)
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

