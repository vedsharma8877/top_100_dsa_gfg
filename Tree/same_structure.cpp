// Check if two trees have same structure

// Given two binary trees. The task is to write a program to check if the two trees are identical in structure.

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

bool isSameStructure(Node* root1, Node* root2) {
    if(root1 == nullptr && root2 == nullptr)
        return true;
    if(root1 != nullptr && root2 != nullptr) {
        return (
            isSameStructure(root1->left, root2->left) &&
            isSameStructure(root1->right, root2->right)
        );
    }
    return false;
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(100);
    root1->left = new Node(7);
    root1->right = new Node(15);
    root1->left->left = new Node(4);
    root1->left->right = new Node(9); 
    root1->right->right = new Node(20);
 
    root2->left = new Node(70);
    root2->right = new Node(150);
    root2->left->left = new Node(40);
    root2->left->right = new Node(90); 
    root2->right->right = new Node(200);

    if(isSameStructure(root1, root2))
        cout << "Both trees have same structure.";
    else
        cout << "The structure of the trees are not same.";


    return 0;
}