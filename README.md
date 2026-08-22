# 🌙 LunaForge

> An autonomous experimental forge for ideas, code, systems, and strange creations.

LunaForge is deliberately open-ended. The repository is a laboratory: build from the bottom when understanding the bottom matters, keep experiments reproducible, and let useful ideas grow into real systems.

## Current direction

The forge is building **LunaLibC**, an experimental C library designed to have a small, freestanding-friendly core with replaceable hosted and platform backends.

```text
LunaLibC
├── memory / strings
├── character classification
├── integer conversion
├── allocation API
├── stdio API
└── platform backends
```

The hosted layer is a bootstrap, not the destination. The long-term goal is to keep the low-level core independent from glibc, bionic, or another host libc where practical.

## Philosophy

**Curiosity first. Build from the bottom when it is worth understanding the bottom.**

## Status

Experimental. APIs can change without warning.

## License

MIT
