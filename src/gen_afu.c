/* Straight-line functions with calls and guards (batch gen_afu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FcvPlayBuffer(int, int);
int FcvStoreBuffer(int, int, float);
float nlInnerProduct(int, int);
int drvJolt(void);

int drvJolt(void)
{
    float u12;
    float u15;
    float u21;
    float u22;
    float u25;
    float u47;
    int t48;
    float u56;
    int t57;
    float u59;
    int t60;
    float u70;
    int t71;
    float u32;
    int stk[11] = {0};

    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (nlInnerProduct(0xC2AD288, 0xC2AD1E0));
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (nlInnerProduct(0xC2AD288, 0xC2AD1EC));
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (nlInnerProduct(0xC2AD288, 0xC2AD1F8));
    *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * 0.25f);
    *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x4))) * 0.5f);
    *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = ((*(float *)(((((int)stk + 4) + 0x4) + 0x8))) * 0.5f);
    if ((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = 1.0f;
    } else {
        if ((-1.0f) > (*(float *)(((((int)stk + 4) + 0x4) + 0x0)))) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x0)) = (-1.0f);
        }
    }
    u12 = *(float *)(((((int)stk + 4) + 0x4) + 0x4));
    if (u12 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = 1.0f;
    } else {
        if ((-1.0f) > u12) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x4)) = (-1.0f);
        }
    }
    u15 = *(float *)(((((int)stk + 4) + 0x4) + 0x8));
    if (u15 > 1.0f) {
        *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = 1.0f;
    } else {
        if ((-1.0f) > u15) {
            *(float *)(((((int)stk + 4) + 0x4) + 0x8)) = (-1.0f);
        }
    }
    FcvStoreBuffer((*(int *)0xC2AD020), 0xC2AD460, (*(float *)0xC2AD024));
    u21 = *(float *)0xC2AD02C;
    u22 = *(float *)0xC2AD464;
    if (((u22 - u21) > -0.5f) && (0.5f > (u22 - u21))) {
        u25 = (*(float *)0xC2AD52C);
        u25 = u25 + 0.5f * (*(float *)(((((int)stk + 4) + 0x4) + 0x4)));
        *(float *)0xC2AD52C = u25;
    }
    if (!(0.0f > (u22 - u21))) {
        u32 = ((*(float *)0xC2AD52C) - ((0.849999964f * (u22 - u21)) / 65.0f));
    } else {
        u32 = ((*(float *)0xC2AD52C) - ((7.0f * (u22 - u21)) / 65.0f));
    }
    *(float *)0xC2AD52C = (u32 * 0.799999952f);
    if ((u32 * 0.799999952f) > 5.0f) {
        *(float *)0xC2AD52C = 5.0f;
    } else {
        if ((-1.0f) > (*(float *)0xC2AD52C)) {
            *(float *)0xC2AD52C = (-1.0f);
        }
    }
    *(float *)0xC2AD464 = ((*(float *)0xC2AD464) + (*(float *)0xC2AD52C));
    u47 = (float)(((*(int *)0xC2AD530) + (-(int)((*(float *)(((((int)stk + 4) + 0x4) + 0x0))) * 2730.0f))) - (int)(((float)((*(int *)0xC2AD4A4) - (*(int *)0xC2AD06C)) * 0.5f) / 65.0f));
    *(unsigned int *)0xC2AD530 = (int)(u47 * 0.849999964f);
    t48 = *(int *)0xC2AD4A4;
    *(unsigned int *)0xC2AD4A4 = (t48 + (int)(u47 * 0.849999964f));
    if ((int)(t48 + (int)(u47 * 0.849999964f)) > (int)0xE39) {
        *(unsigned int *)0xC2AD4A4 = 0xE39;
    } else {
        if ((int)(*(int *)0xC2AD4A4) < (int)0xFFFFF1C7) {
            *(unsigned int *)0xC2AD4A4 = 0xFFFFF1C7;
        }
    }
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)0xC2AD4AC) - (*(int *)0xC2AD074));
    u56 = *(float *)(((((int)stk + 4) + 0x4) + 0x0));
    t57 = *(int *)0xC2AD538;
    *(unsigned int *)0xC2AD538 = (t57 + (-(int)(u56 * 2730.0f)));
    u59 = (float)((t57 + (-(int)(u56 * 2730.0f))) - (int)(((float)(*(int *)(((int)stk + 4))) * 3.0f) / 15.0f));
    *(unsigned int *)0xC2AD538 = (int)(u59 * 0.799999952f);
    t60 = *(int *)0xC2AD4AC;
    *(unsigned int *)0xC2AD4AC = (t60 + (int)(u59 * 0.799999952f));
    if ((int)(t60 + (int)(u59 * 0.799999952f)) > (int)0xE39) {
        *(unsigned int *)0xC2AD4AC = 0xE39;
    } else {
        if ((int)(*(int *)0xC2AD4AC) < (int)0xFFFFF1C7) {
            *(unsigned int *)0xC2AD4AC = 0xFFFFF1C7;
        }
    }
    u70 = (float)(((*(int *)0xC2AD53C) + (int)((*(float *)(((((int)stk + 4) + 0x4) + 0x8))) * 2730.0f)) - (int)(((float)((*(int *)0xC2AD4B0) - (*(int *)0xC2AD078)) * 0.599999964f) / 15.0f));
    *(unsigned int *)0xC2AD53C = (int)(u70 * 0.949999988f);
    t71 = *(int *)0xC2AD4B0;
    *(unsigned int *)0xC2AD4B0 = (t71 + (int)(u70 * 0.949999988f));
    if ((int)(t71 + (int)(u70 * 0.949999988f)) > (int)0x4E39) {
        *(unsigned int *)0xC2AD4B0 = 0x4E39;
    } else {
        if ((int)(*(int *)0xC2AD4B0) < (int)0x2000) {
            *(unsigned int *)0xC2AD4B0 = 0x2000;
        }
    }
    return (FcvPlayBuffer(0xC2AD460, (*(int *)0xC2AD000)));
}
