/* Straight-line functions with calls and guards (batch gen_aft): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlLength(int, int);
void setObjHitPin(int a4);

void setObjHitPin(int a4)
{
    float t2;
    int t16;
    float u3;
    float u4;

    if ((*(int *)((((*(int *)((a4 + 0x6C))) << 2) + 0xC275824))) == 0) {
        t2 = nlLength((a4 + 0xC), (a4 + 0x58));
        if (!(t2 > (1.0f + 1.0f)) && (u3 = 0.7f, u4 = *(float *)((a4 + 0x40)), !(u3 > u4))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
            return;
        }
        if ((*(int *)0xC2A991C) == 0) {
            *(unsigned int *)((((*(int *)((a4 + 0x6C))) << 2) + 0xC275824)) = 0x1;
            *(unsigned int *)0xC275940 = ((*(int *)0xC275940) - 1);
        }
        t16 = 0x30FA9;
        if (t2 > (5.0f)) {
            t16 = 0xFA9;
        }
        Sound_Request(t16, 0x0);
    return;
    }
}
