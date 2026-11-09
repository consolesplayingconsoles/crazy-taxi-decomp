/* Straight-line functions with calls and guards (batch gen_uu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int GetMenuMode(int);
int hudHidePickUpNag(void);
int GS_GuestIn(int a4);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o30_int { char p[0x30]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int GS_GuestIn(int a4)
{
    float u2;
    int t13;
    int t14;
    float u16;
    float u17;
    float u18;
    int t20;
    int t34;
    int t35;
    int t43;
    int t10;
    int t32;

    (((struct o0_uint *)0xC1EE78C)->v) = 0x1;
    u2 = *(float *)(((((*(int *)(((0x19C + a4) + 0x0))) << 2) + ((*(int *)((a4 + 0x14))) + 0x1C)) + 0x0));
    (((struct o18_float *)0xC1EE78C)->v) = u2;
    if (((((struct o24_int *)0xC1EE210)->v)) == 1) {
        t10 = (*(int *)((0xC08AF68 + ((unsigned char)(*(signed char *)0xC28A4EA) << 2))));
    } else {
        t10 = (*(int *)0xC08AF74);
    }
    t13 = (int)((int)((((struct o4_int *)0xC1EE78C)->v)) / (int)0xE10);
    t14 = 0x28;
    if ((int)t13 < (int)0xA) {
        t14 = (t13 << 2);
    }
    u16 = *(float *)((0xC08AF38 + t14));
    u17 = ((u2 * 0.109999999f) + ((float)t10 + 240.0f));
    u18 = (u17 * u16);
    if (300.0f > (u17 * u16)) {
        u18 = 300.0f;
    }
    t20 = (((struct o38_int *)0xC1EE78C)->v);
    if ((int)t20 < (int)0xA) {
        (((struct o4_uint *)0xC1EE7CC)->v) = (*(int *)((0xC08AEA8 + (t20 << 2))));
        (((struct o8_uint *)0xC1EE7CC)->v) = (*(int *)((0xC08AED8 + (((((struct o38_int *)0xC1EE78C)->v)) << 2))));
        t32 = (*(int *)(((((((struct o38_int *)0xC1EE78C)->v)) << 2) + 0xC08AF08)));
    } else {
        (((struct o4_uint *)0xC1EE7CC)->v) = ((((struct o0_int *)0xC08AED0)->v));
        (((struct o8_uint *)0xC1EE7CC)->v) = ((((struct o30_int *)0xC08AED0)->v));
        t32 = (*(int *)0xC08AF30);
    }
    (((struct oC_uint *)0xC1EE7CC)->v) = t32;
    t34 = (((struct o8_int *)0xC1EE78C)->v);
    t35 = (((struct oC_int *)0xC1EE78C)->v);
    if ((int)((((struct o4_int *)0xC1EE7CC)->v)) > (int)(t34 + t35)) {
        (((struct o4_uint *)0xC1EE7CC)->v) = (t34 + t35);
    }
    (((struct o0_uint *)0xC1EE7CC)->v) = ((int)u18 + ((((struct o4_int *)0xC1EE7CC)->v)));
    (((struct oC_uint *)0xC1EE78C)->v) = (int)((float)((((struct oC_int *)0xC1EE78C)->v)) + u18);
    if (((((struct o0_int *)0xC1EE210)->v)) != 2) {
        if (((((struct o0_int *)0xC1EE210)->v)) != 2) {
            t43 = GetMenuMode(0x1);
            if (t43 != 0) {
                if (((((struct o0_int *)0xC1EE210)->v)) == 2) {
                    (((struct o0_uint *)0xC1EE7CC)->v) = ((((struct o8_int *)0xC1EE78C)->v));
                }
                (((struct oC_uint *)0xC1EE78C)->v) = 0x0;
            }
        }
    } else {
        if (((((struct o0_int *)0xC1EE210)->v)) == 2) {
            (((struct o0_uint *)0xC1EE7CC)->v) = ((((struct o8_int *)0xC1EE78C)->v));
        }
        (((struct oC_uint *)0xC1EE78C)->v) = 0x0;
    }
    (((struct o28_uint *)0xC1EE78C)->v) = (((((struct o28_int *)0xC1EE78C)->v)) + (int)(((((struct o18_float *)0xC1EE78C)->v)) * 2.5f));
    if (((((struct o0_int *)0xC1EE210)->v)) != 2) {
        hudHidePickUpNag();
    }
    (((struct o18_uint *)0xC1EE7CC)->v) = (((((struct o18_int *)0xC1EE7CC)->v)) + 0x1);
    return 0x5C;
}
