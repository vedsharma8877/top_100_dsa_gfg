// Longest substring without repeating characters

// Examples:

// Input: “ABCBC”
// Output: 3
// Explanation: The longest substring without repeating characters is “ABC”

// Input: “AAA”
// Output: 1
// Explanation: The longest substring without repeating characters is “A”

// Input: “GEEKSFORGEEKS”
// Output: 7
// Explanation: The longest substrings without repeating characters are “EKSFORG” and “KSFORGE”, with lengths of 7.

// [Naive Approach] Consider substrings starting from every index – O(n ^ 2) Time and O(1) Space

#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubstr(string &s)
{
    int n = s.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(256, false);
        for (int j = i; j < n; j++)
        {
            if (visited[s[j]])
                break;
            else
            {
                res = max(res, j - i + 1);
                visited[s[j]] = true;
            }
        }
    }
    return res;
}

int main()
{
    // string s = "geeksforgeeks";
    string s = "ABCBC";
    cout << longestUniqueSubstr(s);
    return 0;
}