#include <lf/conversion.h>
#include <lf/ctype.h>

static int digit(int c)
{
    if (lf_isdigit(c)) return c - '0';
    if (c >= 'a' && c <= 'z') return c - 'a' + 10;
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    return -1;
}

unsigned long lf_strtoul(const char *s, char **end, int base)
{
    const char *p = s;
    unsigned long value = 0;
    if (base < 2 || base > 36) { if (end) *end = (char *)s; return 0; }
    while (lf_isspace(*p)) ++p;
    while (digit((unsigned char)*p) >= 0 && digit((unsigned char)*p) < base) {
        value = value * (unsigned long)base + (unsigned long)digit((unsigned char)*p);
        ++p;
    }
    if (end) *end = (char *)p;
    return value;
}

long lf_strtol(const char *s, char **end, int base)
{
    const char *p = s;
    int negative = 0;
    while (lf_isspace(*p)) ++p;
    if (*p == '+' || *p == '-') { negative = *p == '-'; ++p; }
    char *tail;
    unsigned long value = lf_strtoul(p, &tail, base);
    if (end) *end = tail;
    return negative ? -(long)value : (long)value;
}
