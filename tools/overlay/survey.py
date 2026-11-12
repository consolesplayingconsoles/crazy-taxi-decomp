#!/usr/bin/env python3
"""Which disc files hold SH-4 code linked at a fixed address, and that address. Output has no game bytes.

    python3 tools/overlay/survey.py <disc.gdi> > overlays.tsv

Overlays are linked absolutely and point at themselves as 0x0Cxxxxxx or 0x8Cxxxxxx. A pointer x and a function
prologue (`sts.l pr,@-r15`, or a push of r14 before it) at offset o vote for base x - o, 4K-aligned. `self_share` is the
share of the file's pointers that land inside the file at the winning base; `lead` the winner's votes over the runner-up's.
"""
import hashlib, struct, sys
from collections import Counter
sys.path.insert(0, 'tools')
import toolpath  # noqa: F401  (the shared tools: gdi_read, model_map ...)
import gdi_read, model_map
d = gdi_read.Disc(sys.argv[1])
print('name\tpath\tcompressed\tsize\tsha1\tbase\tvotes\tlead\tself_share\tprologues')
for lba, size, path in sorted((l, s, p) for l, s, p in d.files()):
    up = path.upper()
    if not up.endswith(('.PRS', '.BIN')) or up.endswith('1ST_READ.BIN'):
        continue
    raw = d.read(lba, size)
    comp, data = 0, raw
    if up.endswith('.PRS'):
        try:
            data, comp = bytes(model_map.prs_decompress(raw)), 1
        except Exception:
            pass
    if len(data) < 256:
        continue
    w = struct.unpack_from('<%dH' % (len(data) // 2), data, 0)
    pro = [i * 2 for i, x in enumerate(w) if x == 0x4f22]
    if len(pro) < 3:
        continue
    # entries: the prologue itself and up to 8 pushes before it
    entries = set(pro)
    for o in pro:
        k = o - 2
        while k >= 0 and k >= o - 16 and (w[k // 2] & 0xF0FF == 0x2006 + 0 or w[k // 2] & 0xFF0F == 0x2F06):
            entries.add(k)
            k -= 2
    longs = struct.unpack_from('<%dI' % (len(data) // 4), data, 0)
    ptr = Counter(x for x in longs if 0x0c000000 <= x < 0x0d000000 or 0x8c000000 <= x < 0x8d000000)
    cand = Counter()
    for x in ptr:
        for o in entries:
            b = x - o
            if b & 0xFFF == 0 and (0x0c000000 <= b < 0x0d000000 or 0x8c000000 <= b < 0x8d000000):
                cand[b] += 1
    top = cand.most_common(2)
    b, v = top[0] if top else (0, 0)
    v2 = top[1][1] if len(top) > 1 else 0
    total = sum(ptr.values()) or 1
    inside = sum(k for x, k in ptr.items() if b <= x < b + len(data))
    name = path.rsplit('/', 1)[1].rsplit('.', 1)[0]
    print('%s\t%s\t%d\t%d\t%s\t%08x\t%d\t%d\t%.2f\t%d' % (name, path, comp, len(data), hashlib.sha1(data).hexdigest(), b, v, v - v2, inside / total, len(pro)))
