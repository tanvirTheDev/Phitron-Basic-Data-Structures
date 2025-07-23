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
    if (head == NULL )
    {
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    
}


void print_linked_list(Node* head, int target_val){
    Node* temp = head;
    int idx = 0;
    bool found = false;
    while (temp != NULL)
    {
       if (temp->val == target_val)
       {
        cout << idx << endl;
        found = true;
        break;
       }

        temp = temp->next;
        idx++;
    }

     if (!found) {
        cout << "-1" << endl; 
    }
    
}




int main()
{
    int t;
    cin >> t;
 while (t--)
 {
       Node* head = NULL;
    Node* tail = NULL;

    int val;
 while (cin >> val && val != -1){
        insert_at_tail(head, tail, val);
    }
    int target_val;
    cin >> target_val;
   
    print_linked_list(head, target_val);
 }
 
    return 0;
}