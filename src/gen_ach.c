/* Straight-line functions with calls and guards (batch gen_ach): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int PutStringFixPfont(int, int, float, float, float, float);
int PutVM_Message(int, int, int, float, float);
int char2num(int);
int nlsndSeqRequest(int);
int num2char(int);
int putString(int, int, float, float, float);
int EditEntryName(int a4, float f4);
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int EditEntryName(int a4, float f4)
{
    int t6;
    int t20;
    int t30;
    int t41;
    int t51;
    int t67;
    int t71;
    float u73;
    int t75;
    int t92;
    int t4;
    int t5;
    int t18;
    int t19;
    int t31;
    int t32;
    int t39;
    int t40;
    int t68;
    int t69;
    int t70;
    float u72;
    int t86;
    int t87;
    int t88;
    float u89;
    float u90;
    int t79;
    int t80;
    int t81;
    float u82;
    float u83;

    if (a4 == 0) {
        (((struct o8_uint *)0xC2A1248)->v) = 0x0;
        (((struct oC_uint *)0xC2A1248)->v) = 0x0;
        (((struct o0_uchar *)0xC2A1248)->v) = 0x41;
        (((struct o1_uchar *)0xC2A1248)->v) = 0x41;
        (((struct o2_uchar *)0xC2A1248)->v) = 0x41;
        (((struct o3_uchar *)0xC2A1248)->v) = 0x0;
        t92 = 0x0;
    } else {
        if (((((((struct o0_int *)0xC2A11CC)->v)) & 0x20) == 0) && ((t4 = (((struct o8_int *)0xC2A11CC)->v), t4 != 0) || (t5 = (((struct o4_int *)0xC2A11CC)->v), (t5 & 0x20) == 0))) {
        } else {
            t6 = (((struct o8_int *)0xC2A1248)->v);
            (((struct o8_uint *)0xC2A1248)->v) = (t6 - 1);
            if ((int)(t6 - 1) < 0) {
                (((struct o8_uint *)0xC2A1248)->v) = 0x2;
            }
            (((struct oC_uint *)0xC2A1248)->v) = (char2num((*(signed char *)((0xC2A1248 + ((((struct o8_int *)0xC2A1248)->v)))))));
            nlsndSeqRequest(0x804A9);
        }
        if (((((((struct o0_int *)0xC2A11CC)->v)) & 0x40) == 0) && ((t18 = (((struct o8_int *)0xC2A11CC)->v), t18 != 0) || (t19 = (((struct o4_int *)0xC2A11CC)->v), (t19 & 0x40) == 0))) {
        } else {
            t20 = (((struct o8_int *)0xC2A1248)->v);
            (((struct o8_uint *)0xC2A1248)->v) = (t20 + 0x1);
            if ((int)(t20 + 0x1) >= (int)0x3) {
                (((struct o8_uint *)0xC2A1248)->v) = 0x0;
            }
            (((struct oC_uint *)0xC2A1248)->v) = (char2num((*(signed char *)((0xC2A1248 + ((((struct o8_int *)0xC2A1248)->v)))))));
            nlsndSeqRequest(0x804A9);
        }
        t30 = (((struct o0_int *)0xC2A11CC)->v);
        if (((t30 & 0x8) == 0) && ((t31 = (((struct o8_int *)0xC2A11CC)->v), t31 != 0) || (t32 = (((struct o4_int *)0xC2A11CC)->v), (t32 & 0x8) == 0))) {
            if (((t30 & 0x10) == 0) && ((t39 = (((struct o8_int *)0xC2A11CC)->v), t39 != 0) || (t40 = (((struct o4_int *)0xC2A11CC)->v), (t40 & 0x10) == 0))) {
            } else {
                t41 = (((struct oC_int *)0xC2A1248)->v);
                (((struct oC_uint *)0xC2A1248)->v) = (t41 - 1);
                if ((int)(t41 - 1) < 0) {
                    (((struct oC_uint *)0xC2A1248)->v) = 0x2A;
                }
                nlsndSeqRequest(0x504A9);
            }
        } else {
            t51 = (((struct oC_int *)0xC2A1248)->v);
            (((struct oC_uint *)0xC2A1248)->v) = (t51 + 0x1);
            if ((int)(t51 + 0x1) > (int)0x2A) {
                (((struct oC_uint *)0xC2A1248)->v) = 0x0;
            }
            nlsndSeqRequest(0x504A9);
        }
        *(unsigned char *)(((((((struct o8_int *)0xC2A1248)->v)) + 0xC2A1248) + 0x0)) = (num2char(((((struct oC_int *)0xC2A1248)->v))));
        PutVM_Message(0x20, 0x14, 0x0, 235.0f, 208.0f);
        PutStringFixPfont(0x26, 0xC2A1248, 320.0f, 260.0f, 32.0f, 1.0f);
        t67 = 0xC041364;
        t71 = 0x0;
        u73 = f4;
        for (;;) {
            if ((int)t71 >= (int)0x3) {
                break;
            }
            t69 = t71;
            t69 = (t69 - 1);
            t69 = (t69 << 2);
            t70 = 0x140;
            t69 = (t69 << 2);
            t69 = (t69 << 1);
            t69 = (t69 + t70);
            t75 = t69;
            t69 = ((((struct o8_int *)0xC2A1248)->v));
            u72 = (float)t75;
            u73 = u72;
            if (t71 == t69) {
                t68 = 0xC1EE330;
                t67 = (*(int *)((t68 + 0x0)));
                if ((t67 & 0x10) != 0) {
                    t69 = 0xC03B324;
                    t67 = (putString(0x46, 0xC0A2150, u73, 276.0f, 1.0f));
                } else {
                    t79 = t68;
                    t80 = t69;
                    t81 = t70;
                    u82 = u72;
                    u83 = u73;
                }
                t86 = t79;
                t87 = t80;
                t88 = t81;
                u89 = u82;
                u90 = u83;
            } else {
                t67 = (putString(0x26, 0xC0A2150, u73, 276.0f, 1.0f));
            }
            u72 = u89;
            u73 = u90;
            t68 = t86;
            t71 = (t71 + 0x1);
            t69 = t87;
            t70 = t88;
        }
        t92 = t67;
    }
    return t92;
}
