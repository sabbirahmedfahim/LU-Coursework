/*7. Insert at any position of a doubly linked list using the function*/
/*I know this code has some issues, I just made the structure to fulfill my task.
consider this*/
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
void insert_at_position(Node *&head, int pos, int val) // insert at any position
{
    Node *newNode = new Node(val); // dynamically make node
    if(head == NULL) // if the head pointer is null
    {
        head = newNode; return; // head is the new node , quit
    }
    Node *temp = head; // make temp node
    for (int i = 1; i <= pos - 1; i++) // iteration
    {
        temp = temp->next; // iteration
    }

    newNode->next = temp->next; // memory allocation
    temp->next = newNode; // memory allocation
    newNode->next->prev = newNode; // memory allocation
    newNode->prev = temp; // memory allocation
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
        int pos, data; cin >> pos >> data; // taking input
        insert_at_position(head, pos, data); // insert at any position
    }
    print(head); // print update linked list


    return 0; // quit
}