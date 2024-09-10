#include <iostream>  // c++ header file for input, output
using namespace std; // don't understand

int main() // main function
{
    int n; // declared an integer variable for array size
    cin >> n; // taking input
    int arr1[n]; // declared an array of n size
    int arr2[n]; // declared an array of n size
    for (int i = 0; i < n; i++) // using for loop for traversing all indices
    {
        cin >> arr1[i]; // taking array elements as input
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int mergedArr[n + n]; // the size of arr1 and arr2 = n+n
    for (int i = 0; i < n; i++) // iterating for loop
    {
        mergedArr[i] = arr1[i]; // merging 
    }
    int j = 0; // j index used to merge two arrays
    for (int i = n; i < n * 2; i++, j++) // iterating for loop
    {
        mergedArr[i] = arr2[j]; // merging
    }
    for (int i = 1; i < n*2; i++) // outer loop is for PASS
    {
        for (int j = 0; j < (n*2) - i; j++) // inner loop is STEP
                                        // j++ is tracker
        {
            if (mergedArr[j] < mergedArr[j + 1])      // compare
                swap(mergedArr[j], mergedArr[j + 1]); // change
        }
    }
    for (int i = 0; i < n * 2; i++) // iterating for loop
    {
        cout << mergedArr[i] << " "; // priting merged arrays indices
    }

    return 0; // main function breaks
}