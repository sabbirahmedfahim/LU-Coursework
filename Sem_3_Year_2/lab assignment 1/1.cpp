#include <iostream> // c++ header file for input, output
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
    for (int i = 0; i < n; i++) // using for loop for printing outputs
    {
        cout << arr[i] << " "; // for each irritation, printing & giving an space ot seperate elements
    }

    return 0; // return 0 means main function ends here
}