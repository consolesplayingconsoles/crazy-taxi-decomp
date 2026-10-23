/* Straight-line functions with calls and guards (batch gen_wt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlCalcVector(int, int);
int nlLocate(int, int);
int nlPopMatrix(int);
int nlPrintf(int, ...);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlScalor(int);
int nlSubVector(int, int);
void goiToolCamera(int a4);

void goiToolCamera(int a4)
{
    int t1;
    int t6;
    int t3;
    int t14;
    int t11;
    int t20;
    int t23;
    int t28;
    float u32;
    int t33;
    int t36;
    int t43;
    float u47;
    float u64;
    float u65;
    float u66;
    float u21;
    float u26;
    float u34;
    float u40;
    int stk[18];

    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A62C0) = *(struct mv3 *)(0xC0A4788); }
        *(float *)0xC2A62CC = 0.0f;
    } else {
        t1 = *(int *)0xC1EE24C;
        t6 = 0x0;
        if ((0x80 & t1) != 0) {
            t3 = 0x0;
            if ((*(float *)0xC2A62C4) > -0.0799999982f) {
                t3 = 0x1;
            }
            t6 = t3;
        }
        t14 = 0x0;
        if ((0x40 & t1) != 0) {
            t11 = 0x0;
            if (0.0799999982f > (*(float *)0xC2A62C4)) {
                t11 = 0x1;
            }
            t14 = t11;
        }
        *(float *)0xC2A62C4 = ((*(float *)0xC2A62C4) - ((float)(t6 - t14) * 0.00399999972f));
        *(float *)0xC2A62C4 = ((*(float *)0xC2A62C4) * 0.799999952f);
        t20 = *(int *)0xC1EE24C;
        t23 = 0x0;
        if (((0x20 & t20) != 0) && (u21 = *(float *)0xC2A62C0, 0.0599999987f > u21)) {
            t23 = 0x1;
        }
        t28 = 0x0;
        if (((0x10 & t20) != 0) && (u26 = *(float *)0xC2A62C0, u26 > -0.0599999987f)) {
            t28 = 0x1;
        }
        u32 = (*(float *)0xC2A62C0);
        u32 = u32 + 0.00399999972f * (float)(t23 - t28);
        *(float *)0xC2A62C0 = (u32 * 0.799999952f);
        t33 = *(int *)0xC1EE24C;
        t36 = 0x0;
        if (((0x4 & t33) != 0) && (u34 = *(float *)0xC2A62CC, 8.0f > u34)) {
            t36 = 0x1;
        }
        t43 = 0x0;
        if (((0x2 & t33) != 0) && (u40 = *(float *)0xC2A62CC, u40 > -8.0f)) {
            t43 = 0x1;
        }
        u47 = (*(float *)0xC2A62CC);
        u47 = u47 + 0.399999976f * (float)(t36 - t43);
        *(float *)0xC2A62CC = (u47 * 0.799999952f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0xC2A627C); }
        nlSubVector(((int)stk + 20), 0xC179840);
        nlPushUnitMatrix();
        nlRotateAY(((unsigned short)(*(short *)0xC17985A) + ((int)((((*(float *)0xC2A62C4) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF)));
        nlRotateAX(((unsigned short)(*(short *)0xC179858) + ((int)((((*(float *)0xC2A62C0) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF)));
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 40)) = (-(*(float *)0xC2A62CC));
        nlCalcVector((((int)stk + 20) + 0xC), (((int)stk + 20) + 0xC));
        nlAddVector(0xC179840, (((int)stk + 20) + 0xC));
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 40)) = (-(nlScalor(((int)stk + 20))));
        nlCalcVector((((int)stk + 20) + 0xC), (((int)stk + 20) + 0xC));
        nlAddVector((((int)stk + 20) + 0xC), 0xC179840);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A627C) = *(struct mv3 *)((((int)stk + 20) + 0xC)); }
        nlPopMatrix(0x1);
        nlLocate(0x1, 0x32);
        u64 = *(float *)0xC179848;
        *(float *)(((int)stk + 16)) = u64;
        u65 = *(float *)0xC179844;
        *(float *)(((int)stk + 12)) = u65;
        u66 = *(float *)0xC179840;
        *(float *)(((int)stk + 8)) = u66;
        nlPrintf(0xC0C3268, u66, u65, u64);
    }
}
