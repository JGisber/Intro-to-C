#include <stdio.h>

int main(void)
{
    int number, count = 0, result = 0, mul = 1, cnt, rem;
    printf("Please enter a number: ");
    scanf("%d", &number);

    // first find how many digits in the number
    int quotient = number;
    while(quotient != 0)
    {
        quotient /= 10;
        count ++;
    }
    cnt = count;
    quotient = number;

    // multiply each digit n number of time and add them together
    while (quotient != 0)
    {
        rem = quotient % 10;
        while(cnt != 0)
        {
            mul *= rem;
            cnt --;
        }
        result += mul;
        cnt = count;
        quotient /= 10;
        mul = 1;
    }

    // check if result is equol to the actual number
    if(result == number)
        printf("%d is an Armstrong Number\n", number);
    else
        printf("%d is not an Armstrong Number\n", number);
    return 0;   
}