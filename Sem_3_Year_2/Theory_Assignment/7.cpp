#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int vl) // * &head
{
    Node *newNode = new Node(vl);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n; cin >> n;
    Node * head = NULL;
    while (n--)
    {
        int data;
        cin>>data;
        insert_at_tail(head, data);
    }
    print_linked_list(head);

    return 0;
}