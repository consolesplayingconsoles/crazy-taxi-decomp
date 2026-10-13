/* Camera eye / look-at vectors (camSetEye, camSetTarget, camSnapToCar) and vsklRotate. Ranges 0C02871C-0C028762, 0C02877E-0C0287C4, 0C02890E-0C028968, 0C06AF8C-0C06AFB2. */

typedef struct { float x, y, z; } Vec3;
typedef struct { unsigned int a, b, c; } Ang3;

extern char g_camEyeHV[];
extern char g_camTargetHV[];
extern Vec3 g_zeroVec;
extern unsigned short g_camAngles[];
extern char g_camHV3[];
extern int g_camSnapFlag;
extern unsigned char Car_Data[];
extern Vec3 g_vsklA, g_vsklC;
extern float g_vsklAxC[];

/* the 12-byte struct copies below compile to calls of this runtime helper */
extern void _quick_odd_mvn(void);

void InitHomingVector(void *hv, void *v);
void FUN_0c0364b8(void *p, Ang3 *a);
void ResetSpark(void);
void nlOuterProduct(float *a, float *b, float *out);
void nlMultiMatrix8(void *m);

void camSetEye(Vec3 *v, int mode)
{
    if (mode == 0) {
        InitHomingVector(g_camEyeHV, v);
        return;
    }
    if (mode == 1)
        *(Vec3 *)(g_camEyeHV + 12) = g_zeroVec;
    *(Vec3 *)(g_camEyeHV + 24) = *v;
}

void camSetTarget(Vec3 *v, int mode)
{
    if (mode == 0) {
        InitHomingVector(g_camTargetHV, v);
        return;
    }
    if (mode == 1)
        *(Vec3 *)(g_camTargetHV + 12) = g_zeroVec;
    *(Vec3 *)(g_camTargetHV + 24) = *v;
}

/* camSnapToCar: not counted. Its stack temporary (the angles passed to FUN_0c0364b8) sits 8 bytes lower in the original, which saves two more registers; equiv.py DIFFERS on that argument only. */
void camSnapToCar(int n)
{
    unsigned char *car = Car_Data + (short)((short)n * 956);
    Ang3 a;

    InitHomingVector(g_camTargetHV, car + 120);
    InitHomingVector(g_camEyeHV, car + 120);
    a.a = g_camAngles[0];
    a.b = g_camAngles[1];
    a.c = g_camAngles[2];
    FUN_0c0364b8(g_camHV3, &a);
    ResetSpark();
    g_camSnapFlag = 1;
}

void vsklRotate(Vec3 *a, Vec3 *c)
{
    g_vsklA = *a;
    g_vsklC = *c;
    nlOuterProduct((float *)a, (float *)c, g_vsklAxC);
    nlMultiMatrix8(&g_vsklA);
}
