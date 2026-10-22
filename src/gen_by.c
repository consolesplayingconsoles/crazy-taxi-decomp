/* Straight-line functions with calls and guards (batch gen_by): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutColliWall(int);
int PutColliPole(int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
float nlFloor(float);
void FUN_0c14f5a2(int a4, int a5);
float ViewColliWall(float f4, float f5);

void FUN_0c14f5a2(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int stk[4] = {0};

    t0 = _builtin_get_imask();
    *(unsigned short *)(((int)stk + 4)) = t0;
    _builtin_set_imask(0xF);
    t1 = *(int *)0xC2B9358;
    t2 = *(int *)((t1 + 0x0));
    t3 = t2;
    t4 = 0x0;
    t5 = 0x0;
    for (;;) {
        t6 = *(int *)((t3 + 0x4));
        if ((unsigned int)t6 > (unsigned int)0x0) {
            t7 = *(int *)((t3 + 0x4));
            t5 = (t5 + (t7 - 1));
            if ((unsigned int)t4 < (unsigned int)(t7 - 1)) {
                t8 = *(int *)((t3 + 0x4));
                t4 = t8;
                t4 = (t4 - 1);
            }
        }
        if (t3 != t1) {
            t9 = *(int *)((t3 + 0x0));
            t3 = t9;
            continue;
        }
        break;
    }
    *(unsigned int *)((a4 + 0x0)) = (((t5 << 2) << 2) << 1);
    *(unsigned int *)((a5 + 0x0)) = (((t4 << 2) << 2) << 1);
    t10 = *(short *)(((int)stk + 4));
    _builtin_set_imask(((unsigned int)((((unsigned short)t10 & 0xF) << 2) << 2) >> 4));
}

