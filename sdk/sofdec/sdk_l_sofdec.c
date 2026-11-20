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


/* The system config's country code (byte 10 of the ID block), through p; -1 when p is null or there is no block. */


/* Takes the first free entry (halfword bit 0 clear) of the 24-byte entries at 0C2BF67C: marks it used and returns it, or 0. */

/* The same in the table of 76-byte entries at 0C2D767C. */

/* Takes node out of the singly linked list at *head (link at [1]); returns the node that pointed to it. */

int adxf_ChkPrmPt(int ptid, int p)
{
    if (ptid < 0 || ptid >= 256) {
        ADXERR_CallErrFunc((char *)0x0C17556C);
        return -3;
    }
    if (!p) {
        ADXERR_CallErrFunc((char *)0x0C1755A0);
        return -3;
    }
    return 0;
}

char *adxf_CreateAdxFs(void)
{
    char *p = adxf_AllocAdxFs();

    if (!p)
        return 0;
    p[1] = 1;
    *(int *)(p + 4) = 0;
    *(int *)(p + 28) = 0;
    *(int *)(p + 32) = 0;
    *(int *)(p + 36) = 0;
    p[2] = 0;
    *(int *)(p + 8) = 0;
    p[0] = 1;
    return p;
}

int ADXF_ReadSj32(char *a, int b, int c)
{
    int r;

    ADXCRS_Lock();
    r = adxf_read_sj32((int)a, b, c);
    a[2] = 1;
    ADXCRS_Unlock();
    return r;
}

int ADXF_ExecServer(void)
{
    char *p;

    ADXCRS_Lock();
    for (p = (char *)0x0C2B9C38; p < (char *)0x0C2B9C38 + 0x300; p += 48)
        if (p[0] == 1)
            adxf_ExecOne(p);
    return ADXCRS_Unlock();
}

int ADXF_GetNumReqSct(int *adxf, int *out)
{
    if (!adxf) {
        ADXERR_CallErrFunc((char *)0x0C175AB0);
        *out = 0;
        return -3;
    }
    *out = adxf[7];
    return adxf[8];
}


/* Visits a node's resources (link [1]), its child list (link [11]) and its siblings (link [12]). */

int ADXT_Finish(void)
{
    ADXERR_Finish();
    ADXSJD_Finish();
    ADXSTM_Finish();
    ADXRNA_Finish();
    SJMEM_Finish();
    SJRBF_Finish();
    SJUNI_Finish();
    return ADXF_Finish();
}
