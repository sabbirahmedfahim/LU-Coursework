#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct Student
{
    int id;
    float total_mark;
    int rank;
    string name;
};
bool cmp(Student s1, Student s2)
{
    return s1.rank < s2.rank;
}
int main()
{
    int n; cin >> n;
    Student arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].id >> arr[i].total_mark >> arr[i].rank;
        cin.ignore();
        getline(cin, arr[i].name);
    }
    sort(arr, arr+n, cmp);
    cout << arr[0].name;

    return 0;
}