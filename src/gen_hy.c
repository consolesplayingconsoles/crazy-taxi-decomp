/* Straight-line functions with calls and guards (batch gen_hy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Model_Put_Sprite3D(int, int, int, float);
int ResetFadeColor(void);
int nlCloseEvent(int);
int nlObjPutSetFadeColorBase(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int pfAddChar(int);
int pfAddNumber(int);
int pfCleanString(void);
int pfColor(int, int, int, int);
int pfLocate(float, float);
int pfPuts(int);
int pfSetFont(int);
int pfSize(float, float);
int technicalBonusExec(int a4);

int technicalBonusExec(int a4)
{
    int t0;
    int t1;
    float u12;
    float u67;
    float u68;
    float u86;
    float u3;
    int t104;
    float u57;
    int stk[16] = {0};

    t0 = *(int *)((a4 + 0x18));
    t1 = *(int *)((a4 + 0x1C));
    if ((0.0f > (*(float *)((a4 + 0x24)))) && (u3 = *(float *)((a4 + 0x38)), u3 > 100.0f)) {
        *(unsigned int *)0xC1EE7B8 = ((*(int *)0xC1EE7B8) + ((t0 * t1) * 0x19));
        t104 = (nlCloseEvent(a4));
    } else {
        *(float *)((a4 + 0x24)) = ((*(float *)((a4 + 0x24))) - 0.5f);
        *(float *)((a4 + 0x20)) = (*(float *)((a4 + 0x28)));
        *(float *)((a4 + 0x34)) = ((*(float *)((a4 + 0x34))) + (*(float *)(((0x20 + a4) + 0x0))));
        *(float *)((a4 + 0x38)) = ((*(float *)((a4 + 0x38))) - (*(float *)(((0x24 + a4) + 0x0))));
        *(unsigned short *)(((((int)stk + 20) + 0x4) + 0x4)) = 0x0;
        *(unsigned short *)(((((int)stk + 20) + 0x4) + 0x2)) = 0x0;
        *(unsigned short *)(((((int)stk + 20) + 0x4) + 0x0)) = 0x0;
        u12 = *(float *)((a4 + 0x24));
        *(unsigned short *)(((((int)stk + 20) + 0x4) + 0x2)) = ((((int)(u12 * u12) << 8) << 2) << 1);
        *(float *)((a4 + 0x2C)) = ((*(float *)((a4 + 0x2C))) + 0.0249999985f);
        if ((int)(*(int *)((a4 + 0x18))) <= (int)0x1) {
            nlObjPutSetFadeColorBase(1.0f, 0.699999988f, 0.299999982f);
        } else {
            if ((*(int *)((a4 + 0x18))) == 2) {
                nlObjPutSetFadeColorBase(0.899999976f, 0.899999976f, 0.899999976f);
            } else {
                if ((int)(*(int *)((a4 + 0x18))) >= (int)0x3) {
                    nlObjPutSetFadeColorBase(1.0f, 1.0f, 0.5f);
                }
            }
        }
        nlPushMatrix(0x0);
        if ((int)(*(int *)((a4 + 0x18))) < (int)0x4) {
            u57 = (*(float *)((a4 + 0x34)));
        } else {
            u57 = ((*(float *)((a4 + 0x34))) - ((*(float *)((a4 + 0x2C))) * 12.0f));
        }
        *(unsigned char *)((((int)stk + 12) + 0x0)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x0)));
        *(unsigned char *)((((int)stk + 12) + 0x1)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x1)));
        *(unsigned char *)((((int)stk + 12) + 0x2)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x2)));
        *(unsigned char *)((((int)stk + 12) + 0x3)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x3)));
        *(unsigned char *)((((int)stk + 12) + 0x4)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x4)));
        *(unsigned char *)((((int)stk + 12) + 0x5)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x5)));
        u67 = *(float *)((a4 + 0x2C));
        u68 = *(float *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 20)) = (int)u57;
        Model_Put_Sprite3D((int)u57, (int)u68, 0xC0EA5D8, u67);
        *(unsigned short *)(((((int)stk + 20) + 0x4) + 0x2)) = 0x0;
        *(unsigned char *)((((int)stk + 4) + 0x0)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x0)));
        *(unsigned char *)((((int)stk + 4) + 0x1)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x1)));
        *(unsigned char *)((((int)stk + 4) + 0x2)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x2)));
        *(unsigned char *)((((int)stk + 4) + 0x3)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x3)));
        *(unsigned char *)((((int)stk + 4) + 0x4)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x4)));
        *(unsigned char *)((((int)stk + 4) + 0x5)) = (*(signed char *)(((((int)stk + 20) + 0x4) + 0x5)));
        Model_Put_Sprite3D((*(int *)(((int)stk + 20))), (int)(*(float *)((a4 + 0x38))), 0xC0EB340, (*(float *)((a4 + 0x2C))));
        nlPopMatrix(0x1);
        ResetFadeColor();
        ResetFadeColor();
        pfSetFont(0x0);
        pfColor(0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00, 0xFFFFFF00);
        u86 = 140.0f;
        u86 = u86 + 0.5f * ((*(float *)((a4 + 0x38))) + -140.0f);
        pfLocate(320.0f, u86);
        pfSize(1.5f, 1.5f);
        *(unsigned int *)(((int)stk + 20)) = ((int)((int)((t0 * t1) * 0x19) / (int)0x64));
        pfCleanString();
        pfAddChar(0x24);
        pfAddNumber((*(int *)(((int)stk + 20))));
        pfAddChar(0x2E);
        pfPuts((*(int *)0xC08D678));
        pfSize(1.19999993f, 1.19999993f);
        *(unsigned int *)(((int)stk + 20)) = ((int)((int)((t0 * t1) * 0x19) % (int)0x64));
        pfCleanString();
        pfAddNumber((*(int *)(((int)stk + 20))));
        t104 = (pfPuts((*(int *)0xC08D678)));
    }
    return t104;
}
