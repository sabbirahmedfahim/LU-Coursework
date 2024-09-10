#include <iostream> // c++ header file for input, output
using namespace std; // don't understand
void traverse(int arr[], int n) // makes a void function for printing
{
    for (int i = 0; i < n; i++) // iterating for loop to access array elements
    {
        if(arr[i] == i) cout << arr[i] << " "; // if array element is equal to array indices, print it
    }
}
int main() // main function
{
    int n; // declared an integer variable for array size
    cin >> n; // taking input
    int arr[n]; // declared an array of n size
    for (int i = 0; i < n; i++) // using for loop for traversing all indices
    {
        cin >> arr[i]; // taking array elements as input
    }
    traverse(arr, n); // calling traverse function to print array elements

    return 0; // main funciton ends
}
