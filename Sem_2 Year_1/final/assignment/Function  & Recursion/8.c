/*8.Write a C program to check whether a number is palindrome or not
using recursion.*/

#include <stdio.h>

int rev(int n, int reverse)
{
    if (n == 0)
    {
        return reverse;
    }
    reverse = reverse * 10 + n % 10;
    return rev(n / 10, reverse);
}
int palindrome_checker(int n)
{
    if (rev(n, 0) == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = palindrome_checker(n);
    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}

// int remainder = 0, reverse = 0;
// while (n!=0)
// {
//     remainder = n%10;
//     reverse = reverse*10 + remainder;
//     n/=10;
// }
// printf("%d", reverse);