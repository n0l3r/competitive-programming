#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> bracket;
    
    int len = s.length();
    if(len == 0 || len == 1) return false;
    if(s[0] == ')' || s[0] == '}' || s[0] == ']') return false;
    
    for(int i = 0; i < len; i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            bracket.push(s[i]);
            continue;
        }
        if(bracket.empty() == (s[i] == ')' || s[i] == '}' || s[i] == ']')) return false;
        char top = bracket.top();
        bracket.pop();
        if((s[i] == ')' && top == '(') || (s[i] == '}' && top == '{') || (s[i] == ']' && top == '[')) continue;
        return false;
            
    }
    return (bracket.empty());
}

int main(){
    string s = "()";
    cout << isValid(s) << endl;
    return 0;
}