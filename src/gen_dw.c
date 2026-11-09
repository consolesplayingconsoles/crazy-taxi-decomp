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
struct o108_int { char p[0x108]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o16C_float { char p[0x16C]; float v; };
struct o180_float { char p[0x180]; float v; };
struct o184_float { char p[0x184]; float v; };
struct o18C_float { char p[0x18C]; float v; };
struct o18C_int { char p[0x18C]; int v; };
struct o190_float { char p[0x190]; float v; };
struct o1A0_int { char p[0x1A0]; int v; };
struct o84_int { char p[0x84]; int v; };
struct o84_short { char p[0x84]; short v; };
struct o86_short { char p[0x86]; short v; };
struct o88_short { char p[0x88]; short v; };
struct oF4_short { char p[0xF4]; short v; };


float carWheelSlip(int a4)
{
    float t28;
    int t12;
    int t19;

    nlPushMatrix(0x0);
    nlRotateAY(((unsigned short)((((struct o86_short *)(a4))->v)) - (unsigned short)((((struct oF4_short *)(a4))->v))));
    nlRotateAX((unsigned short)((((struct o84_short *)(a4))->v)));
    nlRotateAZ((unsigned short)((((struct o88_short *)(a4))->v)));
    *(float *)0xC1EE148 = 0.0f;
    *(float *)0xC1EE14C = 0.0f;
    *(float *)0xC1EE150 = ((((struct o160_float *)(a4))->v));
    nlCalcVector(0xC1EE148, 0xC1EE154);
    nlPopMatrix(0x1);
    if ((((((struct o84_int *)((0x1A0 + a4)))->v)) == -1) && (t12 = (((struct o1A0_int *)(a4))->v), t12 == -1)) {
        (((struct o180_float *)(a4))->v) = 0.0f;
    } else {
        (((struct o180_float *)(a4))->v) = (carSlipRatio(((((struct o168_float *)(a4))->v)), (*(float *)0xC1EE15C)));
    }
    if ((((((struct o18C_int *)((0x1A0 + a4)))->v)) == -1) && (t19 = (((struct o108_int *)((0x1A0 + a4)))->v), t19 == -1)) {
        (((struct o18C_float *)(a4))->v) = 0.0f;
    } else {
        (((struct o18C_float *)(a4))->v) = (carSlipRatio(((((struct o16C_float *)(a4))->v)), (*(float *)0xC1EE15C)));
    }
    (((struct o184_float *)(a4))->v) = (carGripCurve(((((struct o180_float *)(a4))->v))));
    t28 = carGripCurve(((((struct o18C_float *)(a4))->v)));
    (((struct o190_float *)(a4))->v) = t28;
    return t28;
}
