/* Small library functions (batch k): triangle-put bit fields, Kamui context and callback setters, the backup library's
   drive wrappers, ADX stream helpers, record-list helpers. */

int kmiWriteRegister(int off, int v);
int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void FUN_0c16dd00(int v);
int kmiVQFBfree(int *s);
int kmiFBfree(int a);
void FUN_0c15888e(void *p);
void FUN_0c15887e(int *d, int *s, unsigned int n);
int kmiPurgeMemory(char *p, int n);
int kmiCopyToPVRMemory(int off, int *src, unsigned int n);
int vmsfs_c_getstate(int drive);
int vmsfs_unmount(int d);
int vmsfs_getinfo(int d, int p);
int vmsfs_diskfree(int d, int p);
int vmsfs_findfirst(int d, int p);
int vmsfs_findnext(int d, int p);
int vmsfs_xfind(int d, int p);
int vmsfs_fisexist(int d, int p);
int vmsfs_fgetsize(int d, int p);
int vmsfs_setwork(int d);
int buMount(int d);
int kdGetDeviceInfo(int d);
int gdFsTell(int h);
int gdFsGetDirInfo(int h, int *info);
int ADXSTM_Tell(int *h);
int ADXSTM_Seek(int h, int pos);
int FUN_0c1688b6(int a);
int toupper_(int c);
int FUN_0c15f998(int c);

extern char g_8c464598[];

#define KM_DEVICE       (*(int *)0x0C178268)
#define KM_CTX          ((int *)0x0C2EAB9C)             /* the current polygon context: words 4 and 5 hold the depth/culling and UV bits */
#define KM_CTX_OUT      ((int *)0x0C178304)

/* Sets the culling mode (bits 0-1) of the triangle-put's parameter word. */
void nlTriPutSetAttribCulling(char *p, int v)
{
    unsigned int *w = (unsigned int *)(p + 104);

    *w = (*w & ~3u) | (unsigned int)(v & 3);
}

/* Sets the gouraud bit (bit 6) of the triangle-put's parameter word. */
void nlTriPutSetAttribGouraud(char *p, int v)
{
    unsigned int *w = (unsigned int *)(p + 104);

    *w = (*w & ~(1u << 6)) | ((unsigned int)(v & 1) << 6);
}

int kmSetCullingRegister(float f)
{
    kmiWriteRegister(120, *(int *)&f & 0x7FFFFFFF);
    return 0;
}

int kmSetPaletteMode(int mode)
{
    if (!(mode & ~3)) {
        *(int *)0x0C2EA71C = mode;
        kmiWriteRegister(264, mode);
    }
    return 0;
}

void kmSetBackGroundPlane(int a, int i)
{
    (*(void (**)(int))(0x0C177F5C + i * 4))(a);
    *(int *)0x0C2EA724 &= 0xFFF00000;
}

int FUN_0c14cfe2(char *p)
{
    char *t = (char *)0x0C174E98;
    int i;

    p++;
    for (i = 0; i < 5; i++)
        if (*p++ != *t++)
            return 0;
    return 1;
}

int convert_support(unsigned int x)
{
    unsigned int r = (x >> 10) & 0x003FFF00;

    if (x & 0x00020000)
        r |= 0xF0;
    if (x & 0x00010000)
        r |= 0xF;
    return r;
}

int buUnmount(int d)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_unmount(d);
}

int buGetDiskInfo(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_getinfo(d, p);
}

int buGetDiskFree(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_diskfree(d, p);
}

int buFindFirstFile(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_findfirst(d, p);
}

int buFindNextFile(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_findnext(d, p);
}

int buFindExecFile(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_xfind(d, p);
}

int buIsExistFile(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_fisexist(d, p);
}

int buGetFileSize(int d, int p)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_fgetsize(d, p);
}

int buGetLastError(int d)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return ((int *)0x0C2EC558)[d];
}

int buMountDisk(int d)
{
    int r = vmsfs_setwork(d);

    if (r)
        return r;
    return buMount(d);
}

int pdVibIsReady(int d)
{
    int *info = (int *)kdGetDeviceInfo(d);

    if (*info & 0x100)
        return 1;
    return 0;
}

/* The first free entry (first byte 0) of the 16 ADX file entries (48 bytes each), or 0. */
char *adxf_AllocAdxFs(void)
{
    char *p;

    for (p = (char *)0x0C2B9C38; p < (char *)0x0C2B9C38 + 0x300; p += 48)
        if (!*p)
            return p;
    return 0;
}

/* Clears bit 0 of the halfword of the entry that is e, in the table of 24-byte entries at 0C2BF67C. */
void FUN_0c1573cc(char *e)
{
    char *p;

    for (p = (char *)0x0C2BF67C; p < (char *)0x0C2BF67C + 0x18000; p += 24)
        if (p == e)
            *(unsigned short *)p &= 0xFFFE;
}

/* The same in the table of 76-byte entries at 0C2D767C. */
void FUN_0c157d20(char *e)
{
    char *p;

    for (p = (char *)0x0C2D767C; p < (char *)0x0C2D767C + 0x13000; p += 76)
        if (p == e)
            *(unsigned short *)p &= 0xFFFE;
}

/* Puts node at the head of the list *head (its links at [1] and [2]); the first node also becomes *tail. */
void FUN_0c1573f2(int **head, int **tail, int *node)
{
    if (!*head) {
        node[1] = 0;
        node[2] = 0;
        *head = node;
        *tail = node;
    } else {
        int *h = *head;

        node[1] = h[1];
        node[2] = (int)*head;
        h[1] = (int)node;
        *head = node;
    }
}

int kmSetVSyncCallback(void *f, void *p)
{
    FUN_0c16dd00(1);
    kmiRegisterCallback(KM_DEVICE, 1, f, p);
    return 0;
}

int kmSetStripOverRunCallback(void *f, void *p)
{
    kmiRegisterCallback(KM_DEVICE, 4, f, p);
    return 0;
}

int kmSetEndOfVertexCallback(void *f, void *p)
{
    kmiRegisterCallback(KM_DEVICE, 5, f, p);
    return 0;
}

int kmSetEndOfYUVCallback(void *f, void *p)
{
    kmiRegisterCallback(KM_DEVICE, 6, f, p);
    return 0;
}

int kmSetWaitVsyncCallback(void *f, void *p)
{
    kmiRegisterCallback(KM_DEVICE, 7, f, p);
    return 0;
}

/* Purges the cache lines (32 bytes) from p up to p + n. */
int kmiPurgeMemory(char *p, int n)
{
    char *end = p + n;

    while (p <= end) {
        FUN_0c15888e(p);
        p += 32;
    }
}

int kmiCopyFromFrameBuffer(int *dst, int off, int n)
{
    FUN_0c15887e(dst, (int *)(off + 0xA4000000), n);
    kmiPurgeMemory((char *)dst, n);
    return 1;
}

int kmFreeTexture(int *s)
{
    if ((unsigned short)s[0] == 3)
        return kmiVQFBfree(s);
    return kmiFBfree(s[7]);
}

int kmChangeContextDepthMode(int m)
{
    KM_CTX[4] = (KM_CTX[4] & 0x1FFFFFFF) | (m << 29);
    KM_CTX_OUT[1] = KM_CTX[4];
    return 0;
}

int kmChangeContextCullingMode(int m)
{
    KM_CTX[4] = (KM_CTX[4] & 0xE7FFFFFF) | (m << 27);
    KM_CTX_OUT[1] = KM_CTX[4];
    return 0;
}

int kmChangeContextFlipUV(int m)
{
    KM_CTX[5] = (KM_CTX[5] & 0xFFF9FFFF) | (m << 17);
    KM_CTX_OUT[2] = KM_CTX[5];
    return 0;
}

int kmChangeContextClampUV(int m)
{
    KM_CTX[5] = (KM_CTX[5] & 0xFFFE7FFF) | (m << 15);
    KM_CTX_OUT[2] = KM_CTX[5];
    return 0;
}

int kmChangeContextStripLength(int n)
{
    int v = (*(int *)0x0C2EAB9C & 0xFFF3FFFF) | (n << 18) | 0x00800000;

    *(int *)0x0C2EAB9C = v;
    *(int *)0x0C178304 = v;
    return 0;
}

int kmUseAnotherModifier(int m)
{
    int ret;

    if (m & 1) {
        *(int *)0x0C2EA854 = 1;
        *(int *)0x0C2EA858 = m;
        ret = 0;
    } else {
        *(int *)0x0C2EA854 = 0;
        ret = 11;
    }
    *(int *)0x0C2EA840 = 3;
    return ret;
}

int kmiCreateDummyRegionforAvoidCacheBug(int off)
{
    int buf[6];

    buf[0] = 0x10000000;
    buf[1] = 0x80000000;
    buf[2] = 0x80000000;
    buf[3] = 0x80000000;
    buf[4] = 0x80000000;
    buf[5] = 0x80000000;
    return kmiCopyToPVRMemory(off, buf, 24);
}

/* A name's hash: the sum of its upper-cased characters plus 218, shifted down by 2 and cut to a byte. */
int FUN_0c15fa92(char *s)
{
    unsigned int h = 218;

    while (*s)
        h += (unsigned char)FUN_0c15f998(*s++);
    return (unsigned char)(h >> 2);
}

/* 192 bytes from 8 source bytes each: bit 3 of each source byte, most significant first. */
void FUN_0c162db6(char *dst, char *src)
{
    int i, j;

    for (i = 0; i < 192; i++) {
        int v = 0, m = 128;

        for (j = 0; j < 8; j++) {
            if (*src++ & 8)
                v |= m;
            m >>= 1;
        }
        *dst++ = v;
    }
}

int get_fat(int d, int x)
{
    char *e = g_8c464598 + d * 328;

    return (*(int (**)(int, int))(*(char **)0x0C2EE98C + 12))(*(int *)(e + 36), x * 2);
}

int adxsjd_clear(char *p)
{
    *(int *)(p + 44) = 0;
    *(int *)(p + 48) = 0;
    *(int *)(p + 52) = 0;
    *(int *)(p + 56) = 0x7FFFFFFF;
    *(int *)(p + 60) = -1;
    *(int *)(p + 64) = 0;
    *(int *)(p + 68) = 0;
    p[3] = 0;
    return 0;
}

int ADXSTM_Tell(int *h)
{
    if (h[2])
        return gdFsTell(h[2]) - h[4];
    return 0;
}

int ADXSTM_GetCurOfst(int *h, int *out)
{
    *out = ADXSTM_Tell(h) - h[3];
    return 1;
}

int ADXSTM_GetFad(int h, int *out)
{
    int info[3];
    int r = gdFsGetDirInfo(h, info);

    *out = info[0];
    return r;
}

int ADXSTM_GetFsizeByte(int h, int *out)
{
    int info[3];
    int r = gdFsGetDirInfo(h, info);

    *out = info[1];
    return r;
}

int adxt_eos_entry(int *e)
{
    int h = e[2];
    int x = FUN_0c1688b6(e[1]);

    if (x < 0)
        x += 2047;
    return ADXSTM_Seek(h, x >> 11);
}
