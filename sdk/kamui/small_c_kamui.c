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


int SearchUsed(int key, short *idx)
{
    int *n;
    int found;

    if (key >= *(int *)0xC177FB4) {
        *idx = 1;
    } else {
        *idx = 0;
    }
    n = *(int **)(0xC177FBC + *idx * 20);
    found = 0;
    while (n != 0) {
        if (n[3] == key) {
            found = (int)n;
            n = 0;
        } else {
            n = (int *)n[2];
        }
    }
    return found;
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

