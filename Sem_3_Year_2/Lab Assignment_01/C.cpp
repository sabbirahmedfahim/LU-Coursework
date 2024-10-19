// #include <iostream> // input-output header file for c++
// #define ll long long int // defined 'll' as long long int data type
// #define ull unsigned long long int // defined 'ull' as unsigned long long int data type
// #define nl '\n' // defined nl as '\n' for new line printing
// using namespace std; // identifiers are defined inside the standard namespace named std 

// int main()
// {
//     int n; // n for size of int array
//     cin >> n; // taking n as input
//     int arr[n]; // declared an array size of n
//     for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
//     {
//         cin >> arr[i]; // taking array's elements as input
//     }
//     ll cnt = 0; // declared the variable to count swap operations
//     for (int i = 0; i < n - 1; i++) // outer loop for pass
//     {
//         for (int j = 1; j < n; j++) // inner loop for step
//         {
//             if (arr[i] > arr[j]) // checking whether arr[i] is greater than arr[j] or not
//             {
//                 swap(arr[i], arr[j]); // if the condition is true then swap
//                 cnt++; // count swap operation
//             }
//         }
//     }
//     cout << cnt; // printing total swap count

//     return 0; // main function returns zero means terminal is closed
// }

// #include <iostream>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     ll cnt = 0;
//     for (int i = 0; i < n-1; i++)
//     {
//         bool isSorted = true;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 isSorted = false;
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//         if(isSorted) break;
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         if(arr[i] != arr[i+1]) cnt++;
//     }

//     cout << cnt;

//     return 0;
// }