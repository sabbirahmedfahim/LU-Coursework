#include <iostream>                // input-output header file for c++
#define ll long long int           // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n'                    // defined nl as '\n' for new line printing
using namespace std;               // identifiers are defined inside the standard namespace named std

int main() // main func
{
    while (true) // iterates an infinity loop
    {
        int n;                      // n for row, n for column
        cin >> n;                   // taking input
        if(n == 0) break; // as the instruction is to break the loop after getting zero as matrix size
        int mat[n][n];              // n by m int matrix
        for (int i = 0; i < n; i++) // outer loop
        {
            for (int j = 0; j < n; j++) // inner loop
            {
                cin >> mat[i][j]; // taking input
            }
        }
        int cntOdd = 0;             // counts odd values
        int iBit, jBit;             // for tracking changing bit
        int rowWise = 0;            // row-wise how many conditon did not match
        for (int i = 0; i < n; i++) // outer loop
        {
            int cnt = 0;                // to check odd, even
            for (int j = 0; j < n; j++) // inner loop
            {
                cnt += mat[i][j]; // updating cnt's value
            }
            if (cnt % 2 != 0) // if odd value exist, make it
            {
                cntOdd++; // odd values, add this
                iBit = i; // if there is single odd, we'll further print it's position to change it
            }
        }
        rowWise = cntOdd;           // row-wise total odd sum
        int colWise = 0;            // now storing column-wise total odd sum
        for (int i = 0; i < n; i++) // outer loop
        {
            int cnt = 0;                // to check odd, even
            for (int j = 0; j < n; j++) // inner loop
            {
                cnt += mat[j][i]; // updating cnt's value
            }
            if (cnt % 2 != 0) // if odd value exist, make it
            {
                cntOdd++; // odd values, add this
                jBit = i; // if there is single odd, we'll further print it's position to change it
            }
        }
        colWise = cntOdd - rowWise; // simple math to calculate column-wise odd sum
        if (cntOdd == 0)
            cout << "OK" << nl; // cntOdd zero means all conditons are okay
        else if (rowWise > 1 || colWise > 1)
            cout << "Corrupt" << nl; // there are multiple condition breaks, so print it
        else
            cout << "Change bit (" << iBit + 1 << "," << jBit + 1 << ")" << nl; // a single position should be fixed, marked the location with indeces
    }

    return 0; // main function returns zero means terminal is closed
}