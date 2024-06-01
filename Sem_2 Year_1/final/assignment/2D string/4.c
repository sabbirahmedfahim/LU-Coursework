/*4.Write a C program to take 10 students name as input and
print the names in uppercase.  */

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
        for (int j = 0; arr[i][j] != '\0'; j++)
        {
            arr[i][j] = arr[i][j] - 32;
        }

        printf("%s ", arr[i]);
    }

    return 0;
}