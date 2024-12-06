// A 
// B C 
// D E F 
// G H I J 
// K L M N O 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char temp = 'A';
    cout << "Enter a number \n";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << temp << " ";
            temp++;
        } 
        cout << endl;
    }
    return 0;
}