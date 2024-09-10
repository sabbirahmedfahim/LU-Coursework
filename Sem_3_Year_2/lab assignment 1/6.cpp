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
    for (int i = 1; i < n; i++) // outer loop is for PASS
    {
        for (int j = 0; j < n - i; j++) // inner loop is STEP
                                        // j++ is tracker
        {
            if (arr[j] > arr[j + 1])      // compare
                swap(arr[j], arr[j + 1]); // change
        }
    }

    for (int i = 0; i < n - 1; i++) // iterating for loop
    {
        if(arr[i] != arr[i+1]) cout << arr[i] << " "; // priting unique elements
        else if(i == n-2 && arr[n-2] == arr[n-1]) cout << arr[n-1] << " "; // printing unique elements
    }

    return 0; // program exucutes here
}
