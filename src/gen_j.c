/* Straight-line functions with calls and guards (batch gen_j): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */



void HomingAngle1(int a4, int a5, float f4)
{
    int t0;
    int t1;
    int t2;
    int t3;

    t0 = *(short *)((a5 + 0x0));
    
    
    
    
    
    if (((int)(unsigned short)(a4 - t0) >= (int)(unsigned short)(t0 - a4))) {
        t1 = *(short *)((a5 + 0x0));
        t3 = (t1 - (int)((float)(unsigned short)(t0 - a4) * f4));
        } else {
        t2 = *(short *)((a5 + 0x0));
        t3 = (t2 + (int)((float)(unsigned short)(a4 - t0) * f4));
        }
    *(unsigned short *)((a5 + 0x0)) = t3;
}

void rankingCalcDigitRoll(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t16;

    *(unsigned int *)0xC2A8F8C = 0x0;
    t0 = *(int *)(((a5 + 0x4) + 0x0));
    t1 = *(int *)(((a4 + 0x4) + 0x0));
    
    
    if (((int)t1 >= (int)t0)) {
        t2 = *(int *)(((a4 + 0x4) + 0x0));
        t3 = *(int *)(((a5 + 0x4) + 0x0));
        *(unsigned int *)0xC2A8F78 = (t2 - t3);
        } else {
        *(unsigned int *)0xC2A8F78 = ((t1 - t0) + 0xA);
        }
    t6 = *(int *)0xC2A8F78;
    if ((t6 == 0)) {
        *(unsigned int *)0xC2A8F88 = 0x1;
        } else {
        *(unsigned int *)0xC2A8F88 = 0x0;
        }
    t7 = *(int *)((a4 + 0x0));
    t8 = *(int *)((a5 + 0x0));
    
    
    
    if (((int)t7 >= (int)t8)) {
        t9 = *(int *)((a4 + 0x0));
        t10 = *(int *)((a5 + 0x0));
        *(unsigned int *)0xC2A8F74 = (t9 - t10);
        } else {
        t11 = *(int *)((a4 + 0x0));
        t12 = *(int *)((a5 + 0x0));
        *(unsigned int *)0xC2A8F74 = ((t11 - t12) + 0xA);
        }
    t16 = *(int *)0xC2A8F74;
    if ((t16 == 0)) {
        *(unsigned int *)0xC2A8F84 = 0x1;
        } else {
        *(unsigned int *)0xC2A8F84 = 0x0;
        }
}

