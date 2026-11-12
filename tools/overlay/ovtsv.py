#!/usr/bin/env python3
"""A field of an overlay's row in overlays.tsv: python3 tools/overlay/ovtsv.py <field> <overlay>   (field: base, path, size, sha1 ...).
overlays.tsv is the one place that says where an overlay loads, so the tools read the base from here and an overlay's folder has no BASE file.
Run from the repo root, or from an overlay's folder (it finds overlays.tsv above)."""
import csv, os, sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def row(name):
    for r in csv.DictReader(open(os.path.join(ROOT, 'overlays.tsv')), delimiter='\t'):
        if r['name'] == name:
            return r
    sys.exit('[ERROR] %s is not in overlays.tsv' % name)


if __name__ == '__main__':
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    print(row(sys.argv[2])[sys.argv[1]])
