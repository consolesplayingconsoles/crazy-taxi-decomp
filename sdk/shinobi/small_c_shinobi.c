extern int ExecBubble();
extern int Exec_ProposalWalker();
/* Small functions, batch c. */

int nlCalcPoint4(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int syG2AicaFifoIsEmpty(int *r);


int syG2AicaFifoWaitEmpty(void)
{
    int r;

    do {
        syG2AicaFifoIsEmpty(&r);
    } while (r != 1);
    *(int *)(*(int *)0xC178700 + 0x110) += 1;
    return 0;
}

int _pd_peripheral_error(int a, int b, unsigned char *p)
{
    unsigned int v;

    v = p[4];
    if (v == 252) {
        return 0xFF0000FC;
    }
    if (v == 255 || v == 8 || v == 5 || v == 6 || v == 0) {
        return 0;
    }
    return 0xFF000000;
}


typedef struct {
    int w[19];
} Words19;

typedef struct {
    int w[36];
} Words36;

int set_event(int a, int b);
int Init_ProposalWalker(int a, int b);


void _pd_peripheral_set_null(int *p)
{
    p[0] = 0;
    p[1] = 0;
    if (*(int *)0xC2B92E8 == 0) {
        p[2] = 0;
        p[3] = -1;
        p[4] = 0;
        p[5] = 0;
    } else {
        p[2] = -1;
        p[3] = 0;
        p[4] = -1;
        p[5] = -1;
    }
    ((short *)p)[12] = 0;
    ((short *)p)[13] = 0;
    ((short *)p)[17] = 0;
    ((short *)p)[16] = 0;
    ((short *)p)[15] = 0;
    ((short *)p)[14] = 0;
    p[10] = 0;
    p[9] = 0xC174F00;
}


int mwRnaLockCs(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);


float nlRandom(void);

int search_fat_backward(int disk, int fat, int lo, int hi)
{
    int base;
    int i;

    base = 0xC2EE990 + disk * 328;
    if (hi < lo) {
        return -1;
    }
    i = hi;
    do {
        if ((unsigned short)((int (*)(int, int))((int *)*(int *)0xC2EE98C)[3])(*(int *)(base + 36), i * 2)
            == (unsigned short)fat) {
            return i;
        }
        i--;
    } while (i >= lo);
    return -1;
}


typedef struct {
    int a;
    int b;
    int c;
} Vec12c;

