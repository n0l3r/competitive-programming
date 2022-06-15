#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";
    if(strs.size() == 1) return strs[0];
    
    sort(strs.begin(), strs.end());
    
    string first = strs.front();
    string last = strs.back();
    
    int i = 0;
    int minLen = (first.length(), last.length());
    
    while(i < minLen && first[i] == last[i]){
        i++;
    }
    return first.substr(0, i);
}

int main(){
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}