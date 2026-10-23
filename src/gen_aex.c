/* Straight-line functions with calls and guards (batch gen_aex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint(int, int);
int nlMultiViewMatrix(void);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
float nlRandom(void);
float nlScalor(int, float);
int SetSpark(int a4, int a5, int a6, float f4);

int SetSpark(int a4, int a5, int a6, float f4)
{
    int t0;
    float t1;
    int t63;
    int t2;
    float u23;
    int t27;
    int t28;
    int t32;
    int t34;
    float u39;
    int t41;
    int t42;
    float u46;
    int t48;
    int t49;
    float u53;
    int t16;
    int t24;
    int t25;
    int t26;
    float u29;
    int stk[20];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    t0 = *(int *)0xC2757D0;
    t1 = nlScalor(a5, f4);
    t63 = 0xC0379D8;
    if (0.199999988f > (t1 * 0.5f)) {
    } else {
        if ((int)a6 > (int)(0x5A - t0)) {
            if ((int)((a6 + 0x1) >> 1) > (int)(0x5A - t0)) {
                *(unsigned int *)0xC2757D0 = 0x5A;
                t2 = *(int *)0xC2757D4;
                *(unsigned int *)0xC2757D4 = (t2 + (((a6 + 0x1) >> 1) - (0x5A - t0)));
                if ((int)(t2 + (((a6 + 0x1) >> 1) - (0x5A - t0))) >= (int)0x5A) {
                    *(unsigned int *)0xC2757D4 = ((*(int *)0xC2757D4) - 0x5A);
                }
            } else {
                *(unsigned int *)0xC2757D0 = ((*(int *)0xC2757D0) + ((a6 + 0x1) >> 1));
            }
            t16 = ((a6 + 0x1) >> 1);
        } else {
            *(unsigned int *)0xC2757D0 = ((*(int *)0xC2757D0) + a6);
            t16 = a6;
        }
        nlPushUnitMatrix();
        nlMultiViewMatrix();
        u23 = *(float *)0xC037B24;
        t27 = a4;
        t28 = t16;
        for (;;) {
            if (t28 == 0) {
                break;
            }
            t24 = (*(int *)0xC2757D8);
            t26 = 0x1C;
            t25 = (*(int *)(((int)stk + 12)));
            t32 = ((short)t24 * (short)t26);
            t26 = 0xC081324;
            t24 = t32;
            t24 = (short)t24;
            t24 = (t24 + 0xC274DF8);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t24) = *(struct mv3 *)(t25); }
            t26 = 0x1C;
            t34 = ((short)(*(int *)0xC2757D8) * (short)t26);
            t26 = 0xC;
            t26 = (t26 + ((short)t34 + 0xC274DF8));
            t25 = (*(int *)(((int)stk + 8)));
            u29 = (*(float *)((t25 + 0x0)));
            t25 = (t26);
            u39 = u29;
            u39 = u39 + (t1 * 0.5f) * ((nlRandom()) + u23);
            u29 = u39;
            *(float *)((t25 + 0x0)) = u29;
            t25 = 0x1C;
            t26 = (*(int *)0xC2757D8);
            t41 = ((short)t26 * (short)t25);
            t25 = 0x10;
            t26 = t41;
            t26 = (short)t26;
            t26 = (t26 + 0xC274DF8);
            t25 = (t25 + t26);
            t42 = t25;
            t24 = (*(int *)(((int)stk + 8)));
            u29 = (*(float *)((t24 + 0x4)));
            t25 = 0x1C;
            t24 = t42;
            u46 = u29;
            u46 = u46 + (t1 * 0.5f) * ((nlRandom()) + u23);
            u29 = u46;
            *(float *)((t24 + 0x0)) = u29;
            t26 = (*(int *)0xC2757D8);
            t48 = ((short)t26 * (short)t25);
            t25 = 0x14;
            t26 = t48;
            t26 = (short)t26;
            t26 = (t26 + 0xC274DF8);
            t25 = (t25 + t26);
            t49 = t25;
            t24 = (*(int *)(((int)stk + 8)));
            u29 = (*(float *)((t24 + 0x8)));
            t25 = 0x1C;
            t24 = t49;
            u53 = u29;
            u53 = u53 + (t1 * 0.5f) * ((nlRandom()) + u23);
            u29 = u53;
            *(float *)((t24 + 0x0)) = u29;
            t26 = (*(int *)0xC2757D8);
            t26 = ((short)t26 * (short)t25);
            t26 = (short)t26;
            t26 = (t26 + 0xC274DF8);
            *(unsigned int *)((t26 + 0x18)) = 0x1E;
            t26 = 0xC0771B0;
            t27 = (*(int *)(((int)stk + 12)));
            nlCalcPoint(t27, (((int)stk + 8) + 0xC));
            t25 = (*(int *)0xC2757D8);
            t26 = 0x1;
            t25 = (t25 << 2);
            t25 = (t25 << 2);
            t25 = (t25 << 1);
            t25 = (t25 + 0xC274298);
            *(unsigned int *)((t25 + 0x0)) = t26;
            t25 = ((int)stk + 8);
            t27 = (*(int *)0xC2757D8);
            t25 = (t25 + 0xC);
            t26 = 0xC081324;
            t27 = (t27 << 2);
            t27 = (t27 << 2);
            t27 = (t27 << 1);
            t27 = (t27 + 0xC274298);
            *(unsigned int *)(((int)stk + 16)) = t27;
            t27 = (t27 + 0x8);
            t24 = t27;
            t24 = (t24 + 0xC);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t24) = *(struct mv3 *)(t25); }
            t24 = t27;
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t24) = *(struct mv3 *)(t25); }
            t24 = (*(int *)0xC2757D8);
            t26 = 0x5A;
            t24 = (t24 + 0x1);
            *(unsigned int *)0xC2757D8 = t24;
            if ((int)t24 >= (int)t26) {
                *(unsigned int *)0xC2757D8 = 0x0;
            }
            t28 = (t28 - 1);
        }
        t63 = (nlPopMatrix(0x1));
    }
    return t63;
}
