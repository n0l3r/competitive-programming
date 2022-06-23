#include <bits/stdc++.h>
using namespace std;

int specialArray(vector<int>& nums) {
    int len = nums.size();
    vector<int> dp(len + 1, 0);
    for(int i = 0; i < len; i++){
        if(nums[i] > len){
            dp[len]++;
        } else {
            dp[nums[i]]++;
        }
    }

    for(int i = len - 1; i >= 0; i--){
        dp[i] += dp[i + 1];
    }

    for(int i = 0; i <= len; i++){
        if(dp[i] == i){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2,3,1,5,6,4};
    cout << specialArray(nums) << endl;
}