/* Handle pools (find a free record, fill it in) and the fog table upload. */

extern void SJMEM_Error(void);
extern void SJMEM_Reset(void *sj);
extern void SJRBF_Error(void);
extern void SJRBF_Reset(void *sj);
extern void SJUNI_Error(void);
extern void SJUNI_Reset(void *sj);
extern void *memset(void *p, int c, unsigned int n);
extern void ADX_GetCoefficient(int cutoff, int rate, short *k0, short *k1);
extern void kmiWriteRegister(unsigned int reg, unsigned int val);

/* Stream joint over a memory block: 32 records of 36 bytes; word +4 marks one in use. */
int *SJMEM_Create(int buf, int size)
{
    int *sj;
    int i;

    for (i = 0; i < 32; i++) {
        if (((int *)(0x0C2F7524 + i * 36))[1] == 0) {
            break;
        }
    }
    if (i == 32) {
        return 0;
    }
    sj = (int *)(0x0C2F7524 + i * 36);
    sj[1] = 1;
    sj[0] = 0x0C178654;
    sj[5] = buf;
    sj[6] = size;
    sj[2] = 0x0C1767B0;
    sj[7] = (int)SJMEM_Error;
    sj[8] = (int)sj;
    SJMEM_Reset(sj);
    return sj;
}

/* Ring-buffer stream joint: 64 records of 48 bytes; word +4 marks one in use. */
int *SJRBF_Create(int buf, int size, int extra)
{
    int *sj;
    int i;

    for (i = 0; i < 64; i++) {
        if (((int *)(0x0C2F79A4 + i * 48))[1] == 0) {
            break;
        }
    }
    if (i == 64) {
        return 0;
    }
    sj = (int *)(0x0C2F79A4 + i * 48);
    sj[1] = 1;
    sj[0] = 0x0C17868C;
    sj[7] = buf;
    sj[8] = size;
    sj[9] = extra;
    sj[2] = 0x0C1767C0;
    sj[10] = (int)SJRBF_Error;
    sj[11] = (int)sj;
    SJRBF_Reset(sj);
    return sj;
}

/* Unified stream joint: 64 records of 48 bytes; byte +4 marks one in use, byte +5 is the mode. */
int *SJUNI_Create(int mode, int work, unsigned int worksize)
{
    int *sj;
    int i;

    for (i = 0; i < 64; i++) {
        if (*(signed char *)(0x0C2F85A4 + i * 48 + 4) == 0) {
            break;
        }
    }
    if (i == 64) {
        return 0;
    }
    sj = (int *)(0x0C2F85A4 + i * 48);
    ((unsigned char *)sj)[4] = 1;
    ((unsigned char *)sj)[5] = mode;
    sj[0] = 0x0C1786C0;
    sj[2] = 0x0C1767FC;
    sj[3] = work;
    sj[4] = worksize >> 4;
    sj[10] = (int)SJUNI_Error;
    sj[11] = (int)sj;
    SJUNI_Reset(sj);
    return sj;
}

/* ADX prediction decoder: 8 records of 52 bytes; word +0 marks one in use. */
int *ADXPD_Create(void)
{
    int *pd;
    int i;

    for (i = 0; i < 8; i++) {
        if (*(int *)(0x0C2FD29C + i * 52) == 0) {
            break;
        }
    }
    if (i == 8) {
        return 0;
    }
    pd = (int *)(0x0C2FD29C + i * 52);
    memset(pd, 0, 52);
    pd[0] = 1;
    pd[1] = i;
    pd[2] = 0;
    pd[3] = 0;
    ADX_GetCoefficient(500, 44100, (short *)(pd + 12), (short *)((char *)pd + 50));
    memset(pd + 10, 0, 8);
    return pd;
}

/* Upload a 128-entry fog density table (0.0-1.0) as 8-bit pairs: register 512 + 4i gets entry i in
   the high byte and entry i+1 (entry 127 again for the last) in the low byte. */
int kmSetFogTable(float *table)
{
    int i = 128;
    int prev = (int)(table[127] * 255.0f) & 255;
    int cur;

    do {
        i--;
        cur = (int)(table[i] * 255.0f) & 255;
        kmiWriteRegister(512 + i * 4, (unsigned short)((cur << 8) | prev));
        prev = cur;
    } while (i != 0);
    return 0;
}

/* Texture memory size in bytes: 2048 of header plus the texels at half size each way; a mipmapped
   texture (flag bit 0) adds each smaller level, 2 for the 1x1 end (or the last level when not square)
   and 10 more; an unmipmapped 8x8 adds 16. */
unsigned int kmtex_TextureSize_VQ(int *tex)
{
    unsigned int w = (unsigned int)tex[3] >> 1;
    unsigned int h = (unsigned int)tex[4] >> 1;
    unsigned int n = w * h;
    unsigned int m;

    if (tex[6] & 1) {
        w >>= 1;
        h >>= 1;
        m = (w >= h) ? h : w;
        while (m > 1) {
            n += h * w;
            w >>= 1;
            h >>= 1;
            m >>= 1;
        }
        if (w == h) {
            n += 2;
        } else {
            n += h * w;
        }
        n += 10;
    } else if (tex[3] == 8 && tex[4] == 8) {
        n += 16;
    }
    return n + 2048;
}

extern void ADXSJD_ExecServer(void);
extern void ADXRNA_ExecServer(void);
extern void ADXF_ExecServer(void);
extern void ADXSTM_ExecServer(void);
extern void ADXT_ExecHndl(void *t);

/* 0 while a DMA request with this id is still queued (status bits 0-1 at +24 set) in either of the
   two 8-entry queues of 32-byte entries at 0C2BF460; 1 once none is. */
int kmiQueryFinishDMA(int id)
{
    int *e;
    int blk;
    int i;

    for (blk = 0; blk < 2; blk++) {
        for (i = 0; i < 8; i++) {
            e = (int *)(0x0C2BF460 + blk * 256 + i * 32);
            if (e[0] == id && (e[6] & 3) != 0) {
                return 0;
            }
        }
    }
    return 1;
}

/* The ADX server pass: each library's server, its busy flag cleared after it, then every open
   ADX talk handle (8 of 140 bytes at 0C177AE0, byte 0 == 1). */
void ADXT_ExecServer(void)
{
    unsigned char *p;

    ADXSJD_ExecServer();
    *(int *)0x0C177F48 = 0;
    ADXRNA_ExecServer();
    *(int *)0x0C177F4C = 0;
    ADXF_ExecServer();
    *(int *)0x0C177F50 = 0;
    ADXSTM_ExecServer();
    *(int *)0x0C177F54 = 0;
    for (p = (unsigned char *)0x0C177AE0; p < (unsigned char *)0x0C177AE0 + 1120; p += 140) {
        if (*(signed char *)p == 1) {
            ADXT_ExecHndl(p);
        }
    }
    *(int *)0x0C177F58 = 0;
    *(int *)0x0C177F44 = 0;
}

extern unsigned int kmtex_TextureSize_smallVQ(int *tex);
extern unsigned int kmtex_TextureSize_Palettized(int *tex);
extern unsigned int kmtex_TextureSize_Twiddled(int *tex);

/* Work out a texture's memory size (+20) by its kind: type 3 (low half of word 0), mipmapped
   (flag 8), flag 32, or plain. */
void kmtex_TextureSize(int *tex)
{
    unsigned int n;

    if ((unsigned short)tex[0] == 3) {
        n = kmtex_TextureSize_smallVQ(tex);
    } else if (tex[6] & 8) {
        n = kmtex_TextureSize_VQ(tex);
    } else if (tex[6] & 32) {
        n = kmtex_TextureSize_Palettized(tex);
    } else {
        n = kmtex_TextureSize_Twiddled(tex);
    }
    tex[5] = n;
}
