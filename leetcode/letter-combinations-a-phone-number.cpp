#include <bits/stdc++.h>
using namespace std;

void dfs(string digits, int index, vector<string> letters, string str, vector<string> &result){
    if(index == digits.size()){
        result.push_back(str);
        return;
    }
    string letters_str = letters[digits[index] - '0'];
    for(int i = 0; i < letters_str.size(); i++){
        dfs(digits, index + 1, letters, str + letters_str[i], result);
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> result;
    if(digits.size() == 0) return result;
    vector<string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string str = "";
    dfs(digits, 0, letters, str, result);
    return result;
}



int main(){
    string digits = "23";
    vector<string> result = letterCombinations(digits);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}