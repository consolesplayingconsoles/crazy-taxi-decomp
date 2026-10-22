/* Straight-line functions with calls and guards (batch gen_pd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int SetFadeColorMulti(float f4, float f5, float f6);

int SetFadeColorMulti(float f4, float f5, float f6)
{
    float u0;
    float u1;
    float u2;
    float u4;
    float u5;
    float u6;

    u0 = *(float *)0xC0EA5C4;
    u1 = *(float *)0xC0EA5C0;
    u2 = *(float *)0xC0EA5BC;
    nlObjPutSetFadeColorBase((u2 * f4), (u1 * f5), (u0 * f6));
    u4 = *(float *)0xC0EA5C8;
    u5 = *(float *)0xC0EA5CC;
    u6 = *(float *)0xC0EA5D0;
    return nlObjPutSetFadeColorOffset((u4 * f4), (u5 * f5), (u6 * f6));
}
