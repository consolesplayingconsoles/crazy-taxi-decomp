/* VMU file system (vmsfs): name fields, file info, FAT walks. Drive work records are 128 bytes at
   0C2EC578 (names) and 328 bytes at 0C2EE990 (FAT state). */

extern int vmsfs_write_retry(int drive, int block, int buf);
extern int set_fat(int drive, int block, int value);
extern int search_fat_backward(int drive, int value, int lo, int hi);
extern int get_fat(int drive, int block);
extern int vmsfs_fread1(int *fd, char *buf);
extern int vmsfs_read_retry(int drive, int block, char *buf);

/* Set a drive's file name and extension (up to 12 bytes each, stopping at a 0). */
void vmsfs_c_setfname(int drive, char *name, char *ext)
{
    char *rec = (char *)0x0C2EC578 + drive * 128;
    char *p;
    int i;

    for (p = rec + 44; p < rec + 57; p++) {
        *p = 0;
    }
    for (p = rec + 60; p < rec + 73; p++) {
        *p = 0;
    }
    for (i = 0; i < 12 && name[i] != 0; i++) {
        rec[44 + i] = name[i];
    }
    for (i = 0; i < 12 && ext[i] != 0; i++) {
        rec[60 + i] = ext[i];
    }
}

/* Write a drive's FAT blocks; a failed write marks its block 0xFFFF and returns the error,
   a good one marks it 0xFFFA. */
int write_fat_1(int drive)
{
    char *rec = (char *)0x0C2EE990 + drive * 328;
    int n = *(int *)(*(int *)(rec + 28) + 16);
    int i;
    int r;

    for (i = 0; i < n; i++) {
        r = vmsfs_write_retry(drive, *(int *)(*(int *)(rec + 28) + 12) + i, *(int *)(rec + 36) + i * 512);
        if (r < 0) {
            set_fat(drive, *(int *)(*(int *)(rec + 28) + 12) + i, 0xFFFF);
            return r;
        }
        set_fat(drive, *(int *)(*(int *)(rec + 28) + 12) + i, 0xFFFA);
    }
    return 0;
}

/* Find the top of the highest run of n free (0xFFFC) FAT blocks below the save area; -1 if none. */
int search_subst_fat_top(int drive)
{
    char *info = *(char **)((char *)0x0C2EE990 + drive * 328 + 28);
    int lo = *(int *)(info + 28);
    int hi = *(int *)(info + 32) + lo - 1;
    int n = *(int *)(info + 16);
    int found;
    int i;

    for (;;) {
        found = search_fat_backward(drive, 0xFFFC, lo, hi);
        if (found < 0) {
            return -1;
        }
        for (i = 0; i < n; i++) {
            if ((unsigned short)get_fat(drive, found - i) != 0xFFFC) {
                hi = found - i - 1;
                break;
            }
        }
        if (i == n) {
            return found - n + 1;
        }
    }
}

/* Read n 512-byte blocks of an open file; -256 for no file, -255 when the drive is not ready. */
int vmsfs_fread(int *fd, char *buf, int n)
{
    char *rec;
    int i;
    int r;

    if (fd == 0) {
        return -256;
    }
    if (*((char *)0x0C2EE990 + fd[10] * 328 + 2) == 0) {
        return -255;
    }
    rec = (char *)0x0C2EE990 + fd[10] * 328;
    *(int *)(rec + 48) = 1;
    *(int *)(rec + 52) = n;
    for (i = 0; i < n; i++) {
        r = vmsfs_fread1(fd, buf);
        if (r < 0) {
            return r;
        }
        buf += 512;
    }
    return 0;
}

/* Read a drive's directory blocks into its buffer, following the FAT chain until 0xFFFA. */
int read_dir(int drive)
{
    char *rec = (char *)0x0C2EE990 + drive * 328;
    int *info = *(int **)(rec + 28);
    int n = info[6];
    int blk = info[5];
    char *buf = *(char **)(rec + 40);
    int i;
    int r;

    for (i = 0; i < n; i++) {
        r = vmsfs_read_retry(drive, (unsigned short)blk, buf);
        if (r < 0) {
            return r;
        }
        r = get_fat(drive, (unsigned short)blk);
        if ((unsigned short)r == 0xFFFA) {
            break;
        }
        blk = r;
        buf += 512;
    }
    return 0;
}

extern int direntry(int drive, int i);
extern int check_file_correct(int drive, char *name);
extern int direntry_dirty(int drive, int i);
extern void *memset(void *p, int c, unsigned int n);
extern int search_dir(int drive, char *name, int *info);

/* Delete a file: free its FAT chain (each block marked 0xFFFC), clear its directory entry and mark
   the entry dirty. -251 when it is not found. */
int clear_file(int drive, char *name)
{
    int info[11];
    int i;
    int e;
    int idx;
    int blk;
    int next;

    idx = search_dir(drive, name, info);
    if (idx < 0) {
        return -251;
    }
    e = direntry(drive, idx);
    if (check_file_correct(drive, name) == 0) {
        blk = info[3];
        for (i = 0; i < info[10]; i++) {
            next = (unsigned short)get_fat(drive, blk);
            set_fat(drive, blk, 0xFFFC);
            blk = next;
        }
    }
    memset((void *)e, 0, 32);
    direntry_dirty(drive, idx);
    return 0;
}
