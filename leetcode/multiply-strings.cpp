#include <bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    int len = len1 + len2;
    string res = "";
    for(int i = 0; i < len; i++){
        res += "0";
    }
    for(int i = len1 - 1; i >= 0; i--){
        int carry = 0;
        for(int j = len2 - 1; j >= 0; j--){
            int cur = (num1[i] - '0') * (num2[j] - '0') + (res[i + j + 1] - '0') + carry;
            res[i + j + 1] = cur % 10 + '0';
            carry = cur / 10;
        }
        res[i] += carry;
    }
    int i = 0;
    while(res[i] == '0'){
        i++;
    }
    return (res.substr(i) == "") ? "0" : res.substr(i);
}

int main(){
    string num1 = "123";
    string num2 = "456";
    cout << multiply(num1, num2) << endl;
    return 0;
}