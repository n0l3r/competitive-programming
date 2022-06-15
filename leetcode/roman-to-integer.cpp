#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    int num, count = 0;
    for(int i = s.length()-1; i >= 0; i--){
        switch(s[i]){
            case 'I' :
                num = 1;
                break;
            case 'V' :
                num = 5;
                break;
            case 'X' :
                num = 10;
                break;
            case 'L' :
                num = 50;
                break;
            case 'C' :
                num = 100;
                break;
            case 'D' :
                num = 500;
                break;
            case 'M' :
                num = 1000;
                break;                    
        }
        if(4 * num < count) count -= num;
        else count += num;
    }
    return count;
}

int main(){
    string s = "MCMXCIV";
    cout << romanToInt(s) << endl;
    return 0;
}