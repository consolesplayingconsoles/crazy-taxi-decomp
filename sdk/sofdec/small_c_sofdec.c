extern int ExecBubble();
extern int Exec_ProposalWalker();
/* Small functions, batch c. */

int nlCalcPoint4(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int syG2AicaFifoIsEmpty(int *r);


typedef struct {
    int w[19];
} Words19;

typedef struct {
    int w[36];
} Words36;

int set_event(int a, int b);
int Init_ProposalWalker(int a, int b);


int mwRnaLockCs(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);


void mwRnaExecServer(void)
{
    int cs;
    char *p;

    mwRnaLockCs(&cs);
    for (p = (char *)0xC2F605C; (unsigned int)p < 0xC2F605C + 0x480; p += 144) {
        if (*(unsigned char *)p == 1) {
            mwlRnaExecSvrHndl(p);
        }
    }
    mwRnaUnlockCs(&cs);
}


float nlRandom(void);


typedef struct {
    int a;
    int b;
    int c;
} Vec12c;

