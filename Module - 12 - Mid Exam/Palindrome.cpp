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

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

 while (1) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    
Node* temp = head;
bool flag = true;
for(Node* i=head, *j=tail;i && j && i != j->next; i=i->next, j=j->prev){
    if(i->val != j->val){
        flag = false;
        break;
    }
}
if(flag) cout<<"YES\n";
else cout<<"NO\n";



    return 0;
}