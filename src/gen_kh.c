/* Straight-line functions with calls and guards (batch gen_kh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector(int, int);
int nlLineSetThickness(float);
int nlObjPutUseViewMatrix(int);
int nlScaleVector(int, int, float);
int nlSingleLineUseViewMatrix(int, int, int);
int nlTriPutSetAttrib(int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float);
int nlTriPutSetAttribFaceColor(int, float, float, float);
int nlTriPutSetClipping(int, float, float, float, float);
int nlTriPutSetPoint(int, int, float, float, float, float, float, float, float, float);
int nlTriPutTextureInit(int, int, int);
int PutColliWall(int a4);

int PutColliWall(int a4)
{
    float u9;
    float u10;
    int t80;
    float u30;
    float u55;
    float u56;
    float u57;
    float u66;
    float u67;
    float u71;
    float u75;
    int stk[22];

    if ((*(int *)0xC0ED89C) != 0) {
        nlTriPutTextureInit(0xC270A98, 0xFFFFFFFF, 0x0);
        nlTriPutSetAttrib(0xC270A98, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0.5f, 0.5f, 0.0f, 5.0f, 1.0f, 0.0f, 0.0f, 0.0f);
        *(unsigned int *)0xC270AB8 = ((*(int *)0xC270AB8) | 0xC0);
        *(unsigned int *)0xC0ED89C = 0x0;
    }
    u9 = 0.0f;
    u10 = 0.699999988f;
    if (((*(int *)((a4 + 0x18))) & 1) != 0) {
        u9 = 0.699999988f;
        u10 = 0.0f;
    }
    nlTriPutSetAttribFaceColor(0xC270A98, 1.0f, u9, u10);
    *(float *)(((int)stk + 40)) = (*(float *)((a4 + 0x8)));
    *(float *)(((int)stk + 44)) = (*(float *)((a4 + 0x18)));
    *(float *)(((int)stk + 48)) = (*(float *)((a4 + 0xC)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 28) + 0xC)); }
    *(float *)(((int)stk + 32)) = (*(float *)((a4 + 0x14)));
    nlLineSetThickness(3.0f);
    nlSingleLineUseViewMatrix(((int)stk + 40), ((int)stk + 28), 0xFFFF0000);
    t80 = 0x1C;
    if (!((*(float *)((a4 + 0x1C))) > 0.0f)) {
    } else {
        *(float *)(((int)stk + 32)) = (*(float *)(((int)stk + 44)));
        *(float *)(((int)stk + 28)) = (*(float *)(((a4 + 0x20) + 0x8)));
        *(float *)(((int)stk + 36)) = (*(float *)(((a4 + 0x20) + 0xC)));
        nlSingleLineUseViewMatrix(((int)stk + 40), ((int)stk + 28), 0xFFFF0000);
        *(float *)(((int)stk + 28)) = ((*(float *)(((int)stk + 40))) - ((*(float *)((a4 + 0x4))) * (*(float *)((a4 + 0x1C)))));
        u30 = (*(float *)(((int)stk + 48)));
        u30 = u30 + (*(float *)((a4 + 0x1C))) * (*(float *)((a4 + 0x0)));
        *(float *)(((int)stk + 36)) = u30;
        nlTriPutSetPoint(0xC270A98, 0x0, (*(float *)(((int)stk + 40))), (*(float *)((a4 + 0x18))), (*(float *)(((int)stk + 48))), (*(float *)((a4 + 0x0))), 0.0f, (*(float *)((a4 + 0x4))), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC270A98, 0x1, (*(float *)(((int)stk + 40))), (*(float *)((a4 + 0x14))), (*(float *)(((int)stk + 48))), (*(float *)((a4 + 0x0))), 0.0f, (*(float *)((a4 + 0x4))), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC270A98, 0x2, (*(float *)(((int)stk + 28))), (*(float *)((a4 + 0x18))), (*(float *)(((int)stk + 36))), (*(float *)((a4 + 0x0))), 0.0f, (*(float *)((a4 + 0x4))), 0.0f, 0.0f);
        nlTriPutSetPoint(0xC270A98, 0x3, (*(float *)(((int)stk + 28))), (*(float *)((a4 + 0x14))), (*(float *)(((int)stk + 36))), (*(float *)((a4 + 0x0))), 0.0f, (*(float *)((a4 + 0x4))), 0.0f, 0.0f);
        u55 = *(float *)((a4 + 0x14));
        u56 = *(float *)((a4 + 0x1C));
        u57 = *(float *)((a4 + 0x18));
        nlTriPutSetClipping(0xC270A98, (((*(float *)(((int)stk + 40))) + (*(float *)(((int)stk + 28)))) * 0.5f), ((u55 + u57) * 0.5f), (((*(float *)(((int)stk + 48))) + (*(float *)(((int)stk + 36)))) * 0.5f), (((u56 + u55) - u57) * 0.5f));
        nlObjPutUseViewMatrix(0xC270A98);
        nlAddVector((((int)stk + 28) + 0xC), ((int)stk + 28));
        nlScaleVector((((int)stk + 28) + 0xC), (((int)stk + 28) + 0xC), 0.5f);
        u66 = *(float *)((a4 + 0x18));
        u67 = *(float *)((a4 + 0x14));
        *(float *)(((int)stk + 32)) = ((u67 + u66) * 0.5f);
        *(float *)(((int)stk + 44)) = ((u67 + u66) * 0.5f);
        u71 = (*(float *)(((int)stk + 40)));
        u71 = u71 + 0.199999988f * ((*(float *)((a4 + 0x0))) * ((((u56 + u55) - u57) * 0.5f)));
        *(float *)(((int)stk + 28)) = u71;
        u75 = (*(float *)(((int)stk + 48)));
        u75 = u75 + 0.199999988f * ((*(float *)((a4 + 0x4))) * ((((u56 + u55) - u57) * 0.5f)));
        *(float *)(((int)stk + 36)) = u75;
        t80 = nlSingleLineUseViewMatrix(((int)stk + 40), ((int)stk + 28), (((*(int *)((a4 + 0x14))) & 1) ? 0xFF007F00 : 0xFF00FF00));
    }
    return t80;
}

