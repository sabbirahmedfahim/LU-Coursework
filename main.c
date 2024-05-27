#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0;; i++)
    {
        if (n == 0)
        {
            break;
        }
        sum = sum + n % 10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}