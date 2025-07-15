#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node*& head) {
    Node* temp1 = head;

    while (temp1 != NULL) {
        Node* temp2 = temp1->next;
        while (temp2 != NULL) {
            if (temp1->val == temp2->val) {
                cout << "YES" << endl;
                return;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    cout << "NO" << endl;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(40);
    Node* c = new Node(30);
    Node* d = new Node(40); // duplicate
    Node* tail = new Node(60);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    print_linked_list(head);
    return 0;
}
