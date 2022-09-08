#include <stdio.h>
#include "increment.c"

int main(void)
{
    int value;
    value = increment(); // first call return value one
    value = increment(); // second call variable count is recreated so return value 1
    value = increment();

    printf("%d\n", value);
    return 0;
}