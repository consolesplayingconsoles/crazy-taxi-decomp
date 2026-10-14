/* Shinobi library, SG_MMU (cache control): our own C, written from the disassembly. */

/* Updates the low bits of one entry of the cache control array (64 entries, 256 bytes apart). */
void syMmuCacheCtrl(unsigned int index, int value)
{
    volatile unsigned int *e;

    if (index >= 64)
        return;
    e = (volatile unsigned int *)(0xf7000000u + (index << 8));
    *e = (*e & ~9u) | (unsigned int)(signed char)value;
}
