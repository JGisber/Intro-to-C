#include <stdio.h>

/* Definition:
Recursion is a process in which a function calls itself directly or 
indirectly. */

int func(int);

int main(void)
{
    int n = 3;
    printf("%d\n", func(n));
    return 0;
}


int func(int n)
{
    if(n == 1)
        return 1;
    else
        return 1 + func(n - 1);
}