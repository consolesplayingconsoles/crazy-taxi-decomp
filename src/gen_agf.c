/* Straight-line functions with calls and guards (batch gen_agf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlObjPutSetFadeColorBase(float, float, float);
int nlObjPutSetFadeColorOffset(float, float, float);
int SetFadeColorMulti(float f4, float f5, float f6);

int SetFadeColorMulti(float f4, float f5, float f6)
{
    nlObjPutSetFadeColorBase(((*(float *)0xC0EA5BC) * f4), ((*(float *)0xC0EA5C0) * f5), ((*(float *)0xC0EA5C4) * f6));
    return nlObjPutSetFadeColorOffset(((*(float *)0xC0EA5C8) * f4), ((*(float *)0xC0EA5CC) * f5), ((*(float *)0xC0EA5D0) * f6));
}
