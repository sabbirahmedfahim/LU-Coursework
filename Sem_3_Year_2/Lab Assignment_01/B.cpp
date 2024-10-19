#include <iostream> // input-output header file for c++
#define ll long long int // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n' // defined nl as '\n' for new line printing
using namespace std; // identifiers are defined inside the standard namespace named std 

int main() // main function
{
    int n; // n for size of int array
    cin >> n; // taking n as input
    int arr[n]; // declared an array size of n
    for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
    {
        cin >> arr[i]; // taking array's elements as input
    }
    ll cnt = 0; // declared the variable to count swap operations
    for (int i = 1; i <= n; i++) // outer loop for pass
    {
        for (int j = 0; j < n - 1; j++) // inner loop for step
        {
            if (arr[j] > arr[j + 1]) // checking whether arr[i] is greater than arr[j] or not
            {
                swap(arr[j], arr[j + 1]); // if the condition is true then swap
                cnt++; // count swap operation
            }
        }
    }
    cout << "Array is sorted in " << cnt << " swaps." << nl << "First Element: " << arr[0] << nl << "Last Element: " << arr[n-1] << nl; // printing the total swap count along with the first element and last element of the sorted array

    return 0; // main function returns zero means terminal is closed
}