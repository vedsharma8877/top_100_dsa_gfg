// Detect loop or cycle in a linked list

// Given a singly linked list, check if the linked list has a loop (cycle) or not. A loop means that the last node of the linked list is connected back to a node in the same list.

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node (int data) {
            val = data;
            next = nullptr;
        }
};

bool detectLoop(Node* head) {
        Node* slow = head, *fast = head;
        while(slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        return false;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    head->next->next->next->next = head;

    if(detectLoop(head))
        cout << "True";
    else 
        cout << "False";
}