/* Straight-line functions with calls and guards (batch gen_lt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Sound_Request(int, int);
float nlLength(int, int, float, float);
void setObjHitPin(int a4, float f4, float f5);

void setObjHitPin(int a4, float f4, float f5)
{
    float t2;
    int t16;
    float u3;
    float u4;

    if ((*(int *)((((*(int *)((a4 + 0x6C))) << 2) + 0xC275824))) == 0) {
        t2 = nlLength((a4 + 0xC), (a4 + 0x58), f4, f5);
        if (!(t2 > (1.0f + 1.0f)) && (u3 = *(float *)0xC038FDC, u4 = *(float *)((a4 + 0x40)), !(u3 > u4))) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x58)) = *(struct mv3 *)((a4 + 0xC)); }
            return;
        }
        if ((*(int *)0xC2A991C) == 0) {
            *(unsigned int *)((((*(int *)((a4 + 0x6C))) << 2) + 0xC275824)) = 0x1;
            *(unsigned int *)0xC275940 = ((*(int *)0xC275940) - 1);
        }
        t16 = 0x30FA9;
        if (t2 > (*(float *)0xC038FE4)) {
            t16 = 0xFA9;
        }
        Sound_Request(t16, 0x0);
    return;
    }
}

