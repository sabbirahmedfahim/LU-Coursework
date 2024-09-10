#include <iostream>  // c++ header file for input, output
using namespace std; // don't understand

int main() // main function
{
    int n; // declared an integer variable for array size
    cin >> n; // taking input
    int arr[n]; // declared an array of n size
    for (int i = 0; i < n; i++) // using for loop for traversing all indices
    {
        cin >> arr[i]; // taking array elements as input
    }
    int mx = -2147483648; // initializing minimum value with the highest maximum integer to handle corner cases
    int mn = 2147483647; // initializing maximum value with the lowest minimum integer to handle corner cases
    for (int i = 0; i < n; i++) // iterating for loop to find out maximum and minimum values
    {
        cin >> arr[i]; // taking array elements as input
        if(arr[i] > mx) mx = arr[i]; // comparing arrays index values with minimum values and keeps the minimum one
        if(arr[i] < mn) mn = arr[i]; // comparintg arrays index valeus with maximum values and keeps the maximum one
    }
    cout << "maximum element: " << mx << endl; // printing minimum element
    cout << "minimum element: " << mn << endl; // priting maximum element

    return 0; // main function executes
}