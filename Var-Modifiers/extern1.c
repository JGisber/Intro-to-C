#include <stdio.h>
#include "extern.c"

// Declaring not Defining: Multiple declaration are allowed
extern int a;
extern int a;
extern int a;

int main(void)
{
    printf("%d\n", a);
    return 0;
}