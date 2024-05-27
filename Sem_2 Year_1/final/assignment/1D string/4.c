// 4.Write a C program to compare two strings.

#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[101];
    char arr2[101];
    scanf("%s %s", arr1, arr2);

    if (strcmp(arr1, arr2) == 0)
    {
        printf("They are same strings\n");
    }
    else
    {
        printf("Given srtrings are not same\n");
    }

    return 0;
}