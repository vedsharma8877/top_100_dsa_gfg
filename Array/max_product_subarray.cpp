// [Naive Approach] By using two nested loops – O(n^2) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

// int maxProduct(vector<int>& arr) {
//     int n = arr.size(), result = arr[0];
//     for(int i = 0; i < n; i++) {
//         int mul = 1;
//         for(int j = i; j < n; j++) {
//             mul *= arr[j];
//             result = max(result, mul);
//         }
//     }
//     return result;
// }

// int main() {
//     vector<int> arr = { -2, 6, -3, 10, 0, 2 };
//     cout << maxProduct(arr);
//     return 0;
// }

// [Expected Approach 1] Using minimum and maximum product ending at any index – O(n) Time and O(1) Space

int maxProduct(vector<int> &arr)
{
    int n = arr.size();
    int currMax = arr[0], currMin = arr[0], maxProduct = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max(arr[i], max(arr[i] * currMax, arr[i] * currMin));
        currMin = min(arr[i], min(arr[i] * currMax, arr[i] * currMin));
        currMax = temp;
        maxProduct = max(maxProduct, currMax);
    }
    return maxProduct;
}

int main()
{
    vector<int> arr = {-2, 6, -3, 10, 0, 2};
    cout << maxProduct(arr);
    return 0;
}