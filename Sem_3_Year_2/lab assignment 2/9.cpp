/*9. Remove a given node from a doubly linked list using the function*/
/* I am sure my solution is not accurate because my task in to find the target node and
delete it from the linked list. Instead, I searched for a specific value(not node!!) and 
searched for a pointer that has the same value that I am searching.*/
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
void delete_head(Node* &head, Node* &tail) // deleting head
{
    if(head->next == NULL) // if the next pointer of head is null
    {
        head = NULL; tail = NULL; return; // head, tail is also null, quit
    }
    Node * deleteNode = head; // memory allocation
    head = head->next; // memory allocation
    head->prev = NULL; // memory allocation
    delete deleteNode; // memory allocation
}
void delete_tail(Node* &head, Node * &tail) // deleting tail
{
    if(tail->prev == NULL) // if the previous pointer of tail is null
    {
        head = NULL; tail = NULL; return; // head, tail is also null, quit
    }
    Node * deleteNode = tail;
    tail = tail->prev; // memory allocation
    tail->next = NULL; // memory allocation
    delete deleteNode; // memory allocation
}
void search_n_delete(Node * &head, Node * &tail, int data) // search the target value and delete it
{
    if(head == NULL) return; // if the head pointer is null, quit
    else if(head->data == data) delete_head(head, tail); // if the value of head is target, delete head
    else // either
    {
        Node * tmp = head; // copy head to tmp node
        while (tmp != NULL) // while tmp node is not null
        {
            if(tmp->data == data) // if the data of tmp if target data
            {
                if(tmp->next == NULL) // if the next pointer of tmp is null
                {
                    delete_tail(head, tail); // delete tail
                }
                else // either
                {
                    tmp->prev->next = tmp->next; // memory allocation
                    tmp->next->prev = tmp->prev; // memory allocation
                }
                return; // quit
            }
            tmp = tmp->next; // iteration
        }
    }
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
    int data; cin >> data;
    search_n_delete(head, tail, data);
    print(head); // print update linked list


    return 0; // quit
}