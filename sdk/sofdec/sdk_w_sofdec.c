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


