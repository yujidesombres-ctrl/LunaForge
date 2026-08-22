#include <lf/string.h>

void *lf_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    for (size_t i = 0; i < n; ++i)
        d[i] = s[i];

    return dest;
}

void *lf_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    if (d < s) {
        for (size_t i = 0; i < n; ++i)
            d[i] = s[i];
    } else {
        for (size_t i = n; i != 0; --i)
            d[i - 1] = s[i - 1];
    }

    return dest;
}

void *lf_memset(void *dest, int value, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char v = (unsigned char)value;

    for (size_t i = 0; i < n; ++i)
        d[i] = v;

    return dest;
}

int lf_memcmp(const void *lhs, const void *rhs, size_t n)
{
    const unsigned char *a = (const unsigned char *)lhs;
    const unsigned char *b = (const unsigned char *)rhs;

    for (size_t i = 0; i < n; ++i) {
        if (a[i] != b[i])
            return (a[i] > b[i]) ? 1 : -1;
    }

    return 0;
}

size_t lf_strlen(const char *s)
{
    size_t n = 0;
    while (s[n] != '\0')
        ++n;
    return n;
}

int lf_strcmp(const char *lhs, const char *rhs)
{
    while (*lhs && *lhs == *rhs) {
        ++lhs;
        ++rhs;
    }

    unsigned char a = (unsigned char)*lhs;
    unsigned char b = (unsigned char)*rhs;
    return (a > b) - (a < b);
}
