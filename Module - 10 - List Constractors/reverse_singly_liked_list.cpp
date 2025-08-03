#include <bits/stdc++.h>
using namespace std;


    class Node{
        public:
        int val;
        Node* next;
        
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
    };

 void reverse_linked_list(Node* &head, Node* &tail, Node* temp){
        if (temp->next == NULL)
        {
            head = temp;
            return;
        }
 
        reverse_linked_list(head,tail, temp->next);
        temp->next->next = temp;
        temp->next = NULL;
        tail = temp;

    }

    void forward_print(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next; 
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
    a->next = b;
    b->next = tail;
    reverse_linked_list(head, tail, head);
    forward_print(head);

    return 0;
}
