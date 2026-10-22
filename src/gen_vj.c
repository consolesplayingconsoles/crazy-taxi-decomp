/* Straight-line functions with calls and guards (batch gen_vj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
int nlArcTan2(float, float);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSubVector(int, int);
int getSteering(int a4, int a5);

int getSteering(int a4, int a5)
{
    int t1;
    int t3;
    int t5;
    float u10;
    int t11;
    float u12;
    int t13;
    int t14;
    int t15;
    int t18;
    int t16;
    int t21;
    int t24;
    int t22;
    int stk[8] = {0};

    *(unsigned int *)(((int)stk + 4)) = a5;
    nlPushUnitMatrix();
    t1 = *(short *)((a4 + 0xA8));
    nlRotateAZ((-(unsigned short)t1));
    t3 = *(short *)((a4 + 0xA4));
    nlRotateAX((-(unsigned short)t3));
    t5 = *(short *)((a4 + 0xA6));
    nlRotateAY((-(unsigned short)t5));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x4)) = *(struct mv3 *)((0xE0 + a4)); }
    nlSubVector((((int)stk + 4) + 0x4), (0x8C + a4));
    FUN_0c077210((((int)stk + 4) + 0x4), (((int)stk + 4) + 0x4));
    nlPopMatrix(0x1);
    u10 = *(float *)(((int)stk + 16));
    t11 = *(int *)(((int)stk + 4));
    u12 = *(float *)(((int)stk + 8));
    t13 = nlArcTan2(u12, u10);
    *(unsigned int *)((t11 + 0x0)) = (short)t13;
    t14 = *(int *)(((int)stk + 4));
    t15 = *(int *)((t14 + 0x0));
    t18 = 0xFFFFEC00;
    if ((int)(int)((float)t15 * 0.599999964f) < (int)0xFFFFEC00) {
    } else {
        t16 = (int)((float)t15 * 0.599999964f);
        if ((int)(int)((float)t15 * 0.599999964f) > (int)0x1400) {
            t16 = 0x1400;
        }
        t18 = t16;
    }
    t21 = *(int *)((a4 + 0xC0));
    t24 = 0xFFFFFFC0;
    if ((int)(int)((float)(t18 - t21) * 0.399999976f) < (int)0xFFFFFFC0) {
    } else {
        t22 = (int)((float)(t18 - t21) * 0.399999976f);
        if ((int)(int)((float)(t18 - t21) * 0.399999976f) > (int)0x40) {
            t22 = 0x40;
        }
        t24 = t22;
    }
    return t24;
}
