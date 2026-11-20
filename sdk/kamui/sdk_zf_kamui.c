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

/* not implemented in this Kamui: the status says so */
int kmSetForwardClipping(float depth)
{
    return 120;
}


/* interrupts off, the mask that was there kept in *cs */


/* the cable: 0 VGA, 2 RGB, 3 composite */


/* a store-queue address back to the memory it stands for: RAM below 0xE1000000, the tile accelerator's input above */

/* the store-queue address for a destination: areas 13 and up (the tile accelerator) through the second queue */


