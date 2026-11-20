#!/bin/sh
# capture.sh CONTAINER MODE SUB [COUNT] [EVERY]: waits until the native game running in CONTAINER (started with
# PORT_BOOT_LOG=1, port/runtime/boot.c) reaches main mode MODE, sub-mode SUB, then COUNT times (default 8), EVERY seconds
# apart (default 5), reads its last frame and its RAM with tools/10-port/frame_capture.py, without stopping it. The operator
# plays to that point; the rest is automatic. Output: build/native/capture/m<MODE>s<SUB>_<N>.txt and _ram.bin.
#
#   sh tools/10-port/capture.sh ct-play 1 1
cd "$(dirname "$0")/../.." || exit 1
[ $# -ge 3 ] || { echo "usage: sh tools/10-port/capture.sh CONTAINER MODE SUB [COUNT] [EVERY]" >&2; exit 1; }
c="$1"; mode="$2"; sub="$3"; count="${4:-8}"; every="${5:-5}"
mkdir -p build/native/capture
echo "capture: waiting for main mode $mode, sub-mode $sub in $c"
until docker logs "$c" 2>&1 | grep -q "boot: frame [0-9]*, main mode $mode, sub-mode $sub\$"; do sleep 1; done
n=0
while [ "$n" -lt "$count" ]; do
    docker exec -w /work "$c" python3 tools/10-port/frame_capture.py "build/native/capture/m${mode}s${sub}_$n"
    n=$((n + 1))
    [ "$n" -lt "$count" ] && sleep "$every"
done
