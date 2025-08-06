#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void forward_print(Node* head){
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node *head = NULL, *tail = NULL;
    int val;

    // ===== First Input =====
    while (true){
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    cout << "First list: ";
    forward_print(head);

    // ===== reset for second input =====
    Node *head2 = NULL;
    Node* tail2  = NULL;
    int val2;

    // ===== Second Input =====
    while (true){
        cin >> val2;
        if (val2 == -1) break;
        insert_at_tail(head2, tail2, val2);
    }
    cout << "Second list: ";
    forward_print(head);

    
    

    return 0;
}
