/* Straight-line functions with calls and guards (batch gen_jy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int courseStatusEntry(int, int);
float nlLength(int, int, float, float);
int signalExec(int a4, float f4, float f5);

int signalExec(int a4, float f4, float f5)
{
    int t0;
    int t17;
    float u23;
    float t2;
    float u3;
    float u14;
    float u4;
    int t5;
    int t27;
    int t28;
    int t29;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t49;
    float u50;
    float u51;
    float u52;
    float u53;
    float u20;
    float u21;
    float u22;
    int t11;
    float u13;
    int t7;
    int t35;
    int t36;
    int t38;
    int t39;
    int t48;
    int t54;
    int t55;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    float u66;
    float u67;
    float u68;
    float u69;

    t0 = *(int *)((a4 + 0x14));
    t17 = t0;
    u23 = f4;
    if ((t0 & 0x1000) != 0) {
        t2 = nlLength(((*(int *)0xC2A1B30) + 0x78), (a4 + 0x78), f4, f5);
        u3 = *(float *)0xC2A1B18;
        u14 = u3;
        if (t2 > u3) {
            u4 = *(float *)0xC2A1B18;
            if ((u4 + 30.0f) > t2) {
                *(unsigned int *)((a4 + 0x14)) = 0x0;
                *(unsigned int *)((a4 + 0x88)) = 0x8;
                t5 = *(int *)((a4 + 0x14));
                *(unsigned int *)((a4 + 0x14)) = (t5 | 0x1010);
                t7 = (t5 | 0x1010);
            }
            t11 = t7;
            u13 = (u4 + 30.0f);
            u14 = 30.0f;
        }
        t17 = t11;
        u20 = t2;
        u21 = u13;
        u22 = u14;
        u23 = t2;
    }
    if ((int)(*(int *)((a4 + 0x88))) < 0) {
        t27 = *(int *)((a4 + 0x14));
        t28 = (int)((int)((t27 & 0xF) + 0x1) % (int)0x2);
        *(unsigned int *)((a4 + 0x14)) = ((0x1000 & t27) + t28);
        t29 = *(int *)((a4 + 0x84));
        *(unsigned int *)((a4 + 0x88)) = t29;
        t36 = t29;
        t38 = ((0x1000 & t27) + t28);
        t39 = t28;
    } else {
        if ((int)(*(int *)((a4 + 0x88))) < (int)0xB4) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) | 0x10);
        }
        t35 = 0xB4;
        t36 = t17;
    }
    t41 = *(int *)((a4 + 0x14));
    t42 = t35;
    t43 = t36;
    t44 = ((t41 & 0xF) << 2);
    t45 = 0xF;
    t46 = t38;
    t47 = t39;
    t49 = 0x0;
    u50 = u20;
    u51 = u21;
    u52 = u22;
    u53 = u23;
    for (;;) {
        if ((((int)t49 >= (int)(((t41 & 0xF) << 1) + ((t41 & 0xF) << 2))) && (((int)t49 < (int)((((t41 & 0xF) << 1) + ((t41 & 0xF) << 2)) + 0x6)) && (t54 = *(int *)((a4 + 0x14)), (t54 & 16) == 0))) || (t44 = a4, t48 = t49, t44 = (t44 + 0x18), t48 = (t48 << 2), t44 = (t44 + t48), t55 = *(int *)((t44 + 0x0)), t43 = t55, t43 == 0)) {
            t60 = t42;
            t61 = t43;
            t62 = t44;
            t63 = t45;
            t64 = t46;
            t65 = t47;
            u66 = u50;
            u67 = u51;
            u68 = u52;
            u69 = u53;
        } else {
            t46 = a4;
            t46 = (t46 + 0x48);
            t45 = a4;
            t46 = (t46 + t48);
            t45 = (t45 + 0x18);
            t46 = (*(int *)((t46 + 0x0)));
            t45 = (t45 + t48);
            t45 = (*(int *)((t45 + 0x0)));
            courseStatusEntry(t45, t46);
        }
        u50 = u66;
        u51 = u67;
        u52 = u68;
        u53 = u69;
        t42 = t60;
        t49 = (t49 + 0x1);
        t43 = t61;
        t44 = t62;
        t45 = t63;
        t46 = t64;
        t47 = t65;
        if ((int)t49 >= (int)0xC) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0x88)) = ((*(int *)((a4 + 0x88))) - 1);
    return 0x88;
}
