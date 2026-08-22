#ifndef LF_STRING_H
#define LF_STRING_H

#include <stddef.h>

void *lf_memcpy(void *dest, const void *src, size_t n);
void *lf_memmove(void *dest, const void *src, size_t n);
void *lf_memset(void *dest, int value, size_t n);
int lf_memcmp(const void *lhs, const void *rhs, size_t n);
size_t lf_strlen(const char *s);
int lf_strcmp(const char *lhs, const char *rhs);

#endif
