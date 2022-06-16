#include <bits/stdc++.h>
using namespace std;

int helper(int i, int j, vector<int>& nums){
    if(i == j) return nums[i];
    int sumR = INT_MIN;
    int sumL = INT_MIN;
    
    int mid = (i + j) / 2;
    int curr = 0;
    
    for(int k = mid+1; k <= j; k++){
        curr += nums[k];
        sumR  = max(sumR, curr);
    }
    curr = 0;
    for(int k = mid; k >= i; k--){
        curr += nums[k];
        sumL = max(sumL, curr);
    }
    
    int count = sumL + sumR;
    int lSum = helper(i, mid, nums);
    int rSum = helper(mid+1, j, nums);
    
    return max(count, max(lSum, rSum));
}

int maxSubArray(vector<int>& nums) {
    return helper(0, nums.size()-1, nums);
}

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    cout << maxSubArray(nums) << endl;
    return 0;
}