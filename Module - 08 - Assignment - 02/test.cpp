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

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

int getLinkedListSize(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl; // new line after each list
    cout << getLinkedListSize(head) << endl;
}

void create_and_print_list(){
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (cin >> val && val != -1){
        insert_at_tail(head, tail, val);
    }
    print_linked_list(head);
}

int main()
{
    create_and_print_list();  // for first list
    create_and_print_list();  // for second list

    return 0;
}
