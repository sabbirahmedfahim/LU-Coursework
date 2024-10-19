#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main func
{
    int data; // initialize an integer array to store the target
    cin >> data; // taking input
    int n; // array size
    cin >> n; // taking input
    int ans; // ans varible to store the index
    int arr[n]; // array of n sizes
    for (int i = 0; i < n; i++) // for loop for iteration
    {
        cin >> arr[i]; // taking input
        if (arr[i] == data) // cheking conditon
            ans = i; // if the condtion is true, mark it
    }
    cout << ans << nl; // print the answer

    return 0; // main function returns zero means terminal is closed
}