/* Shinobi library, SG_LCD (the VMU screen): our own C, written from the disassembly. */

extern unsigned char pdVmsLcdSlotTable[];
extern char pdVmsLcdBufs[];

extern int  pdVmsLcdIsReady(int dev);
extern void pdVmsLcdBlt(void *buf, void *src, int flag);
extern int  kdSetBlockWrite(int dev, int a, int b, int c, int d, void *buf, int len);

int pdVmsLcdWrite(int dev, void *src, int flag)
{
    unsigned int idx;
    char *buf;

    if (!pdVmsLcdIsReady(dev))
        return -2;
    idx = pdVmsLcdSlotTable[dev];
    buf = pdVmsLcdBufs + idx * 192;
    pdVmsLcdBlt(buf, src, flag);
    if (kdSetBlockWrite(dev, 4, 0, 0, 0, buf, 48) < 0)
        return -1;
    return 0;
}

int pdVmsLcdWrite1(int dev, void *data)
{
    if (!pdVmsLcdIsReady(dev))
        return -2;
    if (kdSetBlockWrite(dev, 4, 0, 0, 0, data, 48) < 0)
        return -1;
    return 0;
}
