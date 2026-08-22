# LunaLibC

The experimental C library of LunaForge.

The first layer deliberately avoids depending on libc implementations for its own primitives. Memory and string operations are written directly in C and are intended to become portable building blocks for higher layers.

## Current primitives

- `lf_memcpy`
- `lf_memmove`
- `lf_memset`
- `lf_memcmp`
- `lf_strlen`
- `lf_strcmp`

This is experimental code, not a drop-in replacement for a system libc yet.
