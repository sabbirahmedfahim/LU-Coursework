// #include <iostream>                // input-output header file for c++
// #include <algorithm>               // to use sort function
// #define ll long long int           // defined 'll' as long long int data type
// #define ull unsigned long long int // defined 'ull' as unsigned long long int data type
// #define nl '\n'                    // defined nl as '\n' for new line printing
// using namespace std;               // identifiers are defined inside the standard namespace named std

// int main() // main function
// {
//     /*
//     doesn't understand in any way
//     */
//     int t;
//     cin >> t;   // test cases
//     while (t--) // iterates t times
//     {
//         int n, c;
//         cin >> n >> c;              // initialized & taking input
//         int arr[n];                 // initialized an array of n size
//         for (int i = 0; i < n; i++) // iterating for loop n times
//         {
//             cin >> arr[i]; // taking input
//         }
//         sort(arr, arr+n);
//         for(int data : arr) cout << data << " ";
//     }

//     return 0; // main function returns zero means terminal is closed
// }

#include <iostream>
#include <algorithm>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int data : arr) cout << data << " ";
        int mnDis = 0;
        for (int i = 0; i < c; i++)
        {
            
        }
        
    }

    return 0;
}
