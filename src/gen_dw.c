/* Straight-line functions with calls and guards (batch gen_dw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float carGripCurve(float);
float carSlipRatio(float, float);
int nlCalcVector(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
float carWheelSlip(int a4);

float carWheelSlip(int a4)
{
    float t28;
    int t12;
    int t19;

    nlPushMatrix(0x0);
    nlRotateAY(((unsigned short)(*(short *)((a4 + 0x86))) - (unsigned short)(*(short *)((a4 + 0xF4)))));
    nlRotateAX((unsigned short)(*(short *)((a4 + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((a4 + 0x88))));
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = 0.0f;
    *(float *)0xC1EE150 = (*(float *)((a4 + 0x160)));
    nlCalcVector(0xC1EE148, 0xC1EE154);
    nlPopMatrix(0x1);
    if (((*(int *)(((0x1A0 + a4) + 0x84))) == -1) && (t12 = *(int *)(((0x1A0 + a4) + 0x0)), t12 == -1)) {
        *(float *)((a4 + 0x180)) = 0.0f;
    } else {
        *(float *)((a4 + 0x180)) = (carSlipRatio((*(float *)((a4 + 0x168))), (*(float *)0xC1EE15C)));
    }
    if (((*(int *)(((0x1A0 + a4) + 0x18C))) == -1) && (t19 = *(int *)(((0x1A0 + a4) + 0x108)), t19 == -1)) {
        *(float *)((a4 + 0x18C)) = 0.0f;
    } else {
        *(float *)((a4 + 0x18C)) = (carSlipRatio((*(float *)((a4 + 0x16C))), (*(float *)0xC1EE15C)));
    }
    *(float *)((a4 + 0x184)) = (carGripCurve((*(float *)((a4 + 0x180)))));
    t28 = carGripCurve((*(float *)((a4 + 0x18C))));
    *(float *)((a4 + 0x190)) = t28;
    return t28;
}
