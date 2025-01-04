// [Naive Approach] By using two nested loops – O(n^2) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& arr) {
    int n = arr.size(), result = arr[0];
    for(int i = 0; i < n; i++) {
        int mul = 1;
        for(int j = i; j < n; j++) {
            mul *= arr[j];
            result = max(result, mul);
        }
    }
    return result;
}

int main() {
    vector<int> arr = { -2, 6, -3, 10, 0, 2 };
    cout << maxProduct(arr);
    return 0;
}