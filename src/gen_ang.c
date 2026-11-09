/* Straight-line functions with calls and guards (batch gen_ang): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvInterpolateBuffer(int, int, float, float, float, float, float);
int psgStepBlend(int a4, float f4, float f5, float f6, float f7, float f8);
struct o108_float { char p[0x108]; float v; };
struct o10C_float { char p[0x10C]; float v; };
struct o110_int { char p[0x110]; int v; };
struct o114_float { char p[0x114]; float v; };
struct o118_int { char p[0x118]; int v; };
struct o149_uchar { char p[0x149]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };


int psgStepBlend(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int t1;
    int t12;

    if (((((struct o10C_float *)(a4))->v)) == 0.0f) {
        t1 = *(signed char *)(((0x149 + a4) + 0x0));
        (((struct o149_uchar *)(a4))->v) = (t1 & 0x7F);
        return (t1 & 0x7F);
    }
    FcvInterpolateBuffer((a4 + 0x3C), ((((struct o118_int *)(a4))->v)), (((((struct o108_float *)(a4))->v)) / ((((struct o10C_float *)(a4))->v))), f5, f6, f7, f8);
    (((struct o108_float *)(a4))->v) = (((((struct o108_float *)(a4))->v)) + 1.0f);
    t12 = 0x108;
    if (((((struct o108_float *)(a4))->v)) == ((((struct o10C_float *)(a4))->v))) {
        (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) & 0x7F);
        *(unsigned int *)((a4 + 0x34)) = ((((struct o110_int *)(a4))->v));
        (((struct o38_float *)(a4))->v) = ((((struct o114_float *)(a4))->v));
        t12 = 0x38;
    }
    return t12;
}
