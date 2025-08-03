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


void delete_at_tail(Node* &head, Node* &tail)
{   
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL) {
        head = NULL; // If the list is now empty, update head to NULL
        return; 
    }
    tail->next = NULL;
    

}
void forward_print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next; 
    }
    cout << endl; // new line after each list
}

void backward_print(Node* tail){
    Node* temp = tail;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl; // new line after each list
}



int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;

    delete_at_tail(head, tail);
   
    // delete_at_head(head, tail);

    forward_print(head);  // Print from head to tail
    backward_print(tail); // Print from tail to head

    return 0;
}