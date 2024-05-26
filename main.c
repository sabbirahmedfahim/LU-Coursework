#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);
    int n;
    scanf("%d", &n);
    getchar();
    char m;
    scanf("%c", &m);
    
    a[n] = m;
    printf("%s", a);
    return 0;
}