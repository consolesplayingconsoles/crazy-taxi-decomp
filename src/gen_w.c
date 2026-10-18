/* Straight-line functions with calls and guards (batch gen_w): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int TrainCarInit(int, int, int);
int set_event(int, int, int, int);

int CableControlInit(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t6;
    int t7;
    int t8;
    int t10;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t17;

    *(unsigned int *)0xC2A4E44 = 0x0;
    t0 = set_event(0x5C, 0xC047C84, a6, a7);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x14)) = a4;
        *(unsigned int *)((t0 + 0x18)) = 0x0;
        *(unsigned int *)((t0 + 0x20)) = 0x0;
        *(float *)((t0 + 0x28)) = 5300.0f;
        *(float *)((t0 + 0x2C)) = 1370.19995f;
        *(float *)((t0 + 0x30)) = 3100.0f;
        *(unsigned int *)(((t0 + 0x48) + 0x0)) = 0x0;
        *(unsigned int *)(((t0 + 0x40) + 0x0)) = 0x0;
        *(unsigned int *)(((t0 + 0x50) + 0x0)) = 0x0;
        *(unsigned int *)((t0 + 0x1C)) = 0x4;
        *(unsigned int *)((t0 + 0x24)) = 0x0;
        *(float *)((t0 + 0x34)) = 5150.0f;
        *(float *)((t0 + 0x38)) = -1049.79993f;
        *(float *)((t0 + 0x3C)) = 11530.0f;
        *(unsigned int *)((t0 + 0x4C)) = 0x6000;
        *(unsigned int *)((t0 + 0x44)) = 0x6000;
        *(unsigned int *)((t0 + 0x54)) = 0x0;
        *(unsigned int *)((t0 + 0x58)) = 0x0;
        t1 = *(int *)0xC2A6690;
        t2 = *(int *)(((t1 + 0xD80) + 0x4));
        t3 = *(int *)(((t1 + 0xD80) + 0x0));
        t4 = *(int *)((t2 + 0x0));
        TrainCarInit(0xF, 0x120, (((((t4 << 1) + t4) << 2) + t3) - 120));
        t6 = *(int *)(((t1 + 0xD80) + 0x4));
        t7 = *(int *)(((t1 + 0xD80) + 0x0));
        t8 = *(int *)((t6 + 0x0));
        TrainCarInit(0xF, 0x120, (((((t8 << 1) + t8) << 2) + t7) - 1920));
        t10 = *(int *)0xC2A6690;
        t11 = *(int *)(((t10 + 0xD8C) + 0x4));
        t12 = *(int *)(((t10 + 0xD8C) + 0x0));
        t13 = *(int *)((t11 + 0x0));
        TrainCarInit(0xF, 0x121, (((((t13 << 1) + t13) << 2) + t12) - 120));
        t15 = *(int *)(((t10 + 0xD8C) + 0x4));
        t16 = *(int *)(((t10 + 0xD8C) + 0x0));
        t17 = *(int *)((t15 + 0x0));
        return TrainCarInit(0xF, 0x121, (((((t17 << 1) + t17) << 2) + t16) - 1920));
    }
    return t0;
}
