#include <bits/stdc++.h>
using namespace std;

int getPalindrome(string s, int left, int right){
    while(left >= 0 && right < s.length() && s[right] == s[left]){
        left--, right++;
    }
    return right - left - 1;
}
string longestPalindrome(string s) {
    if(s.length() < 1) return "";
    if(s.length() == 1) return s;
    
    int start = 0, end = 0;
    
    for(int i = 0; i < s.length(); i++){
        int odd = getPalindrome(s, i, i+1);
        int even = getPalindrome(s, i, i);
        int len = max(odd, even);
        if(len > (end - start)){
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return s.substr(start, end-start+1);
}

int main(){
    string s = "babad";
    cout << longestPalindrome(s) << endl;
    return 0;
}