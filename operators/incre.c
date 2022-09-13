#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;
    x = y++;
    x = ++y;
    printf("%d\n", x);
    printf("%d\n", x);
    return 0;
}