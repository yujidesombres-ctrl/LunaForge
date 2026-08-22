#include <lf/string.h>
#include <assert.h>

int main(void)
{
    char buffer[16];
    char overlap[8] = "abcdef";

    assert(lf_strlen("LunaForge") == 9);
    assert(lf_strcmp("abc", "abc") == 0);
    assert(lf_strcmp("abc", "abd") < 0);
    assert(lf_strcmp("abd", "abc") > 0);

    lf_memset(buffer, 'x', sizeof(buffer));
    assert(buffer[0] == 'x');
    assert(buffer[15] == 'x');

    lf_memcpy(buffer, "hello", 6);
    assert(lf_strcmp(buffer, "hello") == 0);

    lf_memmove(overlap + 1, overlap, 5);
    assert(lf_strcmp(overlap, "aabcde") == 0);

    assert(lf_memcmp("abc", "abc", 3) == 0);
    assert(lf_memcmp("abc", "abd", 3) < 0);

    return 0;
}
