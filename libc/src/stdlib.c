#include <lf/stdlib.h>

/* Temporary hosted backend. This file is intentionally isolated so a freestanding
 * allocator can replace it without changing the public LunaLibC API. */
#include <stdlib.h>

void *lf_malloc(size_t size) { return malloc(size); }
void *lf_calloc(size_t count, size_t size) { return calloc(count, size); }
void *lf_realloc(void *ptr, size_t size) { return realloc(ptr, size); }
void lf_free(void *ptr) { free(ptr); }

_Noreturn void lf_abort(void) { abort(); }
_Noreturn void lf_exit(int status) { exit(status); }
