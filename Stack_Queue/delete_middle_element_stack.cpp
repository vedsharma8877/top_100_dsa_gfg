// Delete middle element of a stack

// The Easy And Brute Force Way To do it

// Time Complexity: O(N), For the Traversing.
// Auxiliary Space: O(N), For the Vector.

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     stack<char> st;
//     st.push('1');
//     st.push('2');
//     st.push('3');
//     st.push('9');
//     st.push('8');
//     st.push('6');
//     st.push('7');
//     vector<char> v;
//     while(!st.empty()) {
//         v.push_back(st.top());
//         st.pop();
//     }
//     int n = v.size();
//     if(n%2 == 0) {
//         int target = n/2;
//         for(int i = 0; i < n; i++) {
//             if(i == target)
//                 continue;
//             st.push(v[i]);
//         }
//     }
//     else {
//         int target = ceil(n/2);
//         for(int i = 0; i < n; i++) {
//             if(i == target)
//                 continue;
//             st.push(v[i]);
//         }
//     }
//     while(!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     return 0;
// }

// Time Complexity: O(N), For the recursive calls
// Auxiliary Space: O(N), For the Recursion call Stack

// void deleteMidUtil(stack<int>& st, int sizeOfStack, int current) {
//     if(current == sizeOfStack/2) {
//         st.pop();
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     current += 1;
//     deleteMidUtil(st, sizeOfStack, current);
//     st.push(x);
// }

// void deleteMid(stack<int>& s, int sizeOfStack) {
//     deleteMidUtil(s, sizeOfStack, 0);
// }

// int main() {
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(6);
//     st.push(7);
//     deleteMid(st, st.size());
//     while(!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     return 0;
// }

// Delete middle element of a stack using another stack

// Time Complexity: O(N), For the while loop
// Auxiliary Space: O(N), for temp stack space.

void deleteMid(stack<char>& st) {
    int n = st.size(), count = 0;
    stack<int> temp;
    while(count < n/2) {
        temp.push(st.top());
        st.pop();
        count++;
    }
    st.pop();
    while(!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<char> st;
    st.push('1');
    st.push('2');
    st.push('3');
    st.push('4');
    st.push('5');
    st.push('6');
    st.push('7');
    deleteMid(st);
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}