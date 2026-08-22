#ifndef LF_CONVERSION_H
#define LF_CONVERSION_H

#include <stddef.h>

long lf_strtol(const char *s, char **end, int base);
unsigned long lf_strtoul(const char *s, char **end, int base);

#endif
