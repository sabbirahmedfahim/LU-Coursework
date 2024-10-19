/*
the question is not clear for me
*/
#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main()
{
    int t;
    cin >> t;
    int k = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        cnt = n*(n-1)/2;
        // if(n*(n-1)%2 == 0) 
        // else cnt = n*(n-1)/2;
        cout << "Case " << k << ": ";
        if(n == 1) cout << 0 << nl;
        else if(cnt%n == 0) cout << n/cnt << nl;
        else
        {
            int i = 2;
            while (i <= n)
            {
                if(cnt%i == 0 && n%i == 0)
                {
                    cnt/=i;
                    n/=i;
                }
                else i++;
            }
            cout << cnt << "/" << n << nl;
        }
        k++;
    }

    return 0;
}


// #include <iostream>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;
// int findSwaps(int n, int a[])
// {
//     int count = 0, i, j, temp, b[100000];
//     for (i = 0; i < n; i++)
//     {
//         b[i] = a[i];
//     }
//     for (i = 0; i < n; i++)
//     {
//         bool flag = true;
//         for (j = 0; j < n - 1; j++)
//         {
//             if (b[j] > b[j + 1])
//             {
//                 flag = false;
//                 temp = b[j];
//                 b[j] = b[j + 1];
//                 b[j + 1] = temp;
//                 count++;
//             }
//         }
//         if(flag) break;
//     }
//     return count;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; cin >> t;
//     int k = 1;
//     while (t--)
//     {
//         int n; cin >> n;
//         int arr[n];
//         int l = 1;
//         for (int i = n-1; i >= 0; i--)
//         {
//             arr[i] = l;
//             l++;
//         }
//         cout << "Case " << k << ": ";
//         int swapCount = n*(n-1)/2;
//         if(n*(n-1)%2 == 0 && swapCount%n == 0) cout << swapCount/n << nl;
//         else cout << n*(n-1)/2 << "/"  << n << nl;
//         k++;
//     }
    
//     return 0;
// }