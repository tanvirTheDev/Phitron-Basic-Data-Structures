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

Node* input_order(){
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
    
    Node* parent = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;
    Node* myLeft, *myRight;
    if(l == -1) myLeft = NULL;
    else myLeft = new Node(l);
    if(r == -1) myRight = NULL;
    else myRight = new Node(r);

    parent->left = myLeft;
    parent->right = myRight;

    if(parent->left) q.push(parent->left);
    if(parent->right) q.push(parent->right);

    };
    return root;
}

void insert(Node* &root, int x){
    if(root == NULL)  root = new Node(x);

    if(root->val > x){
        // left side
        if(root->left == NULL) root->left = new Node(x);
        else insert(root->left, x);
    }else{
        // right side
        if(root->right == NULL) root->right = new Node(x);
        else insert(root->right, x);
    }
}

void levelOrder(Node* root){

  queue<Node* > q;
  q.push(root);
  while(!q.empty()){
    Node* f = q.front();
    q.pop();
    cout << f->val << " ";
    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);
  }
}

int main()
{
    Node* root = input_order();
    int x;
    cin >> x;
    insert(root, x);
    levelOrder(root);
    return 0;
}