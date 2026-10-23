/* Straight-line functions with calls and guards (batch gen_afj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlInnerProduct(int, int);
float nlScalor2(int, float);
extern int nlSubVector3op();
float nlUnitVector(int);
int psgSetState(int, int, int, int);
int psgRoadCheck(int a4, float f4, float f5, float f6);

int psgRoadCheck(int a4, float f4, float f5, float f6)
{
    int t4;
    float u5;
    int t6;
    float t7;
    int t8;
    int stk[22];

    *(unsigned int *)(((int)stk + 4)) = 0x0;
    if ((int)(*(int *)((a4 + 0x12C))) > 0) {
        *(unsigned int *)((a4 + 0x12C)) = ((*(int *)((a4 + 0x12C))) - 2);
    }
    t4 = 0x0;
    u5 = f4;
    for (;;) {
        t6 = ((int (*)(int, int, int, float, float, float))(nlSubVector3op))((((int)stk + 4) + 0x1C), (((short)(((t4 << 1) + t4) << 2) + 0xC2AD2BC) + 0xC), ((short)(((t4 << 1) + t4) << 2) + 0xC2AD2BC), u5, f5, f6);
        *(float *)(((int)stk + 36)) = 0.0f;
        t7 = nlUnitVector((((int)stk + 4) + 0x1C));
        t8 = ((int (*)(int, int, int))(nlSubVector3op))((((int)stk + 4) + 0x10), (a4 + 0x4), ((short)(((t4 << 1) + t4) << 2) + 0xC2AD2BC));
        *(float *)(((int)stk + 24)) = 0.0f;
        u5 = (nlInnerProduct((((int)stk + 4) + 0x1C), (((int)stk + 4) + 0x10)));
        if (!(0.0f > u5) && !(u5 > t7)) {
            u5 = (nlScalor2((((int)stk + 4) + 0x10), u5));
            if (225.0f > u5) {
                break;
            }
            t4 = (t4 + 0x1);
            if ((int)t4 >= (int)0x22) {
                if ((int)(*(int *)((a4 + 0x12C))) > (int)0xF) {
                    psgSetState(a4, 0x6, (*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                    *(unsigned int *)((a4 + 0x12C)) = 0x0;
                    *(unsigned int *)(((int)stk + 4)) = 0x1;
                    return (*(int *)(((int)stk + 4)));
                }
                return (*(int *)(((int)stk + 4)));
            }
            continue;
        }
        t4 = (t4 + 0x1);
        if ((int)t4 >= (int)0x22) {
            if ((int)(*(int *)((a4 + 0x12C))) > (int)0xF) {
                psgSetState(a4, 0x6, (*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
                *(unsigned int *)((a4 + 0x12C)) = 0x0;
                *(unsigned int *)(((int)stk + 4)) = 0x1;
                return (*(int *)(((int)stk + 4)));
            }
            return (*(int *)(((int)stk + 4)));
        }
    }
    *(unsigned int *)((a4 + 0x12C)) = ((*(int *)((a4 + 0x12C))) + (0x23 - t4));
    if ((int)(*(int *)((a4 + 0x12C))) > (int)0xF) {
        psgSetState(a4, 0x6, (*(int *)((a4 + 0x28))), (*(int *)((a4 + 0x2C))));
        *(unsigned int *)((a4 + 0x12C)) = 0x0;
        *(unsigned int *)(((int)stk + 4)) = 0x1;
    }
    return (*(int *)(((int)stk + 4)));
}
