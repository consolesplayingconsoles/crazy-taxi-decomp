/* Small functions in the gaps between proven ones: empty bodies and constants. */


void Psg_SetPosPtr(int a, float *v);
int GetCollision2D(int a, float b);
void FUN_0c070aa6(void);


void syChainMasterHandler(int a)
{
    int *n;

    n = ((int **)0xC2EBC10)[(short)a >> 4];
    while (n != 0) {
        ((void (*)(int))n[0])(n[2]);
        n = (int *)n[1];
    }
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


