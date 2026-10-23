/* Small library functions (batch v): the two frame-buffer queues' sort and collect, the vmsfs work area's device kind. */

void FBSortQueue(int *a, int *b);
int FBCompQueue(int *a, int *b, int *c, int *d);

#define QUEUE_A         ((int *)0x0C177FBC)
#define QUEUE_B         ((int *)0x0C177FD0)

int kmiFBSortQueue(void)
{
    FBSortQueue(QUEUE_A, QUEUE_A + 1);
    FBSortQueue(QUEUE_B, QUEUE_B + 1);
    FBSortQueue(QUEUE_A + 2, QUEUE_A + 3);
    FBSortQueue(QUEUE_B + 2, QUEUE_B + 3);
    return 0;
}

int kmiFBGarbageCollect(void)
{
    int r = FBCompQueue(QUEUE_A + 2, QUEUE_A + 3, QUEUE_A, QUEUE_A + 1);

    if (r == 0)
        r = FBCompQueue(QUEUE_B + 2, QUEUE_B + 3, QUEUE_B, QUEUE_B + 1);
    return r;
}

/* The device kind (by its id: 15, 33, 65, 122) as 0 to 3 in the work area; -256 for another id. */
int vmsfs_init_work_new(int id)
{
    int *p = *(int **)0x0C2EE98C;

    switch (id) {
    case 15:
        p[1] = 0;
        break;
    case 33:
        p[1] = 1;
        break;
    case 65:
        p[1] = 2;
        break;
    case 122:
        p[1] = 3;
        break;
    default:
        return -256;
    }
    return 0;
}

/* The C library's memmove: copies forward when d is below s, backward otherwise; returns d. */
char *memmove(char *d, char *s, unsigned int n)
{
    unsigned int i;

    if (d == s)
        return d;
    if (d < s) {
        for (i = 0; i < n; i++)
            d[i] = s[i];
    } else {
        for (i = 0; i < n; i++)
            d[n - 1 - i] = s[n - 1 - i];
    }
    return d;
}

/* The C library's strncmp: the difference of the last bytes compared. */
int strncmp(unsigned char *a, unsigned char *b, unsigned int n)
{
    unsigned int i;

    if (!n)
        return 0;
    for (i = 0; i < n; i++) {
        if (*a++ != *b++)
            break;
        if (a[-1] == 0)
            break;
    }
    return a[-1] - b[-1];
}
