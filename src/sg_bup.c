/* Shinobi library, SG_BUP (backup and its fibers): our own C, written from the disassembly. */

typedef struct {
    int created;
    char rest[3448];
} BuFbrServer;                                  /* 0xd7c bytes each */

extern BuFbrServer buFbrServers[2];
extern unsigned int gBuBlockTableA[4];
extern unsigned int gBuBlockTableB[4];

void buFbrDestroyServer(BuFbrServer *s);

/* CRC-16 style checksum (poly 0x1021), no masking: the running value is a full 32-bit int. */
int buCalcCRC(const signed char *p, unsigned int n)
{
    unsigned int i;
    int crc = 0;
    int bit;

    for (i = 0; i < n; i++) {
        crc ^= (int)p[i] << 8;
        for (bit = 0; bit < 8; bit++) {
            int top = crc & 0x8000;
            crc <<= 1;
            if (top)
                crc ^= 0x1021;
        }
    }
    return crc;
}

int buCalcBackupFileSize(unsigned int a, unsigned int b, int extra)
{
    unsigned int total;

    if (a == 0 || a > 3 || b > 3)
        return -256;
    total = gBuBlockTableA[a] + gBuBlockTableB[b] + extra + 128;
    return (total >> 9) + ((total & 0x1ff) ? 1 : 0);
}

void buFbrExit(void)
{
    int i;
    BuFbrServer *s = buFbrServers;

    for (i = 0; i < 2; i++, s++) {
        if (s->created)
            buFbrDestroyServer(s);
    }
}
