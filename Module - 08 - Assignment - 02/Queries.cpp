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

void insert_at_head(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void deleteAtIndex(Node* &head, int idx) {
    if (head == NULL) return;

    if (idx == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    int pos = 0;

    while (temp != NULL && pos < idx - 1) {
        temp = temp->next;
        pos++;
    }

    if (temp == NULL || temp->next == NULL) {
        return;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, V);
            if (tail == NULL) tail = head; 
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        } else if (X == 2) {
            deleteAtIndex(head, V);
           

            if (head == NULL) {
                tail = NULL;
            } else {
                Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                tail = temp;
            }
        }

        print_linked_list(head);
    }

    return 0;
}
