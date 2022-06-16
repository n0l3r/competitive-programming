#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(target == nums[mid]) return mid;
        
        if(nums[left] <= nums[mid]){
            if(target >= nums[left] && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else{
            if(target > nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << search(nums, target) << endl;
    return 0;
}