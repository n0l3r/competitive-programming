#include <bits/stdc++.h>
using namespace std;

vector<int> findSubstring(string s, vector<string>& words) {
    int wordSize = words[0].size();
    int wordNum = words.size();
    int sSize = s.size();
    int wordLen = wordSize * wordNum;

    vector<int> res;

    if(sSize < wordLen) return res;

    unordered_map<string, int> wordMap;
    for(auto word : words){
        wordMap[word]++;
    }

    for(int i = 0; i < sSize - wordLen + 1; i++){
        unordered_map<string, int> curMap;
        for(int j = 0; j < wordNum; j++){
            string word = s.substr(i + j * wordSize, wordSize);
            if(wordMap.find(word) == wordMap.end()) break;
            curMap[word]++;
            if(curMap[word] > wordMap[word]) break;
            if(j == wordNum - 1) res.push_back(i);
        }
    }

    return res;
}

int main(){
    string s = "barfoothefoobarman";
    vector<string> words = {"foo", "bar"};
    vector<int> res = findSubstring(s, words);
    for(auto i : res){
        cout << i << " ";
    }
    return 0;
}