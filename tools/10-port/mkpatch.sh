#!/bin/sh
# mkpatch.sh: port/src_fixes.patch from the build's fixed copy of src/ (build/native/src_fixed). The port never edits
# src/: a fix to the decomp's C for the host is made in the copy, and this writes the difference as the patch
# native_build.py applies. Run in the repo.
set -e
cd "$(dirname "$0")/../.."
out=port/src_fixes.patch
: > "$out.new"
for f in build/native/src_fixed/*; do
    n=$(basename "$f")
    [ -f "src/$n" ] || continue
    if ! cmp -s "src/$n" "$f"; then
        diff -u --label "a/src/$n" --label "b/src/$n" "src/$n" "$f" >> "$out.new" || true
    fi
done
mv "$out.new" "$out"
grep -c '^+++ ' "$out"
