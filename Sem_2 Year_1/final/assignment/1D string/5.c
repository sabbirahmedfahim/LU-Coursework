// 5.Write a C program to convert LOWERCASE string TO UPPERCASE.

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101];
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = arr[i] - 32;
    }
    printf("%s", arr);

    return 0;
}