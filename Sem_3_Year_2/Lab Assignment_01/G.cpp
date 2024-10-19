/*
it was a hard task for me to think the problem as a bs problem. alhamdulillah, after some brute forces, managed to solve the awesome concept. i suspect my bs implementation could be wrong
*/
#include <iostream>                // input-output header file for c++
#include <algorithm>               // to use sort function at O(NlogN) time complexity
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main function
{
    int n; // n for size
    cin >> n;              // taking input
    int arr[n];                 // initialized an array of n size
    for (int i = 0; i < n; i++) // iterating for loop n times
    {
        cin >> arr[i]; // taking input
    }
    sort(arr, arr + n); // sorting at O(NlogN) time complexity
    int cnt = n; // at first all kargaroos can be seen
    int k = n/2; // dividing the search space

    for (int i = 0; i < n/2 && k < n; k++) // iterating for loop
    {
        int target = arr[i]*2; // A kangaroo can go into another kangaroo's pocket if and only if the size of kangaroo who hold the kangaroo is at least twice as large as the size of kangaroo who is held.
        int mid; // mid of our search space
        int l = k; // begining
        int r = k; // due to the akward situation, let's say right, left are same
        while (l<=r) // condition
        {
            mid = (l+r)/2; // mid space
            if(target <= arr[mid]) // if the target is match, break
            {
                r = mid - 1; // reducing the search space
                break; // stop here
            }
            else l = mid + 1; // reducing the search space
        }
        if(target <= arr[mid]) // condition
        {
            i++; // increase the index if and only if previous one (kargaroo) is held is held by another kangaroo
            cnt--; // the kangaroo is vanished now
        }
        else if(target > arr[n-1]) break; // if the size of kangaroo who is probable 'held' by others, that means there's no other options
    }

    cout << cnt << nl; // print

    return 0; // main function returns zero means terminal is closed
}
