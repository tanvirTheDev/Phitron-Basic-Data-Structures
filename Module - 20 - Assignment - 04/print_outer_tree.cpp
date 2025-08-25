// #include <bits/stdc++.h>

// using namespace std;


#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_order() {
    int val;
    cin >> val;
    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft, *myRight;

        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left) q.push(parent->left);
        if (parent->right) q.push(parent->right);
    }
    return root; 
}


void leftView(Node* root){
    if(!root) return;
    if(root->left == NULL) return; 
    if(root->left) leftView(root->left);
    if(root->left == NULL && root->right) leftView(root->right);
    cout << root->val << " "; 
}

void rightView(Node* root, bool skipRoot = false){
    if(!root) return;

    if(root->left == NULL && root->right) cout << root->val << " ";
    else if (!skipRoot) cout << root->val << " "; 

    if(root->right) rightView(root->right);
    if(root->right == NULL && root->left) rightView(root->left);
}









int main() {
    Node* root = input_order();
    leftView(root);
    rightView(root, true);
    return 0;
}
