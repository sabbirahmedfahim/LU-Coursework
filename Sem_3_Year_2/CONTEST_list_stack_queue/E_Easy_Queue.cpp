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
class myQueue // initialized a user-defined queue
{
public: // public for easy access
    Node * head = NULL; // initialized head
    Node * tail = NULL; // initialized tail
    int sz = 0; // at first size is zero

    void push(int data) // complexity -> O(1)
    {
        sz++; // push means increased size
        Node *newNode = new Node(data); // initialized a node in runtime
        if (head == NULL)
        {
            head = newNode; // then head, tail is newNode
            tail = newNode; // then head, tail is newNode
            return; // quit
        }
        tail->next = newNode; // memory allocation
        newNode->prev = tail; // memory allocation
        tail = newNode; // memory allocation
    }
    void pop() // complexity -> O(1)
    {
        sz--; // pop means size is reduced
        Node * deleteNode = head; // memory allocation
        head = head->next; // memory allocation
        if (head == NULL) // if head is null
        {
            tail = NULL; // tail is also null
            delete deleteNode; // delete node
            return; // quit
        }
        else // either
        {
            head->prev = NULL; // previous pointer of head is null
        }
        delete deleteNode; // deleting node
    }
    int front()  // complexity -> O(1)
    {
        return head->data;  // returns integer data type
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

    myQueue q; // initialized queue
    int n; cin >> n; // initialized n and taking input
    while (n--) // iterating while loop n times
    {
        int cmd; cin >> cmd; // initialized integer type cmd and taking input
        if(cmd == 1) // if cmd is 1
        {
            int val; cin >> val; // initialize val and take input
            q.push(val); // push the value at the queue
        }
        else if(cmd == 2) // if cmd is 2
        {
            if(!q.empty()) q.pop(); // if queue is not empty, pop it
        }
        else // either
        {
            if(!q.empty()) cout << q.front() << nl; // if queue is not empty, print front value
            else cout << "Empty!" << nl; // else print Empty
        }
    }
    
    return 0; // quit
}