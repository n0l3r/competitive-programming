#include <bits/stdc++.h>
using namespace std;

int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int res = 0;
    for(int i = nums.size() - 1; i >= 2; i--){
        if(nums[i - 1] + nums[i - 2] > nums[i]){
            res = nums[i] + nums[i - 1] + nums[i - 2];
            break;
        }
    }
    return res;
}