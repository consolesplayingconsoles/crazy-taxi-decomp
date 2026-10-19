/* Reconstructed: the Shinobi backup library's private header (sg_bup2.h) is not in the supplied sources. Only what the
   sources use and the game's code shows. Values and layouts are checked by the byte comparison in tools/sdk_source.py. */
#ifndef _SG_BUP2_H_
#define _SG_BUP2_H_

#define BUD_ERR_NO_DEVICE   0xffffff02
#define BUD_ERR_NOTMOUNTED  0xffffff82
#define BUD_ERR_UNMOUNT     0xffffff84
#define BUD_ERR_READ_ERROR  0xffffff42

typedef struct {
    char isOpen;                /* +0 */
    unsigned char copyflag;     /* +1 */
    unsigned short hdrofs;      /* +2 */
    long open_mode;             /* +4 */
    char fname[16];             /* +8 */
    char date_time[8];          /* +24 */
    long fentry_ofs;            /* +32 */
    long open_num;              /* +36 */
    long drive;                 /* +40 */
    long type;                  /* +44 */
    long write_block;           /* +48 */
    long rest_block;            /* +52 */
    long start_fat;             /* +56 */
    long prev_fat;              /* +60 */
    long next_fat;              /* +64 */
} BUS_FILE;
typedef BUS_FILE* BUFILE;

#endif
