/* Straight-line functions with calls and guards (batch gen_ahz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float HomingPosXY(int a4, int a5, float f4, float f5, float f6);

float HomingPosXY(int a4, int a5, float f4, float f5, float f6)
{
    float u0;
    float u1;
    float u2;
    float u3;

    u0 = *(float *)((a4 + 0x0));
    u1 = u0;
    u1 = u1 + f4 * (f5 - u0);
    *(float *)((a4 + 0x0)) = u1;
    u2 = *(float *)((a5 + 0x0));
    u3 = u2;
    u3 = u3 + f4 * (f6 - u2);
    *(float *)((a5 + 0x0)) = u3;
    return f4;
}
