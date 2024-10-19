#include <iostream> // input-output header file for c++
#define ll long long int // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n' // defined nl as '\n' for new line printing
using namespace std; // identifiers are defined inside the standard namespace named std

int main() // main function
{
    ios_base::sync_with_stdio(false); // speeding up input/output
    cin.tie(NULL); // speeding up input/output

    ll n; // declared n, number of elements in the array
    ll q; // delcared q, number of queries to follow
    cin >> n >> q; // taking n, q as input
    ll arr[n]; // declared an array of n size
    for (int i = 0; i < n; i++) // iterating for loop to taking array's element as input
    {
        cin >> arr[i]; // taking array's elements as input
    }
    while (q--) // the loop should iterate exactly q times
    {
        ll target; // initialized the variable to store target values
        cin >> target; // receiving target value as input
        ll begin = 0; // first index of the array named 'arr'
        ll end = n - 1; // last index of the array named 'arr'
        ll mid; // initialized mid for further use
        while (begin <= end) // if begin > end the loop will be closed
        {
            mid = (begin + end) / 2; // mid value should be the average of the summation of begin, end
            if (arr[mid] == target) // if it can find the target the loop will break
                break; //  no need to iterate more, found the target
            else if (target > arr[mid]) // if the target locates the right side of search space, begining index will be mid+1
            {
                begin = mid + 1; // begining index is mid+1
            }
            else // if the target locates the left side of search space, ending index will be mid-1
                end = mid - 1; // ending index is mid-1
        }
        if (begin <= end) // if the contion is true that means the target is found
        {
            int i = mid - 1; // to find  the elements 0 based location of its first occurence
            while (i >= 0 && arr[i] == arr[mid]) // to find the elements 0 based location of its first occurence
            {
                mid = i; // to find the elements 0 based location of its first occurence
                i--; // to find  the elements 0 based location of its first occurence
            }
            cout << mid << nl; // print the position of the target
        }
        else // if the contion is false that means the target is not found
            cout << -1 << nl; // priting -1, a symbolic representation that the target is not found
    }

    return 0;   // main function returns zero means terminal is closed
}

#include<iostream>
using namespace std;

int main() {
    int n, q; // n = size of array, q = number of queries
    cin >> n >> q;
    int A[n];
    int itemForQu;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }


    for (int i = 0; i < q; i++) {
        
        cin >> itemForQu;//item for queries
        int beg = 0;
        int endd = n - 1;
        int mid;
        bool flag = false; // using flag to keep a track intially false

        while (beg <= endd) {
            mid = (beg + endd) / 2;

            if (A[mid] == itemForQu) {
                cout << mid << endl;
                flag = true; // if flag==true it will break and search for next query
                break;
            }
            else if (A[mid] < itemForQu) {
                beg = mid + 1;
            }
            else {
                endd = mid - 1;
            }
        }

        if (flag==false) {
            cout << "-1" << endl; // if not found then -1
        }
    }

    return 0;
}