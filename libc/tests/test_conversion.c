#include <lf/conversion.h>
#include <assert.h>

int main(void)
{
    char *end;
    assert(lf_strtol("-42", &end, 10) == -42 && *end == '\0');
    assert(lf_strtoul("ff", &end, 16) == 255 && *end == '\0');
    assert(lf_strtoul("101", &end, 2) == 5 && *end == '\0');
    return 0;
}
