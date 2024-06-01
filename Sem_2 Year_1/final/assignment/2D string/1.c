/*1.Write a C program to take 10 students name as input and print it.*/
#include <stdio.h>

int main()
{
    char arr[10][100];
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s ", arr[i]);
    }
    
   
    return 0;
}