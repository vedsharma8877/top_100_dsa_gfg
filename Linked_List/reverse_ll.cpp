// Reverse a Linked List

// Given a linked list, the task is to reverse the linked list by changing the links between nodes.

// Examples:

// Input: Linked List = 1 -> 2 -> 3 -> 4 -> NULL
// Output: Reversed Linked List = 4 -> 3 -> 2 -> 1 -> NULL

// Input: Linked List = 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// Output: Reversed Linked List = 5 -> 4 -> 3 -> 2 -> 1 -> NULL

// Input: Linked List = NULL
// Output: Reversed Linked List = NULL

// Input: Linked List = 1->NULL
// Output: Reversed Linked List = 1->NULL

// [Expected Approach] Using Iterative Method – O(n) Time and O(1) Space:

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

void printList(Node* head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
}

Node* reverseList(Node* head) {
    Node* curr = head, *prev = nullptr, *next;
    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked List is:\n";
    printList(head);
    cout << endl;
    head = reverseList(head);
    cout << "Reversed Linked List is:\n";
    printList(head);
    cout << endl;
    return 0;

}