/* Shinobi library, SG_SYHW (hardware set-up): our own C, written from the disassembly. */

#define get_imask()   _builtin_get_imask()       /* SHC built-ins: the interrupt mask in SR */
#define set_imask(m)  _builtin_set_imask(m)

void sySqFinish(void);
void syHwCacheFinish(void);

void syHwFinish(void)
{
    int mask = get_imask();

    set_imask(15);
    sySqFinish();
    syHwCacheFinish();
    set_imask(mask);
}
