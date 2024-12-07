#include <iostream> // input-output header file 
#define nl '\n' // defined nl as '\n' for new line printing
#define ll long long int // defined 'll' as long long int data type
using namespace std; // identifiers are defined inside the standard namespace named std 
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
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // faster io
    
    myStack st; // initialine custom maked stack
    int n; cin >> n; // initialize an integer n and take input
    for (int i = 0; i < n; i++) // for loop
    {
        int x; cin >> x; // initialized x as command and take input
        //st.push(x);
        if(x == 1) // if x is 1
        {
            int data; cin >> data; st.push(data); // take input and push the data
        }
        else if(x == 2) // else if x is 2
        {
            if(!st.empty()) st.pop(); // check whether stack is empty or not, if not, pop 
        }
        else // either
        {
            if(!st.empty()) cout << st.top() << nl;// check whether stack is empty or not, if not, print top value
            else cout << "Empty!" << nl; // else print Empty
        }
    }

    return 0; // quit
}
