/* Straight-line functions with calls and guards (batch gen_adi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlSprPut(int);
int gdc_Err(void);

int gdc_Err(void)
{
    int t2;
    int t1;
    int t29;
    int stk[24] = {0};

    if (((*(int *)0xC1EE234) == 0) && (t1 = *(int *)0xC1EE238, t1 == 1)) {
        t29 = t1;
    } else {
        *(float *)(((int)stk + 16)) = 0.099999994f;
        *(float *)(((int)stk + 28)) = 0.0f;
        *(float *)(((int)stk + 32)) = 0.0f;
        *(float *)(((int)stk + 36)) = 1.0f;
        *(float *)(((int)stk + 40)) = 1.0f;
        *(unsigned int *)(((int)stk + 44)) = 0x0;
        *(unsigned int *)(((int)stk + 56)) = 0x80A;
        *(float *)(((int)stk + 48)) = 1.0f;
        *(unsigned int *)(((int)stk + 52)) = 0xFFFFFFFF;
        *(float *)(((int)stk + 24)) = 1.0f;
        *(float *)(((int)stk + 20)) = 1.0f;
        t2 = *(int *)0xC2A11C0;
        if (t2 != 0) {
            if (t2 != 1) {
                if (t2 != 2) {
                    if (t2 != 3) {
                        if (t2 != 4) {
                            *(unsigned int *)(((int)stk + 4)) = 0xA7;
                            *(float *)(((int)stk + 8)) = (355.0f);
                            *(float *)(((int)stk + 12)) = 335.0f;
                            nlSprPut(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = 0xA8;
                            *(float *)(((int)stk + 8)) = (385.0f);
                        } else {
                            *(unsigned int *)(((int)stk + 4)) = 0xBB;
                            *(float *)(((int)stk + 8)) = 350.0f;
                            *(float *)(((int)stk + 12)) = 335.0f;
                            nlSprPut(((int)stk + 4));
                            *(unsigned int *)(((int)stk + 4)) = 0xBC;
                            *(float *)(((int)stk + 8)) = 405.0f;
                        }
                    } else {
                        *(unsigned int *)(((int)stk + 4)) = 0xB0;
                        *(float *)(((int)stk + 8)) = 360.0f;
                        *(float *)(((int)stk + 12)) = 335.0f;
                        nlSprPut(((int)stk + 4));
                        *(unsigned int *)(((int)stk + 4)) = 0xB1;
                        *(float *)(((int)stk + 8)) = 415.0f;
                    }
                } else {
                    *(unsigned int *)(((int)stk + 4)) = 0xB5;
                    *(float *)(((int)stk + 8)) = 442.0f;
                    *(float *)(((int)stk + 12)) = 335.0f;
                    nlSprPut(((int)stk + 4));
                    *(unsigned int *)(((int)stk + 4)) = 0xB6;
                    *(float *)(((int)stk + 8)) = 436.0f;
                }
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0xA7;
                *(float *)(((int)stk + 8)) = (355.0f);
                *(float *)(((int)stk + 12)) = 335.0f;
                nlSprPut(((int)stk + 4));
                *(unsigned int *)(((int)stk + 4)) = 0xA8;
                *(float *)(((int)stk + 8)) = (385.0f);
            }
        } else {
            *(unsigned int *)(((int)stk + 4)) = 0x8E;
            *(float *)(((int)stk + 8)) = 370.0f;
            *(float *)(((int)stk + 12)) = 335.0f;
            nlSprPut(((int)stk + 4));
            *(unsigned int *)(((int)stk + 4)) = 0x8F;
            *(float *)(((int)stk + 8)) = 400.0f;
        }
        *(float *)(((int)stk + 12)) = 360.0f;
        t29 = (nlSprPut(((int)stk + 4)));
    }
    return t29;
}
