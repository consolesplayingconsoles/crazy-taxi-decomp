/* Small functions in the gaps between proven ones: empty bodies and constants. */


void Psg_SetPosPtr(int a, float *v);
int GetCollision2D(int a, float b);
void FUN_0c070aa6(void);


int nlsndStreamGetFreq(int a)
{
    int e;

    e = 0xC2B771C + (short)a * 24;
    if (*(signed char *)e == 1) {
        return *(int *)(e + 12);
    }
    return 0;
}

int nlsndStreamGetBitSize(int a)
{
    int e;

    e = 0xC2B771C + (short)a * 24;
    if (*(signed char *)e == 1) {
        return *(short *)(e + 2);
    }
    return 0;
}


typedef struct {
    int a;
    int b;
    int c;
} Vec12;

typedef struct {
    short a;
    short b;
    short c;
} Angles6;

int CheckSetDrive(int, int);


typedef struct {
    int v[2];
} Words2;

typedef struct {
    int v[7];
} Words7;


