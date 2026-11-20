/* Straight-line functions with calls and guards (batch gen_sl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmiReadRegister(int);
void kmGetGunTriggerPos(int a4, int a5);

void kmGetGunTriggerPos(int a4, int a5)
{
    int t0;

    t0 = kmiReadRegister(0xC4);
    *(unsigned int *)((a4 + 0x0)) = (t0 & 0x3FF);
    *(unsigned int *)((a5 + 0x0)) = (((unsigned int)t0 >> 16) & 0x3FF);
}
