"""extract_disc.py <your disc.gdi> [DIR]: every file of the disc into DIR (default build/native/data), the folder the
native game reads (build/native/<your disc's name> --data DIR). Subfolders are kept. Uses tools/1-2-baseline/gdi_read.py's reader."""
import os as _tp_os, sys as _tp_sys  # noqa: E401  every tools folder on the import path (tools/toolpath.py)
_tp_sys.path.insert(0, _tp_os.path.normpath(_tp_os.path.join(_tp_os.path.dirname(_tp_os.path.abspath(__file__)), '..')))
import toolpath  # noqa: E402,F401
import os
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
from gdi_read import Disc  # noqa: E402


def main():
    if len(sys.argv) not in (2, 3):
        sys.exit(__doc__)
    out = sys.argv[2] if len(sys.argv) == 3 else os.path.join(ROOT, 'build', 'native', 'data')
    disc = Disc(sys.argv[1])
    n = total = 0
    for lba, size, path in sorted(disc.files(), key=lambda f: f[2]):
        rel = path.lstrip('/').split(';')[0]
        dst = os.path.join(out, *rel.split('/'))
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        if not (os.path.exists(dst) and os.path.getsize(dst) == size):
            with open(dst, 'wb') as f:
                f.write(disc.read(lba, size))
        n += 1
        total += size
    print('%d files, %.1f MB, in %s' % (n, total / 1e6, out))


if __name__ == '__main__':
    main()
