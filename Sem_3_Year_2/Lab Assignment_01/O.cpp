#include <iostream> // input-output header file for c++
#define ll long long int // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n' // defined nl as '\n' for new line printing
using namespace std; // identifiers are defined inside the standard namespace named std 

int n, m; // initialized two global variable n, m, the number of row and the number of column
bool isValid(int i, int j) // checking whether the indeces exist or not
{
    return !(i < 0 || i >= n || j < 0 || j >= m); // return whether the conditions are matched or not
}
int main() // main func
{
    cin >> n >> m; // n for row, m for column
    char mat[n][m]; // n by m character matrix
    for (int i = 0; i < n; i++) // outer loop
    {
        for (int j = 0; j < m; j++) // inner loop
        {
            cin >> mat[i][j]; // taking input
        }
    }
    int r, c; // target positions
    cin >> r >> c; // taking input
    r--, c--; // since we'll work will 0 based indeces and instruction is 1 index based, changed 1 based to zero based
    bool flag = true; // maked a boolean variable and initialized with true
    if (isValid(r - 1, c - 1) && mat[r - 1][c - 1] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r - 1, c) && mat[r - 1][c] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r - 1, c + 1) && mat[r - 1][c + 1] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r, c - 1) && mat[r][c - 1] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r, c + 1) && mat[r][c + 1] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r + 1, c - 1) && mat[r + 1][c - 1] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r + 1, c) && mat[r + 1][c] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    else if (isValid(r + 1, c + 1) && mat[r + 1][c + 1] != 'x') // checking conditions
        flag = false; // if the conditon is do not matched, mark flag as false
    if (flag) // flag true means the position exist and matched conditions
        cout << "yes" << nl; // print yes
    else // conditon do not match
        cout << "no" << nl; // print no

    return 0; // main function returns zero means terminal is closed
}