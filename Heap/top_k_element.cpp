// Given a non-empty array arr[] of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequencies, then the larger number should be given more preference.


#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second == p2.second)
        return p1.first > p2.first;
    return p1.second > p2.second;
}

int largestFrequent(vector<int> arr, int n) {
    unordered_map<int, int> mp;
    for(int num : arr)
        mp[arr[num]]++;
    cout << "Frequency map: \n";
    for (auto &p : mp)
        cout << p.first << ": " << p.second << endl;
    vector<pair<int, int>> freq_arr(mp.begin(), mp.end());
    cout << "Initial freq_arr: \n";
    for (auto &p : freq_arr)
        cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;
    sort(freq_arr.begin(), freq_arr.end(), compare);
    cout << "Sorted freq arr: \n";
    for(auto &p : freq_arr)
        cout << "(" << p.first << ", " << p.second << ") ";
    cout << endl;
    return freq_arr[0].first;
}

int main() {
    vector<int> arr = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int N = arr.size();

    int result = largestFrequent(arr, N);
    cout << "The largest frequent number is: " << result << endl;

    return 0;
}