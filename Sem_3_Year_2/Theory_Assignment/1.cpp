#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    FAJR_BOOST()

    string s = "computer_club";
    int n = s.size(); // 13
    cout << n << nl;
    int step = 0;
    for (int i = 0; i < n-1; i++)
    {
        cout << nl << "PASS: " << i+1 << nl;
        int k = 1;
        for (int j = i+1; j < n; j++)
        {
            if(s[i] > s[j]) 
            {
                swap(s[i], s[j]);
                cout << "#########################" << nl;
            }
            cout << k++ << " : ";
            print(s);
            step++;
        }
    }
    cout << "step : " << step;

    return 0;
}