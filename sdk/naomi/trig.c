/* The NAOMI library's trigonometry: nlSin, nlCos, nlArcTan2. Ranges 0C0760A0-0C076114, 0C075B20-0C075B38, 0C075A50-0C075AF4.
   NLangle: 0x10000 is a turn. nlSin halves the angle, reduces it to a quarter turn and takes
   tan(z) as the continued fraction z / (1 - z2/(3 - z2/(5 - ...))), then sin(2z) = 2t / (1 + t2). */

int nlArcTan(float t);
float nlSin(int a);

float nlSin(int a)
{
    float x, h, z, y2, k, t, s;
    int q, n;

    x = (float)(unsigned short)a * 6.283185f / 65536.0f;
    h = x / 2.0f;
    q = (int)(h / 1.57079625f + 0.5f);
    z = h - (float)q * 1.57079625f;
    y2 = z * z;
    k = 0.0f;
    n = 11;
    do {
        k = y2 / ((float)n - k);
        n -= 2;
    } while (n >= 3);
    t = z / (1.0f - k);
    s = (2.0f * t) / (t * t + 1.0f);
    if (q & 1)
        return -s;
    return s;
}

float nlCos(int a)
{
    unsigned int u = (unsigned short)a;

    if (u > 0x8000)
        u = 0x10000 - u;
    return nlSin(0x4000 - u);
}

int nlArcTan2(float y, float x)
{
    float yx = y / x;
    float xy = x / y;

    if (y > x) {
        if (-y > x) {
            if (x == 0.0f)
                return 0x8000;
            return (nlArcTan(yx) + 0x8000) & 0xFFFF;
        }
        if (y == 0.0f)
            return 0x4000;
        return (0x4000 - nlArcTan(xy)) & 0xFFFF;
    }
    if (-y > x) {
        if (y == 0.0f)
            return 0xC000;
        return (0xC000 - nlArcTan(xy)) & 0xFFFF;
    }
    if (x == 0.0f)
        return 0;
    return nlArcTan(yx);
}
