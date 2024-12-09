/*2. Count the number of even elements of an element-linked list using the function*/
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
void insert_tail(Node *&head, Node* &tail, int val) // insert at tail
{
    Node *newNode = new Node(val);  // make a node at runtime
    // Node * temp = tail;
    if (tail == NULL) // if head is null
    {
        head = newNode; tail = newNode; return; // head and tail is new node, quit
    }
    tail->next = newNode; // memory allocation
    newNode->prev = tail; // memory allocation
    tail = newNode; // We took reference (&) just because for this line, imagine why
}
void print(Node * head) // print the linked list
{
    if(head == NULL) return; // if the head pointer is null, quit
    while (head != NULL) // while head pointer is not null
    {
        cout << head->data; // print the data points at head
        if(head->next != NULL) cout << " "; // handles corner case due to presentation error
        head = head->next; // iteration
    }
    cout << nl; // print new line
}
int func(Node * head) // the function will return an integer value
{
    if(head == NULL) return 0; // if the head if null, return zero
    int cnt = 0;
    while (head != NULL) // iterate
    {
        if(head->data % 2 == 0) cnt++; // increase count if the data is even
        head = head->next; // iterate
    }
    return cnt; // return the answer
}
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // faster io

    Node * head = NULL; Node * tail = NULL; // initialize head, tail
    int n; cin >> n; // initialized n and taking input
    while (n--) // n times while loops
    {
        int data; cin >> data; // taking input
        insert_tail(head, tail, data); // insert at tail
    }
    
    cout << func(head) << nl; // max - min

    return 0; // quit
}