/* Straight-line functions with calls and guards (batch gen_zb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fcvCalcAngle(int, int, float);
int fcvCalcPosition(int, int, float);
float nlFloor(float);
int FcvStorePartsBuffer(int a4, int a5, int a6, float f4);

int FcvStorePartsBuffer(int a4, int a5, int a6, float f4)
{
    int t0;
    int t2;
    float t5;
    int t6;
    int t7;
    int t8;
    int t10;
    int t14;
    int t3;
    int t17;
    int stk[26];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = 0xC0D54CC;
    t2 = (((int)stk + 4) + 0x8);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC0D54CC + 68)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    t5 = nlFloor((f4 / (float)(*(int *)((a4 + 0x0)))));
    t6 = *(int *)((a4 + 0x0));
    t7 = *(int *)(((int)stk + 4));
    t8 = *(int *)(((int)stk + 4));
    if ((t7 != 0) && ((t7 != 5) && ((t7 != 8) && ((t7 != 12) && (t7 != 15))))) {
        t10 = *(int *)(((((int)stk + 4) + 0x8) + (t8 << 2)));
        t17 = (fcvCalcAngle((a4 + ((*(int *)((((a4 + 0x4) + (t8 << 2)) + 0x0))) << 2)), ((unsigned char)(((t10 << 1) + t10) << 2) + ((*(int *)(((int)stk + 8))) + 0x3C)), (f4 - (t5 * (float)t6))));
    } else {
        t14 = *(int *)(((((int)stk + 4) + 0x8) + (t8 << 2)));
        t17 = (fcvCalcPosition((a4 + ((*(int *)((((a4 + 0x4) + (t8 << 2)) + 0x0))) << 2)), ((signed char)(((t14 << 1) + t14) << 2) + (*(int *)(((int)stk + 8)))), (f4 - (t5 * (float)t6))));
    }
    return t17;
}
