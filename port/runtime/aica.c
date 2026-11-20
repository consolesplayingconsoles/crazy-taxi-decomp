/* aica.c: the Dreamcast's sound chip, the AICA, emulated: its ARM7 running the game's sound driver, its 64 channels,
   timers and interrupt controller. The game's sound effects and sequences go to Sega AM2's driver (the copy embedded
   in 1ST_READ.BIN at 0x0C16C40C, which the game uploads to sound RAM) through a command ring in sound RAM; the
   library's own C does that from the SH-4 side, writing the memory the port maps at 0xA0800000 (sound RAM) and
   0xA0700000 (the AICA's registers). This file is the other side: it runs the driver and plays what it keys on.

   The ARM sees sound RAM at 0 and the registers at 0x800000. Registers are 16 bits wide on 32-bit strides. Channel ch
   has 0x80 bytes at ch * 0x80; the common registers start at 0x2800.

   Behaviour follows the documented AICA and the Flycast emulator's model of it (timers, interrupt levels, envelope
   times); the ARM core is a plain ARMv4 interpreter without Thumb (the AICA's ARM7DI has none). */
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "port.h"

#define RAM ((uint8_t *)(uintptr_t)0xA0800000u)
#define RAM_MASK 0x1FFFFFu
#define REGS ((uint8_t *)(uintptr_t)0xA0700000u)

static inline uint16_t reg16(uint32_t off) { return *(volatile uint16_t *)(REGS + off); }
static inline void set_reg16(uint32_t off, uint16_t v) { *(volatile uint16_t *)(REGS + off) = v; }

/* --- the ARM7 --------------------------------------------------------------------------------------------------------- */

enum { USR = 0x10, FIQ = 0x11, IRQ = 0x12, SVC = 0x13, ABT = 0x17, UND = 0x1B, SYS = 0x1F };
#define F_N 0x80000000u
#define F_Z 0x40000000u
#define F_C 0x20000000u
#define F_V 0x10000000u
#define F_I 0x80u
#define F_F 0x40u

static struct {
    uint32_t r[16];
    uint32_t cpsr, spsr;
    uint32_t bank_fiq[7], bank_usr[7]; /* r8-r14 */
    uint32_t bank_r13[6], bank_r14[6], bank_spsr[6]; /* usr, fiq, irq, svc, abt, und */
    int running;
    int fiq_line;
} arm;

static int mode_index(uint32_t m)
{
    switch (m & 0x1F) {
    case FIQ: return 1;
    case IRQ: return 2;
    case SVC: return 3;
    case ABT: return 4;
    case UND: return 5;
    default: return 0;
    }
}

static void switch_mode(uint32_t newmode)
{
    uint32_t old = arm.cpsr & 0x1F;
    newmode &= 0x1F;
    if (old == newmode)
        return;
    int oi = mode_index(old), ni = mode_index(newmode);
    /* r8-r12: FIQ has its own */
    if (old == FIQ) {
        for (int i = 0; i < 5; i++) { arm.bank_fiq[i] = arm.r[8 + i]; arm.r[8 + i] = arm.bank_usr[i]; }
    }
    if (newmode == FIQ) {
        for (int i = 0; i < 5; i++) { arm.bank_usr[i] = arm.r[8 + i]; arm.r[8 + i] = arm.bank_fiq[i]; }
    }
    arm.bank_r13[oi] = arm.r[13];
    arm.bank_r14[oi] = arm.r[14];
    arm.bank_spsr[oi] = arm.spsr;
    arm.r[13] = arm.bank_r13[ni];
    arm.r[14] = arm.bank_r14[ni];
    arm.spsr = arm.bank_spsr[ni];
    arm.cpsr = (arm.cpsr & ~0x1Fu) | newmode;
}

static void set_cpsr(uint32_t v)
{
    switch_mode(v & 0x1F);
    arm.cpsr = v;
}

static uint32_t reg_read(uint32_t off, int size);
static void reg_write(uint32_t off, uint32_t v, int size);

static uint32_t rd32(uint32_t a)
{
    a &= 0xFFFFFF;
    if (a < 0x800000) {
        uint32_t al = a & RAM_MASK & ~3u, v = *(uint32_t *)(RAM + al);
        int rot = (a & 3) * 8; /* an unaligned load rotates */
        return rot ? (v >> rot) | (v << (32 - rot)) : v;
    }
    if (a < 0x810000)
        return reg_read(a & 0xFFFC, 4);
    return 0;
}
static uint32_t rd8(uint32_t a)
{
    a &= 0xFFFFFF;
    if (a < 0x800000)
        return RAM[a & RAM_MASK];
    if (a < 0x810000)
        return (reg_read(a & 0xFFFE, 2) >> ((a & 1) * 8)) & 255;
    return 0;
}
static uint32_t rd16(uint32_t a)
{
    a &= 0xFFFFFF;
    if (a < 0x800000)
        return *(uint16_t *)(RAM + (a & RAM_MASK & ~1u));
    if (a < 0x810000)
        return reg_read(a & 0xFFFE, 2);
    return 0;
}
static void wr32(uint32_t a, uint32_t v)
{
    a &= 0xFFFFFF;
    if (a < 0x800000)
        *(volatile uint32_t *)(RAM + (a & RAM_MASK & ~3u)) = v;
    else if (a < 0x810000)
        reg_write(a & 0xFFFC, v, 4);
}
static void wr8(uint32_t a, uint32_t v)
{
    a &= 0xFFFFFF;
    if (a < 0x800000)
        *(volatile uint8_t *)(RAM + (a & RAM_MASK)) = (uint8_t)v;
    else if (a < 0x810000) {
        uint32_t off = a & 0xFFFE, cur = reg16(off);
        cur = a & 1 ? (cur & 0x00FF) | ((v & 255) << 8) : (cur & 0xFF00) | (v & 255);
        reg_write(off, cur, 2);
    }
}
static void wr16(uint32_t a, uint32_t v)
{
    a &= 0xFFFFFF;
    if (a < 0x800000)
        *(volatile uint16_t *)(RAM + (a & RAM_MASK & ~1u)) = (uint16_t)v;
    else if (a < 0x810000)
        reg_write(a & 0xFFFE, v & 0xFFFF, 2);
}

static int cond(uint32_t c)
{
    uint32_t f = arm.cpsr;
    int n = !!(f & F_N), z = !!(f & F_Z), cy = !!(f & F_C), v = !!(f & F_V);
    switch (c) {
    case 0: return z;
    case 1: return !z;
    case 2: return cy;
    case 3: return !cy;
    case 4: return n;
    case 5: return !n;
    case 6: return v;
    case 7: return !v;
    case 8: return cy && !z;
    case 9: return !cy || z;
    case 10: return n == v;
    case 11: return n != v;
    case 12: return !z && n == v;
    case 13: return z || n != v;
    case 14: return 1;
    default: return 0;
    }
}

/* the shifter: operand 2 of a data-processing instruction, with its carry out */
static uint32_t shift_op(uint32_t op, int imm, int *carry)
{
    *carry = !!(arm.cpsr & F_C);
    if (imm) {
        uint32_t v = op & 0xFF, rot = ((op >> 8) & 15) * 2;
        if (rot) {
            v = (v >> rot) | (v << (32 - rot));
            *carry = v >> 31;
        }
        return v;
    }
    uint32_t rm = arm.r[op & 15];
    if ((op & 15) == 15)
        rm += 4; /* PC reads ahead (8 total; +4 here, the fetch already added 4) */
    int type = (op >> 5) & 3;
    uint32_t amount;
    if (op & 0x10) {
        amount = arm.r[(op >> 8) & 15] & 0xFF;
        if ((op & 15) == 15)
            rm += 4;
        if (amount == 0)
            return rm;
    } else {
        amount = (op >> 7) & 31;
        if (amount == 0) {
            switch (type) {
            case 0: return rm;
            case 1: *carry = rm >> 31; return 0;
            case 2: *carry = rm >> 31; return (uint32_t)((int32_t)rm >> 31);
            case 3: { /* RRX */
                uint32_t c = !!(arm.cpsr & F_C);
                *carry = rm & 1;
                return (rm >> 1) | (c << 31);
            }
            }
        }
    }
    switch (type) {
    case 0:
        if (amount >= 32) { *carry = amount == 32 ? rm & 1 : 0; return 0; }
        *carry = (rm >> (32 - amount)) & 1;
        return rm << amount;
    case 1:
        if (amount >= 32) { *carry = amount == 32 ? rm >> 31 : 0; return 0; }
        *carry = (rm >> (amount - 1)) & 1;
        return rm >> amount;
    case 2:
        if (amount >= 32) { *carry = rm >> 31; return (uint32_t)((int32_t)rm >> 31); }
        *carry = (rm >> (amount - 1)) & 1;
        return (uint32_t)((int32_t)rm >> amount);
    default:
        amount &= 31;
        if (amount == 0) { *carry = rm >> 31; return rm; }
        *carry = (rm >> (amount - 1)) & 1;
        return (rm >> amount) | (rm << (32 - amount));
    }
}

static void set_nz(uint32_t v)
{
    arm.cpsr = (arm.cpsr & ~(F_N | F_Z)) | (v & F_N) | (v ? 0 : F_Z);
}

static void exception(uint32_t vector, uint32_t mode, uint32_t ret)
{
    uint32_t old = arm.cpsr;
    switch_mode(mode);
    arm.spsr = old;
    arm.r[14] = ret;
    arm.cpsr |= F_I;
    if (mode == FIQ)
        arm.cpsr |= F_F;
    arm.r[15] = vector;
}

static void step_arm(void)
{
    if (arm.fiq_line && !(arm.cpsr & F_F)) {
        exception(0x1C, FIQ, arm.r[15] + 4);
        return;
    }
    uint32_t pc = arm.r[15], op = rd32(pc);
    arm.r[15] = pc + 4;
    if (!cond(op >> 28))
        return;
    switch ((op >> 25) & 7) {
    case 0:
    case 1: {
        if ((op & 0x0FC000F0) == 0x00000090) { /* MUL, MLA */
            uint32_t res = arm.r[op & 15] * arm.r[(op >> 8) & 15];
            if (op & (1 << 21))
                res += arm.r[(op >> 12) & 15];
            arm.r[(op >> 16) & 15] = res;
            if (op & (1 << 20))
                set_nz(res);
            return;
        }
        if ((op & 0x0F8000F0) == 0x00800090) { /* UMULL, UMLAL, SMULL, SMLAL */
            uint64_t res;
            if (op & (1 << 22))
                res = (uint64_t)((int64_t)(int32_t)arm.r[op & 15] * (int64_t)(int32_t)arm.r[(op >> 8) & 15]);
            else
                res = (uint64_t)arm.r[op & 15] * arm.r[(op >> 8) & 15];
            if (op & (1 << 21))
                res += ((uint64_t)arm.r[(op >> 16) & 15] << 32) | arm.r[(op >> 12) & 15];
            arm.r[(op >> 12) & 15] = (uint32_t)res;
            arm.r[(op >> 16) & 15] = (uint32_t)(res >> 32);
            if (op & (1 << 20))
                arm.cpsr = (arm.cpsr & ~(F_N | F_Z)) | ((res >> 63) ? F_N : 0) | (res ? 0 : F_Z);
            return;
        }
        if ((op & 0x0FB00FF0) == 0x01000090) { /* SWP, SWPB */
            uint32_t a = arm.r[(op >> 16) & 15], v = arm.r[op & 15];
            if (op & (1 << 22)) {
                uint32_t t = rd8(a);
                wr8(a, v);
                arm.r[(op >> 12) & 15] = t;
            } else {
                uint32_t t = rd32(a);
                wr32(a, v);
                arm.r[(op >> 12) & 15] = t;
            }
            return;
        }
        if ((op & 0x0E000090) == 0x00000090 && (op & 0x60)) { /* LDRH, STRH, LDRSB, LDRSH */
            uint32_t rn = (op >> 16) & 15, rd = (op >> 12) & 15;
            uint32_t off = op & (1 << 22) ? ((op >> 4) & 0xF0) | (op & 15) : arm.r[op & 15];
            uint32_t base = arm.r[rn] + (rn == 15 ? 4 : 0);
            uint32_t addr = op & (1 << 23) ? base + off : base - off;
            uint32_t a = op & (1 << 24) ? addr : base;
            if (op & (1 << 20)) {
                uint32_t v;
                switch ((op >> 5) & 3) {
                case 1: v = rd16(a); break;
                case 2: v = (uint32_t)(int32_t)(int8_t)rd8(a); break;
                default: v = (uint32_t)(int32_t)(int16_t)rd16(a); break;
                }
                if (!(op & (1 << 24)) || (op & (1 << 21)))
                    arm.r[rn] = addr;
                arm.r[rd] = v;
            } else {
                wr16(a, arm.r[rd] + (rd == 15 ? 8 : 0));
                if (!(op & (1 << 24)) || (op & (1 << 21)))
                    arm.r[rn] = addr;
            }
            return;
        }
        if ((op & 0x0FBF0FFF) == 0x010F0000) { /* MRS */
            arm.r[(op >> 12) & 15] = op & (1 << 22) ? arm.spsr : arm.cpsr;
            return;
        }
        if ((op & 0x0DB0F000) == 0x0120F000) { /* MSR */
            uint32_t v = op & (1 << 25) ? shift_op(op, 1, &(int){0}) : arm.r[op & 15];
            uint32_t mask = (op & (1 << 19) ? 0xFF000000u : 0) | (op & (1 << 16) ? 0xFFu : 0);
            if (op & (1 << 22))
                arm.spsr = (arm.spsr & ~mask) | (v & mask);
            else {
                if ((arm.cpsr & 0x1F) == USR)
                    mask &= 0xFF000000u;
                set_cpsr((arm.cpsr & ~mask) | (v & mask));
            }
            return;
        }
        if ((op & 0x0FFFFFF0) == 0x012FFF10) { /* BX */
            arm.r[15] = arm.r[op & 15] & ~1u;
            return;
        }
        /* data processing */
        int carry;
        uint32_t opcode = (op >> 21) & 15, s = (op >> 20) & 1, rn_i = (op >> 16) & 15, rd = (op >> 12) & 15;
        uint32_t b = shift_op(op, (op >> 25) & 1, &carry);
        uint32_t a = arm.r[rn_i] + (rn_i == 15 ? ((op & (1 << 25)) || !(op & 0x10) ? 4 : 8) : 0);
        uint32_t res = 0;
        int write = 1, logical = 0;
        uint64_t wide;
        uint32_t cin = !!(arm.cpsr & F_C), cout = 0, vout = 0;
        switch (opcode) {
        case 0: res = a & b; logical = 1; break;
        case 1: res = a ^ b; logical = 1; break;
        case 2: res = a - b; cout = a >= b; vout = ((a ^ b) & (a ^ res)) >> 31; break;
        case 3: res = b - a; cout = b >= a; vout = ((b ^ a) & (b ^ res)) >> 31; break;
        case 4: wide = (uint64_t)a + b; res = (uint32_t)wide; cout = wide >> 32; vout = (~(a ^ b) & (a ^ res)) >> 31; break;
        case 5: wide = (uint64_t)a + b + cin; res = (uint32_t)wide; cout = wide >> 32; vout = (~(a ^ b) & (a ^ res)) >> 31; break;
        case 6: wide = (uint64_t)a - b - !cin; res = (uint32_t)wide; cout = (uint64_t)a >= (uint64_t)b + !cin; vout = ((a ^ b) & (a ^ res)) >> 31; break;
        case 7: wide = (uint64_t)b - a - !cin; res = (uint32_t)wide; cout = (uint64_t)b >= (uint64_t)a + !cin; vout = ((b ^ a) & (b ^ res)) >> 31; break;
        case 8: res = a & b; logical = 1; write = 0; break;
        case 9: res = a ^ b; logical = 1; write = 0; break;
        case 10: res = a - b; cout = a >= b; vout = ((a ^ b) & (a ^ res)) >> 31; write = 0; break;
        case 11: wide = (uint64_t)a + b; res = (uint32_t)wide; cout = wide >> 32; vout = (~(a ^ b) & (a ^ res)) >> 31; write = 0; break;
        case 12: res = a | b; logical = 1; break;
        case 13: res = b; logical = 1; break;
        case 14: res = a & ~b; logical = 1; break;
        case 15: res = ~b; logical = 1; break;
        }
        if (write)
            arm.r[rd] = res;
        if (s) {
            if (rd == 15 && write) {
                set_cpsr(arm.spsr);
            } else {
                set_nz(res);
                if (logical)
                    arm.cpsr = (arm.cpsr & ~F_C) | (carry ? F_C : 0);
                else
                    arm.cpsr = (arm.cpsr & ~(F_C | F_V)) | (cout ? F_C : 0) | (vout ? F_V : 0);
            }
        }
        return;
    }
    case 2:
    case 3: { /* LDR, STR */
        uint32_t rn = (op >> 16) & 15, rd = (op >> 12) & 15;
        int carry;
        uint32_t off = op & (1 << 25) ? shift_op(op & ~0x10u, 0, &carry) : op & 0xFFF;
        uint32_t base = arm.r[rn] + (rn == 15 ? 4 : 0);
        uint32_t addr = op & (1 << 23) ? base + off : base - off;
        uint32_t a = op & (1 << 24) ? addr : base;
        int wb = !(op & (1 << 24)) || (op & (1 << 21));
        if (op & (1 << 20)) {
            uint32_t v = op & (1 << 22) ? rd8(a) : rd32(a);
            if (wb && rn != rd)
                arm.r[rn] = addr;
            arm.r[rd] = rd == 15 ? v & ~3u : v;
        } else {
            uint32_t v = arm.r[rd] + (rd == 15 ? 8 : 0);
            if (op & (1 << 22))
                wr8(a, v);
            else
                wr32(a, v);
            if (wb)
                arm.r[rn] = addr;
        }
        return;
    }
    case 4: { /* LDM, STM */
        uint32_t rn = (op >> 16) & 15, list = op & 0xFFFF, n = 0;
        for (int i = 0; i < 16; i++)
            n += (list >> i) & 1;
        uint32_t base = arm.r[rn], start;
        int up = op & (1 << 23), pre = op & (1 << 24);
        if (up)
            start = pre ? base + 4 : base;
        else
            start = pre ? base - 4 * n : base - 4 * n + 4;
        uint32_t newbase = up ? base + 4 * n : base - 4 * n;
        int user = (op & (1 << 22)) && !((op & (1 << 20)) && (list & 0x8000));
        uint32_t saved_mode = arm.cpsr & 0x1F;
        if (user)
            switch_mode(USR);
        uint32_t a = start;
        if (op & (1 << 20)) {
            if (op & (1 << 21))
                arm.r[rn] = newbase;
            for (int i = 0; i < 16; i++)
                if (list & (1 << i)) {
                    arm.r[i] = rd32(a);
                    a += 4;
                }
            if (list & 0x8000) {
                arm.r[15] &= ~3u;
                if (op & (1 << 22))
                    set_cpsr(arm.spsr);
            }
        } else {
            for (int i = 0; i < 16; i++)
                if (list & (1 << i)) {
                    wr32(a, arm.r[i] + (i == 15 ? 8 : 0));
                    a += 4;
                }
            if (op & (1 << 21))
                arm.r[rn] = newbase;
        }
        if (user)
            switch_mode(saved_mode);
        return;
    }
    case 5: { /* B, BL */
        int32_t off = (int32_t)(op << 8) >> 6;
        if (op & (1 << 24))
            arm.r[14] = arm.r[15];
        arm.r[15] = arm.r[15] + 4 + (uint32_t)off;
        return;
    }
    case 7:
        if ((op >> 24) & 1) { /* SWI */
            exception(0x08, SVC, arm.r[15]);
            return;
        }
        return; /* coprocessor: none */
    default:
        return;
    }
}

static void arm_reset(void)
{
    memset(&arm, 0, sizeof arm);
    arm.cpsr = SVC | F_I | F_F;
    arm.running = 1;
}

/* --- the channels ------------------------------------------------------------------------------------------------------- */

struct channel {
    int playing;
    int keyed;               /* the key state KYONB last set: a channel whose sample ended stays keyed until KYONB drops */
    uint32_t sa, cur, frac;  /* start address, current sample and fraction (16.16) */
    int fmt, loop;
    int16_t sample, prev;
    int32_t adpcm_acc, adpcm_step;
    int32_t loop_acc, loop_step;
    int env_state;            /* 0 attack, 1 decay 1, 2 decay 2, 3 release, 4 off */
    float env;                /* attenuation 0 .. 1023 */
    int lp_hit;
};
static struct channel ch[64];

#define CREG(c, i) reg16((c) * 0x80 + (i) * 4)

static const float ar_ms[64] = {
    100000, 100000, 8100, 6900, 6000, 4800, 4000, 3400, 3000, 2400, 2000, 1700, 1500, 1200, 1000, 860, 760, 600, 500, 430,
    380, 300, 250, 220, 190, 150, 130, 110, 95, 76, 63, 55, 47, 38, 31, 27, 24, 19, 15, 13, 12, 9.4f, 7.9f, 6.8f, 6.0f,
    4.7f, 3.8f, 3.4f, 3.0f, 2.4f, 2.0f, 1.8f, 1.6f, 1.3f, 1.1f, 0.93f, 0.85f, 0.65f, 0.53f, 0.44f, 0.40f, 0.35f, 0, 0};
static const float dr_ms[64] = {
    100000, 100000, 118200, 101300, 88600, 70900, 59100, 50700, 44300, 35500, 29600, 25300, 22200, 17700, 14800, 12700,
    11100, 8900, 7400, 6300, 5500, 4400, 3700, 3200, 2800, 2200, 1800, 1600, 1400, 1100, 920, 790, 690, 550, 460, 390,
    340, 270, 230, 200, 170, 140, 110, 98, 85, 68, 57, 49, 43, 34, 28, 25, 22, 18, 14, 12, 11, 8.5f, 7.1f, 6.1f, 5.4f,
    4.3f, 3.6f, 3.1f};

static float env_step(int rate, const float *table)
{
    int r = rate * 2;
    if (r > 63)
        r = 63;
    if (rate == 0)
        return 0;
    float ms = table[r];
    if (ms <= 0)
        return 1024;
    return 1024.0f / (ms * 44.1f);
}

static unsigned long key_ons;
unsigned long aica_key_ons(void) { return key_ons; }
uint32_t aica_arm_pc(void) { return arm.r[15]; }
int aica_arm_running(void) { return arm.running; }

static void key_on(int c)
{
    key_ons++;
    struct channel *k = &ch[c];
    k->sa = ((CREG(c, 0) & 0x7F) << 16) | CREG(c, 1);
    k->fmt = (CREG(c, 0) >> 7) & 3;
    k->loop = (CREG(c, 0) >> 9) & 1;
    k->cur = 0;
    k->frac = 0;
    k->sample = k->prev = 0;
    k->adpcm_acc = 0;
    k->adpcm_step = 127;
    k->env_state = 0;
    k->env = 1023;
    k->lp_hit = 0;
    k->playing = 1;
    static int dbg = -1;
    if (dbg < 0)
        dbg = getenv("PORT_DEBUG_KEYON") != 0;
    if (dbg)
        fprintf(stderr, "keyon %d sa %06X fmt %d loop %d lsa %04X lea %04X\n", c, k->sa, k->fmt, k->loop, CREG(c, 2), CREG(c, 3));
}

static void key_off(int c)
{
    if (ch[c].playing)
        ch[c].env_state = 3;
}

static const int adpcm_diff[16] = {1, 3, 5, 7, 9, 11, 13, 15, -1, -3, -5, -7, -9, -11, -13, -15};
static const int adpcm_scale[16] = {230, 230, 230, 230, 307, 409, 512, 614, 230, 230, 230, 230, 307, 409, 512, 614};

/* the sample at k->cur */
static int16_t fetch_sample(struct channel *k)
{
    uint32_t a;
    switch (k->fmt) {
    case 0:
        a = (k->sa + k->cur * 2) & RAM_MASK;
        return *(int16_t *)(RAM + (a & ~1u));
    case 1:
        a = (k->sa + k->cur) & RAM_MASK;
        return (int16_t)((int8_t)RAM[a] << 8);
    default: {
        a = (k->sa + k->cur / 2) & RAM_MASK;
        int n = (RAM[a] >> ((k->cur & 1) * 4)) & 15;
        k->adpcm_acc += (k->adpcm_step * adpcm_diff[n]) / 8;
        k->adpcm_acc = k->adpcm_acc > 32767 ? 32767 : k->adpcm_acc < -32768 ? -32768 : k->adpcm_acc;
        k->adpcm_step = (k->adpcm_step * adpcm_scale[n]) >> 8;
        k->adpcm_step = k->adpcm_step < 127 ? 127 : k->adpcm_step > 24576 ? 24576 : k->adpcm_step;
        return (int16_t)k->adpcm_acc;
    }
    }
}

static const float pan_att_db[16] = {0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 96};

static void render_channel(int c, int32_t *l, int32_t *r)
{
    struct channel *k = &ch[c];
    if (!k->playing)
        return;
    uint32_t lsa = CREG(c, 2), lea = CREG(c, 3);
    int oct = (CREG(c, 6) >> 11) & 15;
    if (oct & 8)
        oct -= 16;
    uint32_t fns = CREG(c, 6) & 0x3FF;
    double inc = ldexp(1.0 + fns / 1024.0, oct);
    uint32_t step = (uint32_t)(inc * 65536.0);

    /* the envelope */
    uint32_t r4 = CREG(c, 4), r5 = CREG(c, 5);
    int ar = r4 & 31, d1r = (r4 >> 6) & 31, d2r = (r4 >> 11) & 31, rr = r5 & 31, dl = (r5 >> 5) & 31;
    switch (k->env_state) {
    case 0:
        k->env -= env_step(ar, ar_ms);
        if (k->env <= 0) { k->env = 0; k->env_state = 1; }
        break;
    case 1:
        k->env += env_step(d1r, dr_ms);
        if (k->env >= dl * 32) { k->env = (float)(dl * 32); k->env_state = 2; }
        break;
    case 2:
        k->env += env_step(d2r, dr_ms);
        if (k->env >= 1023) k->env = 1023;
        break;
    case 3:
        k->env += env_step(rr, dr_ms);
        if (k->env >= 1023) { k->env = 1023; k->playing = 0; return; }
        break;
    }

    /* level: the envelope, TL, and the direct send's level and pan */
    uint32_t r9 = CREG(c, 9), r10 = CREG(c, 10);
    int disdl = (r9 >> 8) & 15, dipan = r9 & 31, tl = (r10 >> 8) & 255;
    if (disdl == 0)
        goto advance;
    {
        float db = k->env * (96.0f / 1024.0f) + tl * 0.375f + (15 - disdl) * 3.0f;
        float side = pan_att_db[dipan & 15];
        float gl = powf(10.0f, -(db + (dipan & 16 ? 0 : side)) / 20.0f);
        float gr = powf(10.0f, -(db + (dipan & 16 ? side : 0)) / 20.0f);
        int32_t s = k->sample + (int32_t)(((int64_t)(k->prev - k->sample) * 0) >> 16);
        *l += (int32_t)(s * gl);
        *r += (int32_t)(s * gr);
    }
advance:
    k->frac += step;
    while (k->frac >= 65536) {
        k->frac -= 65536;
        k->prev = k->sample;
        k->cur++;
        if (k->cur > lea) {
            k->lp_hit = 1;
            if (k->loop) {
                k->cur = lsa;
                if (k->fmt == 2) {
                    k->adpcm_acc = k->loop_acc;
                    k->adpcm_step = k->loop_step;
                }
            } else {
                k->playing = 0;
                return;
            }
        }
        if (k->fmt == 2 && k->cur == lsa) {
            k->loop_acc = k->adpcm_acc;
            k->loop_step = k->adpcm_step;
        }
        k->sample = fetch_sample(k);
    }
}

/* --- registers, timers, interrupts ------------------------------------------------------------------------------------- */

static uint32_t timer_div[3];

static void update_interrupts(void)
{
    uint32_t pend = reg16(0x289C) & reg16(0x28A0);
    uint32_t level = 0;
    if (pend) {
        for (int i = 0; i < 11; i++)
            if (pend & (1u << i)) {
                int b = i > 7 ? 7 : i;
                level = ((reg16(0x28A8) >> b) & 1) | (((reg16(0x28AC) >> b) & 1) << 1) | (((reg16(0x28B0) >> b) & 1) << 2);
                break;
            }
    }
    set_reg16(0x2D00, (uint16_t)level);
    arm.fiq_line = pend != 0;
}

static uint32_t reg_read(uint32_t off, int size)
{
    (void)size;
    if (off == 0x2810) { /* the monitored channel's envelope and loop flag */
        int c = (reg16(0x280C) >> 8) & 63;
        uint32_t v = ((uint32_t)ch[c].env & 0x1FFF) | (ch[c].lp_hit ? 0x8000 : 0);
        if (!ch[c].playing)
            v |= 0x1FFF;
        ch[c].lp_hit = 0;
        return v;
    }
    if (off == 0x2814) { /* its current address */
        int c = (reg16(0x280C) >> 8) & 63;
        return ch[c].cur & 0xFFFF;
    }
    return reg16(off);
}

static void reg_write(uint32_t off, uint32_t v, int size)
{
    (void)size;
    v &= 0xFFFF;
    if (off < 0x2000) {
        int c = off / 0x80, i = (off % 0x80) / 4;
        set_reg16(off, (uint16_t)(i == 0 ? v & 0x7FFF : v));
        if (i == 0 && (v & 0x8000)) { /* KYONEX: every channel keys on or off by its KYONB */
            /* the AICA acts on a change of the key state, not on the bit alone: a channel that is keyed and whose
               sample has run out is not started again by the next KYONEX (another sound's key-on writes it for every
               channel), or every finished sound would replay each time one starts */
            for (int k = 0; k < 64; k++) {
                int want = (CREG(k, 0) & 0x4000) != 0;
                if (want && !ch[k].keyed) {
                    ch[k].keyed = 1;
                    key_on(k);
                } else if (!want && ch[k].keyed) {
                    ch[k].keyed = 0;
                    key_off(k);
                }
            }
        }
        (void)c;
        return;
    }
    switch (off) {
    case 0x2890:
    case 0x2894:
    case 0x2898:
        set_reg16(off, (uint16_t)v);
        timer_div[(off - 0x2890) / 4] = 0;
        return;
    case 0x28A0: /* SCIPD: bit 5 is the software interrupt */
        set_reg16(0x28A0, (uint16_t)(reg16(0x28A0) | (v & 0x20)));
        update_interrupts();
        return;
    case 0x28A4: /* SCIRE: clears pending interrupts */
        set_reg16(0x28A0, (uint16_t)(reg16(0x28A0) & ~v));
        update_interrupts();
        return;
    case 0x289C:
    case 0x28A8:
    case 0x28AC:
    case 0x28B0:
        set_reg16(off, (uint16_t)v);
        update_interrupts();
        return;
    case 0x2D04: /* the interrupt's acknowledge */
        update_interrupts();
        return;
    default:
        set_reg16(off, (uint16_t)v);
    }
}

static void tick_timers(void)
{
    for (int t = 0; t < 3; t++) {
        uint32_t r = reg16(0x2890 + t * 4);
        uint32_t pre = 1u << ((r >> 8) & 7);
        if (++timer_div[t] >= pre) {
            timer_div[t] = 0;
            uint32_t cnt = (r & 255) + 1;
            if (cnt > 255) {
                cnt = 0;
                set_reg16(0x28A0, (uint16_t)(reg16(0x28A0) | (0x40u << t)));
                update_interrupts();
            }
            set_reg16(0x2890 + t * 4, (uint16_t)((r & 0xFF00) | cnt));
        }
    }
}

/* --- the sound thread's step ------------------------------------------------------------------------------------------- */

#define ARM_PER_SAMPLE 64 /* about 2.8 million ARM instructions a second */

static int was_reset = 1;

/* mix frames of the AICA into out (stereo, added) */
void aica_render(int32_t *out, int frames)
{
    for (int f = 0; f < frames; f++) {
        int reset = reg16(0x2C00) & 1;
        if (reset)
            arm.running = 0;
        else if (was_reset) {
            arm_reset();
            update_interrupts();
        }
        was_reset = reset;
        if (arm.running)
            for (int i = 0; i < ARM_PER_SAMPLE; i++)
                step_arm();
        tick_timers();
        int32_t l = 0, r = 0;
        for (int c = 0; c < 64; c++)
            render_channel(c, &l, &r);
        out[f * 2] += l;
        out[f * 2 + 1] += r;
    }
}
