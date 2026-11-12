#!/usr/bin/env python3
"""Bring every code overlay of the disc into the repo. Run in the repo; part of setup.sh.

    python3 tools/overlay/setup_overlays.py <disc.gdi>

overlays.tsv says what is an overlay and where it loads (`status` ok). For each: overlays/<name>/<name>.bin (the decompressed
image, checked against its SHA-1), asm/ and objects.txt from overlays/<name>/functions.txt. Images and asm stay local
(.gitignore); functions.txt and overlays.tsv are committed and hold addresses, sizes, names and hashes only.
A missing functions.txt is created by tools/overlay/analyze.py.
"""
import csv, hashlib, os, subprocess, sys
sys.path.insert(0, 'tools')
import toolpath  # noqa: F401  (the shared tools: gdi_read, model_map ...)
import gdi_read, model_map
d = gdi_read.Disc(sys.argv[1])
files = {p: (l, s) for l, s, p in d.files()}
rows = [r for r in csv.DictReader(open('overlays.tsv'), delimiter='\t') if r['status'] == 'ok']
total = 0
for r in rows:
    raw = d.read(*files[r['path']])
    data = bytes(model_map.prs_decompress(raw)) if r['compressed'] == '1' else raw
    if hashlib.sha1(data).hexdigest() != r['sha1']:
        sys.exit('[ERROR] %s: SHA-1 differs: not the supported release' % r['name'])
    o = 'overlays/' + r['name']
    os.makedirs(o, exist_ok=True)
    img = '%s/%s.bin' % (o, r['name'])
    open(img, 'wb').write(data)
    fl = o + '/functions.txt'
    if not os.path.exists(fl):
        with open(fl, 'w') as f:
            subprocess.run([sys.executable, '-I', 'tools/overlay/analyze.py', img, r['base']], stdout=f, check=True)
    subprocess.run([sys.executable, 'tools/1-2-baseline/split_asm.py', img, r['base'], fl, o], check=True, stdout=subprocess.DEVNULL)
    total += sum(1 for l in open(fl) if l.startswith('F '))
print('%d overlays, %d functions' % (len(rows), total))
