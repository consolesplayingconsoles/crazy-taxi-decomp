/* Straight-line functions with calls and guards (batch gen_qd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutColliWall(int);
int PutColliPole(int);
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
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t14;
    int t15;
    int t16;
    int t18;
    int t19;
    int t20;
    int t22;
    int t23;
    int t24;

    u0 = *(float *)0xC270478;
    t1 = nlFloor((f4 / u0));
    u2 = *(float *)0xC270478;
    t3 = nlFloor((f5 / u2));
    t4 = *(int *)0xC27045C;
    t5 = *(int *)0xC270460;
    t6 = *(int *)0xC27046C;
    if ((int)((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) >= 0) {
        t7 = *(int *)0xC270474;
        if ((int)((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) < (int)t7) {
            t8 = *(int *)0xC270458;
            t9 = *(int *)(((((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2) + t8));
            if (t9 != 0) {
                t10 = *(int *)0xC270458;
                t11 = *(int *)((((((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2) + t10) + 0x0));
                t12 = *(short *)((t11 + 0x0));
                t14 = (t11 + 0x4);
                t15 = t12;
                for (;;) {
                    if (t15 == 0) {
                        break;
                    }
                    t16 = *(int *)((t14 + 0x0));
                    t14 = (t14 + 0x4);
                    PutColliWall(t16);
                    t15 = (t15 - 1);
                }
                t18 = *(int *)0xC270458;
                t19 = *(int *)((t18 + (((t6 * ((int)t3 - t5)) + ((int)t1 - t4)) << 2)));
                t20 = *(short *)((t19 + 0x2));
                t22 = t14;
                t23 = t20;
                for (;;) {
                    if (t23 == 0) {
                        break;
                    }
                    t24 = *(int *)((t22 + 0x0));
                    t22 = (t22 + 0x4);
                    PutColliPole(t24);
                    t23 = (t23 - 1);
                }
            }
        }
    }
    return t3;
}
