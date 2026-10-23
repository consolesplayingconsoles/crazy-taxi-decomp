/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetRotVec(int);
int PutMVObj(void);
int TOANG2(int, float);
int nlGetMatrix(int);
int nlObjPutUseViewMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlSetTranslate(int);
int nlCalcPoint(int, int);
int nlTranslate(float, float, float);
int putPlayerCar(int a4);

int putPlayerCar(int a4)
{
    int t45;
    int t46;
    int t60;
    int t69;
    float u70;
    int t88;
    int t25;
    int stk[18];

    { int z_; for (z_ = 0; z_ < 18; z_++) stk[z_] = 0; }
    nlPushMatrix(0x0);
    nlSetTranslate((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x78));
    nlRotateAY((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x86))));
    nlRotateAX((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x84))));
    nlRotateAZ((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x88))));
    nlPushMatrix(0x0);
    nlRotateAX((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0xAC))));
    nlRotateAZ((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0xB0))));
    nlTranslate(0.0f, -1.19999993f, 0.0f);
    nlGetMatrix((0xB4 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)));
    nlObjPutUseViewMatrix((*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x10))));
    if ((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x58))) == 0) {
        t25 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x18)));
    } else {
        t25 = (*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x14)));
    }
    nlObjPutUseViewMatrix(t25);
    *(volatile int *)0xC179488;
    PutMVObj();
    GetRotVec((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x30));
    nlPopMatrix(0x1);
    *(unsigned int *)(((int)stk + 12)) = (*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x6C)));
    *(unsigned short *)(((0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x82)) = ((*(short *)(((0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x82))) + (int)((*(float *)(((0x168 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0))) * 18.2041664f));
    *(unsigned short *)(((0x108 + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x82)) = ((*(short *)(((0x108 + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x82))) + (int)((*(float *)(((0x168 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x0))) * 18.2041664f));
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (((*(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x12C))) - (((*(float *)(((0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x30))) + (*(float *)(((0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0xB4)))) * 0.5f)) + -0.699999988f), (*(float *)(((*(int *)(((int)stk + 12))) + 0x8))));
    *(unsigned int *)(((int)stk + 4)) = (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC));
    t45 = *(short *)(((0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x80));
    t46 = *(short *)((((*(int *)(((int)stk + 4))) + 0x84) + 0x80));
    nlRotateAY((((int)((unsigned int)((int)((unsigned int)((unsigned short)t45 + (unsigned short)t46) + (unsigned int)0x0)) + ((((int)0x0 > (int)((unsigned short)t45 + (unsigned short)t46))) ? 1u : 0u))) >> 1));
    nlCalcPoint(0xC08A8A4, (0x1FC + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)));
    nlCalcPoint(0xC08A8B0, (0x280 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)));
    nlRotateAX((unsigned short)(*(short *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x222))));
    nlObjPutUseViewMatrix((*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0x0))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t60 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 20)) = (t60 + 0x18);
    nlTranslate((*(float *)(((t60 + 0x18) + 0x0))), (((*(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x12C))) - (*(float *)(((0x108 + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x30)))) + -0.699999988f), (*(float *)(((t60 + 0x18) + 0x8))));
    nlCalcPoint(0xC08A8BC, ((0x108 + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x5C));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t69 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 4)) = (t69 + 0x24);
    u70 = *(float *)(((t69 + 0x24) + 0x8));
    *(unsigned int *)(((int)stk + 8)) = (0x18C + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)));
    nlTranslate((*(float *)(((*(int *)(((int)stk + 4))) + 0x0))), (((*(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x12C))) - (*(float *)(((0x18C + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x30)))) + -0.699999988f), u70);
    nlCalcPoint(0xC08A8C8, ((*(int *)(((int)stk + 8))) + 0x5C));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(0.0f, (((*(float *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x12C))) - (((*(float *)(((0x108 + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x30))) + (*(float *)(((*(int *)(((int)stk + 8))) + 0x30)))) * 0.5f)) + -0.699999988f), (*(float *)(((*(int *)(((int)stk + 4))) + 0x8))));
    t88 = *(int *)(((int)stk + 4));
    *(volatile float *)(((*(int *)(((int)stk + 20))) + 0x0));
    *(volatile float *)((t88 + 0x0));
    TOANG2((((int)stk + 4) + 0xC), ((*(float *)(((0x108 + (0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC))) + 0x30))) - (*(float *)(((*(int *)(((int)stk + 8))) + 0x30)))));
    nlRotateAZ((unsigned short)(*(short *)(((int)stk + 16))));
    nlRotateAX((unsigned short)(*(short *)(((0x1A0 + ((short)((short)a4 * (short)0x3BC) + 0xC1790CC)) + 0x82))));
    nlObjPutUseViewMatrix((*(int *)(((*(int *)((((short)((short)a4 * (short)0x3BC) + 0xC1790CC) + 0x74))) + 0xC))));
    nlPopMatrix(0x1);
    return (nlPopMatrix(0x1));
}
