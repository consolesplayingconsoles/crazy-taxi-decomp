extern int ExecBubble();
extern int Exec_ProposalWalker();
/* Small functions, batch c. */

int nlCalcPoint4(int a, float *out);
int nlProjectScreen3D(int a, float *out);
int SetSpark(int a, int b, int c);
int ndPuru2Start(int a, int b, int c);
int syG2AicaFifoIsEmpty(int *r);


int CheckClipping(int a, float x)
{
    float f[4];
    float s;

    f[0] = x;
    nlProjectScreen3D(a, &f[1]);
    s = f[1] < 0.0f ? -f[1] : f[1];
    return (x * *(float *)0xC13EEC0 - f[3]) > s * *(float *)0xC13EEC4;
}

void PutCollisionEffect(int a, int b, int c)
{
    if ((c & 1) == 0) {
        SetSpark(a, b, 4);
        ndPuru2Start(*(unsigned char *)(0xC1EE24C + 44), 0x01000000, 0);
        *(int *)0xC0EDA58 += 1;
    } else {
        *(int *)0xC0EDA60 += 1;
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


int Set_ProposalWalker(int i)
{
    int h;

    h = set_event(80, ((int)Exec_ProposalWalker));
    ((int *)0xC2A9D30)[i] = h;
    if (h == 0) {
        return 0;
    }
    Init_ProposalWalker(((int *)0xC2A9D30)[i], i);
    return 1;
}

void Drv_CallActionStart(int a, int b)
{
    Words19 t;
    void (*f)(int);

    t = *(Words19 *)0xC0D4CA8;
    if (*(signed char *)0xC2AD1DF & 1) {
        f = (void (*)(int))t.w[a + 10];
    } else {
        f = (void (*)(int))t.w[a];
    }
    f(b);
}

int Psg_GetCharaKind(int a)
{
    Words36 t;

    t = *(Words36 *)0xC0D5FD4;
    return t.w[a - 23];
}


int mwRnaLockCs(int *r);
int mwlRnaExecSvrHndl(char *p);
int mwRnaUnlockCs(int *r);


float carSpeedGripScale(float x)
{
    float t;

    t = x * 0.00599999912f;
    if (!(t > 100.0f)) {
        return 1.0f + 0.00199999986f * t;
    }
    if (!(t > 170.0f)) {
        return 1.19999993f + 0.00714285672f * (t + -100.0f);
    }
    return 1.69999993f + 0.00142857130f * (t + -170.0f);
}


float nlRandom(void);


typedef struct {
    int a;
    int b;
    int c;
} Vec12c;

void SetBubble(Vec12c *p, Vec12c *q)
{
    int e;

    e = set_event(60, ((int)ExecBubble));
    if (e == 0) {
        return;
    }
    *(Vec12c *)(e + 20) = *p;
    *(Vec12c *)(e + 32) = *q;
    *(float *)(e + 44) = 0.199999988f + 0.199999988f * nlRandom();
}
