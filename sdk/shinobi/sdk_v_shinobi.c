/* Small library functions (batch v): the two frame-buffer queues' sort and collect, the vmsfs work area's device kind. */

void FBSortQueue(int *a, int *b);
int FBCompQueue(int *a, int *b, int *c, int *d);

#define QUEUE_A         ((int *)0x0C177FBC)
#define QUEUE_B         ((int *)0x0C177FD0)


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

/* The C library's strncmp: the difference of the last bytes compared. */
