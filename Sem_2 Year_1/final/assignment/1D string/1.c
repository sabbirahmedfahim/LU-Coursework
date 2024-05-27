// 1.Write a C program to find length of a string.
#include <stdio.h>

int main()
{
   char arr[101];
   scanf("%s", arr);
   int len = 0;
   for (int i = 0; arr[i] != '\0'; i++)
   {
      len++;
   }

   printf("%d", len);

   return 0;
}