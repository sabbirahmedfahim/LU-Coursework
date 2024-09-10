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
    int frequencyArr[100000] = {0}; // initiazing an array with 0 value in each indices 
    for (int i = 0; i < n; i++) // iterating for loop
    {
        frequencyArr[arr[i]]++; // adding freqency arrays index at the value of array named arr
    }
    for (int i = 0; i < 100000; i++) // iterating for loop
    {
        if(frequencyArr[i] > 0) cout << i << " - " << frequencyArr[i] << endl; // priting arrays elements and it's total counts
    }
    
    return 0; // executes program
}