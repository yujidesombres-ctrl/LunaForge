# Architecture notes

LunaForge is intentionally layered.

- `include/` — public interfaces.
- `src/` — implementation.
- `examples/` — small executable experiments.
- `tests/` — behavior checks.
- `docs/` — design notes and decisions.

The first implementation still uses the host C standard library. That is deliberate: the abstraction is being established before lower layers replace it.
