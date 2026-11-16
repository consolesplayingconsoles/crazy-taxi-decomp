#!/usr/bin/env python3
"""A photograph as the Dreamcast's VQ ARGB4444 texture (course_kit.vq_image's layout and mipmaps, table types 3 and 4), made for low-contrast
pictures (plaster, concrete, asphalt, paving).

course_kit.vq_image cuts every channel to 4 bits first (a shift, which darkens by up to 1/16 and splits a grey's channels across rounding
steps: the pink and purple blotches on plaster and asphalt) and then averages the 4-bit blocks. Here the blocks stay in full precision while
the 256 codebook entries are found (k-means with a farthest-point start, 14 rounds), and only the finished entries are cut to 4 bits (to_nibbles: levels of n * 17, as the hardware repeats the nibble, with the error carried from
texel to texel). The distance is the sum over
the four texels' red, green and blue, with green counted double (the eye's weight), so a chroma tint costs more than a brightness step.

    osm_vq.py <picture> <size> <out.png>      writes the decoded result next to the source, for looking at"""
import struct
import sys

import numpy as np
import PIL.Image

W = np.array([1.0, 2.0, 1.0] * 4)                       # a block's 12 numbers: r, g, b of each of its four texels (the order of the codebook's texels)
CHUNK = 512
ORDER = ((0, 0), (1, 0), (0, 1), (1, 1))                # a codebook entry's texels: top-left, bottom-left, top-right, bottom-right


def twiddle(x, y, bits):
    i = 0
    for k in range(bits):
        i |= ((x >> k) & 1) << (2 * k + 1)
        i |= ((y >> k) & 1) << (2 * k)
    return i


def blocks_of(rgb):
    """(n, 12) float: the 2 x 2 blocks of a (size, size, 3) picture in row order, texels in the codebook's order."""
    h = rgb.shape[0] // 2
    out = np.zeros((h, h, 12))
    for k, (dy, dx) in enumerate(ORDER):
        out[:, :, 3 * k:3 * k + 3] = rgb[dy::2, dx::2]
    return out.reshape(-1, 12)


def nearest(points, cents):
    """Index of the nearest centroid for each point (weighted distance), in chunks."""
    out = np.empty(len(points), dtype=np.int64)
    wc = cents * W
    c2 = (cents * wc).sum(axis=1)
    for i in range(0, len(points), CHUNK):
        p = points[i:i + CHUNK]
        out[i:i + CHUNK] = (c2[None, :] - 2.0 * (p * W) @ cents.T).argmin(axis=1)
    return out


def kmeans(points, k=256, rounds=14):
    """A farthest-point start (each new centre is the block farthest from those chosen), then Lloyd rounds; an emptied entry is given the block
    worst served."""
    n = len(points)
    cents = np.empty((k, 12))
    cents[0] = points.mean(axis=0)
    far = ((points - cents[0]) ** 2 * W).sum(axis=1)
    for j in range(1, min(k, n)):
        cents[j] = points[far.argmax()]
        far = np.minimum(far, ((points - cents[j]) ** 2 * W).sum(axis=1))
    if n < k:
        cents[n:] = cents[0]
    for _ in range(rounds):
        best = nearest(points, cents)
        for j in range(k):
            sel = best == j
            if sel.any():
                cents[j] = points[sel].mean(axis=0)
        err = ((points - cents[best]) ** 2 * W).sum(axis=1)
        for j in range(k):
            if not (best == j).any():
                cents[j] = points[err.argmax()]
                err[err.argmax()] = 0.0
    return cents


def to_nibbles(cents):
    """Each entry's 12 numbers to 4-bit levels (0, 17, ... 255 once the hardware repeats the nibble). Rounding every texel on its own splits a
    near-grey's channels across different steps and tints it (pink plaster); here the error of a texel is carried to the next (top-left,
    bottom-left, top-right, bottom-right), channel by channel, so a block's average stays within a quarter of a step of the picture's."""
    t = cents.reshape(-1, 4, 3) / 17.0
    out = np.zeros(t.shape, dtype=np.int64)
    err = np.zeros((t.shape[0], 3))
    for k in range(4):
        v = t[:, k, :] + err
        n = np.clip(np.rint(v), 0, 15)
        err = v - n
        out[:, k, :] = n
    return out.reshape(-1, 12)


def entry_bytes(nib):
    """The codebook: 256 entries of four ARGB4444 texels (alpha 15), two bytes each."""
    code = bytearray(256 * 8)
    for e in range(256):
        for t in range(4):
            r, g, b = nib[e, 3 * t:3 * t + 3]
            struct.pack_into("<H", code, e * 8 + 2 * t, (15 << 12) | (int(r) << 8) | (int(g) << 4) | int(b))
    return bytes(code)


def indices(rgb, book):
    """The twiddled index bytes of a (size, size, 3) picture against the decoded codebook (float, 8-bit levels)."""
    half = rgb.shape[0] // 2
    near = nearest(blocks_of(rgb), book)
    idx = bytearray(half * half)
    bits = max(half.bit_length() - 1, 0)
    for n in range(half * half):
        idx[twiddle(n % half, n // half, bits)] = int(near[n])
    return bytes(idx)


def vq(img, size, mip=False):
    """size x size picture, the bytes of course_kit.vq_image (mip False) or vq_image_mip (True)."""
    rgb = np.asarray(img.convert("RGB").resize((size, size), PIL.Image.LANCZOS), dtype=np.float64)
    nib = to_nibbles(kmeans(blocks_of(rgb)))
    book = nib * 17.0
    code = entry_bytes(nib)
    top = indices(rgb, book)
    if not mip:
        return code + top
    out = bytearray()
    s = 1
    while s < size:
        f = size // s
        level = rgb.reshape(s, f, s, f, 3).mean(axis=(1, 3))
        if s == 1:
            out.append(int(nearest(np.tile(level.reshape(1, 3), (1, 4)), book)[0]))
        else:
            out += indices(level, book)
        s *= 2
    return code + bytes(out) + top


def solid(color, size):
    """A single flat colour as the bytes of vq (mip False): every texel of the one codebook entry used is the colour's nearest level (n * 17,
    each channel on its own), so nothing is dithered. vq's carried rounding error would turn a flat colour into a 2 x 2 pattern of neighbouring
    levels (210, 150, 146 came out as four different tints), which shows as a checker on a large flat surface."""
    level = [min(15, int(round(c / 17.0))) for c in color]
    nib = np.zeros((256, 12), dtype=np.int64)
    nib[0] = level * 4
    half = size // 2
    return entry_bytes(nib) + bytes(half * half)


def decode(data, size):
    """The picture a texture's top level shows (the codebook and the top indices), as an RGB image."""
    half = size // 2
    bits = half.bit_length() - 1
    book = [[struct.unpack_from("<H", data, k * 8 + 2 * t)[0] for t in range(4)] for k in range(256)]
    top = data[len(data) - half * half:]
    img = PIL.Image.new("RGB", (size, size))
    px = img.load()
    for by in range(half):
        for bx in range(half):
            e = book[top[twiddle(bx, by, bits)]]
            for t, (dy, dx) in enumerate(ORDER):
                v = e[t]
                px[bx * 2 + dx, by * 2 + dy] = (((v >> 8) & 15) * 17, ((v >> 4) & 15) * 17, (v & 15) * 17)
    return img


if __name__ == "__main__":
    src = PIL.Image.open(sys.argv[1])
    n = int(sys.argv[2])
    decode(vq(src, n), n).save(sys.argv[3])
