/* Straight-line functions with calls and guards (batch gen_tz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memmove(int, int, int);
int memset(int, int, int);
int saveBufferInit(int a4);

int saveBufferInit(int a4)
{
    memmove(a4, 0xC09DB48, 0x4);
    *(unsigned int *)((a4 + 0x4)) = 0x0;
    return memset((a4 + 0x8), 0xFFFFFFFF, 0x780);
}
