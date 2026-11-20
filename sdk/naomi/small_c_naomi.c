extern int ExecBubble();
extern int Exec_ProposalWalker();
/* Small functions, batch c. */

int nlCalcPoint4(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int syG2AicaFifoIsEmpty(int *r);


void nlFastScreenPoint(int a, float *out)
{
    float f[4];
    float inv;

    nlCalcPoint4(a, f);
    inv = 1.0f / f[3];
    out[0] = f[0] * inv;
    out[1] = f[1] * inv;
    out[2] = inv;
}


typedef struct {
    int w[19];
} Words19;

typedef struct {
    int w[36];
} Words36;

int set_event(int a, int b);
int Init_ProposalWalker(int a, int b);


int nlMvGetFaceVerts(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = (0x0 + a5);
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        t3 = *(short *)((t0 + 0x0));
        t0 = (t0 + 0x2);
        t1 = (t1 + 0x1);
        t2 = (t2 << 1);
        t4 = (*(int *)(((((t3 << 2) << 2) + a4) + 0xC)));
        t2 = (t2 | (((int)(((unsigned int)t4 << 1) | ((unsigned int)t4 >> 31))) & 0x1));
        if ((int)t1 >= (int)0x3) {
            break;
        }
    }
    t0 = ((int (*)(int, int, int, int))((*(int *)(((t2 << 2) + 0xC14AA94)))))(a4, a5, a6, a7);
    return t2;
}

int mwRnaLockCs(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);


float nlRandom(void);


typedef struct {
    int a;
    int b;
    int c;
} Vec12c;

