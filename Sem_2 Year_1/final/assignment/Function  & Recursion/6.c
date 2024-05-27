// 6.Write a C program to FIND SUM of all natural numbers between 1 to n using recursion.

#include <stdio.h>

int natural_num(int n, int i)
{
    if (i > n)
    {
        return 0;
    }
    return natural_num(n, i + 1) + i;
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = natural_num(n, 1);
    printf("%d", ans);

    return 0;
}