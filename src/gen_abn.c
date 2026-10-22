/* Straight-line functions with calls and guards (batch gen_abn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c07fd80(int);
void FUN_0c171cae(int a4);

void FUN_0c171cae(int a4)
{
    FUN_0c07fd80((*(short *)((a4 + 0x6))));
    *(unsigned char *)(((0x60 + a4) + 0x0)) = (*(signed char *)((a4 + 0x5)));
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned int *)((a4 + 0x18)) = 0x0;
}
