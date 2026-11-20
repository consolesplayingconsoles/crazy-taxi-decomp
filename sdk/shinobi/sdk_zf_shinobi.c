/* Small library functions (batch zf): the allocator's interface, the overlay table's set-up and its critical section,
   the video cable check, the store-queue addresses, two timer helpers. */

#define get_imask()   _builtin_get_imask()       /* SHC built-ins: the interrupt mask in SR */
#define set_imask(m)  _builtin_set_imask(m)

/* the allocator in use: four entry points the library calls through */
struct malloc_if {
    void *(*malloc)(unsigned int nbytes);
    void (*free)(void *p);
    void *(*calloc)(unsigned int nobj, unsigned int size);
    void *(*realloc)(void *p, unsigned int size);
};
#define MALLOC_IF       (*(struct malloc_if **)0x0C2B9334)     /* the interface in use */
#define DEFAULT_IF      ((struct malloc_if *)0x0C174F5C)       /* the library's own */

#define LIBTBL          (*(void **)0x8C00FFF0)                 /* the overlay library table */
#define LIBTBL_MAX      (*(int *)0x8C00FFF4)                   /* and how many entries it has */

#define PORT_A_DATA     (*(volatile unsigned short *)0xFF800030)   /* the SH-4's port A: the video cable's pins */
#define CABLE_PINS      0x300
#define CABLE_SHIFT     8

#define TSTR            (*(volatile unsigned char *)0xFFD80004)    /* timer start register */
#define TCR2            (*(volatile unsigned short *)0xFFD80028)   /* timer 2 control */
#define STR2            0x04
#define UNIE            0x20

int syChainInit(void);
int syG2SysInit(int a4);
unsigned int syCblCheckCableType(void);


/* the interface the library allocates through; 0 puts the library's own back. Returns the one that was in use */
struct malloc_if *syMallocChangeIF(struct malloc_if *mallocIF)
{
    struct malloc_if *prev;

    prev = MALLOC_IF;
    if (mallocIF == 0) {
        MALLOC_IF = DEFAULT_IF;
    } else {
        MALLOC_IF = mallocIF;
    }
    return prev;
}

/* not implemented in this Kamui: the status says so */

void ovFinish(void)
{
}

void ovInit(void *table, int count)
{
    LIBTBL = table;
    LIBTBL_MAX = count;
}

/* interrupts off, the mask that was there kept in *cs */
void ovLockCs(int *cs)
{
    *cs = get_imask();
    set_imask(15);
}

void ovUnlockCs(const int *cs)
{
    set_imask(*cs);
}

/* the cable: 0 VGA, 2 RGB, 3 composite */
int syCblCheckCable(void)
{
    int cable;

    cable = (syCblCheckCableType() >> CABLE_SHIFT) & (CABLE_PINS >> CABLE_SHIFT);
    return cable;
}

unsigned int syCblCheckCableType(void)
{
    unsigned short pins;

    pins = PORT_A_DATA;
    return pins & CABLE_PINS;
}

void syHwInit2(void)
{
    syChainInit();
    syG2SysInit(0);
}

/* a store-queue address back to the memory it stands for: RAM below 0xE1000000, the tile accelerator's input above */
void *sySqEnd(void *queue)
{
    unsigned int low;

    low = ((unsigned int)queue << 8) >> 8;
    if ((unsigned int)queue < 0xE1000000) {
        return (void *)(low | 0x8C000000);
    }
    return (void *)(low | 0x10000000);
}

/* the store-queue address for a destination: areas 13 and up (the tile accelerator) through the second queue */
void *sySqStart(void *dst)
{
    unsigned int low;

    low = ((unsigned int)dst << 8) >> 8;
    if ((((unsigned int)dst >> 24) & 31) >= 13) {
        return (void *)(low | 0xE1000000);
    }
    return (void *)(low | 0xE0000000);
}

void syTmrGenCancelInt(void)
{
    signed char started;

    started = TSTR;
    TSTR &= ~STR2;
    TCR2 &= ~UNIE;
    TSTR = started;
}

unsigned int syTmrMicroToCount(unsigned int micro)
{
    return ((micro >> 7) * 100) + ((micro & 127) * 100 >> 7);
}
