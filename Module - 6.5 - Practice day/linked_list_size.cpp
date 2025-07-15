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

void print_linked_list(Node* &head){
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
       temp = temp->next;
    }

    cout << count << endl;
    
}



int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->next = tail;
    print_linked_list(head);
    return 0;
}