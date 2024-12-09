/*4. Delete the last element of a linked list using the function*/
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
void delete_tail(Node* &head, Node * &tail) // deleting tail
{
    if(tail->prev == NULL) // if the previous pointer of tail is null
    {
        head = NULL; tail = NULL; return; // head, tail is also null, quit
    }
    Node * deleteNode = tail; // memory allocation
    tail = tail->prev; // memory allocation
    tail->next = NULL; // memory allocation
    delete deleteNode; // memory allocation
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
    delete_tail(head, tail); // delete at tail
    print(head); // print update linked list


    return 0; // quit
}