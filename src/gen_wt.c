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
struct o0_float { float v; };
struct o18_short { char p[0x18]; short v; };
struct o1A_short { char p[0x1A]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };


void goiToolCamera(int a4)
{
    int t1;
    int t6;
    int t14;
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
    float R1008;
    float R1012;
    float R1016;

    R1008 = *(float *)((int)stk + 8);
    R1012 = *(float *)((int)stk + 12);
    R1016 = *(float *)((int)stk + 16);

    if (a4 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A62C0) = *(struct mv3 *)(0xC0A4788); }
        (((struct oC_float *)0xC2A62C0)->v) = 0.0f;
    } else {
        t1 = *(int *)0xC1EE24C;
        t6 = 0x0;
        if ((0x80 & t1) != 0) {
            t6 = 0x0;
            if (((((struct o4_float *)0xC2A62C0)->v)) > -0.0799999982f) {
                t6 = 0x1;
            }
        }
        t14 = 0x0;
        if ((0x40 & t1) != 0) {
            t14 = 0x0;
            if (0.0799999982f > ((((struct o4_float *)0xC2A62C0)->v))) {
                t14 = 0x1;
            }
        }
        (((struct o4_float *)0xC2A62C0)->v) = (((((struct o4_float *)0xC2A62C0)->v)) - ((float)(t6 - t14) * 0.00399999972f));
        (((struct o4_float *)0xC2A62C0)->v) = (((((struct o4_float *)0xC2A62C0)->v)) * 0.799999952f);
        t20 = *(int *)0xC1EE24C;
        t23 = 0x0;
        if (((0x20 & t20) != 0) && (u21 = (((struct o0_float *)0xC2A62C0)->v), 0.0599999987f > u21)) {
            t23 = 0x1;
        }
        t28 = 0x0;
        if (((0x10 & t20) != 0) && (u26 = (((struct o0_float *)0xC2A62C0)->v), u26 > -0.0599999987f)) {
            t28 = 0x1;
        }
        u32 = ((((struct o0_float *)0xC2A62C0)->v));
        u32 = u32 + 0.00399999972f * (float)(t23 - t28);
        (((struct o0_float *)0xC2A62C0)->v) = (u32 * 0.799999952f);
        t33 = *(int *)0xC1EE24C;
        t36 = 0x0;
        if (((0x4 & t33) != 0) && (u34 = (((struct oC_float *)0xC2A62C0)->v), 8.0f > u34)) {
            t36 = 0x1;
        }
        t43 = 0x0;
        if (((0x2 & t33) != 0) && (u40 = (((struct oC_float *)0xC2A62C0)->v), u40 > -8.0f)) {
            t43 = 0x1;
        }
        u47 = ((((struct oC_float *)0xC2A62C0)->v));
        u47 = u47 + 0.399999976f * (float)(t36 - t43);
        (((struct oC_float *)0xC2A62C0)->v) = (u47 * 0.799999952f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(0xC2A627C); }
        nlSubVector(((int)stk + 20), 0xC179840);
        nlPushUnitMatrix();
        nlRotateAY(((unsigned short)((((struct o1A_short *)0xC179840)->v)) + ((int)(((((((struct o4_float *)0xC2A62C0)->v)) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF)));
        nlRotateAX(((unsigned short)((((struct o18_short *)0xC179840)->v)) + ((int)(((((((struct o0_float *)0xC2A62C0)->v)) * 65536.0f) / 6.28318501f) + 0.5f) & 0xFFFF)));
        *(float *)(((int)stk + 36)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 40)) = (-((((struct oC_float *)0xC2A62C0)->v)));
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
        u64 = (((struct o8_float *)0xC179840)->v);
        R1016 = u64;
        u65 = (((struct o4_float *)0xC179840)->v);
        R1012 = u65;
        u66 = (((struct o0_float *)0xC179840)->v);
        R1008 = u66;
        nlPrintf(0xC0C3268, u66, u65, u64);
    }
}
