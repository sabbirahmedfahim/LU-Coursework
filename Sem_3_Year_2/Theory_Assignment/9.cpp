/*
in cpp, the range of integer:
Minimum: -2,147,483,648
Maximum: 2,147,483,647
and the range of long long integer:
Minimum: -9,223,372,036,854,775,808
Maximum: 9,223,372,036,854,775,807

Sometimes the data we are working for overflow integer range that's why we need to use long long integer,
it gives more range of storing data.
*/
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

    long long int a = 87649;
    long long int b = 89;
    long long int a_b_sum = a+b;
    cout << a_b_sum << endl;

    long long int c = 91234;
    long long int d = 987;
    long long int c_d_sum = c+d;
    cout << c_d_sum << endl;

    return 0;
}