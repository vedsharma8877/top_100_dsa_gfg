// 3 Sum – Find All Triplets with Zero Sum

// [Naive Approach] Using Three Nested Loops – O(n^3) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> threeSome(vector<int>& arr) {
//     int n = arr.size();
//     vector<vector<int>> res;
//     for(int i = 0; i < n-2; i++) {
//         for(int j = i+1; j < n-1; j++) {
//             for(int k = j+1; k < n; k++) {
//                 if(arr[i] + arr[j] + arr[k] == 0) {
//                     res.push_back({i, j, k});
//                 }
//             }
//         }
//     }
//     return res;
// }

// int main() {
//     vector<int> arr = {0, -1, 2, -3, 1};
//     vector<vector<int>> res = threeSome(arr);
//     for(int i = 0; i < res.size(); i++) {
//         cout << res[i][0] << " " << res[i][1] << " " << res[i][2];
//         cout << endl;
//     }
//     return 0;
// }

// [Expected Approach] Using Sorting and two pointers – O(n^2) Time and O(1) Space

vector<vector<int>> threeSome(vector<int> &nums)
{
    vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0)
            {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;
                left++;
                right++;
            }
            else if (sum < 0)
                left++;
            else
                right--;
        }
    }
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> triplets = threeSome(nums);
    for (const auto &triplet : triplets)
    {
        for (int num : triplet)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}