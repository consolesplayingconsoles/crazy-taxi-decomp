/* the compatible math: the SH-4's operations that play reads, in integers.
 * every host gets the same bits from them, whatever its FPU's mode.
 * ENGINE.md#numbers says where a host uses them.
 *
 * it builds two ways, by default and with SA_NUMERIC_CONSOLE. the console's
 * build gives what the SH-4 is expected to answer. five rules part them: a
 * denormal operand, a NaN's form, FIPR with FTRV, FSCA and FSRRA. the console
 * computes the last three on one truncating datapath, sh4_fpu_approx.h's. the
 * default FSCA rounds that datapath's cubic to nearest */
#include "play_math.h"
#include "sh4_fpu_approx.h"

#include <string.h>

/* -ffast-math lets a compiler take floats for never NaN and drop the NaN
 * rules */
#ifdef __FAST_MATH__
#error the compatible math takes no fast-math
#endif

/* a float's value, sign apart: man * 2^exp, or zero where man is 0 */
typedef struct {
    uint32_t sign;
    int32_t exp;
    uint64_t man;
} value;

enum { ZERO, FINITE, INFINITE, NAN_ };

#define SIGN 0x80000000U
#define QUIET 0x00400000U
/* the NaN of an invalid operation. the SH-4 gives this one form for every
 * NaN. x86 gives this float from both its float and its double operations */
#ifdef SA_NUMERIC_CONSOLE
#define DEFAULT_NAN 0x7fbfffffU
#else
#define DEFAULT_NAN 0xffc00000U
#endif
#define MAX_FINITE 0x7f7fffffU

static uint32_t bits_of(float f)
{
    uint32_t bits;

    memcpy(&bits, &f, sizeof bits);
    return bits;
}

static float float_of(uint32_t bits)
{
    float f;

    memcpy(&f, &bits, sizeof f);
    return f;
}

static int length(uint64_t n)
{
    int bits = 0;

    while (n != 0) {
        bits++;
        n >>= 1;
    }
    return bits;
}

/* a denormal operand: the console's DN of 1 reads it as a signed zero. the
 * default build counts it at its value, as x86's SSE takes it without DAZ */
static int unpack(uint32_t bits, value *v)
{
    uint32_t exponent = bits >> 23 & 0xff;
    uint32_t mantissa = bits & 0x7fffff;

    v->sign = bits & SIGN;
    v->exp = 0;
    v->man = 0;
    if (exponent == 0xff) {
        return mantissa == 0 ? INFINITE : NAN_;
    }
    if (exponent == 0) {
#ifdef SA_NUMERIC_CONSOLE
        return ZERO;
#else
        v->exp = -149;
        v->man = mantissa;
        return mantissa == 0 ? ZERO : FINITE;
#endif
    }
    v->exp = (int32_t)exponent - 150;
    v->man = mantissa | 0x800000;
    return FINITE;
}

/* truncate a nonzero v to bits of significance, toward zero */
static value truncate(value v, int bits)
{
    int have = length(v.man);

    if (have > bits) {
        v.man >>= have - bits;
        v.exp += have - bits;
    } else {
        v.man <<= bits - have;
        v.exp -= bits - have;
    }
    return v;
}

/* v to a float, toward zero. past the largest finite it gives the largest.
 * below the smallest normal it gives v's signed zero. both builds flush a
 * denormal result */
static uint32_t pack(value v)
{
    int32_t biased;

    if (v.man == 0) {
        return v.sign;
    }
    v = truncate(v, 24);
    biased = v.exp + 150;
    if (biased >= 255) {
        return v.sign | MAX_FINITE;
    }
    if (biased <= 0) {
        return v.sign;
    }
    return v.sign | (uint32_t)biased << 23 | (uint32_t)(v.man & 0x7fffff);
}

/* a + b, both nonzero, truncated to bits of significance, at most 53. the
 * larger fills a 62-bit window and the smaller sits below it. bits the
 * smaller loses below the window can't change a sum's truncation. they take
 * one unit from a difference, so it too truncates as the exact value does */
static value add_exact(value a, value b, int bits)
{
    value sum;
    uint64_t lost;
    int32_t shift;

    a = truncate(a, 62);
    b = truncate(b, 62);
    if (b.exp > a.exp || (b.exp == a.exp && b.man > a.man)) {
        value t = a;

        a = b;
        b = t;
    }
    shift = a.exp - b.exp;
    lost = shift >= 64 ? b.man != 0 : (b.man & ((1ULL << shift) - 1)) != 0;
    b.man = shift >= 64 ? 0 : b.man >> shift;
    sum.sign = a.sign;
    sum.exp = a.exp;
    if (a.sign == b.sign) {
        sum.man = a.man + b.man;
    } else {
        sum.man = a.man - b.man - lost;
        if (sum.man == 0) {
            /* an exact zero, which rounding toward zero makes +0 */
            sum.sign = 0;
            return sum;
        }
    }
    return truncate(sum, bits);
}

static int is_nan(uint32_t bits)
{
    return (bits & 0x7fffffff) > 0x7f800000;
}

/* a NaN from an operation on two operands. the console gives its one form.
 * the default build gives the first NaN of a and b, quieted, as x86 does. so
 * the order a caller passes them in matters */
static uint32_t nan_of(uint32_t a, uint32_t b)
{
#ifdef SA_NUMERIC_CONSOLE
    (void)a;
    (void)b;
    return DEFAULT_NAN;
#else
    return (is_nan(a) ? a : b) | QUIET;
#endif
}

static uint32_t add_bits(uint32_t a, uint32_t b)
{
    value va;
    value vb;
    int ka = unpack(a, &va);
    int kb = unpack(b, &vb);

    if (ka == INFINITE || kb == INFINITE) {
        if (ka == INFINITE && kb == INFINITE && va.sign != vb.sign) {
            return DEFAULT_NAN;
        }
        return ka == INFINITE ? a : b;
    }
    if (ka == ZERO && kb == ZERO) {
        return va.sign & vb.sign;
    }
    if (ka == ZERO) {
        return pack(vb);
    }
    if (kb == ZERO) {
        return pack(va);
    }
    return pack(add_exact(va, vb, 24));
}

/* a is FRn and b is FRm. of two NaNs, FADD and FMUL give b's, and FSUB and
 * FDIV give a's */
float sa_fadd(float a, float b)
{
    uint32_t ab = bits_of(a);
    uint32_t bb = bits_of(b);

    if (is_nan(ab) || is_nan(bb)) {
        return float_of(nan_of(bb, ab));
    }
    return float_of(add_bits(ab, bb));
}

float sa_fsub(float a, float b)
{
    uint32_t ab = bits_of(a);
    uint32_t bb = bits_of(b);

    /* b's NaN keeps its sign, which negating b first would flip */
    if (is_nan(ab) || is_nan(bb)) {
        return float_of(nan_of(ab, bb));
    }
    return float_of(add_bits(ab, bb ^ SIGN));
}

static uint32_t mul_bits(uint32_t a, uint32_t b)
{
    value va;
    value vb;
    value product;
    int ka = unpack(a, &va);
    int kb = unpack(b, &vb);

    if (ka == NAN_ || kb == NAN_) {
        return nan_of(b, a);
    }
    product.sign = va.sign ^ vb.sign;
    if (ka == INFINITE || kb == INFINITE) {
        if (ka == ZERO || kb == ZERO) {
            return DEFAULT_NAN;
        }
        return product.sign | 0x7f800000;
    }
    if (ka == ZERO || kb == ZERO) {
        return product.sign;
    }
    product.exp = va.exp + vb.exp;
    product.man = va.man * vb.man;
    return pack(product);
}

float sa_fmul(float a, float b)
{
    return float_of(mul_bits(bits_of(a), bits_of(b)));
}

float sa_fdiv(float a, float b)
{
    uint32_t ab = bits_of(a);
    uint32_t bb = bits_of(b);
    value va;
    value vb;
    value quotient;
    int ka = unpack(ab, &va);
    int kb = unpack(bb, &vb);

    if (ka == NAN_ || kb == NAN_) {
        return float_of(nan_of(ab, bb));
    }
    quotient.sign = va.sign ^ vb.sign;
    if ((ka == ZERO && kb == ZERO) || (ka == INFINITE && kb == INFINITE)) {
        return float_of(DEFAULT_NAN);
    }
    if (ka == INFINITE || kb == ZERO) {
        return float_of(quotient.sign | 0x7f800000);
    }
    if (ka == ZERO || kb == INFINITE) {
        return float_of(quotient.sign);
    }
    va = truncate(va, 24);
    vb = truncate(vb, 24);
    quotient.man = (va.man << 40) / vb.man;
    quotient.exp = va.exp - vb.exp - 40;
    return float_of(pack(quotient));
}

/* the integer square root of n, toward zero */
static uint64_t root(uint64_t n)
{
    uint64_t r = 0;
    uint64_t bit = 1ULL << 62;

    while (bit > n) {
        bit >>= 2;
    }
    while (bit != 0) {
        if (n >= r + bit) {
            n -= r + bit;
            r = (r >> 1) + bit;
        } else {
            r >>= 1;
        }
        bit >>= 2;
    }
    return r;
}

static uint32_t sqrt_bits(uint32_t a)
{
    value v;
    int kind = unpack(a, &v);
    int shift;

    if (kind == NAN_) {
        return nan_of(a, a);
    }
    if (kind == ZERO) {
        return v.sign;
    }
    if (v.sign != 0) {
        return DEFAULT_NAN;
    }
    if (kind == INFINITE) {
        return a;
    }
    v = truncate(v, 24);
    /* 37 or 38 bits more leaves an even exponent, which halves exactly, and a
     * root of 31 bits */
    shift = (v.exp - 37) % 2 == 0 ? 37 : 38;
    v.man = root(v.man << shift);
    v.exp = (v.exp - shift) / 2;
    return pack(v);
}

float sa_fsqrt(float a)
{
    return float_of(sqrt_bits(bits_of(a)));
}

/* an ordered key of a float that isn't NaN. both zeros map to 0, and so do
 * the console's denormals */
static int64_t key(uint32_t bits)
{
    int64_t magnitude = bits & 0x7fffffff;

#ifdef SA_NUMERIC_CONSOLE
    if (magnitude < 0x00800000) {
        magnitude = 0;
    }
#endif
    return bits & SIGN ? -magnitude : magnitude;
}

int32_t sa_fcmp_gt(float a, float b)
{
    uint32_t ab = bits_of(a);
    uint32_t bb = bits_of(b);

    return !is_nan(ab) && !is_nan(bb) && key(ab) > key(bb);
}

int32_t sa_fcmp_eq(float a, float b)
{
    uint32_t ab = bits_of(a);
    uint32_t bb = bits_of(b);

    return !is_nan(ab) && !is_nan(bb) && key(ab) == key(bb);
}

/* a truncated toward zero. a NaN, or a value at or below -2^31, gives
 * H'80000000. a value at or above 2^31 gives H'7fffffff */
int32_t sa_ftrc(float a)
{
    uint32_t bits = bits_of(a);
    value v;
    int kind = unpack(bits, &v);
    int32_t magnitude;

    if (kind == NAN_) {
        return INT32_MIN;
    }
    if (kind == INFINITE || (kind == FINITE && v.exp >= 8)) {
        return v.sign ? INT32_MIN : INT32_MAX;
    }
    if (kind == ZERO || v.exp <= -25) {
        return 0;
    }
    /* 24 bits shifted up by 7 at the most, so under 2^31 */
    magnitude = (int32_t)(v.exp >= 0 ? v.man << v.exp : v.man >> -v.exp);
    return v.sign ? -magnitude : magnitude;
}

float sa_float(int32_t i)
{
    value v;

    v.sign = i < 0 ? SIGN : 0;
    v.exp = 0;
    v.man = i < 0 ? 0ULL - (uint64_t)(int64_t)i : (uint64_t)i;
    return float_of(pack(v));
}

/* FMAC FR0,FRm,FRn: f0 * fm + fn rounded once toward zero, as the SH-4
 * manual says. a zero product and a zero fn sum as IEEE's zeros do. the
 * manual's listing gives them the XOR of three signs, but that listing also
 * drops its breaks */
float sa_fmac(float f0, float fm, float fn)
{
    uint32_t a = bits_of(f0);
    uint32_t b = bits_of(fm);
    uint32_t c = bits_of(fn);
    value va;
    value vb;
    value vc;
    value product;
    int ka = unpack(a, &va);
    int kb = unpack(b, &vb);
    int kc = unpack(c, &vc);
    int product_kind;

    if (ka == NAN_ || kb == NAN_ || kc == NAN_) {
        /* x86's FMA quiets the first NaN of a, b and c */
        return float_of(is_nan(a)   ? nan_of(a, a)
                        : is_nan(b) ? nan_of(b, b)
                                    : nan_of(c, c));
    }
    product.sign = va.sign ^ vb.sign;
    if ((ka == INFINITE && kb == ZERO) || (ka == ZERO && kb == INFINITE)) {
        return float_of(DEFAULT_NAN);
    }
    product_kind = ka == INFINITE || kb == INFINITE ? INFINITE
                   : ka == ZERO || kb == ZERO       ? ZERO
                                                    : FINITE;
    if (product_kind == INFINITE) {
        if (kc == INFINITE && vc.sign != product.sign) {
            return float_of(DEFAULT_NAN);
        }
        return float_of(product.sign | 0x7f800000);
    }
    if (kc == INFINITE) {
        return fn;
    }
    if (product_kind == ZERO) {
        if (kc == ZERO) {
            return float_of(product.sign & vc.sign);
        }
        return float_of(pack(vc));
    }
    product.exp = va.exp + vb.exp;
    product.man = va.man * vb.man;
    if (kc == ZERO) {
        return float_of(pack(product));
    }
    return float_of(pack(add_exact(product, vc, 24)));
}

#ifdef SA_NUMERIC_CONSOLE
/* sh4_fpu_approx.h's round_to_zero, FPSCR.RM, as the game's FPSCR sets it */
#define ROUND_TO_ZERO 1

/* the console's datapath truncates each product and aligns them by
 * truncation before one rounding. its multiplier recodes one operand, so a
 * product depends on which operand is which. FIPR recodes FVn, which is a
 * here, and FTRV the matrix */
float sa_fipr(const float a[4], const float b[4])
{
    uint32_t ab[4];
    uint32_t bb[4];

    memcpy(ab, a, sizeof ab);
    memcpy(bb, b, sizeof bb);
    return float_of(sh4_fipr(bb, ab, ROUND_TO_ZERO));
}

void sa_ftrv(const float m[16], const float v[4], float out[4])
{
    uint32_t mb[16];
    uint32_t vb[4];

    memcpy(mb, m, sizeof mb);
    memcpy(vb, v, sizeof vb);
    sh4_ftrv(mb, vb, ROUND_TO_ZERO);
    memcpy(out, vb, sizeof vb);
}

/* FSCA rounds toward zero, as the game's FPSCR sets */
void sa_fsca(uint32_t angle, float out[2])
{
    uint32_t pair[2];

    sh4_fsca(angle, ROUND_TO_ZERO, &pair[0], &pair[1]);
    memcpy(out, pair, sizeof pair);
}

float sa_fsrra(float a)
{
    return float_of(sh4_fsrra(bits_of(a), ROUND_TO_ZERO));
}
#else
/* a double as the default FIPR and FTRV hold one. v holds a value of up to 53
 * bits, and nan the float NaN where kind is NAN_ */
typedef struct {
    int kind;
    value v;
    uint32_t nan;
} wide;

/* the product of two floats as a double: exact, as 48 bits fit in 53 */
static wide wide_product(uint32_t a, uint32_t b)
{
    wide w;
    value va;
    value vb;
    int ka = unpack(a, &va);
    int kb = unpack(b, &vb);

    w.v.sign = va.sign ^ vb.sign;
    w.v.exp = 0;
    w.v.man = 0;
    w.nan = 0;
    if (ka == NAN_ || kb == NAN_) {
        w.kind = NAN_;
        w.nan = nan_of(a, b);
    } else if ((ka == INFINITE && kb == ZERO) ||
               (ka == ZERO && kb == INFINITE)) {
        w.kind = NAN_;
        w.nan = DEFAULT_NAN;
    } else if (ka == INFINITE || kb == INFINITE) {
        w.kind = INFINITE;
    } else if (ka == ZERO || kb == ZERO) {
        w.kind = ZERO;
    } else {
        w.kind = FINITE;
        w.v.exp = va.exp + vb.exp;
        w.v.man = va.man * vb.man;
    }
    return w;
}

/* a + b in doubles, toward zero. of two NaNs it gives a's */
static wide wide_add(wide a, wide b)
{
    if (a.kind == NAN_) {
        return a;
    }
    if (b.kind == NAN_) {
        return b;
    }
    if (a.kind == INFINITE || b.kind == INFINITE) {
        if (a.kind == INFINITE && b.kind == INFINITE && a.v.sign != b.v.sign) {
            a.kind = NAN_;
            a.nan = DEFAULT_NAN;
            return a;
        }
        return a.kind == INFINITE ? a : b;
    }
    if (b.kind == ZERO) {
        if (a.kind == ZERO) {
            a.v.sign &= b.v.sign;
        }
        return a;
    }
    if (a.kind == ZERO) {
        return b;
    }
    a.v = add_exact(a.v, b.v, 53);
    a.kind = a.v.man == 0 ? ZERO : FINITE;
    return a;
}

static uint32_t wide_float(wide w)
{
    switch (w.kind) {
    case NAN_:
        return w.nan;
    case INFINITE:
        return w.v.sign | 0x7f800000;
    case ZERO:
        return w.v.sign;
    default:
        return pack(w.v);
    }
}

/* the default rule sums four exact products in doubles, first to last. each
 * sum truncates toward zero, and so does the final conversion to a float.
 *
 * a product of two NaNs takes a's. FIPR passes its own a, FTRV's first row
 * the matrix, and its other rows the vector. of a NaN sum and a NaN product,
 * FIPR's sum takes the product's and FTRV's the sum's. the default rules fix
 * each order */
static uint32_t inner(const uint32_t *a, int as, const uint32_t *b, int bs,
                      int product_first)
{
    wide sum = wide_product(a[0], b[0]);
    int i;

    for (i = 1; i < 4; i++) {
        wide product = wide_product(a[i * as], b[i * bs]);

        sum = product_first ? wide_add(product, sum) : wide_add(sum, product);
    }
    return wide_float(sum);
}

float sa_fipr(const float a[4], const float b[4])
{
    uint32_t ab[4];
    uint32_t bb[4];

    memcpy(ab, a, sizeof ab);
    memcpy(bb, b, sizeof bb);
    return float_of(inner(ab, 1, bb, 1, 1));
}

void sa_ftrv(const float m[16], const float v[4], float out[4])
{
    uint32_t mb[16];
    uint32_t vb[4];
    uint32_t ob[4];
    int i;

    memcpy(mb, m, sizeof mb);
    memcpy(vb, v, sizeof vb);
    ob[0] = inner(mb, 4, vb, 1, 0);
    for (i = 1; i < 4; i++) {
        ob[i] = inner(vb, 1, mb + i, 4, 0);
    }
    memcpy(out, ob, sizeof ob);
}

/* sh4_fpu_approx.h's round_to_zero where it rounds to nearest */
#define ROUND_TO_NEAREST 0

/* the default FSCA's sine of angle: the console's cubic rounded to nearest,
 * whatever the FPSCR. the second half turn is the first's negation, so the
 * sine of H'8000 is -0 where the console's is +0 */
static uint32_t sine(uint32_t angle)
{
    uint32_t sign = (angle & 0x8000) << 16;

    return sign | sh4_fsca_sin(angle & 0x7fff, ROUND_TO_NEAREST);
}

/* the cosine is the sine a quarter turn on */
void sa_fsca(uint32_t angle, float out[2])
{
    uint32_t pair[2];

    pair[0] = sine(angle);
    pair[1] = sine(angle + 0x4000);
    memcpy(out, pair, sizeof pair);
}

/* the default FSRRA is 1 / FSQRT's root, two roundings toward zero */
float sa_fsrra(float a)
{
    return sa_fdiv(1.0F, sa_fsqrt(a));
}
#endif
