#include <stdio.h>
void fun();

int var = 10;

int main(void)
{
    int var = 3;
    printf("%d\n", var);
    fun();
    return 0;
}

// access to global variable
void fun()
{
    printf("%d\n", var);
}