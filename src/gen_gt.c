/* Straight-line functions with calls and guards (batch gen_gt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int fcvCalcAngle(int, int, float);
int fcvCalcPosition(int, int, float);
float nlFloor(float);
void FcvStoreBuffer(int a4, int a5, float f4);

void FcvStoreBuffer(int a4, int a5, float f4)
{
    float t1;
    int t2;

    t1 = nlFloor((f4 / (float)((*(int *)((a4 + 0x0))) - 1)));
    t2 = *(int *)((a4 + 0x0));
    fcvCalcPosition((((*(int *)((a4 + 0x18))) << 2) + a4), (a5 + 0xC), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcPosition((((*(int *)((a4 + 0x24))) << 2) + a4), (a5 + 0x18), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcPosition((((*(int *)((a4 + 0x34))) << 2) + a4), (a5 + 0x24), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcPosition((((*(int *)((a4 + 0x40))) << 2) + a4), (a5 + 0x30), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcPosition((((*(int *)((a4 + 0x4))) << 2) + a4), a5, (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x8))) << 2) + a4), (a5 + 0x3C), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0xC))) << 2) + a4), (a5 + 0x48), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x10))) << 2) + a4), (a5 + 0x54), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x14))) << 2) + a4), (a5 + 0x60), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x1C))) << 2) + a4), (a5 + 0x6C), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x20))) << 2) + a4), (a5 + 0x78), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x28))) << 2) + a4), ((a5 + 0x3C) + 0x48), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x2C))) << 2) + a4), ((a5 + 0x3C) + 0x54), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x30))) << 2) + a4), ((a5 + 0x3C) + 0x60), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x38))) << 2) + a4), ((a5 + 0x3C) + 0x6C), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x3C))) << 2) + a4), ((a5 + 0x3C) + 0x78), (f4 - (t1 * (float)(t2 - 1))));
    fcvCalcAngle((((*(int *)((a4 + 0x44))) << 2) + a4), ((a5 + 0x3C) + 0x84), (f4 - (t1 * (float)(t2 - 1))));
}
