/* Curve-motion helpers written by hand from the Dreamcast code, where the generated form had the wrong result type. */

/* The Hermite step between two angle keys (a, b: key records; +4 the value, +0xC / +8 the tangents out and in), at t in [0, 1]:
   the angle as an int (0x10000 = a turn), truncated as the original's `ftrc`. The generated form returned a float (the last term,
   left in fr0) while its caller fcvCalcAngle took the int from r0: every curve-driven joint angle came out as garbage (the cab
   driver's arms twisted while steering and climbing in). */
/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
int fcvHermiteAngle(int a, int b, float t)
{
    float t2, t3, v;

    if (t > 1.0f)
        t = 1.0f;
    else if (0.0f > t)
        t = 0.0f;
    t2 = t * t;
    t3 = t * t2;
    v = (float)*(int *)(b + 0x4) * (t2 * 3.0f - t3 * 2.0f);
    v = v + (t3 * 2.0f - t2 * 3.0f + 1.0f) * (float)*(int *)(a + 0x4);
    v = v + (t - t2 * 2.0f + t3) * (float)*(int *)(a + 0xC);
    v = v + (t3 - t2) * (float)*(int *)(b + 0x8);
    return (int)v;
}
