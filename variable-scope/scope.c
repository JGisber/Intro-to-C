#include <stdio.h>

int main(void)
{
   int var = 3;
   {
        int var = 4;
        printf("%d\n", var);
   } 
   printf("%d\n", var);
   return 0;
}