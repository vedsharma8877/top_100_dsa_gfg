// Next Greater Element (NGE) for every element in given Array

// Given an array, print the Next Greater Element (NGE) for every element. 

// Note: The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

// Naive Approach – Using two nested loops

#include <bits/stdc++.h>
using namespace std;

void printNGE(int arr[], int n) {
    int next;
    for(int i = 0; i < n; i++) {
        next = -1;
        for(int j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                next = arr[j];
                break;
            }
        }
        cout << arr[i] << " --> " << next << endl;
    }
}

int main() {
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printNGE(arr, n);
}