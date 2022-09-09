#include <stdio.h>
// scanf stand for: Scan Formatted String. it allow you to take input from user
// int var; scanf("%d\n", &var);
// & is called address-of operator. it allow scanf to get the address where to store the imput
// &var === address of var

int main(void)
{
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    return 0;
}