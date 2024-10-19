#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node * head = new Node;
    Node * a = new Node;
    Node * b = new Node;

    cin >> head->data;
    cin >> a->data;
    cin >> b->data;

    head->next = a;
    a->next = b;
    b->next = NULL;

    Node * temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    
    

    return 0;
}