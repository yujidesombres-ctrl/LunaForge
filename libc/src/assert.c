#include <lf/assert.h>
#include <stdio.h>
#include <stdlib.h>

_Noreturn void lf_assert_fail(const char *expression, const char *file, int line)
{
    fprintf(stderr, "LunaLibC assertion failed: %s (%s:%d)\n", expression, file, line);
    abort();
}
