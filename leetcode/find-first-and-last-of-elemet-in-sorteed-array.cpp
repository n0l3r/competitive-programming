#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target) {
    int start = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int end = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
    
    return (start <= end) ? vector<int>{start, end} : vector<int>{-1, -1};
}

int main(){
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> res = searchRange(nums, target);
    return 0;
}