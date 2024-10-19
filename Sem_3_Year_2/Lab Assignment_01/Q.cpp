#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int n; // n for row, n for column
bool isValid(int i, int j) // checking whether the indeces exist or not
{
    return !(i < 0 || i >= n || j < 0 || j >= n); // return whether the conditions are matched or not
}
int main() // main func
{
    int t; // initialized t for storiting test cases
    cin >> t; // taking input
    int k = 1; // k for serially case printing
    while (t--) // the loop should iterate t times
    {
        char c1, c2; 
        cin >> c1 >> c2; // avoiding the character which is 'N' & '='
        cin >> n; // size of the matrix
        ll mat[n][n]; // n by n int matrix
        ll temp = n-1; // for further calculation
        bool flag = true; // if any condition of symmetric matrix is breaked, mark as false
        ll lim = 4294967296; // given the maximum limit 2^32
        for (int i = 0; i < n; i++) // outer loop
        {
            for (int j = 0; j < n; j++) // inner loop
            {
                ll data; cin >> data; // taking input
                if(data > lim || data < 0) flag = false; // if any condition of symmetric matrix is breaked, mark as false
                mat[i][j] = data; // assign the data in the matrix
            }
        }
        if (flag) // if all of the values are position, go for next condition
        {
            for (int i = 0; i < n; i++) // outer loop
            {
                for (int j = 0; j < n; j++) // inner loop
                {
                    int iCmp = temp - i; // probable i index
                    int jCmp = temp - j; // probable j index 
                    if (isValid(iCmp, jCmp) && (i + j + iCmp + jCmp) == temp+temp && mat[i][j] != mat[iCmp][jCmp]) // checking conditions
                    {
                        flag = false; // mark the matrix, it's should be non-summetric 
                        break; // stop, we already got the solution
                    }
                }
            }
        }
        cout << "Test #" << k << ": "; // for the formality for printing cases
        if (flag) // checking conditions
            cout << "Symmetric." << nl; // print
        else // conditon do not matched
            cout << "Non-symmetric." << nl; // print
        k++; // increase k +1
    }

    return 0; // main function returns zero means terminal is closed
}