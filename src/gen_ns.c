/* Straight-line functions with calls and guards (batch gen_ns): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int CarSel_SetLight(void);
int CarSel_SetFog(void);
int selectInitSprites(void);
int Start_Time_Count(int, int);
int FUN_0c077df0(int);
int Init_nd_Sprite(void);
int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int nlPerspective(int, float, float, float);
int nlUnitMatrix(void);
int nd_CarSelInit(void);

int nd_CarSelInit(void)
{
    int t6;
    int t7;
    int t8;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    float u19;
    int t20;
    int t24;
    int t22;

    FUN_0c077df0(0x3);
    nlUnitMatrix();
    nlPerspective(0x1D28, 1.33333325f, 0.299999982f, 300.0f);
    FUN_0c077df0(0x1);
    *(unsigned short *)0xC2A756C = 0xEB00;
    *(unsigned short *)0xC2A756E = 0xF200;
    *(float *)0xC2A7568 = 0.799999952f;
    *(unsigned int *)0xC2A7578 = 0x8;
    CarSel_SetLight();
    CarSel_SetFog();
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A7548) = *(struct mv3 *)(0xC0D07DC); }
    *(unsigned short *)0xC2A7554 = 0x0;
    *(unsigned short *)0xC2A7556 = 0x0;
    *(unsigned short *)0xC2A7558 = 0x0;
    t6 = 0xC2A7538;
    t7 = 0x0;
    for (;;) {
        t7 = (t7 + 0x1);
        *(unsigned int *)((t6 + 0x0)) = 0x0;
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x4) {
            break;
        }
    }
    *(unsigned int *)0xC2A7510 = 0x0;
    *(unsigned int *)0xC2A7514 = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC2A7520) = *(struct mv3 *)(0xC0D07D0); }
    t8 = *(short *)0xC130748;
    *(unsigned short *)0xC2A752C = t8;
    *(unsigned int *)0xC2A7530 = 0x9;
    *(unsigned int *)0xC2A7534 = 0x9;
    *(unsigned int *)0xC2A75C0 = 0x0;
    *(float *)0xC130624 = 0.0f;
    Init_nd_Sprite();
    selectInitSprites();
    *(unsigned int *)0xC2A757C = 0x3BF;
    Start_Time_Count(0xC2A757C, 0x0);
    *(unsigned int *)0xC2A7518 = 0x0;
    *(unsigned int *)0xC2A7580 = 0x0;
    *(unsigned int *)0xC2A759C = 0x2;
    *(unsigned int *)0xC2A7590 = 0x0;
    *(unsigned int *)0xC2A7594 = 0x0;
    *(unsigned char *)0xC2A7584 = 0x0;
    *(unsigned int *)0xC2A7588 = 0x0;
    *(unsigned int *)0xC2A7598 = 0x0;
    *(unsigned int *)0xC2A75A0 = 0x0;
    *(unsigned int *)0xC2A75A4 = 0x0;
    *(unsigned int *)0xC2A75A8 = 0x0;
    *(unsigned int *)0xC2A75AC = 0x0;
    *(unsigned int *)0xC2A75B0 = 0x0;
    t12 = *(int *)0xC133750;
    *(unsigned int *)0xC1330C4 = t12;
    t13 = *(int *)0xC133778;
    *(unsigned int *)0xC133104 = t13;
    t14 = *(int *)0xC133784;
    *(unsigned int *)0xC1330F8 = t14;
    t15 = *(int *)0xC133790;
    *(unsigned int *)0xC133144 = t15;
    t16 = *(int *)0xC1337B8;
    *(unsigned int *)0xC133184 = t16;
    Voice_ShutUp(0x0);
    t18 = Voice_Request(0xC130628, 0x0, 0x7F, 0x0);
    u19 = *(float *)0xC1EE2F4;
    *(unsigned int *)0xC2A75B4 = (int)u19;
    *(unsigned int *)0xC2A75B8 = 0x0;
    *(unsigned int *)0xC2A75BC = 0x0;
    t20 = *(int *)0xC1EE24C;
    if ((0x20000 & t20) != 0) {
        if ((0x8 & t20) != 0) {
            *(unsigned int *)0xC2A7368 = 0x1;
        } else {
            *(unsigned int *)0xC2A7368 = 0x0;
        }
        t22 = 0x8;
    } else {
        *(unsigned int *)0xC2A7368 = 0x0;
        t22 = t18;
    }
    t24 = *(int *)0xC1EE24C;
    if ((0x10000 & t24) != 0) {
        if ((0x8 & t24) != 0) {
            *(unsigned int *)0xC2A736C = 0x1;
        } else {
            *(unsigned int *)0xC2A736C = 0x0;
        }
    } else {
        *(unsigned int *)0xC2A736C = 0x0;
    }
    *(unsigned int *)0xC17948C = 0x0;
    *(float *)0xC2A7500 = 0.0f;
    *(float *)0xC2A7504 = 0.0f;
    *(unsigned int *)0xC2A75C4 = 0x0;
    return t22;
}
