/* Straight-line functions with calls and guards (batch gen_ou): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Chat_DamnIt(int);
float nlInnerProduct(int, int);
float nlLength(int, int);
int nlRand(void);
int nlSubVector3op(int, int, int);
int nlUnitVector(int);
int psgEnterState6(int a4, int a5);

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
    *(unsigned int *)(((int)stk + 40)) = (*(int *)0xC0D5F58);
    *(unsigned int *)(((int)stk + 36)) = (*(int *)0xC0D5F5C);
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0xC0D5F60);
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
            *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) & 0xFB);
        } else {
            *(unsigned char *)(((0x14B + a4) + 0x0)) = ((*(signed char *)(((0x14B + a4) + 0x0))) | 0x4);
        }
        if (75.0f > (nlLength(0xC179144, (a4 + 0x4)))) {
            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                *(unsigned int *)((a4 + 0x110)) = (*(int *)(((int)stk + 40)));
            } else {
                *(unsigned int *)((a4 + 0x110)) = (*(int *)(((int)stk + 36)));
            }
            *(float *)((a4 + 0x114)) = (*(float *)(((int)stk + 32)));
        } else {
            t25 = (int)((unsigned int)t3 % (unsigned int)0x4);
            if (((*(signed char *)((a4 + 0x14B))) & 4) != 0) {
                *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((((int)stk + 4) + 0x48) + (t25 << 2)) + 0x0)));
            } else {
                *(unsigned int *)(((0x110 + a4) + 0x0)) = (*(int *)((((((int)stk + 4) + 0x38) + (t25 << 2)) + 0x0)));
            }
            *(float *)(((0x114 + a4) + 0x0)) = (*(float *)((((t25 << 2) + (((int)stk + 4) + 0x28)) + 0x0)));
        }
        *(unsigned char *)(((0x149 + a4) + 0x0)) = ((*(signed char *)(((0x149 + a4) + 0x0))) | 0x80);
        *(float *)((a4 + 0x108)) = 0.0f;
        *(float *)((a4 + 0x10C)) = 10.0f;
        *(unsigned char *)(((0x149 + a4) + 0x0)) = (((*(signed char *)(((0x149 + a4) + 0x0))) & 0xF9) | 0x4);
        *(unsigned int *)((a4 + 0x124)) = 0xC0D5720;
        *(unsigned int *)((a4 + 0x128)) = 0xC0D5728;
        t43 = (Chat_DamnIt(a4));
    }
    return t43;
}
