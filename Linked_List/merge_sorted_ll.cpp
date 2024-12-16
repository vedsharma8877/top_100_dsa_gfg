// Merge two sorted linked lists

// Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the lists (in place) and return the head of the merged list.

// Brute Force Way:

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node * next;
        Node(int data) {
            val = data;
            next = nullptr;
        }
};

Node* mergeSortedList(Node* a, Node* b) {
    vector<int> v;
    while(a != nullptr) {
        v.push_back(a->val);
        a = a->next;
    }
    while(b != nullptr) {
        v.push_back(b->val);
        b = b->next;
    }
    sort(v.begin(), v.end());
    Node* temp = new Node(-1);
    Node* head = temp;
    for (int i = 0; i < v.size(); i++)
    {
        temp->next = new Node(v[i]);
        temp = temp->next;
    }
    head = head->next;
    return head;    
}

int main() {
    Node* a = new Node(2);
    a->next = new Node(4);
    a->next->next = new Node(8);
    a->next->next->next = new Node(9);

    Node* b = new Node(1);
    b->next = new Node(3);
    b->next->next = new Node(8);
    b->next->next->next = new Node(10);

    Node* res = mergeSortedList(a, b);
    Node* temp = res;
    cout << "Merged Linked List is: \n";
    while(temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}