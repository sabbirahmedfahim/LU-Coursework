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
int sz = 0; // calculate size
void insert_head(Node *&head, Node *&tail, int data) // inserting at head
{
    if (head == NULL) // if head is null
    {
        Node *newNode = new Node(data); // make a node at runtime
        head = newNode; tail = newNode; // head,tail is new node
        return; // quit
    }

    Node *newNode = new Node(data); // make a node at runtime
    newNode->next = head; // memory allocation
    head->prev = newNode; // memory allocation
    head = newNode; // memory allocation
}
void insert_tail(Node *&head, Node* &tail, int data) // inserting at tail
{
    Node *newNode = new Node(data); // make a node at runtime
    if (tail == NULL) // if tail is null
    {
        head = newNode; // new node is head 
        tail = newNode; // new node is tail
        return; // quit
    }
    tail->next = newNode; // memory allocation
    newNode->prev = tail; // memory allocation
    tail = newNode; // We took reference (&) just because for this line
}
void delete_head(Node* &head, Node* &tail) // deleting head
{
    if(head->next == NULL) // if the next pointer of head is null
    {
        head = NULL; tail = NULL; return; // head, tail is also null, quit from the function
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
        head = NULL; tail = NULL; return; // then head, tail is also null, quit from the function
    }
    Node * deleteNode = tail; // memory allocation
    tail = tail->prev; // memory allocation
    tail->next = NULL; // memory allocation
    delete deleteNode; // memory allocation
}
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // faster io

    Node * head = NULL; Node * tail = NULL; // initialized head, tail pointers

    int q; cin >> q; // initialized queries and taking input
    bool is_reversed = false; // boolean function to handle reverse and reduced time complexity
    while (q--) // the while loop will iterate q times
    {
        string s; cin >> s; // initialzed a string and taking input
        if(s == "toFront") // push front
        {
            int val; cin >> val; // initialized val and taking input
            if(is_reversed) insert_tail(head, tail, val); // handing reverse and pushing value
            else insert_head(head, tail, val); // handing reverse and pushing value 
        }
        else if(s == "push_back") // push back
        {
            int val; cin >> val; // initialized val and taking input
            if(is_reversed) insert_head(head, tail, val); // handling reverse and pushing value 
            else insert_tail(head, tail, val); // handling reverse and pushing value 
        }
        else if(s == "front") // print front data then erase it
        {
            if(head != NULL) // if the head pointer is not null
            {
                if(is_reversed) // if it is reversed
                {
                    cout << tail->data << nl; delete_tail(head, tail); // print tail and delete
                }
                else // either
                {
                    cout << head->data << nl; delete_head(head, tail); // print head and delete
                }
            }
            else cout << "No job for Ada?" << nl; // either print No job for Ada?
        }
        else if(s == "back") // print back then erase it
        {
            if(tail != NULL) // if the head pointer is not null
            {
                if(is_reversed) // if it is reversed
                {
                    cout << head->data << nl; delete_head(head, tail); // print head and delete
                }
                else
                {
                    cout << tail->data << nl; sz--; delete_tail(head, tail); // print tail and delete
                }
            }
            else cout << "No job for Ada?" << nl; // either print No job for Ada?
        }
        else // either
        {
            is_reversed = !is_reversed; // handle reversing 
        }
    }

    return 0; // quit
}