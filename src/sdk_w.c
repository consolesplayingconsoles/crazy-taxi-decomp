/* Small library functions (batch w): the sound buffer slot allocator, a slot release, a DMA status clear and the colour
   clamp flag of the polygon context. */

/* The first free sound buffer (byte at +4 is 0) of the 8 of 104 bytes, or 0. */
char *mwlSbAlloc(void)
{
    char *p;

    for (p = (char *)0x0C2FAC14; p < (char *)0x0C2FAC14 + 832; p += 104)
        if (!p[4])
            return p;
    return 0;
}

/* Releases voice x from the 9-slot table (and clears its word at +280): 280 when it was found, else 9. */
int psgFreeIpBuff(int x)
{
    int *t = (int *)0x0C2AD594;
    int i;

    for (i = 0; i < 9; i++) {
        if (t[i] == x) {
            t[i] = 0;
            *(int *)(x + 280) = 0;
            return 280;
        }
    }
    return 9;
}

int kmiErrorISR02(void)
{
    *(volatile int *)0xA05F6908 = 2;
    if (*(int *)0x0C2F91FC == 0)
        *(int *)0x0C2EA930 |= 16;
    *(int *)0x0C2F91FC = 0;
    return 0;
}

int kmChangeContextColorClamp(int on)
{
    int *ctx = (int *)0x0C2EAB9C;

    if (on)
        ctx[5] |= 0x00200000;
    else
        ctx[5] &= 0xFFDFFFFF;
    ((int *)0x0C178304)[2] = ctx[5];
    return 0;
}
