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
}

int main()
{
    Node *head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Creating a cycle for testing

    Node* slow = head;
    Node* fast = head; 

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next; // Move slow pointer by 1
        fast = fast->next->next; // Move fast pointer by 2
        
        // If they meet, there is a cycle
        if (fast == slow)
        {
            cout << "Cycle detected in the linked list." << endl;
            break;
        }
    }
    {
       if (fast == slow)
       {
           // Cycle detected, find the start of the cycle
           Node* cycleStart = head;
           while (cycleStart != slow)
           {
               cycleStart = cycleStart->next;
               slow = slow->next;
           }
           cout << "Cycle starts at node with value: " << cycleStart->val << endl;
       }
       
    }
    
    return 0;
}