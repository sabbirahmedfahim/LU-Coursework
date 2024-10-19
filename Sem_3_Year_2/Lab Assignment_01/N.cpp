#include <iostream> // input-output header file for c++
#define ll long long int // defined 'll' as long long int data type
#define ull unsigned long long int // defined 'ull' as unsigned long long int data type
#define nl '\n' // defined nl as '\n' for new line printing
using namespace std; // identifiers are defined inside the standard namespace named std 

int main() // main function
{
    int mat[6][6]; // initialized an 2D array of 6 by 6 size
    for (int i = 0; i < 6; i++) // outer loop
    {
        for (int j = 0; j < 6; j++) // inner loop
        {
            cin >> mat[i][j]; // taking input
        }
    }
    int t = 16; // there will be exacty 16 iterations
    int k = 0, l = 0; // k for row increasement, l for column increasement
    ll ans = -100000; // initialized ans varible with negative values to encourted corner cases
    while (t--) // iterating while loop 16 times
    {
        ll mx = 0; // let a variable to store 'hourglass's values
        for (int i = 0; i < 3; i++) // outer loop
        {
            for (int j = 0; j < 3; j++) // inner loop
            {
                if (i == 1 && j == 0 || i == 1 && j == 2) continue; // skip
                else mx+=mat[i+k][j+l]; // updating 'mx' values to compare whether it is maximum hourglass or not
            }
        }
        if(mx > ans) ans = mx; // if 'mx' is greater than ans, initialize ans varible with mx's value
        if(l==3) // l = 3 means we hafta increase the row level
        {
            l = 0; // initialized l == 0 as row level is changed
            k++; // increase row level
        }
        else l++; // if the row level do not increase, increase column level
    }
    cout << ans << nl; // priting the maximum hourglass's sum

    return 0; // main function returns zero means terminal is closed
}

// useful code for understanding the problem from the very code
// #include <iostream>
// #define ll long long int
// #define ull unsigned long long int
// #define nl '\n'
// using namespace std;

// int main()
// {
//     int mat[6][6];
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }
//     int t = 16;
//     int k = 0, l = 0;
//     int step = 1;
//     while (t--)
//     {
//         cout << "step: " << step << nl; step++;
//         for (int i = 0; i < 3; i++)
//         {
//             for (int j = 0; j < 3; j++)
//             {
//                 if (i == 1 && j == 0 || i == 1 && j == 2)
//                     cout << "  ";
//                 else
//                     cout << mat[i+k][j+l] << " ";
//             }
//             cout << nl;
//         }
//         if(l==3)
//         {
//             l = 0;
//             k++;
//         }
//         else l++;
//         cout << nl;
//     }

//     // for (int i = 0; i < 6; i++)
//     // {
//     //     for (int j = 0; j < 6; j++)
//     //     {
//     //         cout << mat[i][j] << " ";
//     //     }
//     //     cout << nl;
//     // }

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i][j] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i][j + 1] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i][j + 2] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i][j + 3] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl << nl;

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i + 1][j] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i + 1][j + 1] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i + 1][j + 2] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         if (i == 1 && j == 0 || i == 1 && j == 2)
//     //             cout << "  ";
//     //         else
//     //             cout << mat[i + 1][j + 3] << " ";
//     //     }
//     //     cout << nl;
//     // }
//     // cout << nl;

//     return 0;
// }