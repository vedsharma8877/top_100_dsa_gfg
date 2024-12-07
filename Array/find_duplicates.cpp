// Given an array of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and use only constant memory space.

// Note: The repeating element should be printed only once.

// Example:

// Input: n=7 , array[]={1, 2, 3, 6, 3, 6, 1}
// Output: 1, 3, 6
// Explanation: The numbers 1 , 3 and 6 appears more than once in the array.

// Input : n = 5 and array[] = {1, 2, 3, 4 ,3}
// Output: 3
// Explanation: The number 3 appears more than once in the array.

#include <bits/stdc++.h>
using namespace std;

void findDuplicates(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index] >= 0)
        {
            arr[index] = -arr[index];
        }
        else
        {
            cout << index << " ";
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 6, 3, 6, 1};
    findDuplicates(arr);
    return 0;
}