#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int left = 0, right = letters.size() - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(letters[mid] <= target) left = mid + 1;
        else right = mid - 1;
    }
    return letters[left % letters.size()];
}

int main(){
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';
    char res = nextGreatestLetter(letters, target);
    cout << res << endl;
    return 0;
}