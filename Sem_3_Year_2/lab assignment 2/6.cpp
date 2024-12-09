/*6. Insert at the beginning of a doubly linked list using the function*/
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
void insert_head(Node *&head, Node *&tail, int data) // insert at head
{
    if (head == NULL) // if head is null
    {
        Node *newNode = new Node(data); // make a node at runtime
        head = newNode; tail = newNode; // head, tail is new node
        return; // quit
    }

    Node *newNode = new Node(data); // memory allocation
    newNode->next = head; // memory allocation
    head->prev = newNode; // memory allocation
    head = newNode; // memory allocation
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
        insert_head(head, tail, data); // insert at head
    }
    print(head); // print update linked list


    return 0; // quit
}