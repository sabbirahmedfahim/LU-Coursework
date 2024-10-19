#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main func
{
    int n, d; // n size, d rotation
    cin >> n >> d;  // taking input
    int arr[n];
    for (int i = 0; i < n; i++) // iterating for loop
    {
        cin >> arr[i]; // taking input
    }
    while (d--) // rotate d times
    {
        for (int i = 0; i < n-1; i++) // iterating for loop
        {
            swap(arr[i], arr[i + 1]); // rotation
        }
    }
    for (int i = 0; i < n; i++) // iterating for loop
    {
        cout << arr[i] << " "; // print the result
    }

    return 0; // main function returns zero means terminal is closed
}