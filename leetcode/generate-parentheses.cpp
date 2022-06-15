#include <bits/stdc++.h>
using namespace std;

void dfs(int left, int right, string str, vector<string> &result){
    if(left == 0 && right == 0){
        result.push_back(str);
        return;
    }
    if(left > 0){
        dfs(left - 1, right, str + "(", result);
    }
    if(right > left){
        dfs(left, right - 1, str + ")", result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    if(n == 0) return result;
    string str = "";
    dfs(n, n, str, result);
    return result;
}

int main(){
    int n = 3;
    vector<string> result = generateParenthesis(n);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}