/* Vector helpers written by hand from the Dreamcast code, where the generated form had the wrong result type.

   nlUnitNormalVectorCCW and nlUnitNormalVectorCW return 0 or 1 in r0 (`mov #0,r0` / `mov #1,r0` before their `rts`: whether the
   normal could be made); the generated forms were declared float. Their callers declare float too and drop the value, so nothing
   misbehaved, but tools/8-build/retcheck.py refuses the declaration. The bodies are the generated ones with the result type right. */

float nlInnerProduct(int, int);
float nlInvertSqrt(float);
int nlOuterProduct(int, int, int);

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
int nlUnitNormalVectorCCW(int a4, int a5, int a6, int a7)
{
    float t13;
    float t14;
    int stk[9] = {0};

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct((((int)stk + 4) + 0xC), ((int)stk + 4), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return 0;                                               /* mov #0,r0: no normal from these points */
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return 1;                                               /* mov #1,r0 */
}

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
int nlUnitNormalVectorCW(int a4, int a5, int a6, int a7)
{
    float t13;
    float t14;
    int stk[9] = {0};

    *(float *)(((int)stk + 16)) = ((*(float *)((a5 + 0x0))) - (*(float *)((a4 + 0x0))));
    *(float *)(((int)stk + 20)) = ((*(float *)((a5 + 0x4))) - (*(float *)((a4 + 0x4))));
    *(float *)(((int)stk + 24)) = ((*(float *)((a5 + 0x8))) - (*(float *)((a4 + 0x8))));
    *(float *)(((int)stk + 4)) = ((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = ((*(float *)((a6 + 0x4))) - (*(float *)((a5 + 0x4))));
    *(float *)(((int)stk + 12)) = ((*(float *)((a6 + 0x8))) - (*(float *)((a5 + 0x8))));
    nlOuterProduct(((int)stk + 4), (((int)stk + 4) + 0xC), a7);
    t13 = nlInnerProduct(a7, a7);
    if (t13 == 0.0f) {
        return 0;                                               /* mov #0,r0: no normal from these points */
    }
    t14 = nlInvertSqrt(t13);
    *(float *)((a7 + 0x0)) = ((*(float *)((a7 + 0x0))) * t14);
    *(float *)((a7 + 0x4)) = ((*(float *)((a7 + 0x4))) * t14);
    *(float *)((a7 + 0x8)) = ((*(float *)((a7 + 0x8))) * t14);
    return 1;                                               /* mov #1,r0 */
}
