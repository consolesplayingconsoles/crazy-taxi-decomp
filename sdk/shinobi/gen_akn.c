/* Straight-line functions with calls and guards (batch gen_akn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int syTmrInt1Cancel(void);
struct o0_uchar { unsigned char v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };


int syTmrInt1Cancel(void)
{
    int t0;

    t0 = *(signed char *)0xFFD80004;
    (((struct o0_uchar *)0xFFD80004)->v) = (t0 & 0xFD);
    (((struct o18_ushort *)0xFFD80004)->v) = (((((struct o18_short *)0xFFD80004)->v)) & 0xFFFFFFDF);
    return (t0 & 0xFD);
}
