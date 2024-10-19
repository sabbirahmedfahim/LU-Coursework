#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main function
{
    int totalMinutes = 240;                  // 20:00 - 24:00 -> 240 minutes
    int n, minutesToGo;                      // n -> total problems, minutesToGO -> the number of minutes Limak needs to get to the party from his house
    cin >> n >> minutesToGo;                 // taking n, minutesToGO as input
    int target = totalMinutes - minutesToGo; // Limak have 'target' minutes for problem solving
    int sum = 0;                             // sum helps make a prefix sum type array
    int arr[n];                              // initialized an array of n numbers
    for (int i = 1; i <= n; i++)             // for loop for iteration
    {
        sum = sum + (5 * i); // updating sum varible
        arr[i - 1] = sum;    // prefix sum type increasement
    }
    int mid;       // mid space of the array
    int l = 0;     // l for left space
    int r = n - 1; // r for right space
    int ans = -1;  // initialize ans for further use
    while (l <= r) // the loop should iterates unless the condition is false
    {
        mid = (l + r) / 2;      // mid space of the array
        if (arr[mid] == target) // if target is found, break the loop
        {
            ans = mid; // store the value of mid, it's the answer
            break;     // stops the loop
        }
        else if (target > arr[mid]) // checking whether target value is greater than or not
        {
            ans = mid;   // very interesting. it stores the lower bound of the search space, in case the target is not found, this should be the answer
            l = mid + 1; // reduces the search space
        }
        else
        {
            // ans = mid; // wanna need lower bound, so don't need to update if the target value is smaller than the arr[mid] value
            r = mid - 1; // reduces the search space
        }
    }
    cout << ans + 1; // since we noticed the pattern that index is 1 based, added a +1 with ans

    return 0; // main function returns zero means terminal is closed
}