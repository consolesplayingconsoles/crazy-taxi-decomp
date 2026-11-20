#!/bin/sh
# where.sh ADDR...: the host addresses the native program's fault report prints, as functions and source lines
# (the program: build/native/<your disc image's name>, from GDI in the repo's .env, as native_build.py names it)
root="$(cd "$(dirname "$0")/../.." && pwd)"
gdi="$(sed -n 's/^[[:space:]]*GDI[[:space:]]*=[[:space:]]*//p' "$root/.env" 2>/dev/null | tail -1 | tr -d "\"'")"
[ -n "$gdi" ] || { echo "where.sh: GDI is not set in $root/.env (the program is named after your disc image)" >&2; exit 1; }
exe="$(basename "$gdi")"
exe="${exe%.[gG][dD][iI]}"
exec addr2line -f -i -p -e "$root/build/native/$exe" "$@"
