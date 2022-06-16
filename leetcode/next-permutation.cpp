#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int left = nums.size() - 2;
    while(left >= 0 && nums[left] >= nums[left + 1]){
        left--;
    }
    if(left >= 0){
        int right = nums.size() - 1;
        while(right >= 0 && nums[right] <= nums[left]){
            right--;
        }
        swap(nums[left], nums[right]);
    }
    reverse(nums.begin() + left + 1, nums.end());
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    nextPermutation(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}