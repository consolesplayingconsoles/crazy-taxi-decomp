/* Straight-line functions with calls and guards (batch gen_aka): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

#pragma inline_asm(iaMovca)
static void iaMovca(int v, void *p)
{
    MOV R4,R0
    .DATA.W H'05C3
}
int FUN_0c14f408(int a4, int a5);

int FUN_0c14f408(int a4, int a5)
{
    iaMovca(a5, (void *)a4);
    return a5;
}
