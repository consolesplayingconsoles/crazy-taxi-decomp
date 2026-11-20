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

/* The C library's memmove: copies forward when d is below s, backward otherwise; returns d. */

/* The C library's strncmp: the difference of the last bytes compared. */
