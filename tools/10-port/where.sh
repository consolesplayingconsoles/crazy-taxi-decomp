#!/bin/sh
# where.sh ADDR...: the host addresses the native program's fault report prints, as functions and source lines
# (the program: build/native/game)
root="$(cd "$(dirname "$0")/../.." && pwd)"
exe=game
exec addr2line -f -i -p -e "$root/build/native/$exe" "$@"
