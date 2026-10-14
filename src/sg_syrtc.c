/* Shinobi library, SG_SYRTC (the real-time clock): our own C, written from the disassembly. */

typedef struct {
    short year;
    signed char month;
    signed char day;
    char mid[3];
    unsigned char dayOfWeek;
    unsigned char moonAge;
} SyDate;

extern unsigned int syRtcFlags;
extern int syRtcLastCount;

extern int  syRtcAicaGetCount(int *out);
extern int  syRtcGetCountForce(void);
extern void syRtcCountToDate(int count, void *date);
extern int  syRtcMakeDayOfWeek(int year, int month, int day);
extern int  syRtcMakeAgeOfMoon(void *date);

int syRtcGetAndCheckCount(int fallback)
{
    int buf[2];
    int i;

    for (i = 0; i < 2; i++) {
        if (syRtcAicaGetCount(&buf[i]))
            buf[i] = fallback;
    }
    if (buf[0] != buf[1])
        return fallback;
    return buf[0];
}

int syRtcGetDate(SyDate *d)
{
    if ((syRtcFlags & 1) == 1) {
        int c = syRtcGetCountForce();
        syRtcCountToDate(c, d);
        syRtcLastCount = c;
    } else {
        syRtcCountToDate(syRtcLastCount, d);
    }
    d->dayOfWeek = syRtcMakeDayOfWeek(d->year, d->month, d->day);
    d->moonAge = syRtcMakeAgeOfMoon(d);
    return syRtcFlags;
}
