/* Small library functions (batch y): the vmsfs per-drive callback fields, a modifier address check, a driver keyboard enable. */

/* Sets the same field of all 8 drive slots (128 bytes each from 0C2EC578); returns the field's offset. */
int vmsfs_c_setcompletecallback(int f)
{
    char *e;

    for (e = (char *)0x0C2EC578; e < (char *)0x0C2EC578 + 1024; e += 128)
        *(int *)(e + 116) = f;
    return 116;
}

int vmsfs_c_setprogresscallback(int f)
{
    char *e;

    for (e = (char *)0x0C2EC578; e < (char *)0x0C2EC578 + 1024; e += 128)
        *(int *)(e + 120) = f;
    return 120;
}

int vmsfs_c_setcallbackparam(int f)
{
    char *e;

    for (e = (char *)0x0C2EC578; e < (char *)0x0C2EC578 + 1024; e += 128)
        *(int *)(e + 124) = f;
    return 124;
}

/* The common modifier's two addresses, which must be 32-byte aligned (7 when not); b = 0 turns it off. */

int mpdrv_sdckbenable(int x)
{
    char *p = *(char **)0x0C2FA538;

    *(int *)(p + 0xFCC) += *(int *)(p + 0xFD8) * 4;
    **(int **)(*(char **)0x0C2FA538 + 0xFCC) = (x << 16) | 0x200;
    *(int *)(*(char **)0x0C2FA538 + 0xFD8) = 1;
    *(int *)(*(char **)0x0C2FA538 + 0xFDC) += 4;
    return 0;
}
