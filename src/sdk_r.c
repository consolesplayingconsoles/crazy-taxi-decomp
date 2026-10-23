/* Small library functions (batch r): shifts of a big number by one bit, discarding the vertex buffer. */

int kmiFBfreeEx(int a, int b);

/* Shifts the n-byte number at b (most significant byte first) left by one bit; 1 when a bit was shifted out. */
int _lsft(unsigned char *b, int n)
{
    int i = n - 1;
    unsigned char *p = b + i;
    int carry = 0;
    int hi;

    while (i >= 0) {
        hi = *p & 0x80;
        *p = *p << 1;
        if (carry)
            *p |= 1;
        carry = hi;
        i--;
        p--;
    }
    return carry != 0;
}

/* The same to the right: a bit shifted out comes back as 1. */
int _rsft(unsigned char *b, int n)
{
    unsigned char *p = b;
    int carry = 0;
    int i = 0;
    int lo;

    if (n > 0) {
        do {
            lo = *p & 1;
            *p = *p >> 1;
            if (carry)
                *p |= 0x80;
            i++;
            carry = lo;
            p++;
        } while (i < n);
    }
    return carry;
}

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
