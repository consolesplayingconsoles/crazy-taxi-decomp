/* Straight-line functions with calls and guards (batch gen_ou): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_DamnIt(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int psgEnterState6(int a4, int a5);
struct o108_float { char p[0x108]; float v; };
struct o10C_float { char p[0x10C]; float v; };
struct o110_uint { char p[0x110]; unsigned int v; };
struct o114_float { char p[0x114]; float v; };
struct o124_uint { char p[0x124]; unsigned int v; };
struct o128_uint { char p[0x128]; unsigned int v; };
struct o149_uchar { char p[0x149]; unsigned char v; };
struct o14B_uchar { char p[0x14B]; unsigned char v; };
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };



int psgEnterState6(int a4, int a5)
{
    int t3;
    int t4;
    int t25;
    int t43;
    int stk[27];

    *(unsigned int *)(((int)stk + 4)) = a5;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x48)) = *(struct mv4 *)(0xC0D5F28); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x38)) = *(struct mv4 *)(0xC0D5F38); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x28)) = *(struct mv4 *)(0xC0D5F48); }
    *(unsigned int *)(((int)stk + 40)) = ((((struct o0_int *)0xC0D5F58)->v));
    *(unsigned int *)(((int)stk + 36)) = ((((struct o4_int *)0xC0D5F58)->v));
    *(unsigned int *)(((int)stk + 32)) = ((((struct o8_int *)0xC0D5F58)->v));
    t3 = nlRand();
    t4 = *(int *)(((int)stk + 4));
    if (t4 != 0) {
        
        t43 = t4;
    } else {
        nlSubVector3op((((int)stk + 4) + 0x10), (a4 + 0x4), 0xC179144);
        *(float *)(((int)stk + 24)) = 0.0f;
        nlUnitVector((((int)stk + 4) + 0x10));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)(0xC2AD1E0); }
        *(float *)(((int)stk + 12)) = 0.0f;
        nlUnitVector((((int)stk + 4) + 0x4));
        if ((nlInnerProduct((((int)stk + 4) + 0x10), (((int)stk + 4) + 0x4))) > 0.0f) {
            (((struct o14B_uchar *)(a4))->v) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
        } else {
            (((struct o14B_uchar *)(a4))->v) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
        }
        if (75.0f > (nlLength(0xC179144, (a4 + 0x4)))) {
            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                (((struct o110_uint *)(a4))->v) = (*(int *)(((int)stk + 40)));
            } else {
                (((struct o110_uint *)(a4))->v) = (*(int *)(((int)stk + 36)));
            }
            (((struct o114_float *)(a4))->v) = (*(float *)(((int)stk + 32)));
        } else {
            t25 = (int)((unsigned int)t3 % (unsigned int)0x4);
            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                (((struct o110_uint *)(a4))->v) = (*(int *)((((((int)stk + 4) + 0x48) + (t25 << 2)) + 0x0)));
            } else {
                (((struct o110_uint *)(a4))->v) = (*(int *)((((((int)stk + 4) + 0x38) + (t25 << 2)) + 0x0)));
            }
            (((struct o114_float *)(a4))->v) = (*(float *)((((t25 << 2) + (((int)stk + 4) + 0x28)) + 0x0)));
        }
        (((struct o149_uchar *)(a4))->v) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
        (((struct o108_float *)(a4))->v) = 0.0f;
        (((struct o10C_float *)(a4))->v) = 10.0f;
        (((struct o149_uchar *)(a4))->v) = (((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9) | 0x4);
        (((struct o124_uint *)(a4))->v) = 0xC0D5720;
        (((struct o128_uint *)(a4))->v) = 0xC0D5728;
        t43 = (Chat_DamnIt(a4));
    }
    return t43;
}
