#include <iostream> // c++ header file for input, output
using namespace std; // don't understand
void traverse(int arr[], int n) // traversing the array using void function
{
    for (int i = 0; i < n; i++) // iritation
    {
        cout << arr[i] << " "; // printing arrays elements
    }
    cout << endl; // printing an extra new-line to decorate my code
}
int main() // main function
{
    int n; // declared an integer variable for array size
    cin >> n; // taking input
    int arr[n]; // declared an array of n size
    int countOdd = 0, countEven = 0; // declared two variables to store counts
    for (int i = 0; i < n; i++) // irritation
    {
        cin >> arr[i]; // taking input
        if (arr[i] % 2 == 0) // checking whether arrays elements is even or not
            countEven++; // couting the total number of even elements
        else // if the array element is odd, the conditon will be true
            countOdd++; // couting the total number of even elements
    }
    int evenArr[countEven]; // initializing an even array
    int oddArr[countOdd]; // initializing an odd array
    int evenIdx = 0; // the first index of the even array is zero
    int oddIdx = 0; // the first index of the odd array is zero
    for (int i = 0; i < n; i++) // iterating for loop
    {
        if(arr[i]%2==0) // the condition will be true is the array elements is even
        { 
            evenArr[evenIdx] = arr[i]; // adding even elements
            evenIdx++; // increasing index value
        }
        else // the condition will be true is the array elements is odd
        {
            oddArr[oddIdx] = arr[i]; // adding odd elements
            oddIdx++; // increasing index value
        }
    }
    cout << "even array: "; // leveled even array before printing
    traverse(evenArr, countEven); // called traverse function
    cout << "odd array: "; // leveled odd array before printing
    traverse(oddArr, countOdd); // called traverse function

    return 0; // program executes
}