// 3 Sum – Find All Triplets with Zero Sum

// [Naive Approach] Using Three Nested Loops – O(n^3) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSome(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> res;
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                if(arr[i] + arr[j] + arr[k] == 0) {
                    res.push_back({i, j, k});
                }
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {0, -1, 2, -3, 1};
    vector<vector<int>> res = threeSome(arr);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2];
        cout << endl;
    }
    return 0;
}