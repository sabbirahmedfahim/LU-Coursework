#include <stdio.h>

int sum_of_digits(int n)
{
   if (n==0) return 0;
   
    return sum_of_digits(n/10) + (n%10);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = sum_of_digits(n);
    printf("%d", ans);

    return 0;
}