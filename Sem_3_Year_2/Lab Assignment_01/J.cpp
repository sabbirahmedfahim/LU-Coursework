// #include <iostream>                // input-output header file for c++
// #include <algorithm>               // algorithm header file to use sort function for O(NlogN) complexity
// #define ll long long int           // defined 'll' as long long int data type
// #define ull unsigned long long int // defined 'ull' as unsigned long long int data type
// #define nl '\n'                    // defined nl as '\n' for new line printing
// using namespace std;               // identifiers are defined inside the standard namespace named std

// int main() // main function
// {
//     ios_base::sync_with_stdio(false); // speeding up input/output
//     cin.tie(NULL); // speeding up input/output
//     cout.tie(NULL); // speeding up input/output

//     int n, q;                   // declared n, q, the number of elements in the array and the number of queries
//     cin >> n >> q;              // takng n, q as input
//     ll arr[n];                  // declared an array of n size
//     for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
//     {
//         cin >> arr[i]; // taking array's elements as input
//     }
//     sort(arr, arr+n); // sorting the array in ascending order at O(NlogN) time complexity
//     while (q--) // iterating while loop
//     {
//         ll target; // initialize a variable to store target
//         cin >> target; // taking input
//         ll mid; // mid space
//         ll l = 0; // begining space
//         ll r = n - 1; // end space
//         ll ans = 0; // to track the answer
//         bool flag = true; // initialize flag variable to track 
//         if (target > arr[n - 1]) // checking conditon
//         {
//             cout << 0 << nl; // print answer
//             flag = false; // mark as false
//         }
//         else if (target < arr[0]) // checking conditon
//         {
//             cout << n << nl; // print answer
//             flag = false; // mark as false
//         }
//         while (l <= r && flag) // checking conditon
//         {
//             mid = (l + r) / 2; // mid space
//             if (arr[mid] == target) // checking condition
//             {
//                 break; // stop the loop
//             }
//             else if (target > arr[mid]) // checking condition
//             {
//                 ans = mid; // updating ans
//                 l = mid + 1;  // reduces the search space
//             }
//             else // checking condition
//             {
//                 r = mid - 1; // reduces the search space
//             }
//         }
//         if (l <= r && flag) // checking condition
//             cout << n - mid << nl; // print answer
//         else if (flag) // checking conditon
//             cout << n - 1 - ans << nl; // print answer
//     }

//     return 0; // main function returns zero means terminal is closed
// }

// optimized
#include <iostream>
#include <algorithm>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    while (q--)
    {
        ll target;
        cin >> target;
        ll mid;
        ll l = 0;
        ll r = n - 1;
        ll ans = n;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (arr[mid] >= target)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << n - ans << nl;
    }

    return 0;
}