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
    for (int i = n - 1; i >= 0; i--) // itterating for loop to print in reverse order
    // starting from the last index and ends at zero'th index
    {
        cout << arr[i] << " "; // printing outputs
    }

    return 0; // return 0 means main function ends here
}