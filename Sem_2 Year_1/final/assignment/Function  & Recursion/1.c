// 1.Write a program in C to check if a given number is even or odd using the function.

#include <stdio.h>

void odd_even_detector()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

int main()
{
    odd_even_detector();

    return 0;
}