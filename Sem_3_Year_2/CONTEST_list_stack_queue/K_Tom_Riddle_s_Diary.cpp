#include <iostream> // input-output header file 
#define nl '\n' // defined nl as '\n' for new line printing
#define ll long long int // defined 'll' as long long int data type
using namespace std; // identifiers are defined inside the standard namespace named std 
class Node // class name
{
public: // public for free access
    string data; // initialized string data
    Node *prev; // previous pointer
    Node *next; // next pointer
    Node(string data) // constructor
    {
        this->data = data; // initialized constructors values
        this->prev = NULL; // initialized constructors values
        this->next = NULL; // initialized constructors values
    }
};
void insert_tail(Node *&head, Node *&tail, string val) // inserting at tail
{
    Node *newNode = new Node(val); // dynamicallly created node at runtime
    if (head == NULL) // if heed is null
    {
        head = newNode; tail = newNode; return; // then head, tail is also null, quit
    }
    tail->next = newNode; // memory allocation
    tail = newNode; // memory allocation
}
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // faster io

    int t; cin >> t; // t for test case
    Node * head = NULL; Node * tail = NULL; // initialized head, tail pointers
    while (t--) // irerating while loop t times
    {
        string s; cin >> s; // initialized string and taking input
        Node * tmp = head; // copied head node to tmp node
        bool flag = true; // initialized boolean function for detecting 
        while (tmp != NULL) // if tmp node is not null
        {
            if(tmp->data == s) // if the data of tmp is matched with s
            {
                cout << "YES" << nl; flag = false; // print yes, mark flag as false
                break; // quit
            }
            tmp = tmp->next; // iteration
        }
        if(flag) // if flag is true
        {
            insert_tail(head, tail, s); // insert at tail
            cout << "NO" << nl; // print no
        }
    }

    return 0; // quit
}