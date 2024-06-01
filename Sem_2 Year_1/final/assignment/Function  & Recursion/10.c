/*10.Write a C program to generate nth Fibonacci term using recursion.*/

#include <stdio.h>

int fibonacchi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fibonacchi(n - 1) + fibonacchi(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacchi(n));

    return 0;
}