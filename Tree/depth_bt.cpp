// Maximum Depth or Height of Binary Tree

// Given a binary tree, the task is to find the maximum height of the tree. The height of the tree is the number of edges in the tree from the root to the deepest node.

// [Expected Approach – 1] Using Recursion – O(n) Time and O(h) Space

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;
        Node(int data) {
            val = data;
            left = nullptr;
            right = nullptr;
        }
};

int height(Node* root) {
    if(root == nullptr)
        return -1;
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << height(root);
    return 0;
}

