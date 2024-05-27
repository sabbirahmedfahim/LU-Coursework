#include <stdio.h>

int my_number(int *x)
{
    return *x; //dereference operator is used to acceess the 
    //value at the address stored in a pointer
}
int main()
{
    int n; 
    scanf("%d", &n); 
    int ans = my_number(&n); 
    //ref operator(&) used to get address of the variable
    printf("%d", ans);

      return 0;
}