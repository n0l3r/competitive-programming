#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
    string res = "";
    string symbol[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    for(int i = 0; i < 13; i++){
        int mul = num / val[i];
        for(int j = 0; j < mul; j++){
            res += symbol[i];
        }
        num %= val[i];
    }
    
    return res;
    
}

int main(){
    int num = 3999;
    cout << intToRoman(num) << endl;
    return 0;
}