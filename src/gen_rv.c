/* Straight-line functions with calls and guards (batch gen_rv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSeqRequest(int);
int nlsndFxControl(int a4, int a5, int a6);

int nlsndFxControl(int a4, int a5, int a6)
{
    int t0;

    if (a5 != 0xA4) {
        if (a5 != 0x10A4) {
            if (a5 != 0x20A4) {
                return 0xFFFFFFFE;
            }
            return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + (((a6 + 0x40) & 0x7F) << 16)));
        }
        return nlsndSeqRequest(((((a4 & 0xF) << 8) + a5) + ((a6 & 0xF) << 16)));
    }
    t0 = nlsndSeqRequest((((0x7F00 & a6) << 8) + 0x70A4));
    if (t0 != 0) {
        return t0;
    }
    return nlsndSeqRequest((((0x7F & a6) << 16) + 0xA4));
}
