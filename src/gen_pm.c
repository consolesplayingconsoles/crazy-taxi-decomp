/* Straight-line functions with calls and guards (batch gen_pm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nd_SprPut(int, int, float, float);
void Put_Bowling_Message(float f4);

void Put_Bowling_Message(float f4)
{
    int t0;
    float u1;
    float u2;

    t0 = *(int *)0xC2A9960;
    *(unsigned int *)0xC2A9960 = (t0 + 0x1);
    if ((int)(t0 + 0x1) < (int)0x78) {
        u1 = *(float *)0xC05CE48;
        *(float *)0xC2A98A8 = u1;
        *(float *)0xC2A98AC = u1;
        u2 = *(float *)0xC05CE50;
        nd_SprPut(0xC2A9898, 0x1F1, u2, (*(float *)0xC05CE54));
        nd_SprPut(0xC2A9898, 0x1F2, u2, (*(float *)0xC05CE5C));
        *(float *)0xC2A98A8 = 1.0f;
        *(float *)0xC2A98AC = 1.0f;
    }
}
