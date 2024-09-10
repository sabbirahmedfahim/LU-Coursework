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
    int sum = 0; // declared sum variable to store summation of all elements
    int i = 0; // i for index
    while (i!=n) // iterating a while loop to access all elements
    {
        sum+=arr[i]; // at each iterating, adding elements with previous sum
        i++; // increasing index values
    }
    cout << "sum: " << sum; // priting total sum

    return 0; // program breaks
}