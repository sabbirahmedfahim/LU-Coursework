#include <iostream> // c++ header file for input, output
using namespace std; // don't understand
 
int main() // main function
{
    int n; // declared an integer variable for array size
    cin >> n; // taking input
    int arr[n]; // declared an array of n size
    int duplicateArr[n]; // initialized another array to copy from an array
    for (int i = 0; i < n; i++) // using for loop for traversing all indices
    {
        cin >> arr[i]; // taking array elements as input
    }
    for (int i = 0; i < n; i++) // iterating for loop
    {
        duplicateArr[i] = arr[i]; // duplicating the array named arr
    }
    for (int i = 0; i < n; i++) // iterating for loop to traverse array
    {
        cout << duplicateArr[i] << " "; // printing elements
    }

    return 0; // program ends
}