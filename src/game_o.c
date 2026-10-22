/* Game functions with single-precision floats (batch o): bilinear weights, a clock step, a volume byte, two 14-word
   parameter blocks. Globals are addressed directly where the decomp has no name for them yet. */

#define F(a)    (*(float *)(a))

/* The four weights of a bilinear blend (a, b the fractions, c the scale) in the car data's block. */
void FUN_0c0211e0(float a, float b, float c)
{
    float f8 = 1.0f - a;
    float f7 = 1.0f - b;
    float f3 = f8;
    float f4;
    char *p = (char *)0x0C1790CC + 0x1A0;

    f8 = f8 * b;
    f3 = f3 * f7;
    f7 = f7 * a;
    f4 = a * b;
    f8 = f8 * c;
    f3 = f3 * c;
    f7 = f7 * c;
    f4 = f4 * c;
    *(float *)(p + 12) = f3;
    *(float *)(p + 12 + 132) = f7;
    *(float *)(p + 12 + 264) = f8;
    *(float *)(p + 12 + 396) = f4;
}

/* Adds x / 10 to the two timers at +52 and +56 of the game system. */
void GS_TripMetor(float x)
{
    float d = x * 0.099999994f;
    char *g = (char *)0x0C1EE788;

    *(float *)(g + 52) += d;
    *(float *)(g + 56) += d;
}

void FUN_0c02e42a(void)
{
    *(char *)0x0C1EE80C = (int)((float)*(unsigned char *)0x0C28A4EC / 8.0f * 76.0f);
    *(int *)0x0C26A0CC = 0;
    *(int *)0x0C26A0D0 = 0;
    *(int *)0x0C26A0C8 = 0;
}

void FUN_0c03b158(char *p)
{
    *(float *)(p + 4) = 0.0f;
    *(float *)(p + 8) = 0.0f;
    *(float *)(p + 12) = 1.0f;
    *(float *)(p + 16) = 1.0f;
    *(float *)(p + 20) = 1.0f;
    *(float *)(p + 24) = 0.0f;
    *(float *)(p + 28) = 0.0f;
    *(float *)(p + 32) = 1.0f;
    *(float *)(p + 36) = 1.0f;
    *(int *)(p + 40) = 0;
    *(int *)(p + 52) = 0x300A;
    *(float *)(p + 44) = 1.0f;
    *(int *)(p + 48) = -1;
}

void FUN_0c0504bc(void)
{
    char *p = (char *)0x0C2A7314;

    *(float *)(p + 4) = 320.0f;
    *(float *)(p + 8) = 240.0f;
    *(float *)(p + 12) = 0.19999999f;
    *(float *)(p + 16) = 1.0f;
    *(float *)(p + 20) = 1.0f;
    *(float *)(p + 24) = 0.0f;
    *(float *)(p + 28) = 0.0f;
    *(float *)(p + 32) = 1.0f;
    *(float *)(p + 36) = 1.0f;
    *(int *)(p + 40) = 0;
    *(int *)(p + 52) = 0x200A;
    *(float *)(p + 44) = 1.0f;
    *(int *)(p + 48) = 2;
}

void FUN_0c05baf4(float *p)
{
    *(int *)0x0C2A9A28 = 0;
    *(float **)0x0C2A996C = p;
    *(int *)0x0C1311B8 = (int)*p;
    *(unsigned short *)0x0C2A992C |= 4;
}
