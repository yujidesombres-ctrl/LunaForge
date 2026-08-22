#include "lf.h"

int main(void)
{
    return lf_write(0) == -1 ? 0 : 1;
}
