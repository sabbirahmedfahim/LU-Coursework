#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main func
{
    int n;                      // n size
    cin >> n;                   // taking input
    int arr1[n];                // array of n size
    int freq1[100005] = {0};    // frequency array for further use
    for (int i = 0; i < n; i++) // for loop for taking input
    {
        cin >> arr1[i];   // taking input
        freq1[arr1[i]]++; // add the value is frequency array index so that next time we can detect
    }
    int m;                      // m size
    cin >> m;                   // taking input
    int arr2[m];                // array of m size
    int freq2[100005] = {0};    // frequency array for further use
    for (int i = 0; i < m; i++) // for loop for taking input
    {
        cin >> arr2[i];   // taking input
        freq2[arr2[i]]++; // add the value is frequency
    }
    for (int i = 0; i < 100005; i++) // iterating
    {
        if (freq1[i] < freq2[i])
            cout << i << " "; // print the elements in the second array are missing from the first array.
    }
    return 0; // main function returns zero means terminal is closed
}