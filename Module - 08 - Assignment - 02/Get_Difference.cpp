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

int print_max(Node* head){
    Node* temp = head;
    int max_val = INT_MIN;
    while (temp != NULL)
    {
        max_val = max(max_val, temp->val);
        temp = temp->next;
    }
    return max_val;
}

int print_min(Node* head){
    Node* temp = head;
    int min_val = INT_MAX;
    while (temp != NULL)
    {
        min_val = min(min_val, temp->val);
        temp = temp->next;
    }
    return min_val;
}



int print_count(Node* head){
    Node* temp = head;
    int count = 0;
    int flag = 0;
    while (temp != NULL)
    {
        count++;
    
        temp = temp->next;
    }
    return count;
}












int main()
{
  
    Node* head = NULL;
    Node* tail = NULL;

    int val;
 while (cin >> val && val != -1){
        insert_at_tail(head, tail, val);
    }


   
    int count = print_count(head);
    if (count <= 1)
    {
        cout << "0" << endl;
    }else{
 cout << print_max(head) - print_min(head) << endl;
    }
    
    
   
    

    return 0;
}