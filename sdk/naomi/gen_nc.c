/* Straight-line functions with calls and guards (batch gen_nc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmProcessVertexRenderState(int);
int nlSetVertexMode(int a4);

int nlSetVertexMode(int a4)
{
    *(unsigned int *)(((*(int *)0xC2B2FC8) + 0x0)) = 0x600608;
    *(unsigned int *)(((*(int *)0xC2B2FC8) + 0x8)) = (*(int *)((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2B2FC8) + 0xC)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x4) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2B2FC8) + 0x20)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x8) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2B2FC8) + 0x44)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0xC) + 0x0)));
    *(unsigned int *)(((*(int *)0xC2B2FC8) + 0x40)) = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x10) + 0x0)));
    *(unsigned int *)0xC2AEDA4 = (*(int *)((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x0)));
    *(unsigned int *)0xC2AEDA8 = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x4) + 0x0)));
    *(unsigned int *)0xC2AEDAC = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x8) + 0x0)));
    *(unsigned int *)0xC2AEDB0 = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0xC) + 0x0)));
    *(unsigned int *)0xC2AEDB4 = (*(int *)(((((((a4 << 2) + a4) << 2) + 0xC0D63EC) + 0x10) + 0x0)));
    return kmProcessVertexRenderState((*(int *)0xC2B2FC8));
}
