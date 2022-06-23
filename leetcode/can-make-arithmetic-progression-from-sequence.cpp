#include <bits/stdc++.h>
using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr){
    sort(arr.begin(), arr.end());
    int len = arr.size();
    int diff = arr[1] - arr[0];
    for(int i = 2; i < len; i++){
        if(arr[i] - arr[i-1] != diff){
            return false;
        }
    }
    return true;
}