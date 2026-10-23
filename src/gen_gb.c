/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlGetAverageVector(int, int, int, float, float);
void InitColliWall(int a4);

void InitColliWall(int a4)
{
    int t0;
    int t20;
    int t21;
    int t22;
    int t23;
    int t28;
    int t30;
    int t33;
    int t34;
    int stk[15];

    t0 = *(int *)0xC1EE20C;
    if (t0 != -1) {
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    *(unsigned int *)0xC270458 = 0xCDF6150;
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC27045C) = *(struct mv8 *)(0xC08F6E8); }
                } else {
                    *(unsigned int *)0xC270458 = (*(int *)(((a4 << 2) + 0xC0ED810)));
                    { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC27045C) = *(struct mv8 *)((((((*(int *)(((a4 << 2) + 0xC0ED84C))) << 2) << 2) << 1) + 0xC08FC78)); }
                }
            } else {
                *(unsigned int *)0xC270458 = 0xCE36B90;
                { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC27045C) = *(struct mv8 *)(0xC08F9D0); }
            }
        } else {
            *(unsigned int *)0xC270458 = 0xCDF6150;
            { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC27045C) = *(struct mv8 *)(0xC08F6E8); }
        }
    } else {
        *(unsigned int *)0xC270458 = 0xCE4E9C4;
        { struct mv8 { int w[8]; }; *(struct mv8 *)(0xC27045C) = *(struct mv8 *)(0xC08FA48); }
    }
    if ((*(int *)0xC0ED898) == 0) {
    } else {
        t20 = 0x0;
        for (;;) {
            *(unsigned int *)(((int)stk + 12)) = (0xC27047C + (short)(((((t20 << 2) << 1) + t20) << 2) << 1));
            t21 = 0x0;
            for (;;) {
                *(unsigned int *)(((int)stk + 16)) = (signed char)(((t21 << 1) + t21) << 2);
                t22 = *(int *)(((int)stk + 12));
                *(unsigned int *)(((int)stk + 8)) = ((signed char)(((t21 << 1) + t21) << 2) + t22);
                t23 = *(int *)(((int)stk + 16));
                *(unsigned int *)(((int)stk + 4)) = (t23 + ((t20 * 0x78) + 0xC26ED00));
                nlGetAverageVector((*(int *)(((int)stk + 4))), ((t23 + ((t20 * 0x78) + 0xC26ED00)) + 0x30), ((signed char)(((t21 << 1) + t21) << 2) + t22), 0.5f, 0.5f);
                nlAddVector((*(int *)(((int)stk + 8))), (((t20 * 0x78) + 0xC26ED00) + 0x60));
                t21 = (t21 + 0x1);
                if ((int)t21 >= (int)0x4) {
                    break;
                }
            }
            *(unsigned int *)(((int)stk + 8)) = ((short)((short)t20 * (short)0x1C) + 0xC2708B4);
            *(unsigned int *)(((int)stk + 4)) = ((short)(((((t20 << 2) << 1) + t20) << 2) << 1) + 0xC27047C);
            t28 = 0x0;
            for (;;) {
                t30 = *(int *)(((int)stk + 4));
                nlGetAverageVector(((signed char)((((t28 << 1) + t28) << 2) << 1) + t30), (((signed char)((((t28 << 1) + t28) << 2) << 1) + t30) + 0xC), ((*(int *)(((int)stk + 8))) + (signed char)(((t28 << 1) + t28) << 2)), 0.5f, 0.5f);
                t28 = (t28 + 0x1);
                if ((int)t28 >= (int)0x2) {
                    break;
                }
            }
            t33 = ((short)t20 * (short)0x1C);
            t34 = (t20 * 0x78);
            t20 = (t20 + 0x1);
            *(float *)((((short)t33 + 0xC2708B4) + 0x18)) = (*(float *)(((t34 + 0xC26ED00) + 0x6C)));
            *(float *)((((short)t33 + 0xC2708B4) + 0x8)) = ((*(float *)((((short)t33 + 0xC2708B4) + 0x8))) - (*(float *)(((0x18 + ((short)t33 + 0xC2708B4)) + 0x0))));
            *(float *)((((short)t33 + 0xC2708B4) + 0x14)) = ((*(float *)((((short)t33 + 0xC2708B4) + 0x14))) + (*(float *)(((0x18 + ((short)t33 + 0xC2708B4)) + 0x0))));
            if ((int)t20 >= (int)0xF) {
                break;
            }
        }
        *(unsigned int *)0xC0ED898 = 0x0;
    }
}
