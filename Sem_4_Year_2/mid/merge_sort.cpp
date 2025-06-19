#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r) // O(n)
{
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int L[leftSize], R[rightSize];
    int idx = 0;
    for (int i = l; i <= m; i++) 
    {
        L[idx] = a[i];
        idx++;
    }
    idx = 0;
    for (int i = m + 1; i <= r; i++) 
    {
        R[idx] = a[i];
        idx++;
    }
    int i = 0, j = 0;
    int cur = l;
    while (i < leftSize && j < rightSize) 
    {
        if (L[i] <= R[j]) 
        {
            a[cur] = L[i];
            i++;
        } 
        else 
        {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }

    while (i < leftSize) 
    {
        a[cur] = L[i];
        i++;
        cur++;
    }

    while (j < rightSize) 
    {
        a[cur] = R[j];
        j++;
        cur++;
    }
}

void merge_sort(int a[], int l, int r) // O(n log n)
{
    if (l < r) 
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, mid, r); // O(n)
    }
}

int main() 
{
    int n = 5; 
    int a[n] = {7, 5, 3, 1, 2}; 
    merge_sort(a, 0, n - 1);

    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    return 0;
}
