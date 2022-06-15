#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if(s.length() == 0) return 0;
    unordered_map<char, int> checked;
    vector<int> longest{0, 1};
    int startIdx = 0;
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(checked.find(s[i]) != checked.end()){
            startIdx = max(startIdx, checked[s[i]] + 1);
        }
        if(longest[1] - longest[0] < i + 1 - startIdx){
            longest = {startIdx, i+1};
        }
        checked[s[i]] = i;
    }
    return longest[1] - longest[0];
}

int main(){
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}
