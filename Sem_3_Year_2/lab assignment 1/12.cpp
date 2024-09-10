#include <iostream> // c++ header file for input, output
using namespace std; // don't understand
void traverse(int arr[], int n) // makes a void function for printing
{
    for (int i = 0; i < n; i++) // iterating for loop to access array elements
    {
        cout << arr[i] << " "; // priting array elements
    }
}
void insert(int arr[], int n, int pos, int val) // maked a void function
{
    for (int i = n-1; i >= pos; i--) // iterating for loop the the last index to position index
    {
        arr[i] = arr[i-1]; // left shifting elements
    }
    arr[pos] = val; // inserted desired value in the given position
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
    int pos, data; // declaring two ingeter variables to store indices and values
    cin >> pos >> data; // taking index and value as input
    insert(arr, n + 1, pos, data); // calling inserting function
    traverse(arr, n+1); // calling traverse function

    return 0; // main function executes
}