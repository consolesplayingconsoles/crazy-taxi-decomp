/* nlFraction written by hand from the Dreamcast code, where the generated form had no body and no result.

   The original returns the fractional part in fr0: 0.0 when |x| is 2^23 or more (no fraction left in a float), otherwise
   |x| - trunc(|x|), negated when x is negative (`ftrc fr5,fpul ... fsub fr2,fr5 ... fneg fr0`). The generated C was `void` with an
   empty body, so it passed the check by having nothing to compare, and every caller (the destination arrow's colour blend in
   kyakuTaskPut, ExecKyakuArea, SklSfPlay, VSklSfPlay) read whatever fr0 held. */

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
float nlFraction(float x)
{
    float a;
    float r;

    a = x < 0.0f ? -x : x;
    if (!(8388608.0f > a))
        return 0.0f;
    r = a - (float)(int)a;
    if (0.0f > x)
        return -r;
    return r;
}
