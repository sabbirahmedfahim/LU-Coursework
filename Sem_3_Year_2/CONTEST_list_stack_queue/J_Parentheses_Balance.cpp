#include <iostream> // input-output header file 
#define nl '\n' // defined nl as '\n' for new line printing
#define ll long long int // defined 'll' as long long int data type
using namespace std; // identifiers are defined inside the standard namespace named std 
class Node // class name
{
public: // public for free access
    char data; // initialized integer data
    Node *prev; // previous pointer
    Node *next; // next pointer
    Node(char data) // constructor
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
    void push(char data) // complexity -> O(1)
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
    char top() // complexity -> O(1)
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
void solve() // non-reurn type solve function
{
    string s; getline(cin, s); // here's the catch, we're taking a line of string as input, if could be more than a word
    myStack st; // initialized user defined stack
    for (int i = 0; i < s.size(); i++) // s.size() times for loop
    {
        if(st.empty()) st.push(s[i]); // if the stack is empty, push the value of s[i]
        else // otherwise
        { 
            if((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']')) // check condition
            {
                st.pop(); // if the condition is matched, pop from top of the string
            }
            else st.push(s[i]); // else push the value of s[i]
        }
    }
    cout << ((st.empty())? "Yes" : "No") << nl; // if the stack is empty, print yes, otherwise print no
}
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // faster io

    int t; cin >> t; // initialized t as test case and taking input
    cin.ignore(); // getline function has a bad side that it takes spaces as input, so prevented 'enter's space
    while (t--) solve(); // solve function will work t times

    return 0; // quit
}