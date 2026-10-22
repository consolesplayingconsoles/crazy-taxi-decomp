/* Straight-line functions with calls and guards (batch gen_acd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutCollisionPoly(int);
int PutGridPoly(int, int, float, float, float);
float nlFloor(float);
int PutCollisionObj(int a4, int a5);

int PutCollisionObj(int a4, int a5)
{
    float t2;
    float t5;
    int t6;
    int t7;
    int t8;
    int t30;
    int t14;
    int t21;
    int t22;
    int t24;
    int t25;
    int t26;
    int t9;
    int t10;
    int t11;

    t2 = nlFloor(((*(float *)((a4 + 0x0))) / (*(float *)0xC26E410)));
    t5 = nlFloor(((*(float *)((a4 + 0x8))) / (*(float *)0xC26E410)));
    t6 = *(int *)0xC26E3F8;
    t7 = *(int *)0xC26E404;
    t8 = *(int *)0xC26E3F4;
    t30 = 0x0;
    if (((int)((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) >= 0) && ((t9 = *(int *)0xC26E40C, (int)((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) < (int)t9) && (t10 = *(int *)0xC26E3F0, t11 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + t10)), t11 != 0))) {
        t14 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + (*(int *)0xC26E3F0)));
        PutGridPoly(((*(int *)0xC26E3F4) + ((int)t2 - t8)), ((*(int *)0xC26E3F8) + ((int)t5 - t6)), (*(float *)((t14 + 0x0))), (*(float *)((t14 + 0x4))), (*(float *)0xC26E410));
        t21 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + (*(int *)0xC26E3F0)));
        t22 = *(short *)((t21 + 0x8));
        *(unsigned int *)((a5 + 0x0)) = t22;
        t24 = (t21 + 0xC);
        t25 = t22;
        for (;;) {
            if (t25 == 0) {
                break;
            }
            t26 = *(int *)((t24 + 0x0));
            t24 = (t24 + 0x4);
            PutCollisionPoly(t26);
            t25 = (t25 - 1);
        }
        t30 = ((*(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + (*(int *)0xC26E3F0)))) + 0xC);
    }
    return t30;
}
