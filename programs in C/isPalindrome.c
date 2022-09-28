#include <stdio.h>


int main(void)
{
    int n, result = 0, quotient, rem;
    printf("Please enter the number: ");
    scanf("%d", &n);

    quotient = n;

    while (quotient != 0)
    {
        rem = quotient % 10;
        result = result * 10 + rem;
        quotient = quotient / 10;
    }

    if(result == n)
        printf("Its a Palindrome\n");
    else
        printf("No! Its not a Palindrome\n");
    return 0;
}