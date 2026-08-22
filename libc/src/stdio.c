#include <lf/stdio.h>
#include <stdio.h>
#include <stdarg.h>

int lf_putchar(int c) { return putchar(c); }
int lf_puts(const char *s) { return puts(s); }

int lf_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    int result = vprintf(format, ap);
    va_end(ap);
    return result;
}
