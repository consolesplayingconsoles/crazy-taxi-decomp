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
char *kmytex_FBAllocEntry(void)
{
    char *p;

    for (p = (char *)0x0C2BF67C; p < (char *)0x0C2BF67C + 0x18000; p += 24)
        if (!(*(unsigned short *)p & 1)) {
            *(unsigned short *)p = 1;
            return p;
        }
    return 0;
}

/* The same in the table of 76-byte entries at 0C2D767C. */
char *VQAllocEntry(void)
{
    char *p;

    for (p = (char *)0x0C2D767C; p < (char *)0x0C2D767C + 0x13000; p += 76)
        if (!(*(unsigned short *)p & 1)) {
            *(unsigned short *)p = 1;
            return p;
        }
    return 0;
}

/* Takes node out of the singly linked list at *head (link at [1]); returns the node that pointed to it. */
int *VQDeQueueEntry(int **head, int *node)
{
    int *pred = 0;
    int *p;

    for (p = *head; p; p = (int *)p[1])
        if ((int *)p[1] == node) {
            pred = p;
            break;
        }
    if (*head == node)
        *head = (int *)node[1];
    else
        pred[1] = node[1];
    return pred;
}

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

int kmSetHSyncCallback(void *f, void *p)
{
    kmiEnableHSyncInterrupt(f != 0);
    kmiRegisterCallback(KM_DEVICE, 2, f, p);
    return 0;
}

int kmSetStrideWidth(int w)
{
    int v = (w & 0x3E0) >> 5;
    int r = kmiReadRegister(228);

    kmiWriteRegister(228, v | (r & ~0x1F));
    return 0;
}

int crcchk(int a, short b)
{
    int r = ccitt_updcrc(0, a, 10);

    if ((unsigned short)b == (unsigned short)~r)
        return 0;
    return -1;
}

int kmtex_CopyTextureToMem(int a, int b, int c)
{
    int lvl = kmtex_GetTextureLevel(c);

    return kmiCopyToFrameBuffer(a + 4, b, ((int *)0x0C175E54)[lvl] + 4);
}

/* Visits a node's resources (link [1]), its child list (link [11]) and its siblings (link [12]). */
void nlMvNotShadowIndexPol(int *n)
{
    for (;;) {
        if (n[1])
            nlMvChgIndexPolAttr(n[1], 192, 0);
        if (n[11])
            nlMvNotShadowIndexPol((int *)n[11]);
        if (!n[12])
            return;
        n = (int *)n[12];
    }
}

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
