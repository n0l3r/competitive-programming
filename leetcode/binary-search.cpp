#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        
        if(target == nums[mid]) return mid;
        if(target > nums[mid])
            left++;
        else
            right--;
    }
    return -1;
}

int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << search(nums, target) << endl;
    return 0;
}