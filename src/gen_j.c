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


