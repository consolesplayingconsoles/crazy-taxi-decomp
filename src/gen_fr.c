/* Straight-line functions with calls and guards (batch gen_fr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int BigOneHomeAngle(int, int, float);
float BigOneKeyValue(int, int, float);
int BigOneRotate(int, int, int);
extern float _builtin_sqrtf(float);
int nlArcTan2(float, float);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
float nlFloor(float);
int nlGetPushedMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlSubVector(int, int);
int nlTranslateNV(int);
int nlTranslateV(int);
int BigOneSwimMove(void);

int BigOneSwimMove(void)
{
    int t0;
    float u29;
    float u30;
    float u31;
    int t38;
    int t49;
    int t50;
    int t54;
    float u64;
    float u65;
    float u66;
    int t84;
    int t85;
    int t89;
    float u98;
    float u99;
    float u100;
    int t120;
    int t121;
    int t125;
    float u129;
    float u130;
    int t132;
    int stk[29];

    { struct mv9 { int w[9]; }; *(struct mv9 *)((((int)stk + 4) + 0x20)) = *(struct mv9 *)(0xC0D61C0); }
    t0 = *(int *)0xC2AEC3C;
    if (t0 != 0) {
        *(unsigned int *)0xC2AEC3C = 0x0;
        t132 = t0;
    } else {
        *(float *)0xC2AEC40 = (BigOneKeyValue(0xC13F5B8, 0x2, (*(float *)0xC2AEC58)));
        *(float *)0xC2AEC44 = (BigOneKeyValue(0xC13F578, 0x4, (*(float *)0xC2AEC58)));
        *(float *)0xC2AEC48 = (*(float *)0xC2AEC40);
        *(unsigned int *)(((int)stk + 4)) = ((int)((((BigOneKeyValue(0xC13F518, 0x4, (*(float *)0xC2AEC58))) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF);
        *(unsigned int *)(((int)stk + 8)) = ((int)((((BigOneKeyValue(0xC13F558, 0x2, (*(float *)0xC2AEC58))) * 65536.0f) / 360.0f) + 0.5f) & 0xFFFF);
        BigOneHomeAngle((*(int *)(((int)stk + 4))), 0xC2AEC4C, 0.0749999955f);
        BigOneHomeAngle((*(int *)(((int)stk + 8))), 0xC2AEC50, 0.0749999955f);
        *(unsigned int *)0xC2AEC54 = (*(int *)0xC2AEC50);
        nlPushUnitMatrix();
        BigOneRotate((*(int *)0xC2AEC4C), (*(int *)0xC2AEC50), (*(int *)0xC2AEC54));
        nlPushMatrix(0x0);
        nlCalcPoint((((int)stk + 4) + 0x38), (((int)stk + 4) + 0x14));
        *(float *)(((int)stk + 12)) = (BigOneKeyValue(0xC13F5D8, 0x2, (*(float *)0xC2AEC58)));
        *(float *)(((int)stk + 16)) = (BigOneKeyValue(0xC13F5F8, 0x6, (*(float *)0xC2AEC58)));
        *(float *)(((int)stk + 20)) = (BigOneKeyValue(0xC13F658, 0x5, (*(float *)0xC2AEC58)));
        nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
        u29 = *(float *)(((int)stk + 12));
        u30 = *(float *)(((int)stk + 20));
        u31 = (u30 * u30);
        u31 = u31 + u29 * u29;
        *(unsigned int *)(((int)stk + 4)) = ((nlArcTan2((*(float *)(((int)stk + 16))), _builtin_sqrtf(u31))) - (*(int *)0xC2AEC4C));
        t38 = *(int *)0xC2AEC50;
        *(unsigned int *)(((int)stk + 8)) = (((nlArcTan2((*(float *)(((int)stk + 12))), (*(float *)(((int)stk + 20))))) - t38) - t38);
        BigOneHomeAngle((*(int *)(((int)stk + 4))), 0xC2AEC60, 0.0749999955f);
        BigOneHomeAngle((*(int *)(((int)stk + 8))), 0xC2AEC64, 0.0749999955f);
        nlTranslateV((((int)stk + 4) + 0x38));
        BigOneRotate((*(int *)0xC2AEC60), (*(int *)0xC2AEC64), (*(int *)0xC2AEC68));
        nlTranslateNV((((int)stk + 4) + 0x38));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t49 = 0xC140EB8;
        for (;;) {
            t50 = *(int *)((t49 + 0x18));
            nlCalcPoint(t49, ((t50 << 2) + 0xC13F898));
            *(unsigned int *)((((t50 << 2) + 0xC13F898) + 0x0)) = ((*(int *)((((t50 << 2) + 0xC13F898) + 0x0))) | 0x1);
            nlCalcVector((t49 + 0xC), (((t50 << 2) + 0xC13F898) + 0xC));
            t54 = *(int *)(((int)stk + 4));
            t49 = (t49 + 0x1C);
            *(unsigned int *)(((int)stk + 4)) = (t54 + 0x1);
            if ((unsigned int)(t54 + 0x1) >= (unsigned int)0x2D) {
                break;
            }
        }
        nlGetPushedMatrix(0x0);
        nlCalcPoint((((int)stk + 4) + 0x20), (((int)stk + 4) + 0x14));
        *(float *)(((int)stk + 12)) = (BigOneKeyValue(0xC13F6A8, 0x2, (*(float *)0xC2AEC58)));
        *(float *)(((int)stk + 16)) = (BigOneKeyValue(0xC13F6C8, 0x6, (*(float *)0xC2AEC58)));
        *(float *)(((int)stk + 20)) = (BigOneKeyValue(0xC13F728, 0x6, (*(float *)0xC2AEC58)));
        nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
        u64 = *(float *)(((int)stk + 12));
        u65 = *(float *)(((int)stk + 20));
        u66 = (u65 * u65);
        u66 = u66 + u64 * u64;
        *(unsigned int *)(((int)stk + 4)) = ((nlArcTan2((*(float *)(((int)stk + 16))), _builtin_sqrtf(u66))) - (*(int *)0xC2AEC4C));
        *(unsigned int *)(((int)stk + 8)) = ((nlArcTan2((*(float *)(((int)stk + 12))), (-(*(float *)(((int)stk + 20)))))) - (*(int *)0xC2AEC50));
        BigOneHomeAngle((*(int *)(((int)stk + 4))), 0xC2AEC6C, 0.0749999955f);
        BigOneHomeAngle((*(int *)(((int)stk + 8))), 0xC2AEC70, 0.0749999955f);
        nlTranslateV((((int)stk + 4) + 0x20));
        BigOneRotate((*(int *)0xC2AEC6C), (*(int *)0xC2AEC70), (*(int *)0xC2AEC74));
        nlTranslateNV((((int)stk + 4) + 0x20));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t84 = 0xC1413A4;
        for (;;) {
            t85 = *(int *)((t84 + 0x18));
            nlCalcPoint(t84, ((t85 << 2) + 0xC13F898));
            *(unsigned int *)((((t85 << 2) + 0xC13F898) + 0x0)) = ((*(int *)((((t85 << 2) + 0xC13F898) + 0x0))) | 0x1);
            nlCalcVector((t84 + 0xC), (((t85 << 2) + 0xC13F898) + 0xC));
            t89 = *(int *)(((int)stk + 4));
            t84 = (t84 + 0x1C);
            *(unsigned int *)(((int)stk + 4)) = (t89 + 0x1);
            if ((unsigned int)(t89 + 0x1) >= (unsigned int)0x10) {
                break;
            }
        }
        nlCalcPoint((((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x14));
        *(float *)(((int)stk + 12)) = (BigOneKeyValue(0xC13F788, 0x2, (*(float *)0xC2AEC58)));
        *(float *)(((int)stk + 16)) = (BigOneKeyValue(0xC13F7A8, 0x8, (*(float *)0xC2AEC58)));
        *(float *)(((int)stk + 20)) = (BigOneKeyValue(0xC13F828, 0x7, (*(float *)0xC2AEC58)));
        nlSubVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x14));
        u98 = *(float *)(((int)stk + 12));
        u99 = *(float *)(((int)stk + 20));
        u100 = (u99 * u99);
        u100 = u100 + u98 * u98;
        *(unsigned int *)(((int)stk + 4)) = (((nlArcTan2((*(float *)(((int)stk + 16))), _builtin_sqrtf(u100))) - (*(int *)0xC2AEC4C)) - (*(int *)0xC2AEC6C));
        *(unsigned int *)(((int)stk + 8)) = (((nlArcTan2((*(float *)(((int)stk + 12))), (-(*(float *)(((int)stk + 20)))))) - (*(int *)0xC2AEC50)) - (*(int *)0xC2AEC70));
        BigOneHomeAngle((*(int *)(((int)stk + 4))), 0xC2AEC78, 0.0749999955f);
        BigOneHomeAngle((*(int *)(((int)stk + 8))), 0xC2AEC7C, 0.0749999955f);
        nlTranslateV((((int)stk + 4) + 0x2C));
        BigOneRotate((*(int *)0xC2AEC78), (*(int *)0xC2AEC7C), (*(int *)0xC2AEC80));
        nlTranslateNV((((int)stk + 4) + 0x2C));
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        t120 = 0xC141564;
        for (;;) {
            t121 = *(int *)((t120 + 0x18));
            nlCalcPoint(t120, ((t121 << 2) + 0xC13F898));
            *(unsigned int *)((((t121 << 2) + 0xC13F898) + 0x0)) = ((*(int *)((((t121 << 2) + 0xC13F898) + 0x0))) | 0x1);
            nlCalcVector((t120 + 0xC), (((t121 << 2) + 0xC13F898) + 0xC));
            t125 = *(int *)(((int)stk + 4));
            t120 = (t120 + 0x1C);
            *(unsigned int *)(((int)stk + 4)) = (t125 + 0x1);
            if ((unsigned int)(t125 + 0x1) >= (unsigned int)0x19) {
                break;
            }
        }
        nlPopMatrix(0x2);
        *(float *)0xC2AEC58 = ((*(float *)0xC2AEC58) + (*(float *)0xC2AEC5C));
        u129 = *(float *)0xC0738E8;
        u130 = *(float *)0xC2AEC58;
        *(float *)0xC2AEC58 = (u130 - ((nlFloor((u130 / u129))) * u129));
        t132 = 0x38;
    }
    return t132;
}
