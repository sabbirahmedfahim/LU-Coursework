#include <iostream> // c++ header file for input, output
using namespace std; // don't understand
void traverse(int arr[], int n) // makes a void function for printing
{
    for (int i = 0; i < n; i++) // iterating for loop to access array elements
    {
        cout << arr[i] << " "; // priting array elements
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
    for (int i = 1; i < n; i++) // outer loop is for PASS
    {
        for (int j = 0; j < n - i; j++) // inner loop is STEP
                                        // j++ is tracker
        {
            if (arr[j] > arr[j + 1])      // compare
                swap(arr[j], arr[j + 1]); // change
        }
    }

    int uniqueElements = 0; // initialized a varible to count unique elements
    for (int i = 0; i < n - 1; i++) // iterating for loop
    {
        if(arr[i] != arr[i+1]) uniqueElements++; // counting unique elements
        else if(i == n-2 && arr[n-2] == arr[n-1]) uniqueElements++; // counting unique elements
    }
    int uniqueArr[uniqueElements]; // maked an array of uniqueElements size
    int idx = 0; // first index is zero
    for (int i = 0; i < n - 1; i++) // iterating for loop
    {
        if(arr[i] != arr[i+1]) //  comparing
        {
            uniqueArr[idx] = arr[i]; // adding elements
            idx++; // increased index size
        }
        else if(i == n-2 && arr[n-2] == arr[n-1]) 
        {
            uniqueArr[idx] = arr[n-1]; // adding elements
            idx++; // increased index size
        }
    }

    int secondLargest = arr[n-2]; // accessing and storing second largest element
    int secondSmallest = arr[1]; // accessing and storing second smallest element
    cout << "second largest: " << secondLargest << endl; // printing second largest element
    cout << "second smallest: " << secondSmallest << endl; // printing second smallest element

    return 0; // program breaks
}
