/* Straight-line functions with calls and guards (batch gen_acd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutCollisionPoly(int);
int PutGridPoly(int, int, float, float, float);
float nlFloor(float);
int PutCollisionObj(int a4, int a5);
struct o0_int { int v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };


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
    int t24;
    int t25;
    int t26;
    int t9;
    int t10;
    int t11;

    t2 = nlFloor(((*(float *)((a4 + 0x0))) / ((((struct o20_float *)0xC26E3F0)->v))));
    t5 = nlFloor(((*(float *)((a4 + 0x8))) / ((((struct o20_float *)0xC26E3F0)->v))));
    t6 = (((struct o8_int *)0xC26E3F0)->v);
    t7 = (((struct o14_int *)0xC26E3F0)->v);
    t8 = (((struct o4_int *)0xC26E3F0)->v);
    t30 = 0x0;
    if (((int)((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) >= 0) && ((t9 = (((struct o1C_int *)0xC26E3F0)->v), (int)((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) < (int)t9) && (t10 = (((struct o0_int *)0xC26E3F0)->v), t11 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + t10)), t11 != 0))) {
        t14 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + ((((struct o0_int *)0xC26E3F0)->v))));
        PutGridPoly((((((struct o4_int *)0xC26E3F0)->v)) + ((int)t2 - t8)), (((((struct o8_int *)0xC26E3F0)->v)) + ((int)t5 - t6)), (*(float *)((t14 + 0x0))), (*(float *)((t14 + 0x4))), ((((struct o20_float *)0xC26E3F0)->v)));
        t21 = *(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + ((((struct o0_int *)0xC26E3F0)->v))));
        t25 = *(short *)((t21 + 0x8));
        *(unsigned int *)((a5 + 0x0)) = t25;
        t24 = (t21 + 0xC);
        for (;;) {
            if (t25 == 0) {
                break;
            }
            t26 = *(int *)((t24 + 0x0));
            t24 = (t24 + 0x4);
            PutCollisionPoly(t26);
            t25 = (t25 - 1);
        }
        t30 = ((*(int *)(((((t7 * ((int)t5 - t6)) + ((int)t2 - t8)) << 2) + ((((struct o0_int *)0xC26E3F0)->v))))) + 0xC);
    }
    return t30;
}
