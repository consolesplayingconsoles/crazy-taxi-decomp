"""uncoalesced.py: the generator's retry of a function that still differs, with one temporary per value (gen_pipe, __main__)."""
import os
def retry_uncoalesced(names, build, check):
    """The functions that still differ, built once more with one name per value (GEN_COALESCE=0) and checked again.

    SHC can merge two tails that test the results of different calls held in one shared temporary, and give one tail the other's
    condition (Zombie Revenge FUN_0c02ad98: after FUN_0c03593a its case 2 returned on a zero result instead of a nonzero one, because
    case 6 tests FUN_0c02a416's result the other way round in the same t0). The same C with a temporary per value compiles right.
    build(name) -> item or None (built while GEN_COALESCE=0); check([item, ...]) -> names that pass. Returns {name: item} of those that
    pass. Nothing is retried when the run already writes uncoalesced C."""
    old = os.environ.get('GEN_COALESCE')
    if old == '0' or not names:
        return {}
    os.environ['GEN_COALESCE'] = '0'
    try:
        built = {}
        for n in names:
            try:
                it = build(n)
            except Exception:
                it = None
            if it:
                built[n] = it
    finally:
        if old is None:
            os.environ.pop('GEN_COALESCE', None)
        else:
            os.environ['GEN_COALESCE'] = old
    if not built:
        return {}
    ok = set(check(list(built.values())))
    return {n: it for n, it in built.items() if n in ok}
