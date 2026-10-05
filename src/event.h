/* Heap and event list (src/event.c). */

typedef struct HeapBlock {
    int size;                   /* payload bytes; negative while in use */
    struct HeapBlock *prev;     /* free list, only while free */
    struct HeapBlock *next;
} HeapBlock;

typedef struct Heap {
    HeapBlock *start;
    int *end;                   /* the last block's tag */
    HeapBlock *free;
} Heap;

typedef struct Event Event;
typedef void (*EventFunc)(Event *);

struct Event {
    void **alloc;               /* extra heap blocks, chained through their first word */
    Event *prev;
    Event *next;
    EventFunc func;             /* called once per frame by eventRunAll */
    const char *name;
};

typedef struct EventList {
    Event *head;
    Event *tail;
    Event *unk8;
    Event *nextRun;             /* the next event eventRunAll calls */
} EventList;

extern EventList gEventList;
extern Heap gHeap;
extern int gEventCount;
extern int gEventAllocCount;
extern const char str_set_event[];
extern const char str_set_event_bf[];
extern const char str_set_event_next[];

void heapInit(void *mem, unsigned int size);
void *heapAlloc(unsigned int size);
void heapFree(void *p);
void eventFreeAll(void);
Event *set_event(unsigned int size, EventFunc func);
Event *set_event_bf(unsigned int size, EventFunc func, Event *before);
Event *set_event_next(unsigned int size, EventFunc func, Event *after);
void eventKill(Event *e);
void eventRunAll(void);
int eventCount(void);
int eventAllocCount(void);
