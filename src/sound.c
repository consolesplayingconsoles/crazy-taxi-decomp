/* Reference C, not Equivalent: the original divides the write position by 4 through the runtime helper _divls (operands in r0/r1); the check compares the registers left in r4-r7 at that call, and the build's fixed -division=cpu turns / 4 into shifts, so the C makes no such call (tools/equiv.py: DIFFERS on the calls only).
   Sound_Request (0C072168-0C072218): queue a sound for a channel. Each channel has a ring of 72
   words in SndQueue (288 bytes apart); sndPtr[ch] is its write position, sndCount[ch] counts
   what was queued. Returns 0 when the write position is still occupied, else 1 (also when
   nothing is queued: not in a run, or the ending is on). */

extern int MainMode;
extern int EndingFlag;
extern int *sndPtr[];
extern int sndCount[];
extern int SndQueue[];

int Sound_Request(int sound, int ch)
{
    int *q;

    if (MainMode != 1 || EndingFlag)
        return 1;
    if (*sndPtr[ch] != 0)
        return 0;
    *sndPtr[ch] = sound;
    sndCount[ch]++;
    sndPtr[ch]++;
    q = (int *)((char *)SndQueue + (short)(ch * 288));
    if (((char *)sndPtr[ch] - (char *)q) / 4 >= 72)
        sndPtr[ch] = q;
    return 1;
}
