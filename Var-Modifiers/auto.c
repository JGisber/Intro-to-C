#include <stdio.h>
// automatic variable get dealocated or destoryed after the completion of the function

// Global var by default are initialized with zero

int number;

int main(void)
{
    // by default auto variable if not initialized will get some random value
    int var; // == auto int var;
    printf("%d\n", var);
    printf("%d\n", number);
    return 0; //   return 0;

}

// int var;
//    ||
//Declaration and Definition: allocate some memory to variable

// extern int var;
//      ||
// Declaration Only: it do not allocate memory to it.