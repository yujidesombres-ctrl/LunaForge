#include <lf/lf.h>
#include <assert.h>

int main(void)
{
    char *p = (char *)lf_malloc(8);
    assert(p != NULL);
    lf_memset(p, 0, 8);
    p = (char *)lf_realloc(p, 16);
    assert(p != NULL);
    lf_free(p);

    assert(lf_strlen("Luna") == 4);
    assert(lf_memcmp("abc", "abc", 3) == 0);
    return 0;
}
