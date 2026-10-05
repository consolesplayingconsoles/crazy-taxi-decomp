#!/usr/bin/env python3
"""Decode every standard Dreamcast texture on a disc to PNG and build a contact sheet. Stdlib only.

    textures.py <disc.gdi> <out dir> [max images]

Finds every PVRT texture (inside .PVR/.PVM files and any container, e.g. a PAC of GBIX/PVRT
records), decodes the formats below, and writes <out dir>/*.png plus <out dir>/index.html: one page
of thumbnails grouped by file, with a checkbox each, for a human to mark the ones with text in them.
This is the reliable way to find baked text: no OCR, a person looks. Undecodable ones are listed.

Decoded: ARGB1555 / RGB565 / ARGB4444 in twiddled square (+mipmaps), VQ (+mipmaps), rectangle and
twiddled rectangle. Not decoded: palettised (needs a separate palette file), and anything else.
"""
import array
import html
import os
import struct
import sys
import zlib

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import gdi_read  # noqa: E402

MAX_READ = 64 << 20


def _tw(n):
    t = []
    for i in range(n):
        v, b = 0, 0
        while i:
            v |= (i & 1) << (2 * b)
            i >>= 1
            b += 1
        t.append(v)
    return t


TW = _tw(1024)


def _px(v, pf):
    if pf == 0:                                   # ARGB1555
        return ((v >> 10 & 31) * 255 // 31, (v >> 5 & 31) * 255 // 31, (v & 31) * 255 // 31, 255 if v >> 15 else 0)
    if pf == 1:                                   # RGB565
        return ((v >> 11 & 31) * 255 // 31, (v >> 5 & 63) * 255 // 63, (v & 31) * 255 // 31, 255)
    if pf == 2:                                   # ARGB4444
        return ((v >> 8 & 15) * 17, (v >> 4 & 15) * 17, (v & 15) * 17, (v >> 12 & 15) * 17)
    raise ValueError("pixel format %d" % pf)


_LUT = {}
_ORDER = {}


def _lut(pf):
    """All 65536 16-bit values of a pixel format -> 4 RGBA bytes, built once."""
    if pf not in _LUT:
        _LUT[pf] = [bytes(_px(v, pf)) for v in range(65536)]
    return _LUT[pf]


def _order(w, h, rect):
    """Raster order -> twiddled index, built once per size."""
    key = (w, h, rect)
    if key not in _ORDER:
        m = min(w, h)
        _ORDER[key] = [((x // m) + (y // m) if rect else 0) * m * m + (TW[x % m] << 1 | TW[y % m])
                       for y in range(h) for x in range(w)]
    return _ORDER[key]


def _mip16(w):
    """Bytes before the full-size level of a mipmapped 16-bit twiddled texture."""
    off, s = 6, 2                                 # the 1x1 level is padded to 6 bytes
    while s < w:
        off += s * s * 2
        s *= 2
    return off


def decode(d, at):
    """(w, h, rgba bytes) for the PVRT chunk at d[at:], or raise."""
    pf, dt = d[at + 8], d[at + 9]
    w, h = struct.unpack_from("<HH", d, at + 12)
    if not (8 <= w <= 1024 and 8 <= h <= 1024):
        raise ValueError("size %dx%d" % (w, h))
    if pf not in (0, 1, 2):
        raise ValueError("pixel format %d" % pf)
    lut = _lut(pf)
    p = at + 16
    if dt in (1, 2, 0x0D):                        # twiddled (square, mipmapped, rectangle)
        if dt == 2:
            p += _mip16(w)
        v = array.array("H", d[p:p + 2 * w * h])
        if len(v) < w * h:
            raise ValueError("truncated")
        return w, h, b"".join([lut[v[i]] for i in _order(w, h, dt == 0x0D)])
    if dt == 9:                                   # rectangle, linear
        v = array.array("H", d[p:p + 2 * w * h])
        if len(v) < w * h:
            raise ValueError("truncated")
        return w, h, b"".join([lut[x] for x in v])
    if dt in (3, 4):                              # VQ: 256 codes of 2x2 pixels, then twiddled indices
        book = array.array("H", d[p:p + 2048])
        p += 2048
        if dt == 4:
            off, s2 = 1, 2
            while s2 < w:
                off += (s2 // 2) * (s2 // 2)
                s2 *= 2
            p += off
        hw, hh = w // 2, h // 2
        idx = d[p:p + hw * hh]
        rows = []
        for y in range(hh):
            top, bot = [], []
            for x in range(hw):
                c = idx[TW[x] << 1 | TW[y]] * 4
                top.append(lut[book[c]] + lut[book[c + 2]])
                bot.append(lut[book[c + 1]] + lut[book[c + 3]])
            rows.append(b"".join(top) + b"".join(bot))
        return w, h, b"".join(rows)
    raise ValueError("data type 0x%02x" % dt)


def png(path, w, h, rgba):
    raw = b"".join(b"\0" + rgba[4 * w * y:4 * w * (y + 1)] for y in range(h))

    def chunk(t, b):
        return struct.pack(">I", len(b)) + t + b + struct.pack(">I", zlib.crc32(t + b) & 0xffffffff)
    open(path, "wb").write(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, 8, 6, 0, 0, 0))
                           + chunk(b"IDAT", zlib.compress(raw, 6)) + chunk(b"IEND", b""))


def main():
    if len(sys.argv) not in (3, 4):
        raise SystemExit(__doc__)
    disc = gdi_read.Disc(sys.argv[1])
    out = sys.argv[2]
    limit = int(sys.argv[3]) if len(sys.argv) == 4 else 5000
    os.makedirs(out, exist_ok=True)
    files = sorted(disc.files(), key=lambda f: f[2])
    groups, failed, n = [], [], 0
    for k, (lba, size, path) in enumerate(files, 1):
        if k % 50 == 0 or k == len(files):
            print("  scanned %d/%d files, %d textures" % (k, len(files), n), file=sys.stderr)
        d = disc.read(lba, min(size, MAX_READ))
        at, items = d.find(b"PVRT"), []
        while at != -1 and n < limit:
            name = "%s_%06x.png" % (path.strip("/").replace("/", "_"), at)
            try:
                w, h, rgba = decode(d, at)
                png(os.path.join(out, name), w, h, rgba)
                items.append((name, w, h))
                n += 1
            except Exception as e:  # noqa: BLE001 - record and move on, never fake an image
                failed.append((path, at, str(e)))
            at = d.find(b"PVRT", at + 4)
        if items:
            groups.append((path, items))
    with open(os.path.join(out, "index.html"), "w") as f:
        head = ("<!doctype html><meta charset=utf-8><title>Textures</title><style>"
                "body{font-family:system-ui,sans-serif;margin:16px;background:#f4f4f4}"
                "h2{font-size:15px;margin:24px 0 8px}.t{display:inline-block;margin:4px;text-align:center;"
                "font:11px monospace;background:#fff;padding:4px;border:1px solid #ddd}"
                ".t img{max-width:160px;max-height:160px;display:block;margin:auto;image-rendering:pixelated;"
                "background:repeating-conic-gradient(#ccc 0 25%,#fff 0 50%) 0 0/12px 12px}"
                ".t.on{outline:3px solid #d33}#out{width:100%;height:120px}</style>"
                "<h1>@N@ textures from @F@ files</h1><p>Tick every texture with text in it, then copy the list."
                "</p><textarea id=out readonly></textarea>")
        f.write(head.replace("@N@", str(n)).replace("@F@", str(len(groups))))
        for path, items in groups:
            f.write("<h2>%s (%d)</h2>" % (html.escape(path), len(items)))
            for name, w, h in items:
                f.write('<label class=t><img src="%s" loading=lazy><input type=checkbox value="%s"> %dx%d</label>'
                        % (html.escape(name), html.escape(name), w, h))
        if failed:
            f.write("<h2>Not decoded (%d)</h2><pre>%s</pre>" % (len(failed), html.escape(
                "\n".join("%s @0x%x: %s" % x for x in failed[:500]))))
        f.write("<script>document.addEventListener('change',e=>{e.target.parentNode.classList.toggle('on',"
                "e.target.checked);document.getElementById('out').value=[...document.querySelectorAll("
                "'input:checked')].map(i=>i.value).join('\\n')})</script>")
    if n == 0:
        print("No standard (PVR) textures on this disc: its art uses the game's own formats, so this "
              "contact sheet cannot help here; look at text-map/image_candidates.tsv instead.")
    print("%d textures decoded from %d files, %d not decoded -> %s" % (n, len(groups), len(failed),
                                                                     os.path.join(out, "index.html")))


if __name__ == "__main__":
    main()
