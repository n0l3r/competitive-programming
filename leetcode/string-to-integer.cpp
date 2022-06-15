#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int mul = 1;
    int result = 0;
    int idx = 0;

    while(s[idx] == ' '){
        idx++;
    }
    
    if(s[idx] == '+' || s[idx] == '-'){
        mul = (s[idx] == '+') ? 1 : -1;
        idx++;
    }
    
    for(int i = idx; i < s.length() && s[i] >= '0' && s[i] <= '9'; i++){
        if((result > INT_MAX / 10) || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)){
            return (mul == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + (s[i] - '0');
    }
    
    return result * mul;
}

int main(){
    string s = "   -42";
    cout << myAtoi(s) << endl;
    return 0;
}