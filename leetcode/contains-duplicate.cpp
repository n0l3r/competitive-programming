#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int curr = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(curr == nums[i]) return true;
        curr = nums[i];
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout << containsDuplicate(nums) << endl;
    return 0;
}