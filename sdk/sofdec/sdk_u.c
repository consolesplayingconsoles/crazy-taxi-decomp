/* Small library functions (batch u): SJ buffer destroys, the SJ decoder clears, the stream start. */

void *memset(void *p, int c, unsigned int n);
int ADXSTM_Tell(int *h);

void ADXERR_Init(void)
{
    memset((void *)0x0C2F4E1C, 0, 256);
    *(int *)0x0C178630 = 0;
    *(int *)0x0C178634 = 0;
}

void ADXERR_Finish(void)
{
    memset((void *)0x0C2F4E1C, 0, 256);
    *(int *)0x0C178630 = 0;
    *(int *)0x0C178634 = 0;
}

int ADXSTM_Start(int *h)
{
    if (h[5] == 0) {
        h[13] = 0;
        h[3] = 0;
        ((char *)h)[1] = 3;
    } else {
        ((char *)h)[1] = 2;
        h[13] = 0;
        h[3] = ADXSTM_Tell(h);
    }
    return 1;
}

void SJMEM_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 36);
        h[1] = 0;
    }
}

void SJRBF_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 48);
        h[1] = 0;
    }
}

void SJUNI_Destroy(int *h)
{
    if (h) {
        memset(h, 0, 48);
        ((char *)h)[4] = 0;
    }
}
