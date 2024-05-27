// 9.Write a C program to check whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101];
    scanf("%s", arr);
    int revLength = strlen(arr) - 1;
    int flag = 0;

    for (int i = 0; i < strlen(arr) / 2; i++, revLength--)
    {
        if (arr[i] != arr[revLength])
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}