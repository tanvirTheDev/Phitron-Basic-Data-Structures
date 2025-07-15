#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Count size of linked list
int get_size(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Print middle node(s)
void print_middle(Node* head) {
    int size = get_size(head);
    Node* temp = head;

    if (size % 2 == 1) {
        // Odd → one middle
        int mid = size / 2;
        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }
        cout << temp->val << endl;
    } else {
        // Even → two middles
        int mid = size / 2;
        for (int i = 0; i < mid - 1; i++) {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
}

int main() {
    // Manually creating nodes (static input)
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);
    head->next->next->next->next = new Node(10);

    // Print middle
    print_middle(head);

    return 0;
}
