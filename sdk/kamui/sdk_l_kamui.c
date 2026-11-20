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


/* Visits a node's resources (link [1]), its child list (link [11]) and its siblings (link [12]). */

