/* Straight-line functions with calls and guards (batch gen_xt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutColliPole(int);
int PutColliWall(int);
float nlFloor(float);
float ViewColliWall(float f4, float f5);

float ViewColliWall(float f4, float f5)
{
    float u0;
    float t1;
    float u2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t26;
    int t27;
    int t28;
    int t7;

    u0 = *(float *)0xC270478;
    t1 = nlFloor((f4 / u0));
    u2 = *(float *)0xC270478;
    t3 = nlFloor((f5 / u2));
    t4 = *(int *)0xC27045C;
    t5 = *(int *)0xC270460;
    t6 = *(int *)0xC27046C;
    if (((int)((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) >= 0) && (t7 = *(int *)0xC270474, (int)((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) < (int)t7)) {
        t12 = *(int *)0xC270458;
        t13 = *(int *)(((((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2) + t12));
        if (t13 != 0) {
            t14 = *(int *)0xC270458;
            t15 = *(int *)((((((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2) + t14) + 0x0));
            t16 = *(short *)((t15 + 0x0));
            t18 = (t15 + 0x4);
            t19 = t16;
            for (;;) {
                if (t19 == 0) {
                    break;
                }
                t20 = *(int *)((t18 + 0x0));
                t18 = (t18 + 0x4);
                PutColliWall(t20);
                t19 = (t19 - 1);
            }
            t22 = *(int *)0xC270458;
            t23 = *(int *)((t22 + (((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2)));
            t24 = *(short *)((t23 + 0x2));
            t26 = t18;
            t27 = t24;
            for (;;) {
                if (t27 == 0) {
                    break;
                }
                t28 = *(int *)((t26 + 0x0));
                t26 = (t26 + 0x4);
                PutColliPole(t28);
                t27 = (t27 - 1);
            }
        }
    }
    return t3;
}
