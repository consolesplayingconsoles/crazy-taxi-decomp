#!/usr/bin/env python3
"""A content-addressed cache of compiled objects for cbuild.py. Stdlib only.

`make c` compiled every C file again each time (and the fit's link compiled every part again for each margin it tried), though a build
changes a handful of files. An object is a function of the C file it came from, the headers it can include, the compiler flags and the
build script's compile step, so the cache keys on exactly those: a hit gives the same bytes the compiler would.

    headers_hash(dirs)                      one digest of every *.h under the given folders (what a file may include)
    includes_hash(text, dirs)               one digest of the headers a C text includes ("x.h", found in dirs) and theirs, in turn: a
                                            header it does not include changes nothing (a mod's layer adding src/tux.h)
    tools_hash(sdk, rel)                    one digest of the compiler: shc.exe, asmsh.exe and the headers in the SDK's release folder
                                            (SHC_INC; another SDK_PATH is another compiler)
    key(text, flags, headers, script, name) the cache key of a source's text compiled with these flags, under this file name (the
                                            compiler writes it into the object as its module: u019.c, a copy of gen_xx.c, is not gen_xx)
    restore(k, objd, stem)                  copy a cached object (and its .s and optimizer info) into objd; True on a hit
    store(k, objd, stem)                    keep objd/<stem>.obj (and the extras) under k; False when there is no object to keep

The cache lives in build/ccache (outside build/cbuild, which a new prep clears), or where BUILD_CACHE says: a mod builds a copy of the
decomp and can share the decomp's cache, since a key says everything an object came from. One file a key and kind: <key>.obj, <key>.s,
<key>.iop. A piece (an assembly file) is keyed by its text, the build step and the compiler."""
import glob
import hashlib
import os
import re
import shutil

CACHE = os.environ.get('BUILD_CACHE') or 'build/ccache'
INCLUDE = re.compile(r'^[ \t]*#[ \t]*include[ \t]*"([^"]+)"', re.M)
KINDS = (('.obj', ''), ('.s', ''), ('.iop', 'shciop'))        # (file kind, folder under objd it lives in)


def headers_hash(dirs):
    h = hashlib.sha256()
    for d in dirs:
        for f in sorted(glob.glob(os.path.join(d, '*.h'))):
            h.update(os.path.basename(f).encode() + b'\0')
            h.update(open(f, 'rb').read() + b'\0')
    return h.hexdigest()


def includes_hash(text, dirs):
    h = hashlib.sha256()
    seen, todo = set(), [text if isinstance(text, str) else text.decode('latin-1')]
    while todo:
        for name in INCLUDE.findall(todo.pop()):
            if name in seen:
                continue
            seen.add(name)
            for d in dirs:
                f = os.path.join(d, name)
                if os.path.exists(f):
                    body = open(f, 'rb').read()
                    h.update(name.encode() + b'\0' + body + b'\0')
                    todo.append(body.decode('latin-1'))
                    break
            else:
                h.update(name.encode() + b'\0missing\0')         # not found here: the compiler's own include folder (tools_hash)
    return h.hexdigest()


def tools_hash(sdk, rel):
    h = hashlib.sha256(rel.encode() + b'\0')
    root = os.path.join(sdk, rel)
    for n in ('shc.exe', 'asmsh.exe'):
        f = os.path.join(root, n)
        h.update(n.encode() + b'\0' + (open(f, 'rb').read() if os.path.exists(f) else b'missing') + b'\0')
    for f in sorted(glob.glob(os.path.join(root, '*.h')) + glob.glob(os.path.join(root, '*.H'))):      # SHC_INC: the release folder itself
        h.update(os.path.basename(f).encode() + b'\0' + open(f, 'rb').read() + b'\0')
    return h.hexdigest()


def key(text, flags, headers='', script='', name=''):
    h = hashlib.sha256()
    for part in (name, script, flags, headers):          # name: the compiler writes the file's name into the object (its module)
        h.update(part.encode() + b'\0')
    h.update(text if isinstance(text, bytes) else text.encode())
    return h.hexdigest()


def _path(k, kind, root):
    return os.path.join(root, k + kind)


def restore(k, objd, stem, root=CACHE):
    if not os.path.exists(_path(k, '.obj', root)):
        return False
    for kind, sub in KINDS:
        src = _path(k, kind, root)
        if os.path.exists(src):
            dst = os.path.join(objd, sub, stem + kind)
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            shutil.copyfile(src, dst)
    return True


def store(k, objd, stem, root=CACHE):
    obj = os.path.join(objd, stem + '.obj')
    if not os.path.exists(obj):
        return False
    os.makedirs(root, exist_ok=True)
    for kind, sub in reversed(KINDS):                  # the object last: restore reads it as 'the entry is complete'
        src = os.path.join(objd, sub, stem + kind)
        if os.path.exists(src):
            tmp = _path(k, kind, root) + '.tmp%d' % os.getpid()
            shutil.copyfile(src, tmp)
            os.replace(tmp, _path(k, kind, root))
    return True
