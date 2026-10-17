/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int, int, int, int, float);

void FUN_0c0543fc(int a4, int a5, int a6, int a7)
{
    *(float *)0xC2A7F80 = 158.0f;
    *(float *)0xC2A7F84 = 96.0f;
    *(unsigned int *)0xC2A7FB0 = 0x200B;
    *(unsigned int *)0xC2A7F7C = 0xF;
    *(float *)0xC2A7F94 = 0.0f;
    *(float *)0xC2A7F9C = 1.0f;
    *(float *)0xC2A7F98 = 0.0f;
    *(float *)0xC2A7FA0 = 1.0f;
    *(float *)0xC2A7F8C = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
    *(unsigned int *)0xC2A7FA4 = 0x0;
    nlSprPut(0xC2A7F7C, a5, a6, a7, 0.0f);
    *(float *)0xC2A7F8C = 1.0f;
    *(float *)0xC2A7F90 = 1.0f;
}
