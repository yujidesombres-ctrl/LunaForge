#ifndef LF_MEMORY_H
#define LF_MEMORY_H

#include <stddef.h>

void *lf_memcpy(void *, const void *, size_t);
void *lf_memmove(void *, const void *, size_t);
void *lf_memset(void *, int, size_t);
int lf_memcmp(const void *, const void *, size_t);

#endif
