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



void printLevel(Node* root, int targetLevel) {
    if (root == NULL) {
        cout << "Invalid";
        return;
    }

    queue<pair<Node*, int>> q; 
    q.push({root, 0});

    vector<int> result;

    while (!q.empty()) {
        pair<Node*, int> p = q.front();
        q.pop();

        Node* node = p.first;
        int level = p.second;

        if (level == targetLevel) {
            result.push_back(node->val);
        }

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }

    if (result.empty()) cout << "Invalid";
    else {
        for (int v : result) cout << v << " ";
    }
}


int main() {
    Node* root = input_order();
    int x;
    cin >> x;
    printLevel(root, x);
    return 0;
}
