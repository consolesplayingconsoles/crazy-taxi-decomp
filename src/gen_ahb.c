/* Straight-line functions with calls and guards (batch gen_ahb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlLength(int, int, float, float);
float setObjHitBeach(int a4, float f4, float f5);

float setObjHitBeach(int a4, float f4, float f5)
{
    float t0;

    t0 = nlLength((a4 + 0xC), (a4 + 0x58), f4, f5);
    if (!(t0 > (1.0f + 1.0f))) {
        if (0.699999988f > (*(float *)((a4 + 0x40)))) {
            *(unsigned int *)0xC275944 = 0x1;
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
        }
    } else {
        *(unsigned int *)0xC275944 = 0x1;
    }
    return t0;
}
