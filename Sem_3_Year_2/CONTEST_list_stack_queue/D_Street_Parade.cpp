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

    while (1) // the loop iterates continuously before forcely stopped inside loop
    {
        int n; cin >> n; // initialized n and taking input
        if (n == 0) return 0; // it is said that the problem statement to stop the program when n equal zero
        myStack st; // initailized stack
        int target = 1; // target for maintaing serial [which is described at the problem statement]
        while (n--) // n times while loop
        {
            int data; cin >> data; // initialized integer data and taking input
            if(target == data) target++; // if target is matched with data, increase target size
            else st.push(data); // else push the target at the stack
            while (!st.empty() && st.top() == target) // when target is match with top values of the stack
            {
                st.pop(); target++; // pop stack and increase target value
            }
        }
        cout << ((st.empty())? "yes" : "no" ) << nl; // if the stack is empty, print yes, else print no
    }

    return 0; // quit
}