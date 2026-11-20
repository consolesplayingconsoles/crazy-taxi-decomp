/* Small loops the generator skips (backward branches): fills, copies, polling loops and table scans. */

extern int buExit(void);
extern void ADXSTMF_ExecHndl(void *stm);
extern int vmsio_isready(int drive);
extern int pdGetPeripheral(int port);
extern int ndPuru2Stop(int port);

/* Fill n words at dst with val; returns n. */

/* Copy n bytes; the source comes first. */

/* Retry buExit until it reports success (0). */

/* Copy a drive's 32-byte volume label into its 128-byte work record (at +76). */

/* Run every open ADX stream handle (32 handles of 100 bytes; byte 0 == 1 means in use). */
void ADXSTM_ExecServer(void)
{
    unsigned char *p = (unsigned char *)0x0C2F53DC;
    unsigned char *end = p + 3200;

    do {
        if (*(signed char *)p == 1) {
            ADXSTMF_ExecHndl(p);
        }
        p += 100;
    } while (p < end);
}

/* Store 1/z in the four 20-byte records' z slot (+8); z <= 0 leaves them alone. */

/* tbl[0] is a bit mask (bit 31 first); each set bit owns the next word after it. Returns the word
   owned by bit `dev`, or 0 when that bit is not set. */

/* Bit i set when VMU drive i (0-7) is ready. */

/* Puru Puru (vibration) reset: in vibration mode 2 with the pack present (bit 8), restart it until
   ndPuru2Stop takes; then clear the pending flag. */

extern int syG2DmaSuspend(void *ch);
extern int syG2DmaResume(void *ch);

/* Suspend the four G2 DMA channels (52-byte records after a 4-byte header) and note it. */

/* Resume the four G2 DMA channels and clear the suspended note. */
