/* Straight-line functions with calls and guards (batch gen_zk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutUseViewMatrix(int);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int PutGridPoly(int a4, int a5, float f4, float f5, float f6);

int PutGridPoly(int a4, int a5, float f4, float f5, float f6)
{
    float u14;

    nlTriPutTextureInit(0xC271638, 0xFFFFFFFF, 0x0);
    nlTriPutSetAttrib(0xC271638, 0x1, 0x0, 0xFFFFFFFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xA, 0.5f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    *(unsigned int *)0xC271658 = ((*(int *)0xC271658) | 0xC0);
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
    u14 = (((f6 * 0.5f)) * 1.40999997f);
    u14 = u14 + 0.5f * ((f4 + 1.0f) - (f5 - 1.0f));
    nlTriPutSetClipping(0xC271638, ((f6 * 0.5f) + ((float)a4 * f6)), (((f4 + 1.0f) + (f5 - 1.0f)) * 0.5f), ((f6 * 0.5f) + ((float)a5 * f6)), u14);
    return nlObjPutUseViewMatrix(0xC271638);
}
