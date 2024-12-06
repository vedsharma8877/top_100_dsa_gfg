//         1 
//       2 3 2 
//     3 4 5 4 3 
//   4 5 6 7 6 5 4 
// 5 6 7 8 9 8 7 6 5 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number \n";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) 
            cout << "  ";
        int num = i;
        for(int j = 1; j <= i; j++) 
            cout << num++ <<" ";
        num -= 2;
        for(int j = 1; j < i; j++) 
            cout << num-- << " ";
        cout << endl;
    }
    return 0;
}