#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1) return s;
    string result = "";
    int idx = 2 * (numRows - 1);
    for(int i = 0; i < numRows; i++){
        for(int j = i; j < s.length(); j += idx){
            result += s[j];
            int connector = (j + idx) - (2 * i);
            if(i > 0 && i < numRows - 1 && connector < s.length())
                result += s[connector];
        }
    }
    
    return result;
    
}

int main(){
    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s, numRows) << endl;
    return 0;
}