// 3.Write a program in C to find the square of any number using the function.

#include <stdio.h>

int square_maker()
{
    int n;
    scanf("%d", &n);
    n*=n;
    return n;
}

int main()
{
    printf("%d", square_maker());
   
    return 0;
}