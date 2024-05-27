// 3.Write a C program to concatenate two strings.

#include <stdio.h>
#include <string.h>

int main()
{
   char arr1[101];
   char arr2[101];
   scanf("%s %s", arr1, arr2);

   strcat(arr1, arr2); //so the fist parameter stores the concatenates 

   printf("%s", arr1);
   

   
   return 0;
}