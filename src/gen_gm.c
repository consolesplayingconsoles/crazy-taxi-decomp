/* Straight-line functions with calls and guards (batch gen_gm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutUseViewMatrix(int);
int nlTriPutSetAttrib(int);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int FUN_0c0354f8(int a4, int a5, float f4, float f5, float f6);

int FUN_0c0354f8(int a4, int a5, float f4, float f5, float f6)
{
    int t2;
    float u13;

    nlTriPutTextureInit(0xC271638, 0xFFFFFFFF, 0x0);
    nlTriPutSetAttrib(0xC271638);
    t2 = *(int *)0xC271658;
    *(unsigned int *)0xC271658 = (t2 | 0xC0);
    nlTriPutSetPoint(0xC271638, 0x0, ((float)a4 * f6), (f5 - 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x1, ((float)a4 * f6), (f4 + 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x2, (f6 + ((float)a4 * f6)), (f5 - 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x3, (f6 + ((float)a4 * f6)), (f4 + 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x4, (f6 + ((float)a4 * f6)), (f5 - 1.0f), (f6 + ((float)a5 * f6)), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x5, (f6 + ((float)a4 * f6)), (f4 + 1.0f), (f6 + ((float)a5 * f6)), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x6, ((float)a4 * f6), (f5 - 1.0f), (f6 + ((float)a5 * f6)), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x7, ((float)a4 * f6), (f4 + 1.0f), (f6 + ((float)a5 * f6)), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x8, ((float)a4 * f6), (f5 - 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    nlTriPutSetPoint(0xC271638, 0x9, ((float)a4 * f6), (f4 + 1.0f), ((float)a5 * f6), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    u13 = ((f6 * 0.5f) * 1.40999997f);
    u13 = u13 + 0.5f * ((f4 + 1.0f) - (f5 - 1.0f));
    nlTriPutSetClipping(0xC271638, ((f6 * 0.5f) + ((float)a4 * f6)), (((f4 + 1.0f) + (f5 - 1.0f)) * 0.5f), ((f6 * 0.5f) + ((float)a5 * f6)), u13);
    return nlObjPutUseViewMatrix(0xC271638);
}
