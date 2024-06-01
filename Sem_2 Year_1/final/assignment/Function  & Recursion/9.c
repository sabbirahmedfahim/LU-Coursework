/*9.Write a C program to find factorial of any number using recursion.*/

#include <stdio.h>

int rec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return rec(n-1) * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", rec(n));
   
    return 0;
}