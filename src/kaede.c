/* Shinobi library, KAEDE (the Maple bus driver): our own C, written from the disassembly. */

typedef struct {
    char head[0xfcc];
    int *wp;            /* 0xfcc: write cursor */
    int pad0;
    int pad1;
    int count;          /* 0xfd8 */
    unsigned int limit; /* 0xfdc */
    char mid[0x10f4 - 0xfe0];
    void *gun;          /* 0x10f4 */
} MpDrv;

typedef struct {
    int w0;
    unsigned int addr;  /* 4 */
    int w2, w3, w4, w5;
    int flag;           /* 24 */
} MpGun;

extern MpDrv *g_8c47317c;
extern int gKdGunCount;
extern char gKdGunBuf[];
extern int gKdGunBusy;
extern int gKdGunLast;

int mpdrv_setcmd_force(int a, int b, int *c, int d, int e, int f);

int mpdrv_insertnop(int n)
{
    MpDrv *d = g_8c47317c;
    int *p;
    int i;

    d->wp = (int *)((char *)d->wp + d->count * 4);
    p = g_8c47317c->wp;
    if (n > 0) {
        i = 0;
        do {
            i++;
            *p = 0x700;
            p++;
        } while (i < n);
    }
    g_8c47317c->count = n;
    g_8c47317c->limit += n * 4;
    return 0;
}

void kdExecGun(void)
{
    int n = gKdGunCount;

    if (n != 0) {
        unsigned int addr;
        int one = 1;
        int m = n - 1;

        addr = ((unsigned int)gKdGunBuf & 0x1fffffe0) + 32;
        *(unsigned int *)(addr | 0xa0000000) = ((unsigned int)m << 16) | 0x80000200;
        gKdGunBusy = 1;
        ((MpGun *)g_8c47317c->gun)->addr = addr;
        ((MpGun *)g_8c47317c->gun)->flag = 1;
        mpdrv_setcmd_force(m * 6, 9, &one, 1, 0, 0);
        gKdGunLast = gKdGunCount;
    }
}
