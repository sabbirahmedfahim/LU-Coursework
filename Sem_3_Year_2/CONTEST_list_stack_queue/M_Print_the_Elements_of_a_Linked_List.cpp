#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;
        delete temp;
    }
}

void printLinkedList(SinglyLinkedListNode* head) {
    while (head != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;

    if (llist_count == 0) {
        return 0;
    }

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        llist->insert_node(llist_item);
    }

    printLinkedList(llist->head);

    free_singly_linked_list(llist->head);
    delete llist;

    return 0;
}
