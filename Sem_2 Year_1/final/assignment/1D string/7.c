// 7.Write a C program to count total number of words in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1001];
    fgets(arr, 1001, stdin);

    int countWords = 1;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[0] == ' ')
        {
            countWords = 0;
            break;
        }

        if (arr[i] == ' ')
        {
            countWords++;
        }
    }
    
    printf("%d", countWords);

    return 0;
}