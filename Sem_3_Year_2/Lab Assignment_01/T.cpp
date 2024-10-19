#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main func
{
    int t; // t for test case
    cin >> t; // taking input
    while (t--) // the loop will iterate t times
    {
        int n; // n size
        cin >> n; // taking input
        int arr[n]; // array of n size
        for (int i = 0; i < n; i++) // iterates for loop for taking input
        {
            cin >> arr[i]; // taking input
        }
        int prefixSum[n]; // array for prefix sum, size n
        int suffixSum[n]; // array for suffix sum, size n
        prefixSum[0] = arr[0]; // first index of prefix sum array
        suffixSum[n - 1] = arr[n - 1]; // first index of suffix sum array
        for (int i = 1; i < n; i++) // array for prefix sum
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i]; // prefix sum
        }
        for (int i = n - 2; i >= 0; i--) // array for suffix sum
        {
            suffixSum[i] = suffixSum[i + 1] + arr[i]; // suffix sum
        }
        bool isYes = false; // isYes works like a scientist, determines whether there is an element that meets the criterion
        for (int i = 0; i < n; i++) // iterate
        {
            if(prefixSum[i] == suffixSum[i]) // condition check
            {
                cout << "YES" << nl; // if the conditon is matched, print yes
                isYes = true; // say to mr isYes variable, i am done
                break; // breaks as there's nothing to do 
            }
        }
        if(!isYes) cout << "NO" << nl; // if any of conditon is not matched, print no
    }

    return 0; // main function returns zero means terminal is closed
}