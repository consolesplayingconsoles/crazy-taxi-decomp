/* Straight-line functions with calls and guards (batch gen_kj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ndGetPeripheral(int);
int nlLocate(int, int);
int nlPrintf(int, ...);
void ndPeriCheck(void);

void ndPeriCheck(void)
{
    int t1;
    int t2;
    int t3;
    int t8;
    int t26;
    int t46;
    int t47;
    int t48;
    int t49;
    int t66;
    int t79;
    int t0;
    int stk[19] = {0};

    *(unsigned int *)(((int)stk + 16)) = 0xC131A04;
    *(unsigned int *)(((int)stk + 20)) = 0x28;
    *(unsigned int *)(((int)stk + 24)) = 0xC0D2B4C;
    *(unsigned int *)(((int)stk + 28)) = 0xC131A48;
    *(unsigned int *)(((int)stk + 32)) = 0xC0D2B48;
    *(unsigned int *)(((int)stk + 36)) = 0xC131A44;
    t1 = 0xC131A48;
    t2 = 0xC131A04;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x4) {
            break;
        }
        t0 = 0xC0D2B18;
        t0 = (ndGetPeripheral((*(int *)(((t3 << 2) + t0)))));
        t1 = (*(int *)0xC2A9C70);
        t8 = *(int *)((t1 + 0x30));
        t1 = (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)));
        if (((*(int *)((t8 + 0x0))) & t1) != 0) {
            t0 = (nlLocate(0x5, (t3 + 0x28)));
            t1 = (*(int *)(((*(int *)(((int)stk + 28))) + 0x0)));
            t0 = t3;
            t0 = (t0 << 2);
            t0 = (nlPrintf(0xC0D2B5C, ((*(int *)((0xC131A04 + t0)))), (t1)));
        } else {
            t1 = (*(int *)0xC2A9C70);
            t26 = *(int *)((t1 + 0x30));
            t1 = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
            if (((*(int *)((t26 + 0x0))) & t1) != 0) {
                t0 = (nlLocate(0x5, (t3 + 0x28)));
                t1 = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
                t0 = (nlPrintf(0xC0D2B5C, ((*(int *)((t2 + 0x0)))), (t1)));
            } else {
                t0 = (nlLocate(0x5, (*(int *)(((int)stk + 20)))));
                t1 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                t0 = (nlPrintf(0xC0D2B6C, (t1)));
            }
        }
        t1 = (*(int *)(((int)stk + 16)));
        t2 = (t2 + 0x4);
        t3 = (t3 + 0x1);
        t1 = (t1 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t1;
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
    }
    *(unsigned int *)(((int)stk + 20)) = 0x2C;
    *(unsigned int *)(((int)stk + 16)) = 0xC131A14;
    *(unsigned int *)(((int)stk + 32)) = 0xC0D2B50;
    *(unsigned int *)(((int)stk + 40)) = 0xC131A4C;
    *(unsigned int *)(((int)stk + 24)) = 0xC0D2B54;
    *(unsigned int *)(((int)stk + 28)) = 0xC131A50;
    t46 = t0;
    t47 = 0xC0D2B50;
    t48 = 0xC131A14;
    t49 = 0x4;
    for (;;) {
        if ((int)t49 >= (int)0xC) {
            break;
        }
        t46 = 0xC0D2B18;
        *(unsigned int *)(((int)stk + 36)) = (t49 << 2);
        t46 = (ndGetPeripheral((*(int *)(((t49 << 2) + t46)))));
        t47 = (*(int *)(((*(int *)0xC2A9C70) + 0x30)));
        t47 = (*(int *)((t47 + 0x0)));
        if ((t47 & (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)))) != 0) {
            t46 = (nlLocate(0x5, (t49 + 0x28)));
            t47 = (*(int *)(((int)stk + 40)));
            t66 = (*(int *)((t47 + 0x0)));
            t46 = (*(int *)(((int)stk + 36)));
            t47 = (*(int *)((0xC131A04 + t46)));
            t46 = (nlPrintf(0xC0D2B5C, (t47), t66));
        } else {
            t47 = (*(int *)(((*(int *)0xC2A9C70) + 0x30)));
            t47 = (*(int *)((t47 + 0x0)));
            if ((t47 & (*(int *)(((*(int *)(((int)stk + 24))) + 0x0)))) != 0) {
                t46 = (nlLocate(0x5, (t49 + 0x28)));
                t47 = (*(int *)(((int)stk + 28)));
                t79 = (*(int *)((t47 + 0x0)));
                t47 = (*(int *)(((*(int *)(((int)stk + 16))) + 0x0)));
                t46 = (nlPrintf(0xC0D2B5C, (t47), t79));
            } else {
                t46 = (nlLocate(0x5, (*(int *)(((int)stk + 20)))));
                t47 = (*(int *)((t48 + 0x0)));
                t46 = (nlPrintf(0xC0D2B6C, (t47)));
            }
        }
        t49 = (t49 + 0x1);
        t48 = (t48 + 0x4);
        *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x1);
        t47 = (*(int *)(((int)stk + 16)));
        t47 = (t47 + 0x4);
        *(unsigned int *)(((int)stk + 16)) = t47;
    }
}
