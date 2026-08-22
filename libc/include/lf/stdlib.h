#ifndef LF_STDLIB_H
#define LF_STDLIB_H

#include <stddef.h>

void *lf_malloc(size_t size);
void *lf_calloc(size_t count, size_t size);
void *lf_realloc(void *ptr, size_t size);
void lf_free(void *ptr);

_Noreturn void lf_abort(void);
_Noreturn void lf_exit(int status);

#endif
