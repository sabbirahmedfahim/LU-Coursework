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
    int pos; // declared an integer variable to take it's value as input as a position to delete
    cin >> pos; // taking the position as input 
    int newArr[n - 1]; // since we know that we'll delete an element from the array, reduces array size

    for (int i = 0; i < n; i++) // iterating for loop to access the the elements of the array
    {
        if(i==pos) continue; // i'll delete the indices value that's why ignoring it
        if (i > pos) // if the index value is higher than delete position, i'll left shift rest of the indices until the last index
        {
            newArr[i-1] = arr[i]; // initializing left shift elements in new array
        }
        else newArr[i] = arr[i]; // else straight duplicating from old array to new array
    }
    traverse(newArr, n-1); // calling traverse function to print newArr elements

    return 0; // main function ends
}