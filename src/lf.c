#include "lf.h"
#include <stdio.h>

int lf_write(const char *text)
{
    if (!text) {
        return -1;
    }

    return fputs(text, stdout) == EOF ? -1 : 0;
}
