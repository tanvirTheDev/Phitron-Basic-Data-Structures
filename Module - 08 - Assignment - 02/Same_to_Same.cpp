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




int count_linked_list(Node* head){
    Node* temp = head;
    int idx = 0;

    while (temp != NULL)
    {
        // cout << temp->val << " ";
        temp = temp->next;
        idx++;
    }
    return idx;
}




int main()
{
   int val;
 
    Node* head = NULL;
    Node* tail = NULL;

    
 while (cin >> val && val != -1){
        insert_at_tail(head, tail, val);
    }

// print_linked_list(head);
//     cout << endl;

     Node* head2 = NULL;
    Node* tail2 = NULL;

  while (cin >> val && val != -1){
        insert_at_tail(head2, tail2, val);
    }
   
    // print_linked_list(head2);
    // cout << endl;
    // cout << count_linked_list(head2) << endl;

    if (count_linked_list(head) != count_linked_list(head2)) {
        cout << "NO" << endl;
    } else {
         Node* temp = head;
        Node* temp2 = head2;
        int flag = 0;
    while (temp != NULL && temp2 != NULL) {
        if (temp->val != temp2->val) {
            flag = 1;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if (flag == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}