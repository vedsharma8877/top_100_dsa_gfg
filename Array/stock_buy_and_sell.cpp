// Stock Buy and Sell – Max one Transaction Allowed

// Given an array prices[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell.

// Note: Stock must be bought before being sold.

// Examples:

// Input: prices[] = {7, 10, 1, 3, 6, 9, 2}
// Output: 8
// Explanation: Buy for price 1 and sell for price 9. 


// Input: prices[] = {7, 6, 4, 3, 1} 
// Output: 0
// Explanation: Since the array is sorted in decreasing order, 0 profit can be made without making any transaction.

// Input: prices[] = {1, 3, 6, 9, 11} 
// Output: 10
// Explanation: Since the array is sorted in increasing order, we can make maximum profit by buying at price[0] and selling at price[n-1]

// Time Complexity O(n^2)

// #include <bits/stdc++.h>
// using namespace std;

// int maxProfit(vector<int> &prices) {
//     int n = prices.size();
//     int res = 0;

//     for(int i = 0; i < n - 1; i++) {
//         for(int j = i + 1; j < n; j++) {
//             res = max(res, prices[j] - prices[i]);
//         }
//     }
//     return res;
// }

// int main() {
//     vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
//     cout << maxProfit(prices) << endl;
//     return 0;
// }

// ******************************************************************************************************************************

// Time Complexity O(n)

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
    int n = prices.size(), res = 0, minSoFar = prices[0], profit = 0;    
    for(int i = 1; i < n; i++) {
        minSoFar = min(minSoFar, prices[i]);
        profit = prices[i] - minSoFar;
        res = max(res, profit);
    }
    return res;
}

int main() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfit(prices) << endl;
    return 0;
}