/* Small library functions (batch p): Kamui background plane defaults, the G2 DMA protect register, RNA slot setup and
   allocation, a texture address mapping, a vertex table writer. */

/* The background plane's parameter words (floats given as their bits: 2.0, 260.0, 1e-5, 150.0, 560.0) in the table at
   0C2EA724, and the sort flags. */

/* The G2 DMA protection window: the two addresses (bits 20-26) packed into the register and its copy. */
int syG2DmaSetProtect(unsigned int a, unsigned int b)
{
    unsigned int v;

    a &= 0x07F00000;
    b &= 0x07F00000;
    v = ((a >> 20) << 8) | (b >> 20) | 0x46590000;
    *(unsigned int *)0xA05F78BC = v;
    *(unsigned int *)0x0C1786FC = v;
    return 0;
}


/* The first free slot (first byte 0) of the 8 RNA slots of 144 bytes, or 0. */

/* A texture memory address as the linear address Kamui uses: the 32-bit and 64-bit areas interleaved. */

/* Writes a polygon word into the vertex table at n (a whole word with the flag at 0x400000, else split into two halves, the
   top half of each kept); returns the new count. */
