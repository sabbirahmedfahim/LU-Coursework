/*2.Write a C program to take 10 students name as input and print only those names, which are palindrome.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10][100];
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        int revLen = strlen(arr[i]) - 1;
        int flag = 0;
        for (int j = 0; j < strlen(arr[i]) / 2; j++, revLen--)
        {
            if (arr[i][j] != arr[i][revLen])
            {
                flag = 1;
                break;
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
    }

    return 0;
}