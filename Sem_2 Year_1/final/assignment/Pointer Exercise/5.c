/*5.Write a C program to input and print array elements using pointer.*/
#include <stdio.h>

void my_pointer(int *n)
{
    int arr[*n];
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    my_pointer(&n);

    return 0;
}