#include <iostream> // input-output header file 
#define nl '\n' // defined nl as '\n' for new line printing
#define ll long long int // defined 'll' as long long int data type
using namespace std; // identifiers are defined inside the standard namespace named std 
class Node // class name
{
public: // public for free access
    string data; // initialized integer data
    Node *prev; // previous pointer
    Node *next; // next pointer
    Node(string data) // constructor
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
    void push(string data) // complexity -> O(1)
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
    string top() // complexity -> O(1)
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
int cs = 1; // case tracking
void solve() // solve function
{
    cout << "Case " <<  cs++ << ":" << nl; // case printing
    string cmd; // initialized cmd string as command
    myStack forward, backward; // initialized two stacks 
    forward.push("http://www.lightoj.com/"); // The browser initially loads the web page at the URL 'http://www.lightoj.com/'
    while (1) // infinite loop
    {
        cin >> cmd; // taking command as input
        if(cmd == "BACK")  // [current == backward stack]
        {
            if(backward.empty()) cout << "Ignored" << nl; //  If the backward stack is empty, the command is ignored
            else // Otherwise
            {
                forward.push(backward.top()); // push the current page on the top of the forward stack
                backward.pop(); // Pop the page from the top of the backward stack 
                cout << forward.top() << nl; // making it|backward.top()| the new current page
            }
        }
        else if(cmd == "FORWARD") // [current == forward stack]
        {
            if(forward.size() < 2) cout << "Ignored" << nl; // If the forward stack is empty, the command is ignored
            else // Otherwise
            {
                backward.push(forward.top()); // push the current page on the top of the backward stack
                forward.pop(); // Pop the page from the top of the forward stack
                cout << forward.top() << nl; // making it|forward.top()| the new forward page.
            }
        }
        else if(cmd == "VISIT") // [current == forward stack]
        {
            string url; cin >> url; // initialized url and taking input
            backward.push(forward.top()); // pushed the current page on the top of the backward stack
            while (!forward.empty()) // The forward stack is emptied
            {
                forward.pop(); // clear forward stack
            }
            forward.push(url); // make the URL specified the new current page
            cout << forward.top() << nl; // print current page
        }
        else break; // Quit the browser.
    }
}
int main() // main function
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); // faster io

    int t; cin >> t; // initialized t as test case and taking input
    while (t--) solve(); // while loop calls t times the solve function

    return 0; // quit
}