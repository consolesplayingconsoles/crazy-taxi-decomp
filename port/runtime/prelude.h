/* prelude.h: included ahead of every game source in the native build (tools/10-port/native_build.py).
   The game's C was written for SHC on the SH-4: int and pointers are both 32 bits there, and the code moves addresses
   through ints freely. On the host the game's memory lies below 2 GB (port/runtime/runner.c), so an address fits an int
   and comes back whole. */
#ifndef PORT_PRELUDE_H
#define PORT_PRELUDE_H
#define NATIVE_PORT 1
/* the generated C's structures of words passed by value (the SH-4 copies them onto the stack); sh4abi.py's rewritten
   calls name them in files that do not. A file's own identical typedef is a C11 redefinition, accepted */
typedef struct { int w[1]; } Stk1;
typedef struct { int w[2]; } Stk2;
typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
typedef struct { int w[5]; } Stk5;
typedef struct { int w[6]; } Stk6;
typedef struct { int w[7]; } Stk7;
typedef struct { int w[8]; } Stk8;
typedef struct { int w[9]; } Stk9;
typedef struct { int w[10]; } Stk10;
typedef struct { int w[12]; } Stk12;
typedef struct { int w[13]; } Stk13;
typedef struct { int w[16]; } Stk16;
typedef struct { int w[29]; } Stk29;
typedef struct { int w[714]; } Stk714;
#endif

/* SHC's intrinsics, as host functions (port/runtime/shim.c); some sources declare them, so they are plain names */
#define _builtin_fabsf port_fabsf
#define _builtin_sqrtf port_sqrtf
#define _builtin_fsrra port_fsrra      /* the SH-4 fsrra: 1 / sqrt(x); no source declares it */
/* the ones returning float must be declared here: a source that calls one undeclared would take it as an int
   function (gnu89) and read the result from the wrong register */
float port_fabsf(float);
float port_sqrtf(float);
float port_fsrra(float);
float port_fipr();
#define _builtin_get_cr port_get_cr
#define _builtin_set_cr port_set_cr
#define _builtin_set_imask port_set_imask
#define _builtin_get_imask port_get_imask
#define _builtin_get_fpscr port_get_fpscr
#define _builtin_set_fpscr port_set_fpscr
#define _builtin_get_gbr port_get_gbr
#define _builtin_get_vbr port_get_vbr
#define _builtin_prefetch port_prefetch
#define _builtin_tas port_tas
#define _builtin_strcpy port_strcpy
#define _builtin_fipr port_fipr
#define _builtin_fsca port_fsca
#define _builtin_ftrv port_ftrv
#define _builtin_ld_ext port_ld_ext
#define _builtin_st_ext port_st_ext

/* an absolute address above 2 GB kept in a register, zero-extended (tools/10-port/native_build.py high_literals) */
static __inline__ unsigned int port_k(unsigned int a) { __asm__("" : "+r"(a)); return a; }
