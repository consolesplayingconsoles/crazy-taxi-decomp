/* Straight-line functions with calls and guards (batch gen_ju): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int RailroadAreaCheck(int, int);
int getGoiToolFlag(int);
int getNearLineIndex(int, int, int, int, int, float);
int nlCalcPoint(int, int);
int nlObjPutMvInit(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslateV(int);
int parkingControl(int, int);
int trafficLevelControl(int);
int trafficSectionControl(int, int, float);
int trafficControl(int a4);
struct o60_int { char p[0x60]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o86_short { char p[0x86]; short v; };
struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };



int trafficControl(int a4)
{
    int t11;
    int t12;
    int t13;
    int t16;
    int t20;
    float u36;
    int t56;
    int t82;
    int t5;
    int t31;
    int t57;
    int t66;
    int stk[11];

    if (a4 == 0) {
        (((struct o4_uint *)0xC2A1B18)->v) = 0x0;
        (((struct o8_uint *)0xC2A1B18)->v) = 0x0;
        (((struct oC_uint *)0xC2A1B18)->v) = 0x0;
        *(unsigned int *)0xC2A44AC = 0x4;
        *(unsigned int *)0xC2A1B74 = 0x0;
        if ((((((struct o24_int *)0xC1EE210)->v)) == 1) && (t5 = *(int *)0xC2A4E50, t5 == 0)) {
            (((struct o0_float *)0xC2A1B18)->v) = 1200.0f;
        } else {
            (((struct o0_float *)0xC2A1B18)->v) = 1700.0f;
        }
        (((struct o18_uint *)0xC2A1B18)->v) = 0xC1790CC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A1B34) = *(struct mv3 *)(0xC179144); }
        (((struct o28_uint *)0xC2A1B18)->v) = 0x0;
        (((struct o60_uint *)(((((struct o18_int *)0xC2A1B18)->v))))->v) = 0x0;
        t11 = (((struct o0_int *)0xC1EE210)->v);
        t12 = (((struct o4_int *)0xC1EE210)->v);
        t13 = *(int *)(((((t11 + t12) << 2) + 0xC0C3D04) + 0x0));
        (((struct o10_uint *)0xC2A1B18)->v) = (*(int *)((((((t13 << 1) + t13) << 2) + (*(int *)0xC2A6690)) + 0x0)));
        t16 = *(int *)(((((t11 + t12) << 2) + 0xC0C3D04) + 0x0));
        (((struct o14_uint *)0xC2A1B18)->v) = (*(int *)(((*(int *)((((((t16 << 1) + t16) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0)));
        t20 = (((struct o18_int *)0xC2A1B18)->v);
        *(unsigned int *)(((int)stk + 8)) = t20;
        getNearLineIndex(0x0, ((((struct o10_int *)0xC2A1B18)->v)), ((((struct o14_int *)0xC2A1B18)->v)), ((*(int *)(((int)stk + 8))) + 0x60), (t20 + 0x78), 1700.0f);
        trafficLevelControl(0x0);
        trafficSectionControl(0x0, 0x0, 0.0f);
        parkingControl(0x0, 0xC2A1B34);
        nlObjPutMvInit(0x50);
        t82 = (RailroadAreaCheck(0x0, 0x0));
    } else {
        if ((((((struct o24_int *)0xC1EE210)->v)) == 1) && (t31 = *(int *)0xC2A4E50, t31 == 0)) {
            u36 = 900.0f;
            if ((*(int *)0xC179494) == 0) {
                u36 = 1100.0f;
            }
            (((struct o0_float *)0xC2A1B18)->v) = u36;
        } else {
            (((struct o0_float *)0xC2A1B18)->v) = 1700.0f;
        }
        if ((*(int *)0xC2A1B74) != 0) {
            *(unsigned int *)0xC2A1B74 = ((*(int *)0xC2A1B74) - 1);
        }
        if ((*(int *)0xC2A6FD8) != 2) {
            trafficLevelControl(0x1);
        }
        t56 = getGoiToolFlag(0x2);
        if ((t56 == 1) && (t57 = *(int *)0xC2A6FD8, t57 != 2)) {
            trafficSectionControl(0x1, 0xC2A1B34, ((((struct o0_float *)0xC2A1B18)->v)));
        }
        parkingControl(0x1, 0xC2A1B34);
        RailroadAreaCheck(0x1, 0xC179840);
        (((struct o28_uint *)0xC2A1B18)->v) = ((((struct o60_int *)(((((struct o18_int *)0xC2A1B18)->v))))->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)(0xC0A4788); }
        if ((((((struct o24_int *)0xC1EE210)->v)) == 1) && (t66 = *(int *)0xC2A4E50, t66 == 0)) {
            *(float *)(((int)stk + 20)) = (((((struct o0_float *)0xC2A1B18)->v)) + (-6e+02f));
        }
        nlPushMatrix(0x0);
        nlTranslateV((((((struct o18_int *)0xC2A1B18)->v)) + 0x78));
        nlRotateAY((unsigned short)((((struct o86_short *)(((((struct o18_int *)0xC2A1B18)->v))))->v)));
        nlCalcPoint((((int)stk + 8) + 0x4), 0xC2A1B34);
        t82 = (nlPopMatrix(0x1));
    }
    return t82;
}
