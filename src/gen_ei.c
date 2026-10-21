/* Straight-line functions with calls and guards (batch gen_ei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c05778a(int, int, float, float);
int FUN_0c074680(void);
int FUN_0c0771b0(int, int);
int FUN_0c089e00(int);
int GetCollision2D(int, float);
int GetCollisionFirst(int, int);
float nlInnerProduct(int, int);
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlTranslateV(int);
int Put_SEGA_LOGO2(void);
int psgPickExitSide(int a4);


int psgPickExitSide(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    int t10;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    float t20;
    int t21;
    int t23;
    int t24;
    int t31;
    int t26;
    int t27;
    int t28;
    int t34;
    int t35;
    int t43;
    float u36;
    int t38;
    int t39;
    int t40;
    int t47;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)0xC0D606C;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x8)) = t0;
    t1 = *(int *)0xC0D6068;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x4)) = t1;
    t2 = *(int *)0xC0D6064;
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = t2;
    t3 = *(int *)0xC0D6078;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x8)) = t3;
    t4 = *(int *)0xC0D6074;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x4)) = t4;
    t5 = *(int *)0xC0D6070;
    *(unsigned int *)(((((int)stk + 4) + 0x14) + 0x0)) = t5;
    nlPushMatrix(0xC179180);
    FUN_0c0771b0((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x20));
    FUN_0c0771b0((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x14));
    *(unsigned int *)(((int)stk + 8)) = 0xC2AD204;
    t9 = *(int *)(((int)stk + 4));
    t10 = *(short *)((t9 + 0x140));
    nlSubVector3op((((int)stk + 4) + 0x8), ((short)(((t10 << 1) + t10) << 2) + 0xC13EEE8), 0xC2AD204);
    t12 = *(int *)0xC1EE210;
    t13 = *(int *)0xC1EE214;
    t14 = *(int *)((0xC13F3B0 + (t12 << 2)));
    t15 = *(int *)(((int)stk + 4));
    t16 = *(int *)(((t13 << 2) + t14));
    t17 = *(int *)(((int)stk + 8));
    t18 = *(int *)((t15 + 0x140));
    nlSubVector3op((((int)stk + 4) + 0x8), (t16 + (((t18 << 1) + t18) << 2)), t17);
    t20 = nlInnerProduct((((int)stk + 4) + 0x8), 0xC2AD1E0);
    t21 = 0x0;
    if (!(0.0f > t20)) {
        t21 = 0x1;
    }
    if (t21 == 1) {
        t23 = GetCollision2D((((int)stk + 4) + 0x20), 0.0f);
        t24 = *(int *)((t23 + 0x1C));
        t31 = (((t21 == 0)) ? 1 : 0);
        if (t24 != -1) {
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, 20.0f);
            t26 = GetCollisionFirst((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x8));
            t27 = *(int *)((t26 + 0x1C));
            t28 = t21;
            if (t27 != -1) {
                t28 = (((t21 == 0)) ? 1 : 0);
            }
            t31 = t28;
        }
        t47 = t31;
    } else {
        t34 = GetCollision2D((((int)stk + 4) + 0x14), 0.0f);
        t35 = *(int *)((t34 + 0x1C));
        t43 = (((t21 == 0)) ? 1 : 0);
        if (t35 != -1) {
            u36 = *(float *)0xC070F44;
            nlScaleVector((((int)stk + 4) + 0x8), 0xC2AD1E0, u36);
            t38 = GetCollisionFirst((((int)stk + 4) + 0x14), (((int)stk + 4) + 0x8));
            t39 = *(int *)((t38 + 0x1C));
            t40 = t21;
            if (t39 != -1) {
                t40 = (((t21 == 0)) ? 1 : 0);
            }
            t43 = t40;
        }
        t47 = t43;
    }
    nlPopMatrix(0x1);
    return t47;
}
