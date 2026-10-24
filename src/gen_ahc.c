/* Straight-line functions with calls and guards (batch gen_ahc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int, int);
int Result_Face_Put(int a4, int a5, int a6);

int Result_Face_Put(int a4, int a5, int a6)
{
    if ((int)(*(int *)0xC2A96F4) > (int)0x2A) {
        *(unsigned int *)0xC2A96F8 = (*(int *)((((*(int *)0xC2A96F0) << 2) + 0xC0D0D48)));
        *(unsigned int *)0xC2A972C = 0xA;
        *(float *)0xC2A96FC = 528.0f;
        *(float *)0xC2A9700 = (float)((*(int *)0xC2A9748) + 0xBE);
        *(float *)0xC2A9708 = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A970C = ((*(float *)0xC2A9758) + 1.0f);
        *(float *)0xC2A9714 = 0.0f;
        *(float *)0xC2A971C = 1.0f;
        *(unsigned int *)0xC2A9720 = 0x0;
        return nlSprPut(0xC2A96F8, 0xC2A9758, a6);
    }
    return 0xC2A96F4;
}
