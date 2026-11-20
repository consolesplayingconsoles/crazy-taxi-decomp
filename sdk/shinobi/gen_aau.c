/* Straight-line functions with calls and guards (batch gen_aau): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syTmrInt2Handler(void);

int syTmrInt2Handler(void)
{
    *(unsigned char *)0xFFD80004 = ((*(signed char *)0xFFD80004) & 0xFB);
    *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) & 0xFFFFFFDF);
    *(unsigned short *)0xFFD80028 = ((*(short *)0xFFD80028) & 0xFFFFFEFF);
    return ((int (*)(int))((*(int *)0xC2EBF7C)))((*(int *)0xC2EBF80));
}
