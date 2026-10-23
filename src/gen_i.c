/* Straight-line functions with calls and guards (batch gen_i): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int Voice_Request(int, int, int, int);
int Voice_ShutUp(int);
int Chat_DamnIt(int a4);

int Chat_DamnIt(int a4)
{
    int t1;
    int t2;
    int t5;

    t1 = (int)(((unsigned int)(*(int *)(((a4 + 0x148) + 0x0))) >> 29) & 0x7);
    t2 = *(signed char *)0xC13EB90;
    Voice_ShutUp(0x3);
    t5 = 0xF;
    if (((*(signed char *)((a4 + 0x14A))) & 16) != 0) {
        t5 = 0xFFFFFFF1;
    }
    return Voice_Request((((unsigned char)((((t1 << 1) + t1) << 2) << 2) + 0xC0D4370) + (unsigned char)((((t2 & 0x1) << 1) + (t2 & 0x1)) << 2)), 0x3, 0x64, t5);
}
