/* Functions whose control flow the generator cannot follow (an unconditional jump over a block). */

extern void ADXSTM_Stop(int *h);
extern void gdFsClose(int fd);
extern void ADXSTMF_Destroy(int *h);

/* Stop the stream, close its file if it has one, then release the handle. */

/* Zero the root z (+8) of each of the motion's n frames; a frame is (2 * (nodes + 1) + 1) * 12 bytes. */

/* First empty (name byte 0) 32-byte entry in a drive's directory buffer, or -1. */

/* CRC-16 (CCITT table at 0C176FF4, initial 0xFFFF, inverted) of n bytes. */

extern void kmfSetFatalErrorCallback(void *f);

/* Install one of the two fatal error handlers (0C075560 when on, 0C0754D0 when off). */
void nlSetFatalErrorMode(int on)
{
    kmfSetFatalErrorCallback(on ? (void *)0x0C075560 : (void *)0x0C0754D0);
}

extern void set_file_info(unsigned char *dir, void *info);
extern int search_fat(int drive, int value);
extern int check_fat_xross(int drive, int block);
extern int set_fat(int drive, int block, int value);

/* The drive's executable (directory entry type 0xCC): fills info and returns its index, or -1. */

/* A free FAT block whose chain does not cross a used one; each crossing block found on the way is
   marked 0xFFFA. -1 when none is left. */
