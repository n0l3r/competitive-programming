#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int idx = 0;
    
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target) return mid;
        if(target < nums[mid]){
            idx = mid;
            right = mid - 1;
        } else{
            left = mid + 1;
            idx = left;
        }
    }
    
    return idx;
}

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << searchInsert(nums, target) << endl;
    return 0;
}