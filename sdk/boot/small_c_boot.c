extern int ExecBubble();
extern int Exec_ProposalWalker();
/* Small functions, batch c. */

int nlCalcPoint4(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int syG2AicaFifoIsEmpty(int *r);

void bootEndTransfer(int a)
{
    if (a != 0) {
        ((void (*)(void))0xAC0119A4)();
    } else {
        ((void (*)(void))0xAC01138C)();
    }
}


typedef struct {
    int w[19];
} Words19;

typedef struct {
    int w[36];
} Words36;

int set_event(int a, int b);
int Init_ProposalWalker(int a, int b);

void bootSendData(int a, int b, int c)
{
    if (a != 0) {
        ((void (*)(int, int))0xAC011A1C)(b, c);
    } else {
        ((void (*)(int, int))0xAC0112C6)(b, c);
    }
}

void bootRecvData(int a, int b, int c)
{
    if (a != 0) {
        ((void (*)(int, int))0xAC0119E0)(b, c);
    } else {
        ((void (*)(int, int))0xAC0111E8)(b, c);
    }
}

void bootSerialRecvHeader(signed char *out)
{
    int i;

    for (i = 0; i < 8; i++) {
        out[i] = ((int (*)(void))0xAC011AFE)();
    }
}


void bootSerialRecv(signed char *out, int n)
{
    int i;

    if (n > 0) {
        i = 0;
        do {
            out[i] = ((int (*)(void))0xAC011AFE)();
            i++;
        } while (i < n);
    }
}


int mwRnaLockCs(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);

void bootDevRead16(char *out)
{
    int i;

    *(char *)(*(int *)0xAC00F728 + 20) = 59;
    ((void (*)(void))0xAC0118F8)();
    for (i = 0; i < 16; i++) {
        out[i] = *(char *)(*(int *)0xAC00F72C + i * 4);
    }
}


int bootPollLink(int a)
{
    int r;

    r = 0;
    if (*(int *)0xAC00F708 != 0 && a == 0) {
        r = ((int (*)(void))0xAC01112A)();
    }
    if (*(int *)0xAC00F70C != 0 && a == 1) {
        r = ((int (*)(void))0xAC011980)();
    }
    return r;
}

float nlRandom(void);


void bootInitLink(void)
{
    int m;

    *(int *)0xAC00F708 = 0;
    *(int *)0xAC00F70C = 0;
    m = *(int *)0xAC00F71C & 7;
    if (m != 7) {
        if (((int (*)(int))0xAC010F3C)(m) == 0) {
            *(int *)0xAC00F708 = 1;
        }
    }
    if (((int (*)(int, int))0xAC011A90)(0, 0x1C200) == 0) {
        *(int *)0xAC00F70C = 1;
    }
}

void bootSerialSend(signed char *buf, int n)
{
    int i;

    if (n > 0) {
        i = 0;
        do {
            if ((i & 15) == 0) {
                ((void (*)(void))0xAC011AFE)();
            }
            ((void (*)(int))0xAC011B2C)(buf[i]);
            i++;
        } while (i < n);
    }
}

typedef struct {
    int a;
    int b;
    int c;
} Vec12c;

