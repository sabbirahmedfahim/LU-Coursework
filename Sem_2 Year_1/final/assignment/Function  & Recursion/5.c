// 5.Write a C program to print all even or odd numbers in given range using recursion.

#include <stdio.h>

int my_odd_checker(int m, int n)
{
    if (m>n)
    {
        return 0;
    }
    if (m%2!=0)
    {
        printf("%d ", m);
    }
    my_odd_checker(m+1, n);
    
}

int main()
{
    int x, y;
    printf("starting range:\n");
    scanf("%d", &x);
    printf("ending range:\n");
    scanf("%d", &y);
    
    my_odd_checker(x, y);
   
    return 0;
}