// Given an array arr[] of n integers and a target value, the task is to find whether there is a pair of elements in the array whose sum is equal to target. This problem is a variation of 2Sum problem.


// Time Complexity O(n2)

#include <bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> &arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target)
                return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;
    if(twoSum(arr, target)) {
        cout << "Target found" << endl;
    }
    else {
        cout << "Target doesn't exist" << endl;
    }
    return 0;
}