/* Small functions in the gaps between proven ones: empty bodies and constants. */


void Psg_SetPosPtr(int a, float *v);
int GetCollision2D(int a, float b);
void FUN_0c070aa6(void);


float _app_coss(float x)
{
    float *t;
    float x2;
    float p;
    int i;

    t = (float *)0xC0DAC08;
    x2 = x * x;
    p = t[0];
    for (i = 1; i <= 6; i++) {
        p = x2 * p + t[i];
    }
    return p;
}

float _app_sins(float x)
{
    float *t;
    float x2;
    float p;
    int i;

    t = (float *)0xC0DAC28;
    x2 = x * x;
    p = t[0];
    for (i = 1; i <= 6; i++) {
        p = x2 * p + t[i];
    }
    return x * p;
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


