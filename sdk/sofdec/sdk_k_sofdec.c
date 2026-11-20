/* Small library functions (batch k): triangle-put bit fields, Kamui context and callback setters, the backup library's
   drive wrappers, ADX stream helpers, record-list helpers. */

int kmiWriteRegister(int off, int v);
int kmiRegisterCallback(int dev, int kind, void *f, void *p);
void kmiEnableVSyncInterrupt(int v);
int kmiVQFBfree(int *s);
int kmiFBfree(int a);
void kmiPurgeCache(void *p);
void kmiMemCopy4(int *d, int *s, unsigned int n);
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
int ADXSJD_GetLpStartOfst(int a);
int toupper_(int c);
int gdFsToUpper(int c);

extern char g_8c464598[];

#define KM_DEVICE       (*(int *)0x0C178268)
#define KM_CTX          ((int *)0x0C2EAB9C)             /* the current polygon context: words 4 and 5 hold the depth/culling and UV bits */
#define KM_CTX_OUT      ((int *)0x0C178304)

/* Sets the culling mode (bits 0-1) of the triangle-put's parameter word. */

/* Sets the gouraud bit (bit 6) of the triangle-put's parameter word. */


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

/* The same in the table of 76-byte entries at 0C2D767C. */

/* Puts node at the head of the list *head (its links at [1] and [2]); the first node also becomes *tail. */


/* Purges the cache lines (32 bytes) from p up to p + n. */


/* A name's hash: the sum of its upper-cased characters plus 218, shifted down by 2 and cut to a byte. */

/* 192 bytes from 8 source bytes each: bit 3 of each source byte, most significant first. */


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
    int x = ADXSJD_GetLpStartOfst(e[1]);

    if (x < 0)
        x += 2047;
    return ADXSTM_Seek(h, x >> 11);
}
