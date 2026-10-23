/* Game functions with single-precision floats (batch m): camera target setters, print scale and size, small stores. */

void Result_Light(void);

#define F(a)    (*(float *)(a))

void SetCameraTargetRatio(float a, float b)
{
    char *g = (char *)0x0C1798FC;

    *(float *)(g + 36) = a;
    *(float *)(g + 40) = b;
}

void SetCameraAngleRatio(float a, float b)
{
    char *g = (char *)0x0C179928;

    *(float *)(g + 36) = a;
    *(float *)(g + 40) = b;
}

void pfSetAspectRatio(float x)
{
    F(0x0C26E200) = x;
    F(0x0C26E1F4) = F(0x0C26E1FC) * x;
}

void PTime_Pos_Set(float a, float b)
{
    F(0x0C2A7604) = a;
    F(0x0C2A7608) = b;
}

void PTime_Scale_Set(float a, float b)
{
    F(0x0C2A8C64) = a;
    F(0x0C2A8C68) = b;
}

void PTime_Color_Set(float a, float b, float c)
{
    F(0x0C2A8C6C) = a;
    F(0x0C2A8C70) = b;
    F(0x0C2A8C74) = c;
}

void Init_Combo_Entry(char *p, int a, int b)
{
    *(float *)(p + 20) = 100.0f;
    *(int *)(p + 24) = a;
    *(int *)(p + 28) = b;
    *(int *)(p + 32) = 0;
}

void Init_RS_Light(void)
{
    char *g = (char *)0x0C2A9768;

    *(short *)(g + 16) = 0xEB00;
    *(short *)(g + 18) = 0xF200;
    *(float *)(g + 12) = 0.79999995f;
    *(int *)0x0C2A9784 = 8;
    Result_Light();
}

float breathFrameTime(float x)
{
    return x * 10.0f;
}

/* out = a + b for 3-vectors. */
void nlAddVector3op(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

void pfLocate(float x, float y)
{
    F(0x0C0ED250) = F(0x0C26E200) * x;
    if (*(int *)0x0C26E1F0)
        y *= 0.5f;
    F(0x0C0ED254) = y;
}

void pfSize(float x, float y)
{
    float t;

    F(0x0C26E1FC) = x;
    F(0x0C26E1F4) = F(0x0C26E200) * x;
    F(0x0C26E1F8) = y;
    t = F(0x0C26E208) * y;
    if (*(int *)0x0C26E1F0)
        t *= 0.5f;
    F(0x0C26E204) = t;
}

void Reset_Ranking_Wave(void)
{
    if (*(int *)0x0C2A96A8 == 1)
        F(0x0C2A96B4) = 0.0f;
}
