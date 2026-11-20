/* Small library functions (batch l): more backup-library drive wrappers, the system config getters, ADX file helpers,
   Kamui callback and register setters, record-table allocators. */

int vmsfs_c_getstate(int drive);
int vmsfs_findfirst_ex(int d, int a, int b);
int vmsfs_findnext_ex(int d, int a, int b);
int vmsfs_fopen(int d, int a, int b);
int vmsfs_fgetinfo(int d, int a, int b);
int vmsfs_fcreate(int d, int a, int b, int c);
int vmsfs_xcreate(int d, int a, int b, int c);
char *syCfgGetIDAddress(void);
void ADXERR_CallErrFunc(char *msg);
char *adxf_AllocAdxFs(void);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int adxf_read_sj32(int a, int b, int c);
void adxf_ExecOne(char *p);
int ccitt_updcrc(int a, int b, int c);
int kmiEnableHSyncInterrupt(int v);
int kmiRegisterCallback(int dev, int kind, void *f, void *p);
int kmiReadRegister(int off);
int kmiWriteRegister(int off, int v);
int kmtex_GetTextureLevel(int a);
int kmiCopyToFrameBuffer(int a, int b, int c);
void nlMvChgIndexPolAttr(int a, int b, int c);
void ADXERR_Finish(void);
void ADXSJD_Finish(void);
void ADXSTM_Finish(void);
void ADXRNA_Finish(void);
void SJMEM_Finish(void);
void SJRBF_Finish(void);
void SJUNI_Finish(void);
int ADXF_Finish(void);

#define KM_DEVICE       (*(int *)0x0C178268)

int buFindFirstFileEx(int d, int a, int b)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_findfirst_ex(d, a, b);
}

int buFindNextFileEx(int d, int a, int b)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_findnext_ex(d, a, b);
}

int buOpenFile(int d, int a, int b)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_fopen(d, a, b);
}

int buGetFileInfo(int d, int a, int b)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_fgetinfo(d, a, b);
}

int buCreateFile(int d, int a, int b, int c)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_fcreate(d, a, b, c);
}

int buCreateExecFile(int d, int a, int b, int c)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_xcreate(d, a, b, c);
}

/* The system config's country code (byte 10 of the ID block), through p; -1 when p is null or there is no block. */
int syCfgGetCountryCode(int *p)
{
    char *id;

    if (!p)
        return -1;
    *p = 48;
    id = syCfgGetIDAddress();
    if (!id)
        return -1;
    *p = id[10];
    return 0;
}

int syCfgGetDefaultLanguage(int *p)
{
    char *id;

    if (!p)
        return -1;
    *p = 0;
    id = syCfgGetIDAddress();
    if (!id)
        return -1;
    *p = id[11];
    return 0;
}

int syCfgGetBroadcastType(int *p)
{
    char *id;

    if (!p)
        return -1;
    *p = 48;
    id = syCfgGetIDAddress();
    if (!id)
        return -1;
    *p = id[12];
    return 0;
}

/* Takes the first free entry (halfword bit 0 clear) of the 24-byte entries at 0C2BF67C: marks it used and returns it, or 0. */

/* The same in the table of 76-byte entries at 0C2D767C. */

/* Takes node out of the singly linked list at *head (link at [1]); returns the node that pointed to it. */


int crcchk(int a, short b)
{
    int r = ccitt_updcrc(0, a, 10);

    if ((unsigned short)b == (unsigned short)~r)
        return 0;
    return -1;
}

/* Visits a node's resources (link [1]), its child list (link [11]) and its siblings (link [12]). */

