// Maximum Subarray Sum – Kadane’s Algorithm

// Given an array arr[], the task is to find the subarray that has the maximum sum and return its sum.

// Examples:

// Input: arr[] = {2, 3, -8, 7, -1, 2, 3}
// Output: 11
// Explanation: The subarray {7, -1, 2, 3} has the largest sum 11.


// Input: arr[] = {-2, -4}
// Output: –2
// Explanation: The subarray {-2} has the largest sum -2.


// Input: arr[] = {5, 4, 1, 7, 8}
// Output: 25
// Explanation: The subarray {5, 4, 1, 7, 8} has the largest sum 25.

// [Naive Approach] By iterating over all subarrays – O(n^2) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int n = arr.size(), res = arr[0];
    for(int i = 0; i < n; i++) {
        int currSum = 0;
        for(int j = i; j < n; j++) {
            currSum += arr[j];
            res = max(currSum, res);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr);
    return 0;
}