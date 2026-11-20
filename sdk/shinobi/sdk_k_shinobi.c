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


int gdFsCheckMedia(char *p)
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

/* Clears bit 0 of the halfword of the entry that is e, in the table of 24-byte entries at 0C2BF67C. */

/* The same in the table of 76-byte entries at 0C2D767C. */

/* Puts node at the head of the list *head (its links at [1] and [2]); the first node also becomes *tail. */


/* Purges the cache lines (32 bytes) from p up to p + n. */


/* A name's hash: the sum of its upper-cased characters plus 218, shifted down by 2 and cut to a byte. */
int gdFsGetSearchID(char *s)
{
    unsigned int h = 218;

    while (*s)
        h += (unsigned char)gdFsToUpper(*s++);
    return (unsigned char)(h >> 2);
}

/* 192 bytes from 8 source bytes each: bit 3 of each source byte, most significant first. */
void pdVmsLcdBltAsm(char *dst, char *src)
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


