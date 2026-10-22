/* Straight-line functions with calls and guards (batch gen_pa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvInterpolateBuffer(int, int, float);
int psgStepBlend(int a4);

int psgStepBlend(int a4)
{
    float u0;
    int t1;
    float u2;
    float u3;
    int t4;
    float u6;
    float u7;
    float u8;
    int t12;
    int t9;
    int t10;
    float u11;

    u0 = *(float *)((a4 + 0x10C));
    if (u0 == 0.0f) {
        t1 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t1 & 0x7F);
        return (t1 & 0x7F);
    }
    u2 = *(float *)((a4 + 0x10C));
    u3 = *(float *)((a4 + 0x108));
    t4 = *(int *)((a4 + 0x118));
    FcvInterpolateBuffer((a4 + 0x3C), t4, (u3 / u2));
    u6 = *(float *)((a4 + 0x108));
    *(float *)((a4 + 0x108)) = (u6 + 1.0f);
    u7 = *(float *)((a4 + 0x10C));
    u8 = *(float *)((a4 + 0x108));
    t12 = 0x108;
    if (u8 == u7) {
        t9 = *(signed char *)(((0x149 + a4) + 0x0));
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (t9 & 0x7F);
        t10 = *(int *)((a4 + 0x110));
        *(unsigned int *)((a4 + 0x34)) = t10;
        u11 = *(float *)((a4 + 0x114));
        *(float *)((a4 + 0x38)) = u11;
        t12 = 0x38;
    }
    return t12;
}
