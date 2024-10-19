#include <iostream> // input-output header file for c++
#define ll long long int // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n' // defined nl as '\n' for new line printing
using namespace std; // identifiers are defined inside the standard namespace named std 

int main() // main function
{
    int n; // declared n, the number of elements in the array
    cin >> n; // taking n as input
    ll arr1[n]; // declared an array of n size
    for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
    {
        cin >> arr1[i]; // taking array's elements as input
    }
    int q; // declared q, the number of elements in the array
    cin >> q; // taking q as input
    ll arr2[q]; // declared an array of q size
    for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
    {
        cin >> arr2[i]; // taking queries as input
    }

    int k = 0; // initialized k, it will work as an index of 'arr2'
    ll cnt = 0; // count the total numbers that found in the array named 'arr1'
    while (q--) // the loop should iterate exactly q times
    {
        ll begin = 0; // first index of the array named 'arr1'
        ll end = n - 1; // last index of the array named 'arr1'
        ll mid; // initialized mid for further use
        ll target = arr2[k]; // it will find out queries value one by one for each iteration
         while (begin <= end) // if begin > end the loop will be closed
        {
            mid = (begin + end) / 2; // mid value should be the average of the summation of begin, end
            if (arr1[mid] == target) // if it can find the target the loop will break
                break; //  no need to iterate more, found the target
            else if (target > arr1[mid]) // if the target locates the right side of search space, begining index will be mid+1
            {
                begin = mid + 1; // begining index is mid+1
            }
            else // if the target locates the left side of search space, ending index will be mid-1
                end = mid - 1; // ending index is mid-1
        }
        if (begin <= end) // if the contion is true that means the target is found
            cnt++; // if the condition true, increase the value of count +1
        k++; // increased the index number of the 'arr2' array
    }
    cout << cnt << nl; // the number of integers in 'arr2' which are also in the set 'arr1'

    return 0;  // main function returns zero means terminal is closed
}