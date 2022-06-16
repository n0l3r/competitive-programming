#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
    string str = "1";
    for(int i = 1; i < n; i++){
        string newStr = "";
        int count = 1;
        for(int j = 1; j < str.size(); j++){
            if(str[j] == str[j-1]){
                count++;
            } else{
                newStr += to_string(count) + str[j-1];
                count = 1;
            }
        }
        newStr += to_string(count) + str[str.size()-1];
        str = newStr;
    }
    return str;
}

int main(){
    int n = 4;
    cout << countAndSay(n) << endl;
    return 0;
}