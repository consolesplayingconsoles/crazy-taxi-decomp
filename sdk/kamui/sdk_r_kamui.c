/* Small library functions (batch r): shifts of a big number by one bit, discarding the vertex buffer. */

int kmiFBfreeEx(int a, int b);

/* Shifts the n-byte number at b (most significant byte first) left by one bit; 1 when a bit was shifted out. */

/* The same to the right: a bit shifted out comes back as 1. */

int kmDiscardVertexBuffer(void)
{
    int r = kmiFBfreeEx(*(int *)0x0C2B8D20, *(int *)0x0C2B8D24);
    int *p;

    if (r)
        return r;
    for (p = (int *)0x0C2B8D28; p < (int *)(0x0C2B8D28 + 20); p++)
        *p = 0;
    return 0;
}
