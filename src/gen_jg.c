/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int PcarEvInit(int);
int TrailerInit(int, int);
int calcCheckExec(int, int);
int carBalance(int);
int extRand(void);
int set_event(int, int);
int ParkingCarInit(int a4, int a5, int a6, int a7, int a8);

int ParkingCarInit(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t51;
    int t2;
    int t10;
    int t26;
    int t29;
    float u31;
    int t5;
    int stk[12] = {0};

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = extRand();
    t1 = set_event(0x12C, 0xC046B60);
    t51 = 0x0;
    if (t1 == 0) {
    } else {
        t2 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t2 + 0x1);
        *(unsigned int *)((t1 + 0x74)) = ((t2 + 0x1) - 1);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
        *(unsigned int *)((t1 + 0x78)) = (*(int *)(((int)stk + 16)));
        *(unsigned int *)((t1 + 0x80)) = 0x0;
        if (((0x8000 & ((t0 << 2) << 2)) == 0) && (t5 = *(int *)(((int)stk + 8)), t5 != 0)) {
            *(unsigned int *)((t1 + 0x80)) = (*(int *)(((int)stk + 8)));
        }
        if ((*(int *)(((int)stk + 4))) == 0) {
            t10 = *(int *)((t1 + 0x80));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t1)) = *(struct mv3 *)((*(int *)((((((t10 << 1) + t10) << 2) + (*(int *)0xC2A6690)) + 0x0)))); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t1)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        }
        PcarEvInit(t1);
        *(unsigned int *)((t1 + 0x84)) = ((*(int *)((t1 + 0x84))) | 0x10);
        if ((*(int *)((t1 + 0x78))) == 0) {
            *(unsigned int *)((t1 + 0x84)) = ((*(int *)((t1 + 0x84))) | 0x2);
        }
        *(unsigned int *)((t1 + 0xD8)) = (*(int *)(((int)stk + 12)));
        *(float *)((t1 + 0xC8)) = 0.00999999978f;
        t26 = (((t0 << 2) << 2) & 0x83FF);
        if ((0x80000000 & a8) != 0) {
            t26 = (((t0 << 2) << 2) & 0x3FF);
        }
        *(unsigned short *)((t1 + 0xA6)) = (t26 + a8);
        t29 = GetCollision2D((0x8C + t1), 30.0f);
        if ((*(int *)((t29 + 0x1C))) != -1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + t1)) = *(struct mv3 *)((t29 + 0xC)); }
            *(unsigned int *)((t1 + 0x110)) = 0xA;
            u31 = *(float *)((t29 + 0x18));
            *(float *)((t1 + 0x104)) = u31;
            *(float *)((t1 + 0x90)) = u31;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x10)) = *(struct mv3 *)(0xC0A4788); }
        carBalance(t1);
        *(unsigned char *)(((0xA4 + t1) + 0x0)) = (*(signed char *)(((0x108 + t1) + 0x0)));
        *(unsigned char *)(((0xA4 + t1) + 0x1)) = (*(signed char *)(((0x108 + t1) + 0x1)));
        *(unsigned char *)(((0xA4 + t1) + 0x2)) = (*(signed char *)(((0x108 + t1) + 0x2)));
        *(unsigned char *)(((0xA4 + t1) + 0x3)) = (*(signed char *)(((0x108 + t1) + 0x3)));
        *(unsigned char *)(((0xA4 + t1) + 0x4)) = (*(signed char *)(((0x108 + t1) + 0x4)));
        *(unsigned char *)(((0xA4 + t1) + 0x5)) = (*(signed char *)(((0x108 + t1) + 0x5)));
        calcCheckExec(t1, (*(int *)((t1 + 0x84))));
        if ((*(int *)((t1 + 0x78))) == 11) {
            TrailerInit(t1, 0x1);
        }
        t51 = t1;
    }
    return t51;
}
