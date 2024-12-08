// Product of Array Except Self

// Given an array arr[] of n integers, construct a Product Array prod[] (of the same size) such that prod[i] is equal to the product of all the elements of arr[] except arr[i]. 

// Example : 

// Input: arr[] = {10, 3, 5, 6, 2}
// Output: prod[] = {180, 600, 360, 300, 900}
// Explanation :
// Product of all except 10 = 3 * 5 * 6 * 2 = 180
// Product of all except 3 = 10 * 5 * 6 * 2 = 600
// Similarly for remaining elements, we have 
// 10 * 3 * 6 * 2 = 360, 
// 10 * 3 * 5 * 2 = 300 
// 10 * 3 * 6 * 5 = 900

// Input: arr[] = {1, 2, 3, 4, 5}
// Output: prod[] = {120, 60, 40, 30, 24 }
// Explanation : 
// 2 * 3 * 4 * 5 = 120, 
// 1 * 3 * 4 * 5 = 60
// 1 * 2 * 4 * 5 = 40
// 1 * 2 * 3 * 5 = 30
// 1 * 2 * 3 * 4 = 24

// [Naive Approach] Using Nested Loops – O(n^2) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int> prod(n, 1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j)
                prod[i] *= arr[j]; 
        }
    }
    return prod;
}

int main() {
    vector<int> arr = {10, 3, 5, 6, 2};
    vector<int> res = productExceptSelf(arr);
    for(int num : res)
        cout << num << " ";
    cout << endl;
    return 0;
}