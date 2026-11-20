/* Katana SDK and CRI library small functions (batch a). */

extern int kdSetGunTrigger(int a);
extern int mpdrv_set_hreset(void);
extern void kdRecvFrame(void);
extern int mpdrv_setcmd(int port, int cmd, int *buf, int len, int a5, int a6);
extern int mwRnaGetSfreq(int *rna);
extern void _divlu(void);
extern void _modlu(void);
extern void mwlRnaAddRdPos(void *rna);
extern void mwRnaErrCallFunc(char *fmt, ...);
extern void ADXPD_Stop(void *pd);
extern int kmiWriteRegister(int reg, int val);

extern char g_8c20ac30[];
extern char *g_8c47317c;
extern unsigned int g_8c45f940[];
extern int g_8c20ccd0;

struct hw_pair { unsigned int *addr; unsigned int val; };
extern struct hw_pair g_8c20975c[];

struct chain_node { void (*fn)(int); struct chain_node *next; int arg; };
extern struct chain_node *g_8c461818[];

struct vmsfs_c { int w0; int flag; int pad[3]; int p[6]; int rest[21]; };
extern struct vmsfs_c g_8c462180[];
extern char g_8c461c1c[];
extern void (*g_8c461b9c[])(void);

struct fbq { int f0; struct fbq *f4; struct fbq *f8; };
struct dmaent { int f0; int f4; int f8; int f12; int f16; int f20; int f24; short s28; short s30; };
struct adxb { int f0; int f4; void *f8; };


void kmytex_FBEnQueueEntry(struct fbq **list, struct fbq *e, struct fbq *q)
{
    struct fbq *x;

    if (q->f8 == 0) {
        *list = e;
        e->f4 = q;
        x = 0;
    } else {
        q->f8->f4 = e;
        e->f4 = q;
        x = q->f8;
    }
    e->f8 = x;
    q->f8 = e;
}


