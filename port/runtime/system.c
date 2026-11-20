/* system.c: Katana's system layer (sy*) and other console-only code as far as the game sees it. The hardware set-up has
   nothing to set up on the host, the clock is the host's. These host functions take the places of library C (or of
   code with no C) that talks to registers or the caches. */
#define _GNU_SOURCE
#define _GNU_SOURCE
#include <stdint.h>
#include <string.h>
#include <time.h>

#include "port.h"

#define NOOP(sym, fn)                                                                                                  \
    int32_t fn(void) __asm__(sym);                                                                                     \
    int32_t fn(void) { return 0; }


/* the G2 bus (sound RAM, the modem's port): its FIFOs are never busy on the host, its DMA has no state to reset */
NOOP("syG2FifoWaitEmpty", sy_g2_fifo_wait_empty)
NOOP("syG2AicaFifoWaitEmpty", sy_g2_aica_fifo_wait_empty)
NOOP("syG2DmaReset", sy_g2_dma_reset)

/* _slow_strcmp1(a, b): the C runtime's strcmp (signed bytes, the difference at the first mismatch) */
int32_t slow_strcmp(uint32_t a, uint32_t b) __asm__("_slow_strcmp1");
int32_t slow_strcmp(uint32_t a, uint32_t b)
{
    const signed char *p = (const signed char *)(uintptr_t)a, *q = (const signed char *)(uintptr_t)b;
    while (*p && *p == *q)
        p++, q++;
    return *p - *q;
}

/* the clock's count: seconds since 1950-01-01 00:00; SyDate: year (16 bits), month, day, hour, minute, second, day of
   the week, the moon's age */
#define RTC_EPOCH_OFFSET 631152000LL   /* 1950-01-01 to 1970-01-01 */

int32_t sy_rtc_count_to_date(uint32_t count, uint32_t date) __asm__("syRtcCountToDate");
int32_t sy_rtc_count_to_date(uint32_t count, uint32_t date)
{
    time_t t = (time_t)((int64_t)count - RTC_EPOCH_OFFSET);
    struct tm tm;
    gmtime_r(&t, &tm);
    uint8_t *d = (uint8_t *)(uintptr_t)date;
    *(int16_t *)d = (int16_t)(tm.tm_year + 1900);
    d[2] = (uint8_t)(tm.tm_mon + 1);
    d[3] = (uint8_t)tm.tm_mday;
    d[4] = (uint8_t)tm.tm_hour;
    d[5] = (uint8_t)tm.tm_min;
    d[6] = (uint8_t)tm.tm_sec;
    d[7] = (uint8_t)tm.tm_wday;
    return 0;
}

int32_t sy_rtc_date_to_count(uint32_t date) __asm__("syRtcDateToCount");
int32_t sy_rtc_date_to_count(uint32_t date)
{
    const uint8_t *d = (const uint8_t *)(uintptr_t)date;
    struct tm tm;
    memset(&tm, 0, sizeof tm);
    tm.tm_year = *(const int16_t *)d - 1900;
    tm.tm_mon = d[2] - 1;
    tm.tm_mday = d[3];
    tm.tm_hour = d[4];
    tm.tm_min = d[5];
    tm.tm_sec = d[6];
    return (int32_t)((int64_t)timegm(&tm) + RTC_EPOCH_OFFSET);
}

/* syBtCfgSet: the boot ROM's copy of the console's settings into RAM. The only one the game reads is the language,
   0x8C00007D (syCfgGetLanguage: 0 Japanese, 1 English); the host's settings say English */
int32_t sy_bt_cfg_set(void) __asm__("syBtCfgSet");
int32_t sy_bt_cfg_set(void)
{
    *(volatile signed char *)(uintptr_t)0x8C00007Du = 1;
    return 0;
}

