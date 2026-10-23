/* Straight-line functions with calls and guards (batch gen_mo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetCollision2D(int, float);
int PcarEvInit(int);
int calcCheckExec(int, int);
int carBalance(int, int);
int extRand(void);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int set_event(int, int);
int StopingCarInit(int a4, int a5, int a6);

int StopingCarInit(int a4, int a5, int a6)
{
    int t0;
    int t44;
    int t1;
    int t6;
    int t28;
    int t29;
    float u30;
    int t40;
    int t22;
    int t42;
    int stk[10];

    *(unsigned int *)(((int)stk + 12)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    t0 = set_event(0x12C, 0xC0468A8);
    t44 = t0;
    if (t0 != 0) {
        t1 = *(int *)0xC2A1B1C;
        *(unsigned int *)0xC2A1B1C = (t1 + 0x1);
        *(unsigned int *)((t0 + 0x74)) = ((t1 + 0x1) - 1);
        *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) + 0x1);
        *(unsigned int *)((t0 + 0x78)) = (*(int *)(((int)stk + 12)));
        *(unsigned int *)((t0 + 0x80)) = (*(int *)(((int)stk + 8)));
        if ((*(int *)(((int)stk + 4))) == 0) {
            t6 = *(int *)((t0 + 0x80));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)((((((t6 << 1) + t6) << 2) + (*(int *)0xC2A6690)) + 0x0)))); }
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x8C + t0)) = *(struct mv3 *)((*(int *)(((int)stk + 4)))); }
        }
        PcarEvInit(t0);
        *(unsigned int *)((t0 + 0x84)) = ((*(int *)((t0 + 0x84))) | 0x10);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
        *(float *)(((int)stk + 16)) = -50.0f;
        nlPushUnitMatrix();
        nlRotateAY((unsigned short)(*(short *)((t0 + 0xA6))));
        nlCalcPoint((((int)stk + 4) + 0xC), (((int)stk + 4) + 0xC));
        nlAddVector((0x8C + t0), (((int)stk + 4) + 0xC));
        nlAddVector((0xE0 + t0), (((int)stk + 4) + 0xC));
        nlPopMatrix(0x1);
        if ((((extRand()) & 3) != 0) && (t22 = *(int *)((t0 + 0x78)), (int)t22 < (int)0x8)) {
            *(unsigned short *)((t0 + 0xA6)) = ((*(short *)((t0 + 0xA6))) + 0x2000);
        } else {
            *(unsigned int *)((t0 + 0x84)) = ((*(int *)((t0 + 0x84))) | 0xC00);
        }
        *(float *)((t0 + 0xC8)) = 0.00999999978f;
        t28 = GetCollision2D((0x8C + t0), 30.0f);
        t29 = *(int *)((t28 + 0x1C));
        if ((t29 != -1) && (t29 != 12)) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0xEC + t0)) = *(struct mv3 *)((t28 + 0xC)); }
            *(unsigned int *)((t0 + 0x110)) = 0xA;
            u30 = *(float *)((t28 + 0x18));
            *(float *)((t0 + 0x104)) = u30;
            *(float *)((t0 + 0x90)) = u30;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0xC)) = *(struct mv3 *)(0xC0A4788); }
            carBalance(t0, (((int)stk + 4) + 0xC));
            *(unsigned char *)(((0xA4 + t0) + 0x0)) = (*(signed char *)(((0x108 + t0) + 0x0)));
            *(unsigned char *)(((0xA4 + t0) + 0x1)) = (*(signed char *)(((0x108 + t0) + 0x1)));
            *(unsigned char *)(((0xA4 + t0) + 0x2)) = (*(signed char *)(((0x108 + t0) + 0x2)));
            *(unsigned char *)(((0xA4 + t0) + 0x3)) = (*(signed char *)(((0x108 + t0) + 0x3)));
            *(unsigned char *)(((0xA4 + t0) + 0x4)) = (*(signed char *)(((0x108 + t0) + 0x4)));
            *(unsigned char *)(((0xA4 + t0) + 0x5)) = (*(signed char *)(((0x108 + t0) + 0x5)));
            t42 = (calcCheckExec(t0, (*(int *)((t0 + 0x84)))));
        } else {
            t40 = nlCloseEvent(t0);
            *(unsigned int *)0xC2A44A8 = ((*(int *)0xC2A44A8) - 1);
            t42 = t40;
        }
        t44 = t42;
    }
    return t44;
}
