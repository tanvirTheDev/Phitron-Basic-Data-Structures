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
    if(val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if(l == -1)  myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left) q.push(parent->left);
        if (parent->right) q.push(parent->right);

    }
    return root;
    
}

bool searchValue(Node* root, int x){
    if(root == NULL) return false;
    if(root->val == x) return true;

    if(root->val < x) return searchValue(root->right, x);
    else return searchValue(root->left, x);


    
}

int main()
{
    Node* root = input_order();
    int x;
    cin >> x;
    bool ss = searchValue(root, x);
    if(ss) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    
    return 0;
}