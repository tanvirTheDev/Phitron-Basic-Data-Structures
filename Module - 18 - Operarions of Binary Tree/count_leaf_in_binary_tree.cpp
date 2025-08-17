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



int count_leaf_node(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL) return 1;
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l + r;
}

int main()
{
  
    Node* root = input_order();
    levelOrder(root);
    int cnt = count_leaf_node(root);
    cout << cnt << endl;
    return 0;
}