/* Straight-line functions with calls and guards (batch gen_aat): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syTmrInt1Handler(void);

int syTmrInt1Handler(void)
{
    *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFD);
    *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFFDF);
    *(unsigned short *)0xFFD8001C = ((*(short *)0xFFD8001C) & 0xFFFFFEFF);
    return ((int (*)(int))((*(int *)0xC2EBF74)))((*(int *)0xC2EBF78));
}
