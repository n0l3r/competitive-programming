#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    if(haystack.length() == 0 && needle.length() == 0) return 0;
    int pos = -1;
    pos = haystack.find(needle);
    return pos;
}

int main(){
    string haystack = "hello";
    string needle = "ll";
    cout << strStr(haystack, needle) << endl;
    return 0;
}
