#include <bits/stdc++.h>

using namespace std;
class Node // class name
{
public: // public for free access
    int data; // initialized integer data
    Node *prev; // previous pointer
    Node *next; // next pointer
    Node(int data) // constructor
    {
        this->data = data; // initialized constructors values
        this->prev = NULL; // initialized constructors values
        this->next = NULL; // initialized constructors values
    }
};
class myStack // initialized a user-defined stack
{
public: // public for easy access
    Node * head = NULL; // initialized head
    Node * tail = NULL; // initialized tail
    int sz = 0; // at first size is zero
    void push(int data) // complexity -> O(1)
    {
        sz++; // push means increased size
        Node *newNode = new Node(data); // initialized a node in runtime
        if (head == NULL) // if head is null
        {
            head = newNode; // then head, tail is newNode
            tail = newNode; // then head, tail is newNode
            return; // quit
        }
        newNode->prev = tail; // memory allocation
        tail->next = newNode; // memory allocation
        tail = newNode; // memory allocation
    }
    void pop() // complexity -> O(1)
    {
        sz--; // pop means size is reduced
        Node * deleteNode = tail; // memory allocation
        tail = tail->prev; // memory allocation
        if (tail == NULL) // if tail is null
        {
            head = NULL; // head is also null
        }
        else // either
        {
            tail->next = NULL; // next pointer of tail is null
        }
        delete deleteNode; // deleting node
    }
    int top() // complexity -> O(1)
    {
        return tail->data; // returns integer data type
    }
    int size() // complexity -> O(1)
    {
        return sz; // returns integer data type
    }
    bool empty() // complexity -> O(1)
    {
        if (sz == 0) // if size if zero
            return true; // return true
        else // either
            return false; // return false
    }
};
string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isBalanced(string s) // isBalanced function that returns string 
{
    reverse(s.begin(), s.end()); // reverse the string
    // cout << s <<endl;
    myStack st; // initialized stack
    while (!s.empty()) // while string is not empty
    {
        if(st.empty()) st.push(s.back()); // if the stack is empty, push the last index's value to the stack
        else if(st.top() == '[' && s.back() == ']') st.pop(); // if contion is matched, pop the stack
        else if(st.top() == '{' && s.back() == '}') st.pop(); // if contion is matched, pop the stack
        else if(st.top() == '(' && s.back() == ')') st.pop(); // if contion is matched, pop the stack
        else st.push(s.back()); // either push the last index's value to the stack
        s.pop_back(); // pop the last index's value of string
    }
    if(st.empty()) return  "YES"; // if stack is empty, print yes
    else return "NO"; // else print no
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
