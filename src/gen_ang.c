/* Straight-line functions with calls and guards (batch gen_ang): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvInterpolateBuffer(int, int, float, float, float, float, float);
int psgStepBlend(int a4, float f4, float f5, float f6, float f7, float f8);

int psgStepBlend(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int t1;
    int t12;

    if ((*(float *)((a4 + 0x10C))) == 0.0f) {
        t1 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t1 & 0x7F);
        return (t1 & 0x7F);
    }
    FcvInterpolateBuffer((a4 + 0x3C), (*(int *)((a4 + 0x118))), ((*(float *)((a4 + 0x108))) / (*(float *)((a4 + 0x10C)))), f5, f6, f7, f8);
    *(float *)((a4 + 0x108)) = ((*(float *)((a4 + 0x108))) + 1.0f);
    t12 = 0x108;
    if ((*(float *)((a4 + 0x108))) == (*(float *)((a4 + 0x10C)))) {
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
        *(unsigned int *)((a4 + 0x34)) = (*(int *)((a4 + 0x110)));
        *(float *)((a4 + 0x38)) = (*(float *)((a4 + 0x114)));
        t12 = 0x38;
    }
    return t12;
}
