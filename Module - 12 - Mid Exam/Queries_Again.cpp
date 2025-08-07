#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


int get_size(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    } else {
        tail = newNode;
    }
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{   
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
      
}

bool insert_at_index(Node*& head, Node*& tail, int idx, int val) {
    int sz = get_size(head);
    if (idx < 0 || idx > sz) return false;

    Node* newNode = new Node(val);

    if (idx == 0) {
        insert_at_head(head, tail, val);
    } else if (idx == sz) {
        insert_at_tail(head, tail, val);
    } else {
        Node* temp = head;
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
    return true;
}

void forward_print(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void backward_print(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int idx, val;
        cin >> idx >> val;
        bool success = insert_at_index(head, tail, idx, val);
        if (!success) {
            cout << "Invalid" << endl;
        } else {
            forward_print(head);
            backward_print(tail);
        }
    }

    return 0;
}
