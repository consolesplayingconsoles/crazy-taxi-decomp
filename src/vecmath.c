/* The NAOMI library's vector maths (nl*), the small ones the mod calls. Range 0C078A50-0C078C50.
   The original sums with fipr (one rounding, approximate on the hardware), this C with float multiplies and adds: the cases use values exact in float. */

/* SHC's own fsqrt intrinsic (what math.h maps sqrtf to with -fpu=single) */
extern float _builtin_sqrtf(float);

float nlInnerProduct(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

float nlLength(float *a, float *b)
{
    float x = a[0] - b[0];
    float y = a[1] - b[1];
    float z = a[2] - b[2];

    return _builtin_sqrtf(x * x + y * y + z * z);
}

void nlAddVector(float *vd, float *vs)
{
    vd[0] = vd[0] + vs[0];
    vd[1] = vd[1] + vs[1];
    vd[2] = vd[2] + vs[2];
}

void nlScaleVector(float *vd, float *vs, float sc)
{
    vd[0] = vs[0] * sc;
    vd[1] = vs[1] * sc;
    vd[2] = vs[2] * sc;
}

void nlSubVector3op(float *vd, float *vs1, float *vs2)
{
    vd[0] = vs1[0] - vs2[0];
    vd[1] = vs1[1] - vs2[1];
    vd[2] = vs1[2] - vs2[2];
}
