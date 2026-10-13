/* The NAOMI library's event list (nlInitEvent ... nlExecuteEvent), under the names functions.txt gives them. Range 0C029542-0C029748. */
#include "event.h"

void *nlMalloc(unsigned int size);
void nlFree(void *p);

void nlInitEvent(void)
{
    Event *e, *next;
    void **a, **an;

    for (e = gEventList.head; e; e = next) {
        for (a = e->alloc; a; a = an) {
            an = *a;
            nlFree(a);
        }
        next = e->next;
        nlFree(e);
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
    if ((e = nlMalloc(size)) != 0) {
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

Event *nlSetEventBefore(unsigned int size, EventFunc func, Event *before)
{
    Event *e;

    if (size < 20)
        size = 20;
    if ((e = nlMalloc(size)) != 0) {
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

Event *nlSetEventNext(unsigned int size, EventFunc func, Event *after)
{
    Event *e;

    if (size < 20)
        size = 20;
    if ((e = nlMalloc(size)) != 0) {
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

void nlCloseEvent(Event *e)
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
        nlFree(a);
        gEventAllocCount--;
    }
    nlFree(e);
    gEventCount--;
}

void nlExecuteEvent(void)
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
