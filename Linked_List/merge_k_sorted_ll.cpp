// Merge K sorted linked lists

// Given k sorted linked lists of different sizes, the task is to merge them all maintaining their sorted order.

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

Node* mergeTwo(Node *a, Node *b)
{
    Node *res = nullptr;
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;
    if (a->val <= b->val)
    {
        res = a;
        res->next = mergeTwo(a->next, b);
    }
    else
    {
        res = b;
        res->next = mergeTwo(a, b->next);
    }
    return res;
}

Node *mergeK(vector<Node *> &arr)
{
    Node *res = nullptr;
    for (Node *node : arr)
        res = mergeTwo(res, node);
    return res;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    int k = 3;
    vector<Node *> arr(k);
    arr[0] = new Node(1);
    arr[0]->next = new Node(3);
    arr[0]->next->next = new Node(5);
    arr[0]->next->next->next = new Node(7);

    arr[1] = new Node(2);
    arr[1]->next = new Node(4);
    arr[1]->next->next = new Node(6);
    arr[1]->next->next->next = new Node(8);

    arr[2] = new Node(1);
    arr[2]->next = new Node(9);
    arr[2]->next->next = new Node(10);
    arr[2]->next->next->next = new Node(11);

    Node *head = mergeK(arr);
    printList(head);

    return 0;
}