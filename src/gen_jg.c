/* Straight-line functions with calls and guards (batch gen_jg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmSetVertexRenderState(int a4, int a5, float f4);

int kmSetVertexRenderState(int a4, int a5, float f4)
{
    int t19;
    int t22;
    int t27;
    int t97;
    int t38;
    int t105;
    int t90;
    int t79;
    int t64;
    int t55;

    *(unsigned int *)0xC2EAB9C = (*(int *)((a4 + 0x90)));
    *(unsigned int *)0xC2EABAC = (*(int *)((a4 + 0x94)));
    *(unsigned int *)0xC2EABB0 = (*(int *)((a4 + 0x98)));
    if ((((unsigned int)((unsigned int)(*(int *)0xC2EAB9C) >> 16) >> 8) & 7) == 0) {
        *(unsigned int *)0xC2EABB0 = (((*(int *)0xC2EABB0) & 0x3FFFFFF) | 0x20000000);
    }
    *(unsigned int *)0xC2EABB4 = (*(int *)((a4 + 0x9C)));
    *(float *)0xC2EABBC = (*(float *)((a4 + 0x70)));
    *(float *)0xC2EABC0 = (*(float *)((a4 + 0x74)));
    *(float *)0xC2EABC4 = (*(float *)((a4 + 0x78)));
    *(float *)0xC2EABC8 = (*(float *)((a4 + 0x7C)));
    *(float *)0xC2EABCC = (*(float *)((a4 + 0x80)));
    *(float *)0xC2EABD0 = (*(float *)((a4 + 0x84)));
    *(float *)0xC2EABD4 = (*(float *)((a4 + 0x88)));
    *(float *)0xC2EABD8 = (*(float *)((a4 + 0x8C)));
    *(unsigned int *)0xC2EABDC = (*(int *)((a4 + 0xA0)));
    t19 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC2EAC0C = (*(int *)((((((((((unsigned int)((unsigned int)(0x20000000 & t19) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t19) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x40 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x20 & t19) >> 2) >> 1)) | ((unsigned int)((unsigned int)(0x10 & t19) >> 2) >> 1)) | ((unsigned int)(0x4 & t19) >> 2)) << 2) + 0xC178344)));
    *(unsigned int *)0xC178304 = (*(int *)0xC2EAB9C);
    t22 = *(int *)0xC2EAB9C;
    *(unsigned int *)0xC2B8D1C = ((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8);
    if ((((unsigned int)((unsigned int)(t22 & 0x7000000) >> 16) >> 8) & 1) != 0) {
        *(unsigned int *)0xC178308 = (*(int *)0xC2EABDC);
        t105 = 0xC178324;
    } else {
        *(unsigned int *)0xC178308 = (*(int *)0xC2EABAC);
        *(unsigned int *)0xC17830C = (*(int *)0xC2EABB0);
        *(unsigned int *)0xC178310 = (*(int *)0xC2EABB4);
        t27 = *(int *)0xC2EAC0C;
        t97 = 0xC178324;
        if (t27 != 0) {
            if (t27 != 1) {
                if (t27 != 2) {
                    if (t27 != 3) {
                        if (t27 != 4) {
                            t38 = 0xC178314;
                            if (t27 == 16) {
                                *(unsigned int *)0xC178314 = ((((((int)((*(float *)0xC2EABBC) * 255.0f) << 16) << 8) | ((int)((*(float *)0xC2EABC0) * 255.0f) << 16)) | ((int)((*(float *)0xC2EABC4) * 255.0f) << 8)) | (int)((*(float *)0xC2EABC8) * 255.0f));
                                *(unsigned int *)0xC178318 = ((((((int)((*(float *)0xC2EABCC) * 255.0f) << 16) << 8) | ((int)((*(float *)0xC2EABD0) * 255.0f) << 16)) | ((int)((*(float *)0xC2EABD4) * 255.0f) << 8)) | (int)((*(float *)0xC2EABD8) * 255.0f));
                                t38 = 0xC178324;
                            }
                            t55 = t38;
                        } else {
                            *(unsigned int *)0xC178314 = (*(int *)0xC2EABE0);
                            *(unsigned int *)0xC178318 = (*(int *)0xC2EABE4);
                            *(unsigned int *)0xC178324 = (*(int *)0xC2EABBC);
                            *(unsigned int *)0xC178328 = (*(int *)0xC2EABC0);
                            *(unsigned int *)0xC17832C = (*(int *)0xC2EABC4);
                            *(unsigned int *)0xC178330 = (*(int *)0xC2EABC8);
                            *(unsigned int *)0xC178334 = (*(int *)0xC2EABEC);
                            *(unsigned int *)0xC178338 = (*(int *)0xC2EABF0);
                            *(unsigned int *)0xC17833C = (*(int *)0xC2EABF4);
                            *(unsigned int *)0xC178340 = (*(int *)0xC2EABF8);
                            t55 = 0xC178344;
                        }
                        t64 = t55;
                    } else {
                        *(unsigned int *)0xC178314 = (*(int *)0xC2EABE0);
                        *(unsigned int *)0xC178318 = (*(int *)0xC2EABE4);
                        t64 = 0xC178324;
                    }
                    t79 = t64;
                } else {
                    *(unsigned int *)0xC178324 = (*(int *)0xC2EABBC);
                    *(unsigned int *)0xC178328 = (*(int *)0xC2EABC0);
                    *(unsigned int *)0xC17832C = (*(int *)0xC2EABC4);
                    *(unsigned int *)0xC178330 = (*(int *)0xC2EABC8);
                    *(unsigned int *)0xC178334 = (*(int *)0xC2EABCC);
                    *(unsigned int *)0xC178338 = (*(int *)0xC2EABD0);
                    *(unsigned int *)0xC17833C = (*(int *)0xC2EABD4);
                    *(unsigned int *)0xC178340 = (*(int *)0xC2EABD8);
                    t79 = 0xC178344;
                }
                t90 = t79;
            } else {
                *(unsigned int *)0xC178314 = (*(int *)0xC2EABBC);
                *(unsigned int *)0xC178318 = (*(int *)0xC2EABC0);
                *(unsigned int *)0xC17831C = (*(int *)0xC2EABC4);
                *(unsigned int *)0xC178320 = (*(int *)0xC2EABC8);
                t90 = 0xC178324;
            }
            t97 = t90;
        }
        t105 = t97;
    }
    *(unsigned int *)0xC2B8CA8 = (*(int *)0xC2B8D1C);
    *(unsigned int *)0xC2B8CAC = (t105 - 0xC178304);
    return 0x0;
}
