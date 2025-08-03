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


void insert_at_any_pos(Node* head, Node* &tail, int pos, int val)
{   
    // if (head == NULL)
    // {
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }

    Node* newNode = new Node(val);
    Node* temp = head;
   for (int i = 1; i < pos; i++)
   {
    
   temp = temp->next;

   }
   newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
   
      
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

    insert_at_any_pos(head, tail, 1, 100);

    forward_print(head);  // Print from head to tail
    backward_print(tail); // Print from tail to head

    return 0;
}