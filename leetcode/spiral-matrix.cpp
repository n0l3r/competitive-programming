#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> res;
    if(matrix.size() == 0) return res;
    int rowStart = 0, colStart = 0;
    int rowEnd = matrix.size() - 1, colEnd = matrix[0].size() - 1;
    while(rowStart <= rowEnd && colStart <= colEnd){
        for(int i = colStart; i <= colEnd; i++) res.push_back(matrix[rowStart][i]);
        for(int i = rowStart + 1; i <= rowEnd; i++) res.push_back(matrix[i][colEnd]);
        if(rowStart < rowEnd && colStart < colEnd){
            for(int i = colEnd - 1; i >= colStart; i--) res.push_back(matrix[rowEnd][i]);
            for(int i = rowEnd - 1; i > rowStart; i--) res.push_back(matrix[i][colStart]);
        }
        rowStart++;
        colStart++;
        rowEnd--;
        colEnd--;
    }
    return res;
}

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int> res = spiralOrder(matrix);
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    cout << endl;
    return 0;
}