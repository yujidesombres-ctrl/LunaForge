# LunaLibC direction

LunaLibC is being built in layers.

1. Memory and string primitives.
2. Freestanding-friendly allocation interfaces.
3. Character and formatted output.
4. Conversion and environment utilities.
5. Hosted and freestanding backends.
6. Architecture-specific low-level implementations where they provide a measurable benefit.
7. Tests that exercise every layer independently.

The hosted implementation is a bootstrap only. The long-term goal is to make the low-level core independent of the host libc.
