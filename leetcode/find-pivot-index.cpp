#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    int leftSum = 0;
    for(int i = 0; i < nums.size(); i++){
        if(leftSum == sum - leftSum - nums[i]){
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4};
    int res = pivotIndex(nums);
    cout << res << endl;
    return 0;
}