/* the compatible math, fast. math.c is the reference, written to be read.
 * a program that plays links this file in math.c's place for the same bits.
 * six operations get a fast body in both of math.c's builds, and the
 * reference's take ref_ names. a body passes the reference any operand it
 * doesn't handle, so a NaN's form stays in math.c alone.
 *
 * nothing here hangs on the FPU's mode. FIPR, FTRV, FMAC and the console's
 * FSRRA are integers, and FSCA is a table. FSQRT and the default build's FSRRA
 * take only a first guess from the FPU's sqrtf and divide. integers decide
 * the answer, so a mode, or an FPU with no double, moves no bit. the integers
 * fit a 32-bit machine. a 24 by 24 bit product is the widest multiply, and
 * the console's array works in 32 bits */
#include "play_math.h"

#define sa_fsqrt ref_fsqrt
#define sa_fmac ref_fmac
#define sa_fipr ref_fipr
#define sa_ftrv ref_ftrv
#define sa_fsca ref_fsca
#define sa_fsrra ref_fsrra
#include "math.c"
#undef sa_fsqrt
#undef sa_fmac
#undef sa_fipr
#undef sa_ftrv
#undef sa_fsca
#undef sa_fsrra

#include <math.h>

/* a right shift of a negative number is the compiler's to define. this file
 * needs the arithmetic shift, and won't compile without it */
typedef char arithmetic_shift[(-1 >> 1) == -1 ? 1 : -1];

/* sine_words holds the bits of each sine over the first half turn, which
 * sine.c prints from the reference */
#ifdef SA_NUMERIC_CONSOLE
#include "sine-console.h"
#else
#include "sine.h"
#endif

#define HIDDEN 0x800000U
#define MANTISSA 0x7fffffU
#define MAGNITUDE 0x7fffffffU
#define EXPONENT(bits) ((int32_t)((bits) >> 23 & 0xff))
/* a normal float is its 24-bit mantissa times 2^(field - UNIT_BIAS) */
#define UNIT_BIAS 150

static inline int is_normal(uint32_t bits)
{
    return (bits & MAGNITUDE) - 0x00800000U < 0x7f000000U;
}

static inline uint32_t word_at(const float *at)
{
    uint32_t word;

    memcpy(&word, at, sizeof word);
    return word;
}

/* dot skips a row's word where the vector's word is zero. a NaN or an
 * infinity there still decides the answer, so this looks for one. adding
 * H'800000 to a magnitude sets the top bit only for an exponent of 255. zeros
 * marks the vector's zero words. row holds count rows side by side, each
 * row's words stride apart */
static inline uint32_t special_under_zeros(unsigned int zeros, const float *row,
                                           int count, int stride)
{
    uint32_t seen = 0;
    int i;
    int j;

    for (j = 0; j < 4; j++) {
        if ((zeros >> j & 1) != 0) {
            for (i = 0; i < count; i++) {
                seen |=
                    (word_at(&row[i + j * stride]) & MAGNITUDE) + 0x00800000U;
            }
        }
    }
    return seen & SIGN;
}

/* man * 2^exp. man's top bit sits at bit 63, so a larger exp is the larger
 * magnitude. a zero has man 0 */
typedef struct {
    uint64_t man;
    int32_t exp;
    uint32_t sign;
} term;
/* a term's man holds a float's 24-bit mantissa this many bits up */
#define TERM_UP 40

static inline int leading_zeros(uint64_t n)
{
#ifdef __GNUC__
    return __builtin_clzll(n);
#else
    return 64 - length(n);
#endif
}

/* two normal floats' product, exact */
static inline term product(uint32_t a, uint32_t b)
{
    uint64_t man =
        (uint64_t)((a & MANTISSA) | HIDDEN) * ((b & MANTISSA) | HIDDEN);
    int up = 17 - (int)(man >> 47);
    term t;

    t.man = man << up;
    t.exp = EXPONENT(a) + EXPONENT(b) - 2 * UNIT_BIAS - up;
    t.sign = (a ^ b) & SIGN;
    return t;
}

/* a + b, both nonzero, truncated to a double's 53 bits as add_exact does.
 * the larger comes down one bit, so a sum can't carry out. a difference loses
 * one unit for the smaller's lost bits, below every bit the result keeps.
 * only operands of one exp can leave a difference negative. a predictor
 * can't guess which operand is larger or which sign wins, so neither is a
 * branch */
static inline term add(term a, term b)
{
    int swap = a.exp < b.exp;
    uint64_t larger = (swap ? b.man : a.man) >> 1;
    uint64_t smaller = swap ? a.man : b.man;
    uint32_t apart = (uint32_t)(swap ? b.exp - a.exp : a.exp - b.exp);
    uint64_t differ = 0U - (uint64_t)((a.sign ^ b.sign) >> 31);
    uint64_t lost;
    uint64_t man;
    uint64_t negative;
    int up;
    term sum;

    apart = apart > 63 ? 63 : apart;
    lost = smaller << (63 - apart) != 0;
    smaller = smaller >> 1 >> apart;
    man = larger + ((smaller ^ differ) - differ) - (lost & differ);
    negative = 0U - ((man & differ) >> 63);
    man = (man ^ negative) - negative;
    sum.sign = (swap ? b.sign : a.sign) ^ ((uint32_t)negative & SIGN);
    if (man == 0) {
        sum.man = 0;
        sum.exp = 0;
        sum.sign = 0;
        return sum;
    }
    up = leading_zeros(man);
    sum.man = man << up & ~(uint64_t)0x7ff;
    sum.exp = (swap ? b.exp : a.exp) + 1 - up;
    return sum;
}

/* t to a float, flushed and clamped toward zero as pack does */
static inline uint32_t float_of_term(term t)
{
    int32_t biased = t.exp + (TERM_UP + UNIT_BIAS);

    if (t.man == 0 || biased <= 0) {
        return t.sign;
    }
    if (biased >= 255) {
        return t.sign | MAX_FINITE;
    }
    return t.sign | (uint32_t)biased << 23 |
           ((uint32_t)(t.man >> TERM_UP) & MANTISSA);
}

float sa_fmac(float f0, float fm, float fn)
{
    uint32_t a = bits_of(f0);
    uint32_t b = bits_of(fm);
    uint32_t c = bits_of(fn);
    term addend;

    if (!is_normal(a) || !is_normal(b) || !is_normal(c)) {
        return ref_fmac(f0, fm, fn);
    }
    addend.man = (uint64_t)((c & MANTISSA) | HIDDEN) << TERM_UP;
    addend.exp = EXPONENT(c) - (TERM_UP + UNIT_BIAS);
    addend.sign = c & SIGN;
    return float_of(float_of_term(add(product(a, b), addend)));
}

/* a positive normal float's root: 24 bits toward zero, and the root's
 * exponent field in *field. sqrtf guesses it, and root * root against n
 * corrects it */
static inline uint32_t root_of(uint32_t bits, float a, int32_t *field)
{
    int32_t unbiased = EXPONENT(bits) - 127;
    int32_t half = unbiased >> 1;
    uint64_t n = (uint64_t)((bits & MANTISSA) | HIDDEN)
                 << (23 + (unbiased & 1));
    uint32_t guess = bits_of(sqrtf(a));
    uint32_t root;

    *field = 127 + half;
    root = EXPONENT(guess) == *field  ? (guess & MANTISSA) | HIDDEN
           : EXPONENT(guess) < *field ? HIDDEN
                                      : 0xffffffU;
    while ((uint64_t)root * root > n) {
        root--;
    }
    while ((uint64_t)(root + 1) * (root + 1) <= n) {
        root++;
    }
    return root;
}

float sa_fsqrt(float a)
{
    uint32_t bits = bits_of(a);
    int32_t field;
    uint32_t root;

    if (!is_normal(bits) || (bits & SIGN) != 0) {
        return ref_fsqrt(a);
    }
    root = root_of(bits, a, &field);
    return float_of((uint32_t)field << 23 | (root & MANTISSA));
}

#ifdef SA_NUMERIC_CONSOLE
/* a multiplicand's Booth rows, indexed by a digit's three bits of the
 * recoded operand. a negative digit's row is a one's complement */
typedef struct {
    int32_t row[8];
} rows;

static inline rows rows_of(int32_t mul)
{
    int32_t twice = mul * 2;
    rows r = {{0, mul, mul, twice, ~twice, ~mul, ~mul, 0}};

    return r;
}

/* sh4_fpu__arr, the console's multiplier, over 2^16 and mod 2^32. the
 * division is exact, as every row is cut below column 16. digit k of rec's
 * low 18 bits gives row k, shifted down 16 - 2k bits. rows 0 to 2 add a
 * majority carry, and rows 6 to 8 lose a parity. digits from bit 18 up give
 * an exact product */
static inline uint32_t array(int32_t rec, const rows *mul)
{
    uint32_t low = (uint32_t)rec & 0x3ffff;
    int32_t high = (rec - ((int32_t)(low ^ 0x20000) - 0x20000)) >> 18;
    uint32_t digits = low << 1;
    int32_t r0 = mul->row[digits & 7];
    int32_t r1 = mul->row[digits >> 2 & 7];
    int32_t r2 = mul->row[digits >> 4 & 7];
    int32_t r6 = mul->row[digits >> 12 & 7] >> 4;
    int32_t r7 = mul->row[digits >> 14 & 7] >> 2;
    int32_t r8 = mul->row[digits >> 16 & 7];
    uint32_t sum = ((uint32_t)high * (uint32_t)mul->row[1]) << 2;
    int majority = (r0 >> 15 & 1) + (r1 >> 13 & 1) + (r2 >> 11 & 1);

    sum += (uint32_t)(r0 >> 16) + (uint32_t)(r1 >> 14) + (uint32_t)(r2 >> 12);
    sum += (uint32_t)(mul->row[digits >> 6 & 7] >> 10);
    sum += (uint32_t)(mul->row[digits >> 8 & 7] >> 8);
    sum += (uint32_t)(mul->row[digits >> 10 & 7] >> 6);
    sum += (uint32_t)r6 + (uint32_t)r7 + (uint32_t)r8;
    return sum + (majority >= 2) - ((uint32_t)(r6 ^ r7 ^ r8) & 1);
}

/* a normal word of a vector, taken apart once and used for every row. at is
 * its index, and a denormal counts as a zero */
typedef struct {
    rows by;
    int32_t exp;
    uint32_t sign;
    int at;
} factor;

/* how many, or -1 for a NaN or an infinity */
static inline int factors_of(const float *vector, factor *factors,
                             unsigned int *zeros)
{
    int n = 0;
    int i;

    *zeros = 0;
    for (i = 0; i < 4; i++) {
        uint32_t word = word_at(&vector[i]);

        if (EXPONENT(word) == 0xff) {
            return -1;
        }
        if (EXPONENT(word) == 0) {
            *zeros |= 1U << i;
            continue;
        }
        factors[n].by = rows_of((int32_t)((word & MANTISSA) | HIDDEN));
        factors[n].exp = EXPONENT(word);
        factors[n].sign = word & SIGN;
        factors[n].at = i;
        n++;
    }
    return n;
}

/* sh4_fipr__dot where no operand is a NaN or an infinity. a product whose
 * exponent fields sum to 75 or less drops. the rest, 28-bit product
 * registers, are aligned to the largest by truncation and summed in 32 bits.
 * a negative product stays a one's complement until its shift, so it
 * truncates toward zero too. a NaN or an infinity in rec at a factor's index
 * sets *special */
static inline uint32_t dot(const factor *factors, int n, const float *rec,
                           int stride, uint32_t *special)
{
    int32_t exps[4];
    int32_t products[4];
    int32_t largest = 0;
    int32_t sum = 0;
    int terms = 0;
    int i;

    for (i = 0; i < n; i++) {
        uint32_t b = word_at(&rec[factors[i].at * stride]);
        int32_t eb = EXPONENT(b);
        int32_t exp = factors[i].exp + eb;
        int32_t product;

        if (eb == 0xff) {
            *special = 1;
            return 0;
        }
        if (eb == 0 || exp <= 75) {
            continue;
        }
        product = (int32_t)((array((int32_t)((b & MANTISSA) | HIDDEN),
                                   &factors[i].by) +
                             8) >>
                            4);
        products[terms] =
            ((b ^ factors[i].sign) & SIGN) != 0 ? ~product : product;
        exps[terms] = exp;
        largest = exp > largest ? exp : largest;
        terms++;
    }
    for (i = 0; i < terms; i++) {
        int32_t apart = largest - exps[i];

        apart = apart > 31 ? 31 : apart;
        sum += (products[i] >> apart) - (products[i] >> 31);
    }
    if (sum == 0) {
        return 0;
    }
    {
        uint32_t sign = sum < 0 ? SIGN : 0;
        uint32_t man = (uint32_t)(sum < 0 ? -sum : sum);
        int top = 63 - leading_zeros(man);
        /* a product register drops its product's low 20 bits. so the sum's
         * last bit is 2^(largest - 2 * UNIT_BIAS + 20) */
        int32_t biased = top + largest - (2 * UNIT_BIAS - 20 - 127);

        if (biased < 1) {
            return sign;
        }
        if (biased >= 255) {
            return sign | MAX_FINITE;
        }
        man = top > 23 ? man >> (top - 23) : man << (23 - top);
        return sign | (uint32_t)biased << 23 | (man & MANTISSA);
    }
}

float sa_fipr(const float a[4], const float b[4])
{
    factor factors[4];
    unsigned int zeros;
    uint32_t special = 0;
    int n = factors_of(b, factors, &zeros);
    uint32_t word;

    if (n < 0 || special_under_zeros(zeros, a, 1, 1) != 0) {
        return ref_fipr(a, b);
    }
    word = dot(factors, n, a, 1, &special);
    return special != 0 ? ref_fipr(a, b) : float_of(word);
}

void sa_ftrv(const float m[16], const float v[4], float out[4])
{
    factor factors[4];
    unsigned int zeros;
    uint32_t special = 0;
    int n = factors_of(v, factors, &zeros);
    uint32_t ob[4];
    int i;

    if (n >= 0 && special_under_zeros(zeros, m, 4, 4) == 0) {
        for (i = 0; i < 4; i++) {
            ob[i] = dot(factors, n, m + i, 4, &special);
        }
        if (special == 0) {
            memcpy(out, ob, sizeof ob);
            return;
        }
    }
    ref_ftrv(m, v, out);
}

/* sh4_fsrra_internal with array's products, which are over 2^16. its K is
 * 8 here, and each of its shifts is 16 less */
static inline int32_t fsrra_internal(uint32_t mantissa, int parity)
{
    int32_t m = (int32_t)mantissa;
    int32_t node = (m + (1 << 18)) >> 19;
    int32_t dx = (m - node * (1 << 19)) * 16;
    const sh4_fsrra_word_t *w = &sh4_fsrra_rom[(parity ? 17 : 0) + node];
    rows by_dx = rows_of(dx);
    int32_t sq = ((int32_t)array(dx, &by_dx) + 8) >> 7;
    rows by_sq = rows_of(sq);
    int32_t t1 = (int32_t)array((int32_t)w->rec1, &by_dx) + 8;
    int32_t t2 = (int32_t)array((int32_t)w->c2f * 512, &by_sq) + 8;
    int32_t i = ((int32_t)array((int32_t)w->c3f * 256, &by_sq) + 8) >> 7;
    rows by_i = rows_of(i);
    int32_t t3 = (int32_t)array(dx, &by_i) + 8;

    t1 = (t1 >> (10 - w->e1)) + (t1 < 0);
    t2 = (t2 >> 13) + (t2 < 0);
    t3 = (t3 >> 11) + (t3 < 0);
    return (int32_t)w->c0 - t1 + t2 - t3;
}

float sa_fsrra(float a)
{
    uint32_t bits = bits_of(a);
    int32_t unbiased = EXPONENT(bits) - 127;
    int parity = unbiased & 1;
    int32_t w;
    int top;

    if (!is_normal(bits) || (bits & SIGN) != 0) {
        return ref_fsrra(a);
    }
    w = fsrra_internal(bits & MANTISSA, parity);
    top = w >> 26 ? 26 : 25;
    return float_of((uint32_t)(top - 26 - (unbiased - parity) / 2 + 127) << 23 |
                    ((uint32_t)(w >> (top - 23)) & MANTISSA));
}

/* a sine word: a zero is +0 at both crossings */
static inline uint32_t sine_of(uint32_t angle)
{
    uint32_t word = sine_words[angle & 0x7fff];

    return word == 0 ? 0 : word ^ (angle & 0x8000) << 16;
}
#else
/* the default FIPR sums four exact products in doubles, first to last, each
 * sum toward zero. a zero product leaves a nonzero sum alone. zero products
 * sum to a zero with the AND of their signs. no NaN or denormal reaches
 * product() here */
static uint32_t dot_in_order(const float *vector, const float *row, int stride)
{
    term sum;
    int i;

    sum.man = 0;
    sum.exp = 0;
    sum.sign = SIGN;
    for (i = 0; i < 4; i++) {
        uint32_t x = word_at(&vector[i]);
        uint32_t y = word_at(&row[i * stride]);

        if ((x & MAGNITUDE) == 0 || (y & MAGNITUDE) == 0) {
            if (sum.man == 0) {
                sum.sign &= (x ^ y) & SIGN;
            }
        } else if (sum.man == 0) {
            sum = product(x, y);
        } else {
            sum = add(sum, product(x, y));
        }
    }
    return float_of_term(sum);
}

/* dot shifts each product of two mantissas, 48 bits at most, up by DOT_UP.
 * DOT_BAND bounds how far its one sum can lie from dot_in_order's. a product
 * fits 61 bits here. a double's 53 bits cut the three partial sums by under
 * 2^9, 2^10 and 2^10. aligning each of four products cuts under 1 more. a
 * sum with its top bit at top has 2^(top - 23) as a float's last bit.
 * DOT_TOP is the least top that puts that bit over 2 * DOT_BAND */
#define DOT_UP 13
#define DOT_BAND (1ULL << 12)
#define DOT_TOP 37

/* a normal word of a vector, taken apart once and used for every row. at is
 * its index */
typedef struct {
    uint32_t man;
    int32_t exp;
    uint32_t sign;
    int at;
} factor;

/* how many, or -1 for anything but a normal or a zero */
static inline int factors_of(const float *vector, factor *factors,
                             unsigned int *zeros)
{
    int n = 0;
    int i;

    *zeros = 0;
    for (i = 0; i < 4; i++) {
        uint32_t word = word_at(&vector[i]);

        if (is_normal(word)) {
            factors[n].man = (word & MANTISSA) | HIDDEN;
            factors[n].exp = EXPONENT(word);
            factors[n].sign = word & SIGN;
            factors[n].at = i;
            n++;
        } else if ((word & MAGNITUDE) == 0) {
            *zeros |= 1U << i;
        } else {
            return -1;
        }
    }
    return n;
}

/* dot_in_order's answer in one pass, with the products aligned to the
 * largest and summed once. a float keeps the sum's top 24 bits. the doubles'
 * truncations can't change them while the bits below lie at least DOT_BAND
 * from either end. a lone product loses nothing. otherwise dot_in_order
 * decides, as where a cancellation leaves few bits. row's word at a factor's
 * index sets *special unless it is a normal or a zero */
static inline uint32_t dot(const float *vector, const factor *factors, int n,
                           const float *row, int stride, uint32_t *special)
{
    uint32_t words[4];
    int32_t exps[4];
    const factor *kept[4];
    int32_t largest = 0;
    uint64_t sum = 0;
    uint64_t sign;
    int terms = 0;
    int i;

    for (i = 0; i < n; i++) {
        uint32_t x = word_at(&row[factors[i].at * stride]);

        if (!is_normal(x)) {
            *special |= x & MAGNITUDE;
            continue;
        }
        words[terms] = x;
        kept[terms] = &factors[i];
        exps[terms] = EXPONENT(x) + factors[i].exp;
        largest = exps[terms] > largest ? exps[terms] : largest;
        terms++;
    }
    if (*special != 0) {
        return 0;
    }
    if (terms == 0) {
        return (word_at(&vector[0]) ^ word_at(&row[0])) &
               (word_at(&vector[1]) ^ word_at(&row[stride])) &
               (word_at(&vector[2]) ^ word_at(&row[2 * stride])) &
               (word_at(&vector[3]) ^ word_at(&row[3 * stride])) & SIGN;
    }
    for (i = 0; i < terms; i++) {
        uint32_t apart = (uint32_t)(largest - exps[i]);
        uint64_t aligned =
            (uint64_t)((words[i] & MANTISSA) | HIDDEN) * kept[i]->man << DOT_UP;
        uint64_t negative = 0U - (uint64_t)((words[i] ^ kept[i]->sign) >> 31);

        aligned >>= apart > 63 ? 63 : apart;
        sum += (aligned ^ negative) - negative;
    }
    sign = 0U - (sum >> 63);
    sum = (sum ^ sign) - sign;
    if (sum >> DOT_TOP != 0) {
        int top = 63 - leading_zeros(sum);
        uint64_t unit = 1ULL << (top - 23);
        /* the sum's last bit is 2^(largest - 2 * UNIT_BIAS - DOT_UP) */
        int32_t biased = top + largest - (2 * UNIT_BIAS + DOT_UP - 127);

        if ((terms == 1 ||
             (sum & (unit - 1)) - DOT_BAND <= unit - 2 * DOT_BAND) &&
            biased > 0 && biased < 255) {
            return ((uint32_t)sign & SIGN) | (uint32_t)biased << 23 |
                   ((uint32_t)(sum >> (top - 23)) & MANTISSA);
        }
    }
    return dot_in_order(vector, row, stride);
}

float sa_fipr(const float a[4], const float b[4])
{
    factor factors[4];
    unsigned int zeros;
    uint32_t special = 0;
    int n = factors_of(b, factors, &zeros);
    uint32_t word;

    if (n < 0 || special_under_zeros(zeros, a, 1, 1) != 0) {
        return ref_fipr(a, b);
    }
    word = dot(b, factors, n, a, 1, &special);
    return special != 0 ? ref_fipr(a, b) : float_of(word);
}

void sa_ftrv(const float m[16], const float v[4], float out[4])
{
    factor factors[4];
    unsigned int zeros;
    uint32_t special = 0;
    int n = factors_of(v, factors, &zeros);
    uint32_t ob[4];
    int i;

    if (n >= 0 && special_under_zeros(zeros, m, 4, 4) == 0) {
        for (i = 0; i < 4; i++) {
            ob[i] = dot(v, factors, n, m + i, 4, &special);
        }
        if (special == 0) {
            memcpy(out, ob, sizeof ob);
            return;
        }
    }
    ref_ftrv(m, v, out);
}

/* 1 / FSQRT's root, rounded twice toward zero. the FPU's divide guesses
 * 2^47 / root, and a product corrects it */
float sa_fsrra(float a)
{
    uint32_t bits = bits_of(a);
    int32_t field;
    uint32_t root;
    uint32_t guess;
    uint32_t inverse;

    if (!is_normal(bits) || (bits & SIGN) != 0) {
        return ref_fsrra(a);
    }
    root = root_of(bits, a, &field);
    if (root == HIDDEN) {
        return float_of((uint32_t)(254 - field) << 23);
    }
    guess = bits_of(1.0F / float_of((uint32_t)127 << 23 | (root & MANTISSA)));
    inverse = EXPONENT(guess) == 126  ? (guess & MANTISSA) | HIDDEN
              : EXPONENT(guess) < 126 ? HIDDEN
                                      : 0xffffffU;
    while ((uint64_t)inverse * root > 1ULL << 47) {
        inverse--;
    }
    while ((uint64_t)(inverse + 1) * root <= 1ULL << 47) {
        inverse++;
    }
    return float_of((uint32_t)(253 - field) << 23 | (inverse & MANTISSA));
}

/* a sine word: the second half turn negates the first, a zero too */
static inline uint32_t sine_of(uint32_t angle)
{
    return sine_words[angle & 0x7fff] ^ (angle & 0x8000) << 16;
}
#endif

void sa_fsca(uint32_t angle, float out[2])
{
    uint32_t pair[2];

    pair[0] = sine_of(angle);
    pair[1] = sine_of(angle + 0x4000);
    memcpy(out, pair, sizeof pair);
}
