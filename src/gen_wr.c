/* Straight-line functions with calls and guards (batch gen_wr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c077210(int, int);
float carGripCurve(float);
float carSlipRatio(float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float carWheelSlip(int a4);

float carWheelSlip(int a4)
{
    int t1;
    int t2;
    int t4;
    int t6;
    float u8;
    int t11;
    float u13;
    float u14;
    float t15;
    int t18;
    float u20;
    float u21;
    float t22;
    float u25;
    float t26;
    float u27;
    float t28;
    int t12;
    int t19;

    nlPushMatrix(0x0);
    t1 = *(short *)((a4 + 0x86));
    t2 = *(short *)((a4 + 0xF4));
    nlRotateAY(((unsigned short)t1 - (unsigned short)t2));
    t4 = *(short *)((a4 + 0x84));
    nlRotateAX((unsigned short)t4);
    t6 = *(short *)((a4 + 0x88));
    nlRotateAZ((unsigned short)t6);
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = 0.0f;
    u8 = *(float *)((a4 + 0x160));
    *(float *)0xC1EE150 = u8;
    FUN_0c077210(0xC1EE148, 0xC1EE154);
    nlPopMatrix(0x1);
    t11 = *(int *)(((0x1A0 + a4) + 0x84));
    if ((t11 == -1) && (t12 = *(int *)(((0x1A0 + a4) + 0x0)), t12 == -1)) {
        *(float *)((a4 + 0x180)) = 0.0f;
    } else {
        u13 = *(float *)0xC1EE15C;
        u14 = *(float *)((a4 + 0x168));
        t15 = carSlipRatio(u14, u13);
        *(float *)((a4 + 0x180)) = t15;
    }
    t18 = *(int *)(((0x1A0 + a4) + 0x18C));
    if ((t18 == -1) && (t19 = *(int *)(((0x1A0 + a4) + 0x108)), t19 == -1)) {
        *(float *)((a4 + 0x18C)) = 0.0f;
    } else {
        u20 = *(float *)0xC1EE15C;
        u21 = *(float *)((a4 + 0x16C));
        t22 = carSlipRatio(u21, u20);
        *(float *)((a4 + 0x18C)) = t22;
    }
    u25 = *(float *)((a4 + 0x180));
    t26 = carGripCurve(u25);
    *(float *)((a4 + 0x184)) = t26;
    u27 = *(float *)((a4 + 0x18C));
    t28 = carGripCurve(u27);
    *(float *)((a4 + 0x190)) = t28;
    return t28;
}
