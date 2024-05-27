// 6.Write a C program to find total number of alphabets, digits or special character in a string.

#include <stdio.h>
#include <string.h>

// Both lowercase and uppercase letters are part of the alphabet.
int main()
{
    char arr[1001];
    scanf("%s", arr);
    int countAlphabets = 0, countDigits = 0, countSpecialChar = 0;

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z')
        {
            countAlphabets++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            countDigits++;
        }
        else
        {
            countSpecialChar++;
        }
    }

    printf("Alphabets: %d\n", countAlphabets);
    printf("Digits: %d\n", countDigits);
    printf("Special Characters: %d\n", countSpecialChar);

    return 0;
}