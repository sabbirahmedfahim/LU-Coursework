#include <iostream>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
int max(int i, int j)
{
    if(i >= j) return i;
    else return j;
}
int min(int i, int j)
{
    if(i <= j) return i;
    else return j;
}
int main()
{
    int t;
    cin >> t;

    ll mx = 1000000;
    ll mn = -mx;

    bool flag = true;
    while (t--)
    {
        int n; string sign; char YN;
        cin >> sign >> n >> YN;
        if(sign == ">=" && YN == 'Y' || sign == "<" && YN == 'N' && n <= mx && n >= mn)
        {
            mn = max(n, mn);
            mx = min(n, mx);
        }
        else if(sign == "<=" && YN == 'Y' || sign == ">" && YN == 'N' && n <= mx && n >= mn)
        {
            mn = max(n, mn);
            mx = min(n, mx);
        }
        else if(sign == ">" && YN == 'Y' || sign == "<=" && YN == 'N' && n <= mx && n >= mn)
        {
            mn = max(n+1, mn);
            mx = min(n+1, mx);
        }
        else if(sign == "<" && YN == 'Y' || sign == ">=" && YN == 'N' && n <= mx && n >= mn)
        {
            mn = max(n-1, mn);
            mx = min(n-1, mx);
        }
    }
    if(mx>=mn) cout << mn;
    else cout << "Impossible";

    return 0;
}