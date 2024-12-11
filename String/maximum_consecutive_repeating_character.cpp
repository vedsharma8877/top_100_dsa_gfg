// Maximum consecutive repeating character in string

// Given a string, the task is to find the maximum consecutive repeating character in a string.
// Note: We do not need to consider the overall count, but the count of repeating that appears in one place.
// Examples: 
 

// Input : str = "geeekk"
// Output : e
// Input : str = "aaaabbcbbb"
// Output : a

// Time Complexity : O(n^2) 
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

char maxRepeating(string& s) {
    int len = s.length();
    int count = 0;
    char res = s[0];
    for(int i = 0; i < len; i++) {
        int curr_count = 1;
        for(int j = i + 1; j < len; j++) {
            if(s[i] != s[j])
                break;
            curr_count++;
        }
        if(curr_count > count) {
            count = curr_count;
            res = s[i];
        }
    }
    return res;
}

int main() {
    string str = "aaaabbaaccde";
    cout << maxRepeating(str);
    return 0;
}