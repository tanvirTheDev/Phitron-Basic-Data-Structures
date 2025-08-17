#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_order(){
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();
        cout << f->val << " ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    cout << endl;
}

// left leaf sum বের করা
int sum_left_leaves(Node* root, bool isLeft = false){
    if(root == NULL) return 0;

    // যদি leaf হয়
    if(root->left == NULL && root->right == NULL) {
        if(isLeft) {
            cout << "Left leaf node: " << root->val << endl;
            return root->val;   // value return করবো
        }
        return 0;
    }

    int l = sum_left_leaves(root->left, true);
    int r = sum_left_leaves(root->right, false);
    return l + r;
}

int main(){
    Node* root = input_order();
    levelOrder(root);

    int totalSum = sum_left_leaves(root);
    cout << "Sum of left leaf nodes = " << totalSum << endl;
    return 0;
}
