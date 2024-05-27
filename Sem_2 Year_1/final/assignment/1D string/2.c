// 2.Write a C program to copy one string to another string.
#include <stdio.h>
#include <string.h>

int main()
{
   char arr1[101];
   scanf("%s", arr1);
   char arr2[101];
   strcpy(arr2, arr1);
   
   printf("%s", arr2);
   
   
   return 0;
}