#include <stdio.h>

void largest_element()
{
    char arr[101];
    scanf("%s", arr);
    char maxx = arr[0];
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }
    printf("%c", maxx);
}

int main() 
{
    largest_element();

    return 0;
}