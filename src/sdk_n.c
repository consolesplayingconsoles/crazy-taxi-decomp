/* Backup library (bu*) entry points that start a file or disk operation: each checks the drive's state (-1 when
   busy), selects the operation (vmsfs_c_setfunc), fills its parameters (vmsfs_c_setparam: the drive, then the call's own
   arguments, the last three always 0) and returns 0. */

int vmsfs_c_getstate(int drive);
void vmsfs_c_setfunc(int drive, int func);
void vmsfs_c_setparam(int drive, int a, int b, int c, int d, int e, int f);
void vmsfs_c_setfname(int drive, int a, int b);

int buMount(int d)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 1);
    vmsfs_c_setparam(d, d, 0, 0, 0, 0, 0);
    return 0;
}

int buConnect(int d)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 18);
    vmsfs_c_setparam(d, d, 0, 0, 0, 0, 0);
    return 0;
}

/* h is a file handle: its drive is the word at +40. */
int buCloseFile(int *h)
{
    int d = h[10];

    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 4);
    vmsfs_c_setparam(d, (int)h, 1, 0, 0, 0, 0);
    return 0;
}

int buWriteFile(int *h, int a, int b)
{
    int d = h[10];

    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 6);
    vmsfs_c_setparam(d, (int)h, a, b, 0, 0, 0);
    return 0;
}

int buDeleteFile(int d, int name)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 7);
    vmsfs_c_setparam(d, d, name, 0, 0, 0, 0);
    vmsfs_c_setfname(d, name, name);
    return 0;
}

int buDeleteFileEx(int d, int a, int b)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 17);
    vmsfs_c_setparam(d, d, a, b, 0, 0, 0);
    return 0;
}

int buRenameFile(int d, int a, int b)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 8);
    vmsfs_c_setparam(d, d, a, b, 0, 0, 0);
    vmsfs_c_setfname(d, a, b);
    return 0;
}

int buReadDiskImage(int d, int x)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 15);
    vmsfs_c_setparam(d, d, x, 0, 0, 0, 0);
    return 0;
}

int buWriteDiskImage(int d, int x)
{
    if (vmsfs_c_getstate(d))
        return -1;
    vmsfs_c_setfunc(d, 16);
    vmsfs_c_setparam(d, d, x, 0, 0, 0, 0);
    return 0;
}
