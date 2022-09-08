#include <stdio.h>
/*
    #define also called macro
    No semicolon at the end of the statement
    Choose capital letter, is good practice
    Macros can be use like functions
*/
#define PI 3.14159
#define add(x, y) x+y
#define greater(x, y) if(x > y) \
            printf("%d is greater than %d\n", x, y); \
        else \
            printf("%d is lesser than %d\n", x, y)

int main(void)
{
    printf("%.5f\n", PI);
    printf("Add two numbers: %d\n", add(4, 3));
    greater(5, 6);
    //Macros to print current date and time
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    return 0;
}