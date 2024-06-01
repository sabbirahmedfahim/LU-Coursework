/*4.Write a program in C to find the summation of all natural number
up to a given number using pointers.*/

#include <stdio.h>

int sum(int*n)
{
    int smm = 0;
    for (int i = 1; i <= *n; i++)
    {
        smm+=i;
    }
    return smm;  
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(&n));
   
    return 0;
}