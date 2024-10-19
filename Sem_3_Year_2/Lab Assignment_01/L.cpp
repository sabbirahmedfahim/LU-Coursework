#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main function
{
    int k = 1; // k for leveling cases
    while (true) // iterating an infinite loop
    {
        int n, q; // initialized int variable n, q
        cin >> n >> q; // taking input
        if (n == 0 && q == 0) // since the instruction is if we get n=0 and q=0 then closed the loop, checking this
            break; // stop taking input
        int arr[n]; // initialized an array of n size
        for (int i = 0; i < n; i++) // for loop for iteration
        {
            cin >> arr[i]; // taking the elements of the array in input
        }
        for (int i = 0; i < n - 1; i++) // outer loop for pass
        {
            for (int j = i + 1; j < n; j++) // innner loop for step
            {
                if (arr[i] > arr[j]) // checking the condition
                    swap(arr[i], arr[j]); // if the condtion is true, swap
            }
        }
        cout << "CASE# " << k << ":" << nl; // to follow the output pattern, we're printing this
        while (q--) // this loop should iterate exactly q times
        {
            int begin = 0; // begining of the search space
            int end = n - 1; // end of the search space
            int mid; // initialized int 'mid' variable for further use
            int target; // initialized 'target' for taking input
            cin >> target; // taking 'target' as input
            while (begin <= end) // this loop should iterates while the conditon is true unless it is forcefully stopped
            {
                mid = (begin + end) / 2; // mid of the search space
                if (arr[mid] == target) // if the target is found, break the loop
                    break; // stops the loop
                else if (target > arr[mid]) // checking whether target value is greater than or not
                {
                    begin = mid + 1; // reduces the search space
                }
                else// checking whether target value is smaller than or not
                    end = mid - 1; // reduces the search space
            }
            if (begin <= end && arr[mid] == target) // if the target value is found, print it's index
            {
                if(mid - 1 >= 0 && arr[mid-1] != arr[mid]) // checking condition
                cout << target << " found at " << mid + 1 << nl; // print
                else // if condition is false than iterate loop, duplicate values detected. print the first one
                {
                    for (int i = 0; i < n; i++) // iterating for loop until get the value's minimum index
                    {
                        if(arr[i] == arr[mid]) // condition
                        {
                            cout << target << " found at " << i + 1 << nl; // print
                            break; // got the value. do not need to iterate more
                        }
                    }
                }
            }
            else // else say not found
                cout << target << " not found" << nl; // target is not found
        }
        k++; // increases the value of k +1
    }

    return 0; // main function returns zero means terminal is closed
}