// Given a boolean matrix mat where each cell contains either 0 or 1, the task is to modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

// Time Complexity: O((n * m)*(n + m)) where n is number of rows and m is number of columns in given matrix.
// O(n * m) for traversing through each element and (n+m) for traversing to row and column of matrix elements having value 1.
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void booleanMatrix(vector<vector<int>>& mat) {
    int rows = mat.size(), cols = mat[0].size();
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == 1) {
                for(int idx = 0; idx < rows; idx++) {
                    if(mat[idx][j] == 0)
                        mat[idx][j] = -1;
                }
                for(int idx = 0; idx < cols; idx++) {
                    if(mat[i][idx] == 0)
                        mat[i][idx] = -1;
                }
            }
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat[i][j] == -1)
                mat[i][j] = 1;
        }
    }
}

int main() {
    vector<vector<int>> mat = {{1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}};
    booleanMatrix(mat);
    for(const vector<int>& row : mat) {
        for(int val : row)
            cout << val << " ";
        cout << endl;
    }
}