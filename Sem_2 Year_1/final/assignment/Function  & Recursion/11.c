/*11.Write a program in C to swap two numbers using a function.*/
#include <stdio.h>

void my_swap(int *x, int*y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    my_swap(&x, &y);
    printf("%d %d", x, y);
   
    return 0;
}