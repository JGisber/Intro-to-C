#include <stdio.h>
// The purpuse of this program is to print a pyramid by geting the number of row from the user
// Number of columns is calculated by (2 * n - 1) where n is the user input or number of row
int main(void)
{
    int n, i, j;
    printf("How many rows for your pyramid?\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (2 * n - 1); j++)
        {
            if(j >= n - (i - 1) && j <= n + (i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}