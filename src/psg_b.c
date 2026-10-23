/* Psg_Execute: one frame of a passenger's state machine (waiting, hailing, riding, getting off), written from the shape of the
   Android port's function and the Dreamcast code. The passenger sits at +0x1C in the task; the Android port inlines what the
   Dreamcast keeps in functions of its own (psgEnterState3, psgTimeDispExec, psgFreeIpBuff). */

typedef struct { float x, y, z; } NLpoint3;

#define T(o)            (*(int *)(task + (o)))
#define I(o)            (*(int *)(p + (o)))
#define B(o)            (*(unsigned char *)(p + (o)))
#define TAXI(o)         (*(int *)(0x0C2AD000 + (o)))
#define GSYS(o)         (*(int *)(0x0C1EE788 + (o)))
#define CAR_FLAGS       (*(int *)(0x0C1790CC + 0x20))
#define COURSE_MODE     (*(int *)0x0C1EE20C)
#define MINIGAME_NO     (*(int *)0x0C1EE214)
#define MAIN_MODE       (*(int *)0x0C1EE234)
#define VR_MODE         (*(int *)0x0C179860)
#define RIDEON_CAM      (*(unsigned char *)0x0C1794E8)
#define PSG_FLAG        (*(int *)0x0C2AD590)
#define RIDE_STUFF      ((int *)0x0C2A9908)
#define BOYFRIEND       ((int *)0x0C1794D4)
#define BOYFRIEND_GAME  (COURSE_MODE == 2 && MINIGAME_NO == 8 && !IsBoyFriend(I(0), 0))

int psgSetState(int, int, int, int);
int SetLandmark(int);
int Start_Party_Remain_Voice(void);
int psgSetCurrent(int);
int psgFrame(int);
int psgTimeDispInit(void);
int psgTimeDispExec(int);
int psgEnterState3(int, int);
float drvAccelDot(void);
int Chat_Crush(int, int);
int Drv_StartAction(int, int, int);
int Start_Remain_Icon_Flash(void);
int camPlayScript(int, int);
int psgFreeIpBuff(int);
void nlProjectScreen3D(NLpoint3 *, float *);
int IsBoyFriend(int, int);
int Start_Proposal(int, int, NLpoint3);
int camRestore(void);
int psgCallEnter(int, int, int);
int Psg_SetPosPtr(int, int);

/* manual: written by hand from the Android port and the Dreamcast code; tools must not regenerate it */
void Psg_Execute(int task, float dist)
{
    int p = task + 0x1C, n, *jolt;
    float proj[3], a;

    switch (T(0x174)) {
    case 0:                                                     /* placed: start waiting */
        if (I(0x144) == 0)
            I(0x144) = task;
        psgSetState(p, 0, 0, 0);
        Psg_SetPosPtr(p, T(0x14) + 8);
        break;

    case 1:                                                     /* waiting: hail the taxi as it comes near */
        nlProjectScreen3D((NLpoint3 *)(p + 4), proj);
        if (proj[0] > 0.0f)
            B(0x14A) &= 0xEF;
        else
            B(0x14A) |= 0x10;
        n = I(0x20);
        if (n == 0) {
            if (BOYFRIEND_GAME && *(int *)(BOYFRIEND[I(0x154) % 5] + 0x3C) == 4 && *(int *)(BOYFRIEND[I(0x154) % 5] + 0x40) == 2) {
                B(0x149) |= 0x20;
                Start_Proposal(I(0x154), 1, *(NLpoint3 *)(p + 4));
                return;
            }
            n = **(int **)(task + 0x14);
            if (n != 4 && n != 5 || BOYFRIEND_GAME) {
                if (*(float *)0x0C13EEE0 > dist)
                    psgSetState(p, 1, T(0x14) + 8, 0);
                else {
                    if (*(float *)0x0C13EEDC > dist)
                        n = 2;
                    else if (*(float *)0x0C13EED8 > dist)
                        n = 1;
                    else if (*(float *)0x0C13EED4 > dist)
                        n = 0;
                    else
                        n = -1;
                    if (n >= 0 && I(0x24) != n) {
                        I(0x24) = n;
                        psgCallEnter(p, I(0x20), I(0x24));
                    }
                }
            }
        } else if (n == 1) {
            if (BOYFRIEND_GAME && *(int *)(BOYFRIEND[I(0x154) % 5] + 0x3C) == 4) {
                B(0x149) |= 0x20;
                Start_Proposal(I(0x154), 1, *(NLpoint3 *)(p + 4));
            }
        }
        if (**(int **)(task + 0x14) != 5)
            break;
        if (TAXI(0x10) != 2 && MAIN_MODE == 1 && VR_MODE != 10 && *(int *)0x0C2A4E50 == 0) {
            if (VR_MODE == 11)
                camRestore();
            if (RIDEON_CAM == 0 && !(COURSE_MODE == 2 && (MINIGAME_NO == 10 || MINIGAME_NO == 11 ||
                                                          (MINIGAME_NO == 8 && RIDE_STUFF[I(0x154)] != 0)))) {
                camPlayScript(p, 0);
                RIDEON_CAM |= 1 << I(0x154);
                if (COURSE_MODE == 2 && MINIGAME_NO == 8)
                    RIDE_STUFF[I(0x154)] = 1;
            }
        }
        if (I(0x20) == 2)
            break;
        PSG_FLAG |= 1;
        if (I(0x24) == 2)
            break;
        psgSetState(p, 2, 0, 0);                                /* in the taxi */
        Drv_StartAction(2, p, 0);
        TAXI(0x1D8) = p;
        if (MAIN_MODE == 1) {
            B(0x149) |= 1;
            *(int *)0x0C0E49DC = I(0x140);
            SetLandmark(0);
        }
        break;

    case 2:                                                     /* riding */
        if (I(0x20) != 3) {
            I(0x130) = 0;
            B(0x14B) |= 1;
            *(unsigned char *)0x0C2AD1DF |= 4;
            jolt = (int *)(0x0C2AE278 + (unsigned char)((signed char)B(0x154) * 0x1C));   /* the offset is kept to a byte */
            jolt[0] = 0;
            jolt[1] = 0;
            jolt[4] = 0;
            jolt[3] = 0;
            jolt[2] = 0;
            jolt[6] = 0;
            jolt[5] = 0;
            psgSetState(p, 3, 0x0C2AE344, 0);
            SetLandmark(1);
            if (COURSE_MODE == 2 && MINIGAME_NO == 14)
                Start_Party_Remain_Voice();
            if (MAIN_MODE == 1)
                psgTimeDispInit();
            break;
        }
        if (MAIN_MODE == 1)
            psgTimeDispExec(p);
        if (GSYS(0x44) <= 0)
            B(0x149) |= 8;
        if (B(0x149) & 8) {                                     /* time is up */
            if (*(float *)(T(0x198) + 0x14) + 120.0f > dist || GSYS(0xC) <= 0)
                goto near;
            goto far;
        }
        n = I(0x24);
        if (GSYS(0x44) < GSYS(0x4C)) {                          /* running late */
            if (n < 4 || n > 10) {
                I(0x24) = 4;
                I(0x130) = 0;
                psgEnterState3(p, 4);
                B(0x14B) &= 0xFE;
                I(0x130) = 0;
            }
            break;
        }
        if (n == 13 || n == 14)
            break;
        if (*(int *)0x0C1790EC != 0) {                          /* the taxi hit something */
            a = drvAccelDot();
            if (CAR_FLAGS & 0x7FFE || CAR_FLAGS & 0x80000000) {
                if (-6.0f > a) {
                    I(0x24) = 13;
                    psgEnterState3(p, 13);
                    Chat_Crush(p, 2);
                } else if (-4.0f > a) {
                    I(0x24) = 13;
                    psgEnterState3(p, I(0x24));
                    Chat_Crush(p, 1);
                } else if (-2.0f > a)
                    Chat_Crush(p, 0);
            } else if (CAR_FLAGS & 0x1F0000) {
                I(0x24) = 14;
                psgEnterState3(p, 14);
                Chat_Crush(p, 0);
            } else if (CAR_FLAGS & 0x20000) {
                I(0x24) = 14;
                psgEnterState3(p, I(0x24));
                Chat_Crush(p, 1);
            }
        } else if (n != 12) {
            if (n != 11 && TAXI(0x10) == 1) {
                I(0x24) = 11;
                psgEnterState3(p, 11);
            } else if (n == 11 && TAXI(0x10) != 1) {
                I(0x24) = 12;
                psgEnterState3(p, 12);
            } else if (n != 15 && !(B(0x14A) & 1) && n != 11 && n != 12 && n != 1 && n != 2 && n != 3 &&
                       (I(0x130) % 420 == 419 || B(0x14B) & 1 || COURSE_MODE != 2 && MAIN_MODE == 1 && *(signed char *)0x0C1EE26D != 0) &&
                       B(0x149) & 0x40) {
                I(0x24) = 1;                                    /* calm again */
                RIDEON_CAM &= ~(1 << I(0x154));
                if (dist > 1500.0f)
                    B(0x14A) &= 0x7F;
                else
                    B(0x14A) |= 0x80;
                psgEnterState3(p, I(0x24));
                B(0x14B) &= 0xFE;
                I(0x130) = 0;
            }
        }
        I(0x130)++;
        break;

    case 3:                                                     /* arriving */
        if (GSYS(0x44) <= GSYS(0x4C) && I(0x20) != 3 && I(0x20) != 5) {
            if (MAIN_MODE == 1)
                psgTimeDispExec(p);
            psgSetState(p, 5, 0x0C2AE344, 0);
        }
        if (*(float *)(T(0x198) + 0x14) + 120.0f > dist) {
near:
            B(0x149) &= 0xEF;
            break;
        }
far:
        B(0x149) |= 0x10;
        TAXI(0x1D8) = 0;
        if (GSYS(0x44) <= 1) {
            B(0x149) &= 0xFE;
            SetLandmark(3);
        }
        break;

    case 4:                                                     /* paid: getting off */
        if (I(0x20) == 4)
            break;
        PSG_FLAG |= 2;
        psgSetState(p, 4, T(0x198) + 4, 0);
        Drv_StartAction(4, p, 0);
        if (MAIN_MODE == 1) {
            Start_Remain_Icon_Flash();
            if (!(COURSE_MODE == 2 && MINIGAME_NO == 10))
                camPlayScript(p, 1);
        }
        B(0x149) &= 0xFE;
        SetLandmark(2);
        TAXI(0x1D8) = 0;
        break;

    case 6:
        psgFreeIpBuff(p);
        B(0x149) &= 0xFE;
        break;
    }
    psgSetCurrent(p);
    psgFrame(p);
}
