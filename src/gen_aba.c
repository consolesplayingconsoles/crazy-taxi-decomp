/* Straight-line functions with calls and guards (batch gen_aba): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memset(int, int, int);
void FUN_0c167910(void);

void FUN_0c167910(void)
{
    if ((*(int *)0xC178624) == 0) {
        memset(0xC2F4C9C, 0x0, 0x180);
    }
    *(unsigned int *)0xC178624 = ((*(int *)0xC178624) + 0x1);
}
