#include <iostream> // input-output header file for c++
#define ll long long int // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n' // defined nl as '\n' for new line printing
using namespace std; // identifiers are defined inside the standard namespace named std 

int main() // main function
{
    int t; // t for test cases
    cin >> t; // taking t as input
    int k = 1; // declared k for serially printing cases
    while (t--) // iterating a while loop to ensure it will iterate exactly t times  
    {
        int n; // n for size of int array
        cin >> n; // taking n as input
        int arr[n]; // declared an array size of n
        bool isSorted = true; // declared a boolean data type to detect unsorted array, using it for reduce some time complexity
        for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
        {
            cin >> arr[i]; // taking array's elements as input
            if(i == 0) continue; // if i == 0 it will skip next lines inside the loop
            if (arr[i-1] > arr[i]) // checking whether the array is unsorted or not
                isSorted = false; // if the condition is true then mark the variable isSorted as false
        }
        ll cnt = 0; // declared the variable to count swap operations
        if (!isSorted) // checking whether my array is sorted or not, if sorted we do not iterate nested loop
        {
            for (int i = 0; i < n - 1; i++) // outer loop for pass
            {
                if(arr[i] <= arr[i+1]) continue;
                bool flag = true;
                for (int j = i + 1; j < n; j++) // inner loop for step
                {
                    if (arr[i] > arr[j]) // checking whether arr[i] is greater than arr[j] or not
                    {
                        flag = false;
                        swap(arr[i], arr[j]); // if the condition is true then swap
                        cnt++; // count swap operation
                    }
                }
                if(flag) break;
            }
        }
        cout << "Case " << k << ": " << cnt << nl; // print the case number and total swap operations
        k++; // increase k's value to use it for further leveling
    }

    return 0; // main function returns zero means terminal is closed
}


// Wrong Answer
// #include <iostream>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int k = 1;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         ll cnt = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 cnt++;
//                 if (arr[i] > arr[j])
//                 {
//                     swap(arr[i], arr[j]);
//                     break;
//                 }
//             }
//         }
//         ll step = n*(n-1)/2;
//         cout << "Case " << k << ": " << step-cnt << nl;
//         k++;
//     }

//     return 0;
// }
