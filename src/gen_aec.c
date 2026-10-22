/* Straight-line functions with calls and guards (batch gen_aec): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int RailroadAreaCheck(int, int);
int getGoiToolFlag(int);
int getNearLineIndex(int, int, int, int, int, float);
int nlObjPutMvInit(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlSqrt(int, int);
int nlTranslateV(int);
int parkingControl(int, int);
int trafficLevelControl(int);
int trafficSectionControl(int, int, float);
int trafficControl(int a4);

int trafficControl(int a4)
{
    int t11;
    int t12;
    int t13;
    int t16;
    int t20;
    float u36;
    int t82;
    int t5;
    int t31;
    int t57;
    int t66;
    int stk[11] = {0};

    if (a4 == 0) {
        *(unsigned int *)0xC2A1B1C = 0x0;
        *(unsigned int *)0xC2A1B20 = 0x0;
        *(unsigned int *)0xC2A1B24 = 0x0;
        *(unsigned int *)0xC2A44AC = 0x4;
        *(unsigned int *)0xC2A1B74 = 0x0;
        if (((*(int *)0xC1EE234) == 1) && (t5 = *(int *)0xC2A4E50, t5 == 0)) {
            *(float *)0xC2A1B18 = 1200.0f;
        } else {
            *(float *)0xC2A1B18 = 1700.0f;
        }
        *(unsigned int *)0xC2A1B30 = 0xC1790CC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A1B34) = *(struct mv3 *)(0xC179144); }
        *(unsigned int *)0xC2A1B40 = 0x0;
        *(unsigned int *)(((*(int *)0xC2A1B30) + 0x60)) = 0x0;
        t11 = *(int *)0xC1EE210;
        t12 = *(int *)0xC1EE214;
        t13 = *(int *)(((((t11 + t12) << 2) + 0xC0C3D04) + 0x0));
        *(unsigned int *)0xC2A1B28 = (*(int *)((((((t13 << 1) + t13) << 2) + (*(int *)0xC2A6690)) + 0x0)));
        t16 = *(int *)(((((t11 + t12) << 2) + 0xC0C3D04) + 0x0));
        *(unsigned int *)0xC2A1B2C = (*(int *)(((*(int *)((((((t16 << 1) + t16) << 2) + (*(int *)0xC2A6690)) + 0x4))) + 0x0)));
        t20 = *(int *)0xC2A1B30;
        *(unsigned int *)(((int)stk + 8)) = t20;
        getNearLineIndex(0x0, (*(int *)0xC2A1B28), (*(int *)0xC2A1B2C), ((*(int *)(((int)stk + 8))) + 0x60), (t20 + 0x78), 1700.0f);
        trafficLevelControl(0x0);
        trafficSectionControl(0x0, 0x0, 0.0f);
        parkingControl(0x0, 0xC2A1B34);
        nlObjPutMvInit(0x50);
        t82 = (RailroadAreaCheck(0x0, 0x0));
    } else {
        if (((*(int *)0xC1EE234) == 1) && (t31 = *(int *)0xC2A4E50, t31 == 0)) {
            u36 = 900.0f;
            if ((*(int *)0xC179494) == 0) {
                u36 = 1100.0f;
            }
            *(float *)0xC2A1B18 = u36;
        } else {
            *(float *)0xC2A1B18 = 1700.0f;
        }
        if ((*(int *)0xC2A1B74) != 0) {
            *(unsigned int *)0xC2A1B74 = ((*(int *)0xC2A1B74) - 1);
        }
        if ((*(int *)0xC2A6FD8) != 2) {
            trafficLevelControl(0x1);
        }
        if (((getGoiToolFlag(0x2)) == 1) && (t57 = *(int *)0xC2A6FD8, t57 != 2)) {
            trafficSectionControl(0x1, 0xC2A1B34, (*(float *)0xC2A1B18));
        }
        parkingControl(0x1, 0xC2A1B34);
        RailroadAreaCheck(0x1, 0xC179840);
        *(unsigned int *)0xC2A1B40 = (*(int *)(((*(int *)0xC2A1B30) + 0x60)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x4)) = *(struct mv3 *)(0xC0A4788); }
        if (((*(int *)0xC1EE234) == 1) && (t66 = *(int *)0xC2A4E50, t66 == 0)) {
            *(float *)(((int)stk + 20)) = ((*(float *)0xC2A1B18) + (-600.0f));
        }
        nlPushMatrix(0x0);
        nlTranslateV(((*(int *)0xC2A1B30) + 0x78));
        nlRotateAY((unsigned short)(*(short *)(((*(int *)0xC2A1B30) + 0x86))));
        nlSqrt((((int)stk + 8) + 0x4), 0xC2A1B34);
        t82 = (nlPopMatrix(0x1));
    }
    return t82;
}
