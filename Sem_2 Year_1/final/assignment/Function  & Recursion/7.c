/* 7.Write a C program to find sum of all even or odd numbers in
given range using recursion.*/

#include <stdio.h>
// 1 3 5 7 = 16
//2 4 6 8 = 20
int rec(int n, int m)
{
    if (n>m)
    {
        return 0;
    }
    return rec(n+2, m) + n;
}


int main()
{
    int n, m;
    printf("from?\n");
    scanf("%d", &n);
    printf("to?\n");
    scanf("%d", &m);

    printf("%d", rec(n,m));
    

    return 0;
}