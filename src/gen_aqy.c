/* Straight-line functions with calls and guards (batch gen_aqy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlPow(float, float);
int Money_Array(int a4, int a5, int a6);

int Money_Array(int a4, int a5, int a6)
{
    float u0;
    int t6;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;

    u0 = *(float *)0xC0577D4;
    t6 = 0xC0577D4;
    if ((int)(a6 - 1) >= 0) {
        t1 = a5;
        t2 = (a6 - 1);
        for (;;) {
            t3 = nlPow(u0, (float)t2);
            t4 = (int)((int)t1 / (int)(int)t3);
            t5 = ((t2 << 2) + a4);
            t2 = (t2 - 1);
            *(unsigned int *)((t5 + 0x0)) = t4;
            t1 = (t1 - (t4 * (int)t3));
            if ((int)t2 < 0) {
                break;
            }
        }
        t6 = t4;
    }
    return t6;
}
