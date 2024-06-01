/*1.Write a program in C to find the maximum number between
two numbers using a pointer.*/

#include <stdio.h>

int maxx(int *x, int *y)
{
    if (*x > *y)
    {
        return *x;
    }
    else
    {
        return *y;
    }
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", maxx(&x, &y));

    return 0;
}