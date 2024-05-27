// 4.Write a C program to print all natural numbers between 1 to n using recursion.

#include <stdio.h>

int natural_num(int n, int i)
{
    if (i > n)
    {
        return 0;
    }
    printf("%d ", i);
    natural_num(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    natural_num(n, 1);

    return 0;
}