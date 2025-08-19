#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLeftView(TreeNode<int> *root) {
    vector<int> result;
    if (root == NULL) return result;

    queue<TreeNode<int>*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        // প্রতিটি level এর জন্য
        for (int i = 0; i < size; i++) {
            TreeNode<int>* node = q.front();
            q.pop();

            // লেভেলের প্রথম নোড (i==0 হলে)
            if (i == 0) {
                result.push_back(node->data);
            }

            // left আগে push করব, তারপর right
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    return result;
}
