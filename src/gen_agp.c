/* Straight-line functions with calls and guards (batch gen_agp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int EditEntryName(int);
int SetScreen(int);
int SetWindow(int);
int nlsndSeqRequest(int);
int callNameEntry(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };


int callNameEntry(void)
{
    (((struct o0_uint *)0xC2A1228)->v) = ((((struct o0_int *)0xC1EE234)->v));
    (((struct o4_uint *)0xC2A1228)->v) = ((((struct o4_int *)0xC1EE234)->v));
    if (((((struct o0_int *)0xC1EE234)->v)) != 3) {
        (((struct o0_uint *)0xC1EE234)->v) = 0x3;
        (((struct o4_uint *)0xC1EE234)->v) = 0x0;
    }
    SetScreen(0x6);
    SetWindow(0xD);
    EditEntryName(0x0);
    return nlsndSeqRequest(0x605A9);
}
