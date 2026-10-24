/* LoadBackupData: read the save file from the memory card in a drive. Written by hand from the Dreamcast code: it returns 0, the
   backup library's error code, or 0xFFFF0000 when the file is not the save's 23 blocks; the caller warns on anything but 0 (the
   generated form had no result, so the caller read a leftover register and warned that the load failed). */

typedef struct { char b[0x25B0]; } SaveData;

#define SAVE_NAME       0x0C09DB4C
#define LOAD_BUF        0x0C28CAA0
#define SAVE_COPY       ((SaveData *)0x0C28F8A0)
#define TAXI_BACKUP     ((SaveData *)0x0C28A4E8)
#define SAVE_TIME       0x0C28CA98

int buGetFileSize(int, int);
int buLoadFile(int, int, int, int);
int buStat(int);
int buGetLastError(int);
int buAnalyzeBackupFileImage(int, int);
int buGetFileInfo(int, int, int);
int memmove(int, int, int);

/* manual: written by hand from the Dreamcast code; tools must not regenerate it */
int LoadBackupData(int drive)
{
    int frame[29];                                              /* the file info at +0, the analysed image at +20 */
    int n, e;

    n = buGetFileSize(drive, SAVE_NAME);
    if (n != 23)
        return 0xFFFF0000;
    if ((e = buLoadFile(drive, SAVE_NAME, LOAD_BUF, n)) != 0)
        return e;
    while (buStat(drive) == -1)                                 /* busy: the load runs in the library's server */
        ;
    if ((e = buGetLastError(drive)) != 0)
        return e;
    if ((e = buAnalyzeBackupFileImage((int)frame + 20, LOAD_BUF)) != 0)
        return e;
    memmove((int)SAVE_COPY, frame[27], 0x25B0);                 /* the image's data pointer (+108) */
    *TAXI_BACKUP = *SAVE_COPY;
    if ((e = buGetFileInfo(drive, SAVE_NAME, (int)frame)) != 0)
        return e;
    memmove(SAVE_TIME, (int)frame + 10, 8);
    return 0;
}
