/* Small library functions (batch w): the sound buffer slot allocator, a slot release, a DMA status clear and the colour
   clamp flag of the polygon context. */

/* The first free sound buffer (byte at +4 is 0) of the 8 of 104 bytes, or 0. */

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


