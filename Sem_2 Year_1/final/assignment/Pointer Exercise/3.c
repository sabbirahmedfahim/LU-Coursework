/*3.Write a program in C to find the factorial of a given number using pointers.*/

#include <stdio.h>

int fac(int *n)
{
   if (*n == 0 || *n == 1)
   {
      return 1;
   }
   int factor = 1;
   for (int i = 1; i <= *n; i++)
   {
      factor *= i;
   }
   return factor;
}

int main()
{
   int n;
   scanf("%d", &n);
   printf("%d", fac(&n));

   return 0;
}