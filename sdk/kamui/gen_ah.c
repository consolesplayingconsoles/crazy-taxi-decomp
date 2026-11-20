/* Straight-line functions with calls and guards (batch gen_ah): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmtex_GetTextureLevel(int a4, int a5);

int kmtex_GetTextureLevel(int a4, int a5)
{
    int t0;

    t0 = a4;
    if ((int)a4 >= (int)a5) {
        t0 = a5;
    }
    if (t0 != 1) {
        if (t0 != 2) {
            if (t0 != 4) {
                if (t0 != 8) {
                    if (t0 != 16) {
                        if (t0 != 32) {
                            if (t0 != 64) {
                                if (t0 != 0x80) {
                                    if (t0 != 0x100) {
                                        if (t0 != 0x200) {
                                            if (t0 != 0x400) {
                                                return 0x3;
                                            }
                                            return 0xA;
                                        }
                                        return 0x9;
                                    }
                                    return 0x8;
                                }
                                return 0x7;
                            }
                            return 0x6;
                        }
                        return 0x5;
                    }
                    return 0x4;
                }
                return 0x3;
            }
            return 0x2;
        }
        return 0x1;
    }
    return 0x0;
}

