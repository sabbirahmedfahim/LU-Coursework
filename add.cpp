#include <iostream>
using namespace std;

int natural_num(int n, int i)
{
    if (i > n)
    {
        return 0;
    }
    return natural_num(n, i + 1) + i;
}

int main()
{
    int n;
    cin>>n;
    int ans = natural_num(n, 1);
    cout<<ans;

    return 0;
}