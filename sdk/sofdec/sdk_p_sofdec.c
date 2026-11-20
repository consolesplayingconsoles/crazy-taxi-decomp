/* Small library functions (batch p): Kamui background plane defaults, the G2 DMA protect register, RNA slot setup and
   allocation, a texture address mapping, a vertex table writer. */

/* The background plane's parameter words (floats given as their bits: 2.0, 260.0, 1e-5, 150.0, 560.0) in the table at
   0C2EA724, and the sort flags. */

/* The G2 DMA protection window: the two addresses (bits 20-26) packed into the register and its copy. */

int mwlRnaSetInitMember(char *p)
{
    p[1] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    *(int *)(p + 52) = 0;
    *(int *)(p + 44) = 0;
    *(int *)(p + 48) = 0;
    *(int *)(p + 64) = 0x2000;
    *(int *)(p + 68) = 0x2000;
    *(int *)(p + 72) = 0;
    *(int *)(p + 96) = 0;
    *(int *)(p + 108) = -1;
    *(int *)(p + 112) = 0;
    *(int *)(p + 116) = 0;
    *(int *)(p + 120) = 0;
    *(int *)(p + 124) = 0;
    *(int *)(p + 128) = 0;
    *(int *)(p + 140) = 0;
    p[7] = 0;
    *(int *)(p + 136) = 0;
    return 136;
}

/* The first free slot (first byte 0) of the 8 RNA slots of 144 bytes, or 0. */
char *mwlRnaAlloc(void)
{
    char *p;

    for (p = (char *)0x0C2F605C; p < (char *)0x0C2F605C + 1152; p += 144)
        if (!*p)
            return p;
    return 0;
}

/* A texture memory address as the linear address Kamui uses: the 32-bit and 64-bit areas interleaved. */

/* Writes a polygon word into the vertex table at n (a whole word with the flag at 0x400000, else split into two halves, the
   top half of each kept); returns the new count. */
