// Delete middle element of a stack

// The Easy And Brute Force Way To do it

// Time Complexity: O(N), For the Traversing.
// Auxiliary Space: O(N), For the Vector.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('9');
    st.push('8');
    st.push('6');
    st.push('7');
    vector<char> v;
    while(!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    int n = v.size();
    if(n%2 == 0) {
        int target = n/2;
        for(int i = 0; i < n; i++) {
            if(i == target)
                continue;
            st.push(v[i]);
        }
    }
    else {
        int target = ceil(n/2);
        for(int i = 0; i < n; i++) {
            if(i == target)
                continue;
            st.push(v[i]);
        }
    }
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}