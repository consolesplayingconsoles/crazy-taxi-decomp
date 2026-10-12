/* The NAOMI library's heap (nlInitHeapMemory, nlMalloc, nlFree): one block of memory, first fit.
   Every block is a size word, the payload and a footer word: the size counts the payload, the
   footer holds size + 4; both are negative while the block is in use. A free block keeps its
   list links in the first two payload words. nlMalloc splits a big enough free block from its
   end; nlFree merges with free neighbours on both sides and puts the result first in the list. */

typedef struct HeapBlock {
    int size;                   /* payload bytes; negative while in use */
    struct HeapBlock *prev;     /* free list (in use: prev is 0, the payload starts here) */
    struct HeapBlock *next;
} HeapBlock;

typedef struct {
    HeapBlock *start;           /* the first block */
    char *end;                  /* the last block's footer */
    HeapBlock *free;            /* the free list */
} Heap;

extern Heap gHeap;
extern int gEventList[4];

#define FOOTER(b) (*(int *)((char *)(b) + 4 + (b)->size))

void nlInitHeapMemory(void *base, unsigned int size)
{
    HeapBlock *b = (HeapBlock *)base;

    gEventList[3] = 0;
    gEventList[2] = 0;
    gEventList[1] = 0;
    gEventList[0] = 0;
    size &= ~3;
    gHeap.free = b;
    gHeap.start = b;
    gHeap.end = (char *)b + size - 4;
    b->size = size - 8;
    b->next = 0;
    b->prev = 0;
    *(int *)((char *)b + size - 4) = size - 4;
}

static void unlink(HeapBlock *b)
{
    if (b->prev == 0)
        gHeap.free = b->next;
    else
        b->prev->next = b->next;
    if (b->next)
        b->next->prev = b->prev;
}

void *nlMalloc(unsigned int n)
{
    HeapBlock *p, *q;

    if (n < 8)
        n = 8;
    n = (n + 3) & ~3;
    for (p = gHeap.free; p; p = p->next) {
        if ((unsigned int)p->size < n)
            continue;
        if ((unsigned int)p->size >= n + 16) {      /* split: the new block is the tail */
            p->size -= n + 8;
            FOOTER(p) = p->size + 4;
            q = (HeapBlock *)((char *)p + p->size + 8);
        } else {                                    /* the whole block */
            unlink(p);
            n = p->size;
            q = p;
        }
        q->size = -(int)n;
        *(int *)((char *)q + 4 + n) = -4 - (int)n;
        q->prev = 0;
        return &q->prev;
    }
    return 0;
}

void nlFree(void *ptr)
{
    HeapBlock *b, *n;
    int size, prev;

    if (!ptr)
        return;
    b = (HeapBlock *)((char *)ptr - 4);
    size = b->size;
    if (size < 0) {                                 /* a block freed twice goes in the list twice */
        size = -size;
        if (b != gHeap.start) {
            prev = *(int *)((char *)b - 4);         /* the previous block's footer */
            if (prev >= 0) {
                b = (HeapBlock *)((char *)b - prev - 4);
                unlink(b);
                size += prev + 4;
            }
        }
        if ((char *)b + 4 + size != gHeap.end) {
            n = (HeapBlock *)((char *)b + 8 + size);
            if (n->size >= 0) {
                unlink(n);
                size += n->size + 8;
            }
        }
    }
    b->size = size;
    *(int *)((char *)b + 4 + size) = size + 4;
    b->prev = 0;
    b->next = gHeap.free;
    if (gHeap.free)
        gHeap.free->prev = b;
    gHeap.free = b;
}
