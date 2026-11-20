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


/* The first free entry (first byte 0) of the 16 ADX file entries (48 bytes each), or 0. */

/* Clears bit 0 of the halfword of the entry that is e, in the table of 24-byte entries at 0C2BF67C. */

/* The same in the table of 76-byte entries at 0C2D767C. */

/* Puts node at the head of the list *head (its links at [1] and [2]); the first node also becomes *tail. */


/* Purges the cache lines (32 bytes) from p up to p + n. */


/* A name's hash: the sum of its upper-cased characters plus 218, shifted down by 2 and cut to a byte. */

/* 192 bytes from 8 source bytes each: bit 3 of each source byte, most significant first. */


