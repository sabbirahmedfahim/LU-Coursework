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

    int arr[14] = {1,4,17,19,20,22,25,28,32,35,38,42,47,50};
    sort(arr, arr+14);
    print(arr);
    int target1 = 49, target2 = 17;
    int l = 0, r = 14-1;
    int mid;
    while (l <= r)
    {
        mid = (l+r)/2;
        if(arr[mid] == target1) break;
        else if(target1 > arr[mid]) l = mid + 1;
        else  r = mid - 1;
    }
    if(l <= r) cout << "found" << nl;
    else cout << "not found" << nl;

    l = 0, r = 14-1;
    while (l <= r)
    {
        mid = (l+r)/2;
        if(arr[mid] == target2) break;
        else if(target2 > arr[mid]) l = mid + 1;
        else  r = mid - 1;
    }
    if(l <= r) cout << "found" << nl;
    else cout << "not found" << nl; 
    cout << (5)/2;

    return 0;
}