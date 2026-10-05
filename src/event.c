/* Reference C, not built: heapInit/heapAlloc/heapFree need the original compiler (docs/engine.md, "The compiler"). Range 0C0293C8-0C029748. */
/* The game's memory heap and event list (0x0C0293C8-0x0C029748).

   Heap: one block of RAM split into blocks with a size word before the payload and a tag after
   it (size + 4 while free, -(size + 4) in use); free blocks form a list and merge with free
   neighbours. Events: heap blocks in a doubly linked list, run once per frame in list order. An
   event can own more heap blocks (a chain from its first word), freed with it. */
#include "event.h"

#define PAYLOAD(b) ((char *)(b) + 4)

void heapInit(void *mem, unsigned int size)
{
    gEventList.nextRun = 0;
    gEventList.unk8 = 0;
    gEventList.tail = 0;
    gEventList.head = 0;
    size &= ~3;
    gHeap.free = mem;
    gHeap.start = mem;
    gHeap.end = (int *)((char *)mem + size - 4);
    ((HeapBlock *)mem)->size = size - 8;
    ((HeapBlock *)mem)->next = 0;
    ((HeapBlock *)mem)->prev = 0;
    *(int *)((char *)mem + size - 4) = size - 4;
}

void *heapAlloc(unsigned int size)
{
    HeapBlock *b;

    if (size < 8)
        size = 8;
    size = (size + 3) & ~3;
    b = gHeap.free;
    while (b) {
        if (b->size >= size) {
            if (b->size >= size + 16) {
                b->size -= size + 8;
                *(int *)(PAYLOAD(b) + b->size) = b->size + 4;
                b = (HeapBlock *)((char *)b + b->size + 8);
            } else {
                if (b->prev == 0)
                    gHeap.free = b->next;
                else
                    b->prev->next = b->next;
                if (b->next)
                    b->next->prev = b->prev;
                size = b->size;
            }
            b->size = -size;
            *(int *)(PAYLOAD(b) + size) = -4 - size;
            b->prev = 0;
            b = (HeapBlock *)PAYLOAD(b);
            break;
        }
        b = b->next;
    }
    return b;
}

void heapFree(void *p)
{
    HeapBlock *b, *n;
    int size, tag, nsize;

    if (p == 0)
        return;
    b = (HeapBlock *)((char *)p - 4);
    size = b->size;
    if (size < 0) {
        size = -size;
        if (b != gHeap.start) {
            tag = *(int *)((char *)b - 4);
            if (tag >= 0) {
                b = (HeapBlock *)((char *)b - tag - 4);
                if (b->prev == 0)
                    gHeap.free = b->next;
                else
                    b->prev->next = b->next;
                if (b->next)
                    b->next->prev = b->prev;
                size += tag + 4;
            }
        }
        if ((int *)((char *)b + 4 + size) != gHeap.end) {
            n = (HeapBlock *)((char *)b + 8 + size);
            nsize = n->size;
            if (nsize >= 0) {
                if (n->prev == 0)
                    gHeap.free = n->next;
                else
                    n->prev->next = n->next;
                if (n->next)
                    n->next->prev = n->prev;
                size += nsize + 8;
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

void eventFreeAll(void)
{
    Event *e, *next;
    void **a, **an;

    for (e = gEventList.head; e; e = next) {
        for (a = e->alloc; a; a = an) {
            an = *a;
            heapFree(a);
        }
        next = e->next;
        heapFree(e);
    }
    gEventList.nextRun = 0;
    gEventList.unk8 = 0;
    gEventList.tail = 0;
    gEventList.head = 0;
    gEventCount = 0;
    gEventAllocCount = 0;
}

Event *set_event(unsigned int size, EventFunc func)
{
    Event *e;

    if (size < 20)
        size = 20;
    if ((e = heapAlloc(size)) != 0) {
        if (gEventList.tail == 0)
            gEventList.head = e;
        else
            gEventList.tail->next = e;
        e->prev = gEventList.tail;
        e->next = 0;
        e->func = func;
        e->alloc = 0;
        e->name = str_set_event;
        gEventList.tail = e;
        gEventCount++;
    }
    return e;
}

Event *set_event_bf(unsigned int size, EventFunc func, Event *before)
{
    Event *e;

    if (size < 20)
        size = 20;
    if ((e = heapAlloc(size)) != 0) {
        e->next = before;
        if (before == gEventList.nextRun)
            gEventList.nextRun = e;
        if ((e->prev = before->prev) == 0)
            gEventList.head = e;
        else
            before->prev->next = e;
        before->prev = e;
        e->func = func;
        e->alloc = 0;
        e->name = str_set_event_bf;
        gEventCount++;
    }
    return e;
}

Event *set_event_next(unsigned int size, EventFunc func, Event *after)
{
    Event *e;

    if (size < 20)
        size = 20;
    if ((e = heapAlloc(size)) != 0) {
        e->prev = after;
        if (gEventList.unk8 == after)
            gEventList.nextRun = e;
        if ((e->next = after->next) == 0)
            gEventList.tail = e;
        else
            after->next->prev = e;
        after->next = e;
        e->func = func;
        e->alloc = 0;
        e->name = str_set_event_next;
        gEventCount++;
    }
    return e;
}

void eventKill(Event *e)
{
    void **a, **an;

    if (e == 0)
        return;
    if (e->next == 0)
        gEventList.tail = e->prev;
    else
        e->next->prev = e->prev;
    if (e->prev == 0)
        gEventList.head = e->next;
    else
        e->prev->next = e->next;
    if (e == gEventList.nextRun)
        gEventList.nextRun = e->next;
    for (a = e->alloc; a; a = an) {
        an = *a;
        heapFree(a);
        gEventAllocCount--;
    }
    heapFree(e);
    gEventCount--;
}

void eventRunAll(void)
{
    Event *e;

    gEventList.nextRun = gEventList.head;
    while ((e = gEventList.nextRun) != 0) {
        gEventList.nextRun = e->next;
        e->func(e);
    }
}

int eventCount(void)
{
    return gEventCount;
}

int eventAllocCount(void)
{
    return gEventAllocCount;
}
